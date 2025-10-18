import rclpy
from std_msgs.msg import Float32
from rclpy.node import Node
from pubsub.msg import FilteredSensor

class AverageNode(Node):
    def __init__(self):
        super().__init__('filtredsensor')
        self.sub1 = self.create_subscription(Float32, '/sensor1', self.cb1, 10)
        self.sub2 = self.create_subscription(Float32, '/sensor2', self.cb2, 10)
        self.sub3 = self.create_subscription(Float32, '/sensor3', self.cb3, 10)
        self.pub = self.create_publisher(FilteredSensor, '/filtered_sensor', 10)

        self.v1 = self.v2 = self.v3 = None
        self.timer = self.create_timer(0.1, self.timer_cb)

    def cb1(self, msg): self.v1 = msg.data
    def cb2(self, msg): self.v2 = msg.data
    def cb3(self, msg): self.v3 = msg.data

    def timer_cb(self):
        if None in (self.v1, self.v2, self.v3):
            return
        avg = (self.v1 + self.v2 + self.v3) / 3.0
        m = FilteredSensor()
        m.average = avg
        m.sensor1, m.sensor2, m.sensor3 = self.v1, self.v2, self.v3
        m.stamp = self.get_clock().now().to_msg()
        self.pub.publish(m)
        self.get_logger().info(f'Avg={avg:.2f}')

def main(args=None):
    rclpy.init(args=args)
    node = AverageNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()