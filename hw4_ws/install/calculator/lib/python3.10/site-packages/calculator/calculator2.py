import rclpy , sys
from rclpy.node import Node

from tutorial_interfaces.srv import TwoInts
#from example_interfaces.srv import AddTwoInts



class CalculatorService(Node):

    def __init__(self):
        super().__init__('calculator_service')
        self.server = self.create_service(TwoInts, 'two_ints', self.calculator_service_callback)

    def calculator_service_callback(self, request, response):
        response.sum = request.a + request.b
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))

        return response



class CalculatorClient(Node):

    def __init__(self):
        super().__init__('calculator_client')
        self.client = self.create_client(TwoInts, 'two_ints')
        while not self.client.wait_for_service(timeout_sec=3.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = TwoInts.Request()

    def send_request(self, a, b):
        self.req.a = a
        self.req.b = b
        self.future = self.client.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main_service():
    rclpy.init()

    calculator_service = CalculatorService()
    rclpy.spin(calculator_service)
    rclpy.shutdown()



def main_client():
    rclpy.init()

    calculator_client = CalculatorClient()
    response = calculator_client.send_request(int(sys.argv[1]), int(sys.argv[2]))
    calculator_client.get_logger().info(
        'Result of add_two_ints: for %d + %d = %d' %
        (int(sys.argv[1]), int(sys.argv[2]), response.sum))
    calculator_client.destroy_node()
    rclpy.shutdown()











