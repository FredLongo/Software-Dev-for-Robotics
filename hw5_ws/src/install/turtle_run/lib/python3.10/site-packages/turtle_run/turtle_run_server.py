#!/usr/bin/env python3
import rclpy
import time
import inspect
from rclpy.node import Node
from rclpy.action import ActionServer, GoalResponse, CancelResponse
from rclpy.action.server import ServerGoalHandle
from my_interfaces.action import TurtleRun
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from turtlesim.msg import Pose
from sensor_msgs.msg import Joy


class Switch:
    On = 1
    Off = 0

class TurtleState:
    Off = 0
    On  = 1

class TurtleRunStatic:
    verbose = Switch.On


class Checkpoints:
    One     = [(10,0, 10.0),(11.0, 11.0)]
    Two     = [(00.0, 11.0),(01.0, 10.0)]
    Three   = [(00.0, 00.0),(01.0, 01.0)]
    Finish  = [(10.0, 01.0),(11.0, 00.0)]

class TurtleRunServer(Node):
    def __init__(self):
        super().__init__("TurtleRunServer") 
        self.turtle_state = TurtleState.Off
        self.current_pose = Pose()

        #Create the Action Server
        self.count_until_server_ =  ActionServer(
            self,
            TurtleRun,
            "StartRun",
            execute_callback=self.execute_callback)
        
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
        
        self.get_logger().info("Turtle Init complete")


    def joystick_listener_callback(self, msg: Joy):
        self.login(f"{inspect.currentframe().f_code.co_name}")
        if self.turtle_state == TurtleState.On: 
            header = msg.header
            timestamp = header.stamp
            frame_id =  header.frame_id 
            #TODO Publish to Turtle

#            self.get_logger().info(f'Header Frame ID: "{frame_id}" Timestamp: "{timestamp.sec}.{timestamp.nanosec}"')
#            self.get_logger().info(f'           Axes: "{str(msg.axes)}"')
#            self.get_logger().info(f'        Buttons: "{str(msg.buttons)}"')
            

    def turtle_pose_listener_callback(self, msg: Pose):
        self.login(f"{inspect.currentframe().f_code.co_name}")
        if self.turtle_state == TurtleState.On: 
            self.current_pose = msg
            #self.current_pose.x = msg.x
            #self.current_pose.y = msg.y
            #self.current_pose.theta = msg.theta



    def goal_callback(self, goal_request: TurtleRun.Goal):
        self.login(f"{inspect.currentframe().f_code.co_name}")        
        self.get_logger().info(f"Received Goal {goal_request.start_flag}")

        #Validat the goal request
        if goal_request.start_flag != 'Start':
            self.get_logger().info("Rejecting the goal: {goal_request.start_flag}")
            return GoalResponse.REJECT
        
        self.turtle_state = TurtleState.on
        self.get_logger().info("Accepting Goal: {goal_request.start_flag}")

        return GoalResponse.ACCEPT
    
    def cancel_callback(self, goal_handle: ServerGoalHandle):
        self.login(f"{inspect.currentframe().f_code.co_name}")        
        self.turtle_state = TurtleState.Off
        self.get_logger().info("Received a cancel request")
        return CancelResponse.ACCEPT # or reject
    
    def is_pose_in_checkpoint(self, checkpoint, point: Pose):        
        self.login(f"{inspect.currentframe().f_code.co_name}")
        x1, y1 = checkpoint[0]
        x2, y2 = checkpoint[1]
        px = point.x
        py = point.y
        return x1<= px <= x2 and y1 <= py <= y2
    
    
    def login(self,my_location):
        self.get_logger().info(f" >>>>>>>>>>>>  {my_location}")
        



    def execute_callback(self,goal_handle: ServerGoalHandle):
        self.login(f"{inspect.currentframe().f_code.co_name}")
        self.get_logger().info(f"Turtle execute_callback started:")
        self.get_logger().info(f"                               : turtle state is:{self.turtle_state}")
        self.get_logger().info(f"                               : StartFlag is   :{goal_handle.request.start_flag}")
        
        


        self.get_logger().info("Executing the goal")
        while self.turtle_state == TurtleState.On:
            
            #TODO Get Current Pos for feedback
            feedback = TurtleRun.Feedback()
            
            feedback.current_position_x = self.current_pose.x
            feedback.current_position_y = self.current_pose.y
            #feedback.current_position_theta = self.current_pose.theta
            goal_handle.publish_feedback(feedback)
            self.get_logger().info(f'Feedback sent:[{self.current_pose.x},{self.current_pose.y}]')
            
            if self.is_pose_in_checkpoint(Checkpoints.One,self.current_pose):
                self.get_logger().info('Checkpoint 1 Hit!')        
            elif self.is_pose_in_checkpoint(Checkpoints.Two,self.current_pose):
                self.get_logger().info('Checkpoint 2 Hit!')        
            elif self.is_pose_in_checkpoint(Checkpoints.Three,self.current_pose):
                self.get_logger().info('Checkpoint 3 Hit!')        
            elif self.is_pose_in_checkpoint(Checkpoints.Finish,self.current_pose):
                self.get_logger().info('Checkpoint Finish Hit!')     
                self.turtle_state = TurtleState.Off   
        
                

        #Once Done, Set goal final state
        goal_handle.succeed()

        # send Goal
        result = TurtleRun.Result()
        result.final_position_x = feedback.current_position_x
        result.final_position_y = feedback.current_position_y
        #result.final_position_y = feedback.current_position_y
        
        return result
    
        



def main(args=None):
    rclpy.init(args=args)
    node = TurtleRunServer() # MODIFY NAME
    node.get_logger().info("Turtle Run Action Server has been started")

    rclpy.spin(node, MultiThreadedExecutor())
    rclpy.shutdown()



if __name__ == '__main__':
    main()
