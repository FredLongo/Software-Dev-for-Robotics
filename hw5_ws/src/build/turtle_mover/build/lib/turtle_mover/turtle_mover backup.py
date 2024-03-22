import rclpy
from rclpy.node import Node

#from std_msgs.msg import String
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist

'''
Name maps: 
B1          = Button labled 1
B2          = Button labled 2
B3          = Button labled 3
B4          = Button labled 4
LTT         = Left Top Trigger
RTT         = Right Top Trigger
LBT         = Left Bottom Trigger
RBT         = Right Bottom Trigger
SEL         = Select Button
STR         = Start Button
LSP         = Left Stick Push
RSP         = Right Stick Push
LSU         = Left Stick Up
LSR         = Left Stick Right
LSD         = Left Stick Down
LSL         = Left Stick Left
RSU         = Right Stick Up
RSR         = Right Stick Right
RSD         = Right Stick Down
RSR         = Right Stick Right
PBU         = Pad Button Up
PBR         = Pad Button Right
PBD         = Pad Button Down
PBL         = Pad Button Left
(F)         = Float number between [-1:1]
(I)         = Integer one of  [1,0,-1]



Joy Map: 

--------NON ANALOG------------------------------------------------ANALOG-----------------
--------------------------------------------------------------(If diffrent)--------------
Frameid 
Timestamp           FLOAT                           |
    sec             INT                             |
    nanosec         FLOAT                           |
Axes    --------------------------------------------|-----------------------------------
    A1:   [LSL:LSR] =  [PBL: PBR] =  [1:-1](i)      |   [LSL:LSR] =  [1:-1](f)
    A2:   [LSU:LSD] =  [PBU: PBD] =  [1:-1](i)      |   [LSU:LSD] =  [1:-1](f)    
    A3:                                             |   [RSU:RSD] =  [1:-1](f)
    A4:                                             |   [RSL:RSR] =  [1:-1](f)
    A5:                                             |   [PBL:PBR] =  [1:-1](f)
    A6:                                             |   [PBU:PBD] =  [1:-1](f)
Buttons --------------------------------------------|-----------------------------------
    B1:  B1  = LSU                                  |   B1
    B2:  B2  = LSR                                  |   B2
    B3:  B3  = LSD                                  |   B3
    B4:  B4  = LSL                                  |   B4
    B5:  TTL = Top Trigger Left                     |
    B6:  TTR = Top Trigger Right                    |
    B7:  BTL = Trigger Left                         |
    B8:  BTR = Trigger Right                        |
    B9:  SEL = Select                               |
    B10: STR = Start                                |
    B11: LSP = L-Stick Push                         |
    B12: RSP = R-Stick Push                         |
    

Twist Map:

liner
    x:  [up/forward : down/backwards] = [2:-2] 
    y:  
    z:
angulear
    x:
    y:
    z:  [rotate left: rotate right] = [2:-2]





'''

    



class TurtleMover(Node):    
    def __init__(self):
        super().__init__('turtle_mover')
        self.pub_to_turtlesim = self.create_publisher(Twist,'/turtle1/cmd_vel',10)
        self.subscription = self.create_subscription(
            Joy,
            'joy',
            self.listener_callback,
            10)
        self.lastaxes: Joy.axes = None
        self.get_logger().info("Init")
        

    def listener_callback(self, msg:Joy):
         
        header = msg.header
        timestamp = header.stamp
        frame_id =  header.frame_id 
        axes = msg.axes
        buttons = msg.buttons

        twist = self.joy_to_twist(msg)
 
        self.pub_to_turtlesim.publish(twist)


    def joy_to_twist(self, msg: Joy):
        twist_ = Twist()
        twist_.linear.x =  (2 * msg.axes[1]) # Up Down
        twist_.angular.z = (2 * msg.axes[0]) # Left Right
        return twist_






#            self.get_logger().info(f'Header Frame ID: "{frame_id}" Timestamp: "{timestamp.sec}.{timestamp.nanosec}"')
#            self.get_logger().info(f'           Axes: "{str(axes)}"')
#            self.get_logger().info(f'        Buttons: "{str(buttons)}"')
            
        
        
       


def main(args=None):
    rclpy.init(args=args)

    node = TurtleMover()
    rclpy.spin(node)
    
    node.destroy_node()
    rclpy.shutdown()





if __name__ == '__main__':
    main()

