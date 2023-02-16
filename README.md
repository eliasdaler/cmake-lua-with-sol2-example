This repo shows how to make a simple C++ program which uses sol2 and builds Lua manually with CMake.

Also see: https://edw.is/using-lua-with-cpp/

# Dependencies

* git
* CMake 3.18+
* A compiler which can compiler C++17 (and later)

# How-to

```sh
git submodule update --init --recursive
mkdir build
cd build
cmake ..
cmake --build .
./src/game
```
