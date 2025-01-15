from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
import os


def generate_launch_description():
    navigator_node = Node(
        package="rm_decision",
        name="rm_decision_node",
        executable="rm_decision_node",
        namespace="",
        output="screen",
    )

    return LaunchDescription([rm_decision_node])
