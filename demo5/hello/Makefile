# 这是 hello 库的 Makefile

# 编译器和标志
CXX = g++
CXXFLAGS = -Wall -O2 -std=c++17

# 目标文件
OBJDIR = obj
LIBDIR = lib
SRC = hello.cpp
OBJ = $(OBJDIR)/hello.o
LIB = $(LIBDIR)/libhello.a

# 目标：静态库 libhello.a
$(LIB): $(OBJ)
	@mkdir -p $(OBJDIR) $(LIBDIR)
	ar rcs $@ $^
	@echo "Built static library: $@"

# 编译 hello.cpp
$(OBJDIR)/hello.o: $(SRC)
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# 清理目标
clean:
	rm -rf $(OBJDIR) $(LIBDIR)
	@echo "Cleaned hello library."

.PHONY: clean
