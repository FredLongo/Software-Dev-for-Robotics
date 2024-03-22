#!/usr/bin/env python3
import rclpy
import datetime
from rclpy.node import Node


class MyNode(Node):
    def __init__(self):
        super().__init__("Freddy")
        self.create_timer(1.0, self.timer_callback)
        self.get_logger().info("Fred init")

    def timer_callback(self):
        current_time = datetime.datetime.now()

        self.get_logger().info("Hello time is :"+ current_time.strftime("%H:%M:%S"))



def main(args=None):
    rclpy.init(args=args)
    node = MyNode() 
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
