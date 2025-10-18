from setuptools import find_packages, setup

package_name = 'visual_pubsub'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='carlos',
    maintainer_email='menachocarlos5@gmail.com',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'joint_state_publisher = visual_pubsub.joint_state_publisher:main',
            'joint_state_subscriber = visual_pubsub.joint_state_subscriber:main'  ,
            'inverse_kinematics = visual_pubsub.inverse_kinematics:main'
        ],
    },
)
