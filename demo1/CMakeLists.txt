# 指定运行此配置文件所需的 CMake 的最低版本
cmake_minimum_required (VERSION 2.8)

#命令表示项目的名称是 Demo1
project (demo1)
#添加-std=c++11选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#命令表示生成项目的名称是 test
add_executable(test test.cpp)