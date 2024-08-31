cmake_minimum_required(VERSION 3.25)

project(FileManagementSystem)

#find_package(Qt5 REQUIRED COMPONENTS Widgets)

set(CMAKE_INCLUDE_PATH "${PROJECT_SOURCE_DIR}/includes")


add_executable(app src/main.cpp src/commands.cpp)
target_include_directories(app PUBLIC "${PROJECT_SOURCE_DIR}/includes")
#target_link_libraries(fileManagement Qt5::Widgets)