import rclpy
from std_msgs.msg import Float64
from rclpy.node import Node
import random

class SensorPublisher(Node):
    def __init__(self):
        super().__init__('sensor2')
        self.pub = self.create_publisher(Float64, '/sensor2', 10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.sensor_value) 

    def sensor_value(self):
        msg = Float64()
        msg.data = random.uniform(0.0, 10.0)
        self.pub.publish(msg)
        #print ("segundo dato enviado: ", msg.data)

def main(args=None):
    rclpy.init(args=args)
    sensor = SensorPublisher()
    rclpy.spin(sensor)
    sensor.destroy_node()
    rclpy.shutdown()
if __name__ == '__main__':
    main()