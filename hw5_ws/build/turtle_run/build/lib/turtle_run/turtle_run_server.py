#!/usr/bin/env python3
import rclpy
import time
import inspect
import sys
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from rclpy.action.server import ServerGoalHandle
from my_interfaces.action import TurtleRun
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from turtlesim.msg import Pose
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist

class Switch:
    On = 1
    Off = 0

class TurtleState:
    Off = 0
    On  = 1

class TurtleRunStatic:
    verbose = Switch.Off


class Checkpoints:
    #Static zones
    One     = [(10.0, 10.0),(11.5, 11.5)]
    Two     = [(00.0, 10.0),(01.0, 11.5)]
    Three   = [(00.0, 00.0),(01.0, 01.0)]
    Finish  = [(10.0, 00.0),(11.5, 01.0)]
    def __init__(self) -> None:
        self.One = False
        self.Two = False
        self.Three = False
        self.Finish = False

class TurtleRunServer(Node):
    def __init__(self):
        super().__init__("turtle_run_server") 
        self.turtle_state = TurtleState.Off
        self.current_pose = Pose()
        self.checkpoints  = Checkpoints()
        self.start_control_time = 0.0
        self.end_control_time = 0.0
        self.send_feedback_flag = False
        self.send_feedback_timer = self.create_timer(2,callback=self.send_feedback_timer_callback)



        #Create the Action Server
        self.count_until_server_ =  ActionServer(
            self,
            TurtleRun,
            "turtle_run",
            goal_callback=self.goal_callback,
            cancel_callback=self.cancel_callback,
            execute_callback=self.execute_callback,
            callback_group=ReentrantCallbackGroup())



        #Create the Joystick Listen (sub)
        self.joystick_listener = self.create_subscription(
            Joy,
            'joy',
            self.joystick_listener_callback,
            10)
        
        #Create the Turtle Pose Lisener (sub)
        self.turtle_pose_listener = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.turtle_pose_listener_callback,
            10)

        #Create Publisher for sending Joystick commands to Turtlesim 
        self.pub_to_turtlesim = self.create_publisher(Twist,'/turtle1/cmd_vel',10)


        self.get_logger().info("Turtle Init complete")
    
    

    def send_feedback_timer_callback(self):
         self.send_feedback_flag = True


    def joystick_listener_callback(self, msg: Joy):
        #self.login(f"{inspect.currentframe().f_code.co_name}")
        if self.turtle_state == TurtleState.On: 

           # header = msg.header
           # timestamp = header.stamp
           # frame_id =  header.frame_id 
           # axes = msg.axes
           # buttons = msg.buttons

            twist = self.joystick_to_twist(msg)
 
            self.pub_to_turtlesim.publish(twist)


    def joystick_to_twist(self, msg: Joy):
        twist_ = Twist()
        twist_.linear.x =  (2 * msg.axes[1]) # Up Down
        twist_.angular.z = (2 * msg.axes[0]) # Left Right
        return twist_


    def turtle_pose_listener_callback(self, msg: Pose):
        #self.login(f"{inspect.currentframe().f_code.co_name}")
        if self.turtle_state == TurtleState.On: 
            self.current_pose = msg




    def goal_callback(self, goal_request: TurtleRun.Goal):
        self.login(f"{inspect.currentframe().f_code.co_name}")        
        self.get_logger().info(f"Received Goal {goal_request.start_flag}")

        #Validat the goal request
        if goal_request.start_flag != 'Start':
            self.get_logger().info("Rejecting the goal: {goal_request.start_flag}")
            return GoalResponse.REJECT
        
        self.turtle_state = TurtleState.On
        self.start_control_time = time.time()
        self.get_logger().info("Accepting Goal: {goal_request.start_flag}")

        return GoalResponse.ACCEPT
    
    def cancel_callback(self, goal_handle: ServerGoalHandle):
        self.login(f"{inspect.currentframe().f_code.co_name}")        
        self.turtle_state = TurtleState.Off
        self.get_logger().info("Received a cancel request")
        return CancelResponse.ACCEPT # or reject
    
    def is_pose_in_checkpoint(self, checkpoint, point: Pose):        
#       self.login(f"{inspect.currentframe().f_code.co_name}")
        x1, y1 = checkpoint[0]
        x2, y2 = checkpoint[1]
        px = point.x
        py = point.y

        return x1<= px <= x2 and y1 <= py <= y2


    def convert_seconds_to_HMS(self,seconds):
        #hour = seconds // 3600
        #minute = (seconds % 3600) // 60
        #seconds = seconds % 60
        t = time.localtime(seconds)
        return f"{t.tm_hour:02d}:{t.tm_min:02d}:{t.tm_sec:02d}"


        
    def login(self,my_location):
        self.logit(f" >>>>>>>>>>>>  {my_location}")
        

    def logit(self,msg_):
        self.get_logger().info(msg_)
        
        # Start the process
    def execute_callback(self,goal_handle: ServerGoalHandle):
        self.login(f"{inspect.currentframe().f_code.co_name}")
        
        
        feedback = TurtleRun.Feedback()        


        while self.turtle_state == TurtleState.On:

            
            if self.checkpoints.One == False and \
                self.is_pose_in_checkpoint(Checkpoints.One,self.current_pose):
                    self.checkpoints.One = True
                    self.get_logger().info('Checkpoint 1 Hit!')   
                         
            elif self.checkpoints.One == True and \
                self.checkpoints.Two == False and \
                self.is_pose_in_checkpoint(Checkpoints.Two,self.current_pose):
                    self.checkpoints.Two = True
                    self.get_logger().info('Checkpoint 2 Hit!')        
            elif self.checkpoints.One == True and \
                self.checkpoints.Two == True and \
                self.checkpoints.Three == False and \
                self.is_pose_in_checkpoint(Checkpoints.Three,self.current_pose):
                    self.checkpoints.Three = True
                    self.get_logger().info('Checkpoint 3 Hit!')        
            elif self.checkpoints.One == True and \
                self.checkpoints.Two == True and \
                self.checkpoints.Three == True and \
                self.checkpoints.Finish == False and \
                self.is_pose_in_checkpoint(Checkpoints.Finish,self.current_pose):
                    self.checkpoints.Finish = True
                    self.get_logger().info('Checkpoint Finish Hit!')     
                    self.login(f"x:{self.current_pose.x} , Y:{self.current_pose.y} ")
                    self.turtle_state = TurtleState.Off   
                    self.end_control_time = time.time()
                    self.send_feedback_flag = True
                    self.send_feedback_timer.cancel()


            if self.send_feedback_flag == True:  #this is to reduce the noise 
                feedback.current_position_x = self.current_pose.x
                feedback.current_position_y = self.current_pose.y
                goal_handle.publish_feedback(feedback)
                #self.get_logger().info(f' Feedback sent:[{self.current_pose.x},{self.current_pose.y}]')

        
        # Set up result
        result = TurtleRun.Result()
        result.final_position_x = feedback.current_position_x
        result.final_position_y = feedback.current_position_y
        result.total_control_time = self.end_control_time - self.start_control_time
        
        #Once Done, Set goal final state
        goal_handle.succeed()

        

        self.login(f"Start Time: {self.convert_seconds_to_HMS(self.start_control_time)}")
        self.login(f"  End Time: {self.convert_seconds_to_HMS(self.end_control_time)}")

        return result
    


def main(args=None):
    rclpy.init(args=args)
    node = TurtleRunServer() # MODIFY NAME
    node.get_logger().info("Turtle Run Action Server has been started")

    rclpy.spin(node, MultiThreadedExecutor())
    rclpy.shutdown()



if __name__ == '__main__':
    main()
