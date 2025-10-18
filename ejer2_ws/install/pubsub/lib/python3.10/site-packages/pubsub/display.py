
import rclpy
from rclpy.node import Node
from interfaces.msg import FilteredSensor

class DisplayNode(Node):
    def __init__(self):
        super().__init__('display')
        self.sub = self.create_subscription(FilteredSensor, '/filtered_sensor', self.show_avg, 10)

    def show_avg(self, msg):
        print(
            f"[{msg.stamp.sec}.{msg.stamp.nanosec:09d}] "
            f"Promedio = {msg.average:.2f} | "
            f"S1 = {msg.sensor1:.2f}, S2 = {msg.sensor2:.2f}, S3 = {msg.sensor3:.2f}"
        )

def main(args=None):
    rclpy.init(args=args)
    node = DisplayNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()