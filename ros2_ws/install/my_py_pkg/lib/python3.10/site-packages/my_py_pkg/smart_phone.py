#!/user/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String


class SmartPhone(Node):
    def __init__(self):
        super().__init__("smart_phone")
        self.robot_name_ = "Fred_Phone_001"
        
        self.subscriber_ = self.create_subscription(
            String, "robot_news", self.callback_robot_news,10)
                
        self.get_logger().info(self.robot_name_ + " has started")


    def callback_robot_news(self,msg):
        self.get_logger().info(msg.data)


'''
    def timer_callback(self):
        self.counter_ += 1 
        self.get_logger().info("Hello "+ str(self.counter_))
'''


def main(args=None):
    rclpy.init(args=args)
    node = SmartPhone()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
