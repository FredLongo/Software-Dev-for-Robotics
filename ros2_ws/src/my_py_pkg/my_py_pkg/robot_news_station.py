#!/user/bin/env python3
import rclpy
from rclpy.node import Node
from example_interfaces.msg import String


class RobotNewsStation(Node):
    def __init__(self):
        super().__init__("robot_news_station")
        self.robot_name_ = "Fred_Station_001"
        self.publisher_ = self.create_publisher(String, "robot_news", 10)
        self.timer_ = self.create_timer(3, self.publish_news)
        self.get_logger().info("robot_news_station has started")

    def publish_news(self):
        msg = String()
        msg.data = "Hello from " + self.robot_name_
        self.publisher_.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = RobotNewsStation()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
