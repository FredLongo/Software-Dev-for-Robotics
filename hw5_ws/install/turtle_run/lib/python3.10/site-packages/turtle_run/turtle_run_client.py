#!/usr/bin/env python3
import rclpy
import time
from rclpy.node import Node
from rclpy.action import ActionClient
from rclpy.action.client import ClientGoalHandle, GoalStatus
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
import inspect
from my_interfaces.action import TurtleRun
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

class Button:
    Start = 9




class TurtleRunClient(Node): #MODIFY NAME
    def __init__(self):
        #Create the Client Action
        super().__init__("turtle_run_client") # MODIFY NAME
        self.ActionIs = Switch.Off
        self.turtle_run_client_ = ActionClient(self, TurtleRun, "turtle_run")
        self.lastpos_x = 0
        self.lastpos_y = 0
        self.login(str(inspect.currentframe().f_code.co_name)) 


        #Create the Joystick Listen (sub)
        self.joystick_listener = self.create_subscription(
            Joy,
            'joy',
            self.joystick_listener_callback,
            10)
        
        self.login("Turtle run client Started")


    def joystick_listener_callback(self, msg: Joy):
        #self.login(str(inspect.currentframe().f_code.co_name)) 
        # Listening for start 
        if msg.buttons[Button.Start] == Switch.On and  \
                self.ActionIs == Switch.Off:
            self.ActionIs = Switch.On
            self.send_goal('Start')
            self.logit("Start Button Sent")



    def logit(self,StringToLog):
        self.get_logger().info(StringToLog)


    def login(self,my_location):  #TODO Convert this to logfun as in log function
        self.logit(f" >>>>>>>>>>>>  {my_location}")  
        

    #Send Goal to server to start it all 
    def send_goal(self, start_flag):
        self.login(str(inspect.currentframe().f_code.co_name)) 
        # Wait for Server
        self.get_logger().info("Client is waiting for Server... ")
        self.turtle_run_client_.wait_for_server()
        self.get_logger().info("Server Connected!")

        #Create a Goal
        goal = TurtleRun.Goal()
        goal.start_flag = start_flag

        #Send the goal
        self.logit("Sending Goal")
        self.turtle_run_client_. \
            send_goal_async(goal, feedback_callback=self.goal_feedback_callback). \
                add_done_callback(self.goal_response_callback)


    def cancel_goal(self):
        self.login(str(inspect.currentframe().f_code.co_name)) 
        self.logit("Send a cancel Request")
        self.goal_handle_.cancel_goal_async()


    
    def goal_response_callback(self, future):
        self.login(str(inspect.currentframe().f_code.co_name)) 
        self.goal_handle_: ClientGoalHandle = future.result()
        self.logit("goal_response_callback:")
        if self.goal_handle_.accepted:
            self.logit("Goal got Accepted!")
            self.goal_handle_.get_result_async().add_done_callback(self.goal_result_callback)
        else: 
            self.get_logger().warn("Goal got rejected")


    #Feed back will keep comming until goal reached.
    def goal_feedback_callback(self, feedback_msg):
        #self.login(str(inspect.currentframe().f_code.co_name)) 
        x = feedback_msg.feedback.current_position_x
        y = feedback_msg.feedback.current_position_y
        self.logit(f"Current Location ({str(x)},{str(y)})")


    def turtle_moved(self,x,y):
        if self.lastpos_x == x and self.lastpos_y == y:
            return False
        
        self.lastpos_x = x 
        self.lastpos_y = y
    


    # When its done
    def goal_result_callback(self,future):   
        self.login(str(inspect.currentframe().f_code.co_name)) 
        status = future.result().status
        result = future.result().result   #this is the result field from our message 
        if status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info("Success")
        elif status == GoalStatus.STATUS_ABORTED:
            self.get_logger().error("Aborted")
        elif status == GoalStatus.STATUS_CANCELED:
            self.get_logger().warn("Cancled")

        self.logit(f"Final Location ({str(result.final_position_x)}, {str(result.final_position_y)})")
        time_string = self.display_seconds(result.total_control_time) 
        self.logit(f"Total Control Time:{time_string})")
        

    def display_seconds(self,seconds):
        return f"{int(seconds) }:seconds "
        


def main(args=None):
    rclpy.init(args=args)
    node = TurtleRunClient() # MODIFY NAME
    rclpy.spin(node)
    rclpy.shutdown()


if __name__== "__main__":
    main()