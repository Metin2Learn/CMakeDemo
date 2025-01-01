cmake_minimum_required(VERSION 2.8)

project(demo4)

# 使用 C++11 标准
set(CMAKE_CXX_STANDARD 11)

# 设置库文件输出路径
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

# 设置可执行文件输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# 包含头文件目录
include_directories(${PROJECT_SOURCE_DIR}/include)

# 添加共享库
add_library(${PROJECT_NAME} SHARED src/hello.cpp)

# 添加可执行文件
add_executable(test example/test.cpp)

# 链接库文件
target_link_libraries(test ${PROJECT_NAME})

# 添加依赖关系
add_dependencies(test ${PROJECT_NAME})
