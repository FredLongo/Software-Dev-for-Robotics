
import rclpy
from rclpy.node import Node

#from std_msgs.msg import String
from sensor_msgs.msg import Joy


class JoyMessage():
    def __init__(self) -> None:
        pass





class JoyListener(Node):    
    def __init__(self):
        super().__init__('joy_listener')
        self.subscription = self.create_subscription(
            Joy,
            'joy',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        
        header = msg.header
        timestamp = header.stamp
        frame_id =  header.frame_id 

        self.get_logger().info(f'Header Frame ID: "{frame_id}" Timestamp: "{timestamp.sec}.{timestamp.nanosec}"')
        self.get_logger().info(f'           Axes: "{str(msg.axes)}"')
        self.get_logger().info(f'        Buttons: "{str(msg.buttons)}"')
        
        

        


def main(args=None):
    rclpy.init(args=args)

    joy_listener = JoyListener()
    rclpy.spin(joy_listener)
    
    joy_listener.destroy_node()
    rclpy.shutdown()





if __name__ == '__main__':
    main()

