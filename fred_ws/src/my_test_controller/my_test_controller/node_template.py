#!/usr/bin/env python3

# This files represents the minimal needed to create a node

import rclpy
from rclpy.node import Node

class TemplateNode(Node):

    def __init__(self):
        super().__init__("TemplateNode")


def main(args=None):
    rclpy.init(args=args)
    node = TemplateNode()

    #.... code ....

    rclpy.shutdown()


if __name__ == '__main__':
    main()

