cmake_minimum_required(VERSION 3.10)
project(core)

set(EXPORT_DIRECTORIES export)
set(SRCS source/network/socket.cpp)

add_library(core STATIC ${SRCS})

target_include_directories(core PUBLIC ${EXPORT_DIRECTORIES})

target_compile_features(core PRIVATE cxx_std_20)