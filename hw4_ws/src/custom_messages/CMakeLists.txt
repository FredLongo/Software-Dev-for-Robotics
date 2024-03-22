cmake_minimum_required(VERSION 3.8)
project(custom_messages)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_generate_interfaces REQUIRED)

#rosidl_generate_interfaces(${PROJECT_NAME} "msg/Calculater.msg")
rosidl_generate_interfaces(${PROJECT_NAME}_msg 
"msg/Calculater.msg" LIBRARY_NAME ${PROJECT_NAME})


ament_export_dependencies(rosidl_default_runtime)


ament_package()

