# 编译器
CC = gcc
CXX = g++

# 编译选项
CFLAGS = -Wall -O2
CXXFLAGS = -Wall -O2

# 源文件目录、目标文件目录、可执行文件目录
SRCDIR = src
OBJDIR = objs
BINDIR = bin

# 需要创建 obj 和 bin 目录
# 自动列出源文件 列出 src 目录下的所有 .c 和 .cpp 文件。
SRC = $(wildcard $(SRCDIR)/*.c $(SRCDIR)/*.cpp)

# 自动生成目标文件
OBJ = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(filter %.c,$(SRC))) \
      $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(filter %.cpp,$(SRC)))
# $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(filter %.c,$(SRC)))：将 .c 文件转换为 .o 文件，并指定输出目录 obj。
# $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(filter %.cpp,$(SRC)))：将 .cpp 文件转换为 .o 文件，并指定输出目录 obj。
# 可执行文件名
BIN = $(BINDIR)/demo2

# 默认目标
all: $(BIN)

# 链接目标文件生成可执行文件
$(BIN): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# 编译 .c 文件为 .o 文件
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# 编译 .cpp 文件为 .o 文件
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# 清理编译文件
clean:
	rm -rf $(OBJDIR) $(BINDIR)

# 伪目标
.PHONY: all clean
