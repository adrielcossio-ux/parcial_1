import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState


class IndiceJointStateSubscriber(Node):

    def __init__(self):
        super().__init__('indice_joint_state_subscriber')
        self.indice_subscription = self.create_subscription(
            JointState,
            'indice_joint_states',
            self.indice_listener_callback,
            10)
        self.indice_subscription  # prevent unused variable warning

    def indice_listener_callback(self, msg):
        for name, pos in zip(msg.name, msg.position):
            self.get_logger().info(f'[indice] Joint {name}: {pos}')


def main(args=None):
    rclpy.init(args=args)
    indice_node = IndiceJointStateSubscriber()
    rclpy.spin(indice_node)
    indice_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
