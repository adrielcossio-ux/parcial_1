from setuptools import setup
import os
from glob import glob

package_name = 'pubsub'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('msg/*.msg')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='fab',
    maintainer_email='fab@example.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sensor_1 = pubsub.sensor_1:main',
            'sensor_2 = pubsub.sensor_2:main',
            'sensor_3 = pubsub.sensor_3:main',
            'filter = pubsub.filtered:main',
            'display = pubsub.display:main',
        ],
    },
)
