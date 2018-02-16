cmake_minimum_required(VERSION 3.5)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(hello_library CXX)

# External dependencies
add_subdirectory(gflags)
add_subdirectory(glog)
add_subdirectory(googletest)

# Library files
add_subdirectory(hello)

# Testing modules
add_subdirectory(test)

enable_testing()

add_test(NAME HelloTest COMMAND hello_test)
