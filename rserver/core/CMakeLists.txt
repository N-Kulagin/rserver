cmake_minimum_required(VERSION 3.14)
project(core)

set(EXPORT_DIRECTORIES export)

set(SRCS source/network/socket.cpp)

set(TEST_SRCS tests/network/socket_test.cpp)

add_library(core STATIC ${SRCS})
target_link_libraries(core PRIVATE GTest::gtest_main)
target_include_directories(core PUBLIC ${EXPORT_DIRECTORIES})
target_compile_features(core PRIVATE cxx_std_20)

add_executable(socket_test ${TEST_SRCS})
target_link_libraries(socket_test PRIVATE GTest::gtest_main)
target_compile_features(socket_test PRIVATE cxx_std_20)

include(GoogleTest)
gtest_discover_tests(socket_test)