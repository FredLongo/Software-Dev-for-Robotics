from setuptools import find_packages
from setuptools import setup

setup(
    name='my_robot_intrfaces',
    version='0.0.0',
    packages=find_packages(
        include=('my_robot_intrfaces', 'my_robot_intrfaces.*')),
)
