#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from builtin_interfaces.msg import Time


class PulgarJointStatePublisher(Node):

    def __init__(self):
        super().__init__('pulgar_joint_state_publisher')
        self.pulgar_publisher_ = self.create_publisher(JointState, 'pulgar_joint_states', 10)
        self.pulgar_timer = self.create_timer(0.1, self.pulgar_publish_joint_states)  # Publish every 0.1s

    def pulgar_publish_joint_states(self):
        pulgar_msg = JointState()
        pulgar_msg.header.stamp = self.get_clock().now().to_msg()  # Add timestamp
        pulgar_msg.name = [
            'pulgar_arm_joint1', 'pulgar_arm_joint2', 'pulgar_arm_joint3', 'pulgar_arm_joint4',
            'pulgar_arm_joint5', 'pulgar_arm_joint6', 'pulgar_right_gripper_finger_joint',
            'pulgar_left_gripper_finger_joint'
        ]
        pulgar_msg.position = [1.0, -0.5, 0.1, 0.2, -0.7, 1.1, -0.011, 0.012]

        self.pulgar_publisher_.publish(pulgar_msg)
        self.get_logger().info(f'Published [PULGAR] Joint States: {pulgar_msg.position}')  # Debugging info


def main(args=None):
    rclpy.init(args=args)
    pulgar_node = PulgarJointStatePublisher()
    rclpy.spin(pulgar_node)
    pulgar_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
