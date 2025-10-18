import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState


class PulgarJointStateSubscriber(Node):

    def __init__(self):
        super().__init__('pulgar_joint_state_subscriber')
        self.pulgar_subscription = self.create_subscription(
            JointState,
            'pulgar_joint_states',
            self.pulgar_listener_callback,
            10)
        self.pulgar_subscription  # prevent unused variable warning

    def pulgar_listener_callback(self, msg):
        for name, pos in zip(msg.name, msg.position):
            self.get_logger().info(f'[pulgar] Joint {name}: {pos}')


def main(args=None):
    rclpy.init(args=args)
    pulgar_node = PulgarJointStateSubscriber()
    rclpy.spin(pulgar_node)
    pulgar_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()