# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(training-02 LANGUAGES CXX)

# require C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# example library
add_library(max max1.cpp)

# main code
add_executable(max_up max1.cpp)
target_link_libraries(max_up max)

# testing binary
add_executable(cpp_test test.cpp)
target_link_libraries(cpp_test max)

enable_testing()

add_test(
  NAME catch_test
  COMMAND $<TARGET_FILE:cpp_test> --success
  )