from setuptools import find_packages, setup

package_name = 'turtle_run'

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
    maintainer='vboxuser',
    maintainer_email='vboxuser@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'turtle_run_server = turtle_run.turtle_run_server:main',
            'turtle_run_client = turtle_run.turtle_run_client:main',
            'say_hello = turtle_run.hello:main'
        ],
    },
)
