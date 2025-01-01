# 指定运行此配置文件所需的 CMake 的最低版本
cmake_minimum_required (VERSION 2.8)

#查找当前目录下的所有源文件，并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_LIB_SRCS)

# 生成链接库
# 将指定的源文件生成链接文件，然后添加到工程中去
# add_library(<name> [STATIC | SHARED | MODULE] [EXCLUDE_FROM_ALL] [source1] [source2] [...])
add_library(hello ${DIR_LIB_SRCS})