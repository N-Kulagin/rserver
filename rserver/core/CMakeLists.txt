cmake_minimum_required(VERSION 3.14)
project(core)

set(EXPORT_DIRECTORIES export)

set(SRCS source/network/socket.cpp)

add_library(core STATIC ${SRCS})
target_include_directories(core PUBLIC ${EXPORT_DIRECTORIES})
target_compile_features(core PRIVATE cxx_std_20)

# This is used only so that clang-tidy can find the standard library headers, 
# works only for Clang compiler
if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
    target_compile_options(core PRIVATE -isystem)
else()
    message(WARNING "Non-Clang compiler detected, ensure your IDE can locate standard library headers for clang-tidy.")
endif()
