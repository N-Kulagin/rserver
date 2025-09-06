cmake_minimum_required(VERSION 3.14)
project(socket_test)

add_gtest_executable(socket_test socket_test.cpp)

target_link_libraries(socket_test PRIVATE core)