#!/user/bin/env python3
import rclpy
from rclpy.node import Node

class TemplateNode(Node):

    def __init__(self):
        super().__init__("template_node")
        self.get_logger().info("Hello")


def main(args=None):
    rclpy.init(args=args)
    node = TemplateNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
