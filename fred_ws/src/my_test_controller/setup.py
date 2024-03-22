from setuptools import find_packages, setup

package_name = 'my_test_controller'

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
    maintainer='root',
    maintainer_email='root@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration?',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "test_node = my_test_controller.my_first_node:main", 
            "draw_circle = my_test_controller.draw_circle:main"
        ],
    },
)
