cmake_minimum_required(VERSION 3.1.0)

project(MyProject)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

set(MY_PROJECT_SRC
        include/2dtf/2dtf.h)
set(2DTF_SRCS include/2dtf/2dtf.cpp)     
add_executable(MyProject src/main.cpp ${2DTF_SRCS})


# 开启测试
enable_testing()
# 添加测试目录

add_subdirectory(gtest)