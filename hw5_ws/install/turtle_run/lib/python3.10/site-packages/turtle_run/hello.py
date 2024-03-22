#!/usr/bin/env python3
import rclpy
from rclpy.node import Node


class HelloNode(Node): #MODIFY NAME
    def __init__(self):
        super().__init__("Hello_Node") # MODIFY NAME

    def say_hello(self):
        self.get_logger().info("Hello!")
        
        


def main(args=None):
    rclpy.init(args=args)
    node = HelloNode() # MODIFY NAME
    node.say_hello()
    rclpy.shutdown()


if __name__== "__main__":
    main()