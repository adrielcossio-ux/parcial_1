from ament_index_python.packages import get_package_share_path

from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import Command, LaunchConfiguration


def generate_launch_description():
    """
    launch method
    """
    urdf_tutorial_path = get_package_share_path('robot_description')
    # modelos: ajusta los nombres si tus archivos urdf tienen otros nombres/ubicación
    indice_model_path = urdf_tutorial_path / 'urdf/dedo_indice.urdf'
    pulgar_model_path = urdf_tutorial_path / 'urdf/pulgar.urdf'
    default_rviz_config_path = urdf_tutorial_path / 'rviz/urdf.rviz'

    gui_arg = DeclareLaunchArgument(
        name='gui',
        default_value='false',
        choices=['true', 'false'],
        description='Flag to enable joint_state_publisher_gui')
    rviz_arg = DeclareLaunchArgument(
        name='rvizconfig',
        default_value=str(default_rviz_config_path),
        description='Absolute path to rviz config file')

    #despues del xacro un espacio
    indice_robot_description = ParameterValue(Command(
        ['xacro ', str(indice_model_path)]),
        value_type=str)

    pulgar_robot_description = ParameterValue(Command(
        ['xacro ', str(pulgar_model_path)]),
        value_type=str)

    # robot_state_publisher para cada robot, en su namespace
    # remapeamos 'joint_states' para que cada RSP escuche su tópico correspondiente
    indice_robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        namespace='indice',
        parameters=[{'robot_description': indice_robot_description}],
        remappings=[('joint_states', 'indice_joint_states')]
    )

    pulgar_robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        namespace='pulgar',
        parameters=[{'robot_description': pulgar_robot_description}],
        remappings=[('joint_states', 'pulgar_joint_states')]
    )

    # Tus publicadores de joint states (uno por robot)
    indice_joint_state_publisher_node = Node(
        package='visual_pubsub',
        executable='indice_joint_state_publisher',
        namespace='indice',
        condition=UnlessCondition(LaunchConfiguration('gui'))
    )

    pulgar_joint_state_publisher_node = Node(
        package='visual_pubsub',
        executable='pulgar_joint_state_publisher',
        namespace='pulgar',
        condition=UnlessCondition(LaunchConfiguration('gui'))
    )

    # (opcional) GUI estándar, si prefieres usar sliders (publica en 'joint_states' global)
    joint_state_publisher_gui_node = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        condition=IfCondition(LaunchConfiguration('gui')))

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', LaunchConfiguration('rvizconfig')],
    )

    return LaunchDescription([
        gui_arg,
        rviz_arg,
        # RSP para ambos robots
        indice_robot_state_publisher_node,
        pulgar_robot_state_publisher_node,
        # publishers propios (si gui=false)
        indice_joint_state_publisher_node,
        pulgar_joint_state_publisher_node,
        # GUI opcional
        joint_state_publisher_gui_node,
        # RViz
        rviz_node
    ])
