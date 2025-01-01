# 指定运行此配置文件所需的 CMake 的最低版本
cmake_minimum_required (VERSION 2.8)

#命令表示项目的名称是 Demo2
project (demo3)

#添加-std=c++11选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#查找当前目录下的所有源文件，并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加 hello 子目录
add_subdirectory(hello)

#命令表示生成项目的名称是 main
#add_executable(main ${DIR_SRCS})

#添加动态库
#target_link_libraries 该指令的作用为将目标文件与库文件进行链接。该指令的语法如下：
#target_link_libraries(<target> [item1] [item2] [...] [[debug|optimized|general] <item>] ...)
#target_link_libraries(main hello)


# 添加头文件路径，确保 test.cpp 能找到 hello.h。使用方式：#include "hello/hello.h"
include_directories(${CMAKE_SOURCE_DIR}/hello)

# 生成 main 可执行文件
#add_executable(main ${DIR_SRCS})

# 链接 hello 静态库到 main
#target_link_libraries(main hello)


# 生成 main 可执行文件
add_executable(main ${DIR_SRCS})

# 将 hello 目录暴露为头文件搜索路径 不需要路径  #include "hello.h"
target_include_directories(main PRIVATE ${CMAKE_SOURCE_DIR}/hello)


# 链接 hello 静态库到 main
target_link_libraries(main hello)