import rclpy
from rclpy.node import Node
from datetime  import datetime
from std_msgs.msg import String


class TimedMessage: 
    def __init__(self, message):
        self.message = message
        parts = self.message.split(' ',3)
        self.date_str = parts[0]
        self.time_str = parts[1]
        self.date_obj = datetime.strptime(self.date_str, "%Y-%m-%d")
        self.time_obj = datetime.strptime(self.time_str, "%H:%M:%S.%f").time()
        self.datetime = datetime.combine(self.date_obj, self.time_obj)
        self.sequence_number = int(parts[2])
        self.text = parts[3]
    
    @staticmethod
    def new(_counter,_node):
        new_msg = str(datetime.now() ) + " " + str(_counter) + "Message:" + str(_counter) + " from " + _node
        return TimedMessage(new_msg)

    def get_message(self):
        return self.message
    
    def display_message(self):
        return self.text
    
    def age(self):
        return (datetime.now() - self.datetime).total_seconds()
    
    def valid(self, threshold_sec): 
        return self.age() < threshold_sec
         

class NodeLink(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(String, 'pub', 10)
        timer_period = 1.0  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0
       
        self.subscription = self.create_subscription(
            String,
            'sub',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def cap_name(self,string):
        return string[0].upper() + string[1:]
    

    def timer_callback(self):
        msg = String()
        count_str = str(self.i) 


        node_name_cap = self.cap_name(self.get_name())
        
        #t_mess = TimedMessage.new(count_str,node_name_cap)
        
        #msg.data =    count_str + " " + node_name_cap + " "  + "says Hello!"
        msg.data = str(datetime.now()) + " " + str(count_str) + " Message: " + str(count_str) + " from " + node_name_cap
        
        # Just to format the logger message without the timestamp
        timed_message = TimedMessage(msg.data)

        self.publisher_.publish(msg)
       # self.get_logger().info('"%s"' % tmes.message())
        self.get_logger().info('Publishing: "%s"' % timed_message.display_message())
        self.i += 1

        

    def listener_callback(self, msg):
        
        timed_message = TimedMessage(msg.data)
        #self.get_logger().info('I heard: "%s"' % msg.data)
        if (timed_message.valid(5)):
            self.get_logger().info('I heard: "%s", Aged:"%f" -- republishing' % (timed_message.display_message(),timed_message.age()))
            self.publisher_.publish(msg)




def main(args=None):
    rclpy.init(args=args)

    node_link = NodeLink()

    rclpy.spin(node_link)
    
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    node_link.destroy_node()
    
    rclpy.shutdown()


if __name__ == '__main__':
    main()
