# 这是主项目的 Makefile

# 编译器和标志
CXX = g++
CXXFLAGS = -Wall -O2 -std=c++17

# 目录设置
SRC_DIR = src
OBJ_DIR = objs
BIN_DIR = bin
HELLO_LIB_DIR = hello/lib

# 主项目源文件
SRC = $(SRC_DIR)/test.cpp
OBJ = $(OBJ_DIR)/test.o
BIN = $(BIN_DIR)/test

# 依赖的 hello 静态库
HELLO_LIB = $(HELLO_LIB_DIR)/libhello.a

# 默认目标：构建主项目  -p
$(BIN): $(OBJ) $(HELLO_LIB)
	@mkdir  $(BIN_DIR) 
	$(CXX) $(CXXFLAGS) -o $@ $^
	@echo "Built main project: $@"

# 编译 test.cpp
$(OBJ_DIR)/test.o: $(SRC)
	@mkdir  $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# 清理目标
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)
	@echo "Cleaned main project."

.PHONY: clean
