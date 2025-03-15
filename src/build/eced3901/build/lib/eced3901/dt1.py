# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from nav_msgs.msg import Odometry

# http://docs.ros.org/en/noetic/api/geometry_msgs/html/index-msg.html
from geometry_msgs.msg import Pose
from geometry_msgs.msg import Twist


class NavigateSquare(Node):

    def __init__(self):
        super().__init__('navigate_square')
        self.subscription = self.create_subscription(
            Odometry, #Matches the import at the top (nav_msgs.msg import Odometry)
            'odom', #odom topic
            self.odom_callback, #Call this function
            10) #Queue size 10

        #self.subscription  # prevent unused variable warning
        self.publisher = self.create_publisher(
            Twist,
            'cmd_vel',
            10) #Queue size 10

        self.timer = self.create_timer(1, self.timer_callback)

    def timer_callback(self):
        self.get_logger().info(f'Timer looking good')

    def odom_callback(self, msg):
        self.get_logger().info('Msg Data: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)

    navigate_square = NavigateSquare()

    rclpy.spin(navigate_square)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    navigate_square.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
