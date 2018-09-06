# Minimum CMake Required
cmake_minimum_required(VERSION 3.11)
enable_testing()
add_executable(test_compile test_compile.cpp)
add_test(NAME test_compile COMMAND test_compile)
