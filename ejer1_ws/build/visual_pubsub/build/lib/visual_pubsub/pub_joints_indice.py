import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from builtin_interfaces.msg import Time


class IndiceJointStatePublisher(Node):

    def __init__(self):
        super().__init__('indice_joint_state_publisher')
        self.indice_publisher_ = self.create_publisher(JointState, 'indice_joint_states', 10)
        self.indice_timer = self.create_timer(0.1, self.indice_publish_joint_states)  # Publish every 0.1s

    def indice_publish_joint_states(self):
        indice_msg = JointState()
        indice_msg.header.stamp = self.get_clock().now().to_msg()  # Add timestamp
        indice_msg.name = [
            'indice_arm_joint1', 'indice_arm_joint2', 'indice_arm_joint3', 'indice_arm_joint4',
            'indice_arm_joint5', 'indice_arm_joint6', 'indice_right_gripper_finger_joint',
            'indice_left_gripper_finger_joint'
        ]
        indice_msg.position = [1.0, -0.5, 0.1, 0.2, -0.7, 1.1, -0.011, 0.012]

        self.indice_publisher_.publish(indice_msg)
        self.get_logger().info(f'Published [INDICE] Joint States: {indice_msg.position}')  # Debugging info


def main(args=None):
    rclpy.init(args=args)
    indice_node = IndiceJointStatePublisher()
    rclpy.spin(indice_node)
    indice_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
