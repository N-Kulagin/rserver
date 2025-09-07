cmake_minimum_required(VERSION 3.14)

include(CTest)
enable_testing()

string(TOLOWER ${CMAKE_BUILD_TYPE} BUILD_TYPE)

set(BIN_OUTPUT_DIR ${CMAKE_SOURCE_DIR}/bin/${BUILD_TYPE})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BIN_OUTPUT_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BIN_OUTPUT_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BIN_OUTPUT_DIR}/lib)

add_subdirectory(rserver)
add_subdirectory(CLI11)
add_subdirectory(FTXUI)
