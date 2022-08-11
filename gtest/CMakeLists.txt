cmake_minimum_required(VERSION 3.10)
project(gtest VERSION 1.0)
# 查找 GTest 库
find_package(GTest REQUIRED)
#find_package(Glog REQUIRED)
# GTest 的头文件
include_directories(./include)
set(2DTF_SRCS ../include/2dtf/2dtf.cpp)
if(GTEST_FOUND)
    message("GTest library was found! ")
else(GTEST_FOUND)
    message("GTest library is needed but can't be found! ")
endif()
# if(Glog_FOUND)
#     message("GLog library was found! ")
# else(Glog_FOUND)
#     message("GLog library is needed but can't be found! ")
# endif()
 #包含gtest头文件   
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(${GLOG_INCLUDE_DIRS})

add_executable(gtest gtest.cpp ${2DTF_SRCS})
# 链接测试库
target_link_libraries(gtest ${GTEST_BOTH_LIBRARIES} pthread )

# 添加到测试
gtest_discover_tests(gtest)
