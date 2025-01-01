#CMakeLists.txt

# 指定运行此配置文件所需的 CMake 的最低版本
cmake_minimum_required (VERSION 2.8)

#命令表示项目的名称是 Demo2
project (demo2)

#添加-std=c++11选项
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#查找当前目录下的所有源文件，并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

#命令表示生成项目的名称是 main
add_executable(main ${DIR_SRCS})


