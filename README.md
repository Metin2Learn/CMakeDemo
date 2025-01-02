# CMAKE
      CMake 是一个跨平台的、开源的构建工具。 cmake 是  makefile 的上层工具，
    它们的目的正是为了产生可移植的makefile，并简化自己动手写makefile时的巨大工作量

    https://www.cnblogs.com/LXP-Never/p/15264243.html
    https://zhuanlan.zhihu.com/p/120240214
### 安装

CMake官网下载CMake
https://cmake.org/download/
sudo apt install cmake

```
cmake -version
 
```

### 使用

执行 "cmake ." 进行编译生成makefile
```
cmake .       当前目录
cmake ..      上级目录

cmake -B build      

cmake --help    查看 CMake 支持的生成器 MinGW 为生成器 
```

### windows指定编译器
windows下使用 Visual Studio编译器。 这样会生成 Visual Studio 的 .sln 文件，而不是 Makefile

```
cmake -G "MinGW Makefiles" -B build -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++
cmake --build build
 ```

cmake --build .   或  make 将上步生成的Makefile等文件生成 可执行文件

```
cmake --build build
cmake --build .
```

### MinGW  使用makefile 直接编译

```
make
```