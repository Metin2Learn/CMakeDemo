# 定义编译器
CXX = g++

# 定义编译选项
CXXFLAGS = -std=c++17 -Wall -I./

# 定义源文件目录
SRC_DIR = .

# 定义源文件
SRCS = $(SRC_DIR)/test.cpp

# 定义输出的可执行文件名
TARGET = demo1

# 默认目标
all: $(TARGET)

# 生成可执行文件
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# 清理编译文件 (Linux)
# clean:
# 	rm -f $(TARGET)

# 清理编译文件 (Windows)
clean:
	del /Q $(TARGET)
# 伪目标
.PHONY: all clean
