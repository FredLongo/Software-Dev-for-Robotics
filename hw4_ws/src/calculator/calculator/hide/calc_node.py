#!/user/bin/env python3

from typing import List
import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class CalculatorNode(Node):
    def __init__(self):
        super().__init__('CalculatorNode')
        self.client = self.create_client(AddTwoInts, 'add_two_ints')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, wiating...')
        self.send_request()

    def send_request(self):
        request = AddTwoInts.Request()
        request.a = 1
        request.b = 2
        future = self.client.call_async(request)
        future.add_done_callback(self.handle_response)

    def handle_response(self, future):
        try:
            response = future.result()
            self.get_logger().info(f'Sum: {response.sum}')
        except Exception as e:
            self.get_logger().error(f'Failed to call service: {str(e)}')


def main(args=None):
    print('Hi from calculator.')

    rclpy.init(args=args)
    node = CalculatorNode()
    rclpy.spin(node)
    rclpy.shutdown()

    

if __name__ == '__main__':
    main()
