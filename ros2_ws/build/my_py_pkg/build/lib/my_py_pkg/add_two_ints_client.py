#!/user/bin/env python3
import rclpy, random
from rclpy.node import Node
import time
from my_robot_interfaces import HardwareStatus

from example_interfaces.srv import AddTwoInts
from functools import partial

class AddTwoIntsClientNode(Node):

    def __init__(self):
        super().__init__("add_two_ints_client")
        self.get_logger().info("Starting add_two_ints_client")

        while True:
            self.call_add_two_ints_server(random.randint(1,100), random.randint(1,100))
            time.sleep(5)
        


    def call_add_two_ints_server(self, a, b):

        client = self.create_client(AddTwoInts,"add_two_ints")
        while not client.wait_for_service(1.0):
            self.get_logger().warn("Waiting for add_two_ints Server....")


        request = AddTwoInts.Request()
        request.a = a  #random.randint(1,100)
        request.b = b  #random.randint(1,100)

        future = client.call_async(request)
        future.add_done_callback(partial(self.callback_call_add_two_ints, a=a , b=b )) 

    def callback_call_add_two_ints(self,future,a,b):
        
        ''' Why do the messages in this block of code never get displayed? '''
        self.get_logger().info("Hello McFly")
        try:           
            response = future.result()
            self.get_logger().info("The sum of " + str(a)+ " + " + str(b) + " = " + str(response.sum)) 

        except Exception as e:
            self.get_logger().error(str("Service call failed %r" % (e,))) 
           


def main(args=None):
    rclpy.init(args=args)
    node = AddTwoIntsClientNode()
    
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
