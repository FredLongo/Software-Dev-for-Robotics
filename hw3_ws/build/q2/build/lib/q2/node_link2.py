import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class MyNode(Node):
    def __init__(self):
        super().__init__('node_link')

        # Create publishers for two different topics
        self.publisher1 = self.create_publisher(String, 'pub', 10)

        # Create a subscriber for a third topic
        self.subscription = self.create_subscription(
            String,
            'sub',
            self.listener_callback,
            10)

    def listener_callback(self, msg):
        self.get_logger().info('Received: "%s"' % msg.data)

    def publish_messages(self):
        # Publish messages to different topics
        msg1 = String()
        msg1.data = 'Hello from topic 1'
        self.publisher1.publish(msg1)

        
def main(args=None):
    rclpy.init(args=args)

    my_node = MyNode()

    try:
        # Publish messages periodically
        my_node.publish_messages()
        rclpy.spin(my_node)
    finally:
        my_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
