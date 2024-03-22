#!/usr/bin/env python3
import rclpy
from rclpy.node import Node


class MyCustomNode(Node): #MODIFY NAME
    def __init__(self):
        super().__init__("hello_node") # MODIFY NAME
    
    def hello(self):
        self.get_logger().info("Hello")



def main(args=None):
    rclpy.init(args=args)
    node = MyCustomNode() # MODIFY NAME

    node.hello()

    #rclpy.spin(node)
    rclpy.shutdown()


if __name__== "__main__":
    main()