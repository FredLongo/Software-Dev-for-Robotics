#!/user/bin/env python3
import rclpy, random
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts


def main(args=None):
    rclpy.init(args=args)
    node = Node("add_two_ints_no_oop")
    
    client = node.create_client(AddTwoInts,"add_two_ints")
    while not client.wait_for_service(1.0):
        node.get_logger().warn("Waiting for add_two_ints Server....")

    request = AddTwoInts.Request()
    request.a = random.randint(1,100)
    request.b = random.randint(1,100)

    future = client.call_async(request)
    rclpy.spin_until_future_complete(node, future)

    try:
        response = future.result()
        node.get_logger().info("The sum of " + str(request.a)+ " + " + str(request.b) + " = " + str(response.sum)) 

    except Exception as e:
        node.get_logger().error(str("Service call failed %r" % (e,))) 

    rclpy.shutdown()


if __name__ == '__main__':
    main()
