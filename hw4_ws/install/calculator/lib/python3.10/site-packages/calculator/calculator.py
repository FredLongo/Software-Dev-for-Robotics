import rclpy , sys
import time

from rclpy.node import Node
from std_msgs.msg import String
from custom_interfaces.srv import TwoIntCalc
from datetime import datetime

#from tutorial_interfaces.srv import TwoInts
#from example_interfaces.srv import AddTwoInts


class CalculatorStaticStrings:
    class ARGUMENT_POSSITION:           # Input Argument Positions
        NAME                    = 1     # Input Name
        X                       = 2     # Input First Number
        Y                       = 3     # Input Second Number
        OPERATOR                = 4     # Input Operator
    DEFAULT_DECIMAL             = 3     # Default Decimal Format
    SERVICE_CHANNEL_NAME        = 'two_int_calc'
    TIME_FORMAT_STRING          = "%H:%M:%S.%f"
    TOPIC_NAME                  = 'Chatter'
    PARAMETER_1_NAME            = 'decimal_formatting'
    



class CalculatorService(Node):

    def __init__(self):
        super().__init__('calculator_service')
        self.declare_parameter(CalculatorStaticStrings.PARAMETER_1_NAME,CalculatorStaticStrings.DEFAULT_DECIMAL)
        

        #Create Subscriber 
        self.subscription = self.create_subscription(
            String,
            CalculatorStaticStrings.TOPIC_NAME,
            self.listener_callback,
            10)
        self.subscription

        # Create Service    
        self.server = self.create_service(TwoIntCalc, CalculatorStaticStrings.SERVICE_CHANNEL_NAME, self.calculator_service_callback)
        self.LatestPublishedName = ''

        self.get_logger().info("Starting service 'calculator_service'")


        #Subscriber listener
    def listener_callback(self,msg):
        self.LatestPublishedName = msg.data

    def opperator_add(self,x,y):
        return x + y
    def opperator_subtract(self,x,y):
        return x - y
    def opperator_multiply(self,x,y):
        return x * y
    def opperator_divide(self,x,y):
        return x / y


    def calculate(self,x,y,operator):
        opperator_dict = {
            '+': self.opperator_add,
            '-': self.opperator_subtract,
            '*': self.opperator_multiply,
            '/': self.opperator_divide
            # if no valid operator is given addition is performed. 
            }

        func = opperator_dict.get(operator,self.opperator_add)

        return float(func(x,y))
        



        #Service Callback
    def calculator_service_callback(self, request, response):
        dfi = self.get_parameter(CalculatorStaticStrings.PARAMETER_1_NAME).get_parameter_value().integer_value
        TFS = CalculatorStaticStrings.TIME_FORMAT_STRING

        #Run Calculation
        response.result = self.calculate(request.x , request.y, request.op)
        

        #Format Times
        response.server_time = time.time()
        server_time_formatted = (datetime.fromtimestamp( response.server_time)  ).strftime(TFS)
        client_time_formatted = (datetime.fromtimestamp( request.client_time)   ).strftime(TFS)


        #Output Message from Server
        self.get_logger().info(f' [{self.LatestPublishedName}] [{server_time_formatted}] [Display Decimal: {dfi}] Received a Input {request.x:.{dfi}f} {request.op} {request.y:.{dfi}f} that sent at {client_time_formatted}. The calculation result is:{response.result:.{dfi}f}')
        self.LatestPublishedName = ''

        return response






class CalculatorClient(Node):


    def __init__(self):
        super().__init__('calculator_client')

        #Parameters
        self.declare_parameter(CalculatorStaticStrings.PARAMETER_1_NAME,CalculatorStaticStrings.DEFAULT_DECIMAL)

        # Create Publisher for name 
        self.publisher_ = self.create_publisher(String, CalculatorStaticStrings.TOPIC_NAME,10)
        
        
        # Create Clinet
        self.client = self.create_client(TwoIntCalc, CalculatorStaticStrings.SERVICE_CHANNEL_NAME)


        while not self.client.wait_for_service(timeout_sec=3.0):
            self.get_logger().info('service {CalculatorStaticStrings.SERVICE_CHANNEL_NAME} not available, waiting again...')
        


    def send_request(self,args):
        NP = CalculatorStaticStrings.ARGUMENT_POSSITION.NAME
        XP = CalculatorStaticStrings.ARGUMENT_POSSITION.X
        YP = CalculatorStaticStrings.ARGUMENT_POSSITION.Y
        OP = CalculatorStaticStrings.ARGUMENT_POSSITION.OPERATOR
        TFS = CalculatorStaticStrings.TIME_FORMAT_STRING
        
        df = self.get_parameter(CalculatorStaticStrings.PARAMETER_1_NAME).get_parameter_value()     #Decimal Formating
        dfi = df.integer_value                                                  #Decimal Formatting as Integer
        
        request = TwoIntCalc.Request()
        request.x

        
        #Set values from args
    
        name = args[NP]
        request.x = float(args[XP])
        request.y = float(args[YP])
        request.op = args[OP]
        request.client_time = time.time()

        # Publish the Name
        msg = String()
        msg.data = f'{name}'
        self.publisher_.publish(msg)
                
        #Set Up Client Timestamp formate to display 
        #formatted_time = time.strftime(TFS, time.localtime(request.client_time)  )
        formatted_time = (datetime.fromtimestamp(time.time())).strftime(TFS)

        #Print What was sent.
        self.get_logger().info(f'At {formatted_time},  {name} sent  {request.x:.{dfi}f}, {request.y:.{dfi}f}, {request.op}  to server.' )


        # Send Request set up return. 
        future = self.client.call_async(request)
        rclpy.spin_until_future_complete(self, future)

        
        results_ = future.result()
        server_formatted_time = (datetime.fromtimestamp(results_.server_time)).strftime(TFS)



        self.get_logger().info(f'returned result of {results_.result:.{dfi}f} at  {server_formatted_time}.' )

                
        return  future.result()
    



    #Server/Subsciber main
def main_service():
    rclpy.init()

    calculator_service = CalculatorService()
    
    try:
        rclpy.spin(calculator_service)
    
    except KeyboardInterrupt:
        pass
    finally:
        calculator_service.destroy_node()
        rclpy.shutdown()



def main_client():

    rclpy.init()

    #create Client Node
    calculator_client = CalculatorClient()
    
    #Send Data To Server
    calculator_client.send_request(sys.argv)

    calculator_client.destroy_node()
    rclpy.shutdown()












