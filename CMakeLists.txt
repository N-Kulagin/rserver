cmake_minimum_required(VERSION 3.14)

include(CTest)
enable_testing()

string(TOLOWER ${CMAKE_BUILD_TYPE} BUILD_TYPE)

set(BIN_OUTPUT_DIR ${CMAKE_SOURCE_DIR}/bin/${BUILD_TYPE})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BIN_OUTPUT_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BIN_OUTPUT_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${BIN_OUTPUT_DIR}/lib)

add_custom_target(copy_compile_commands ALL
    COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_BINARY_DIR}/compile_commands.json
        ${CMAKE_SOURCE_DIR}/compile_commands.json
    COMMENT "Copying compile_commands.json to project root from ${CMAKE_BINARY_DIR}/compile_commands.json to ${CMAKE_SOURCE_DIR}/compile_commands.json.\ 
                This is needed to ensure VS Code clang-tidy extension can pick it up regardless of the build folder (debug or release) it was located in."
    VERBATIM
)

add_subdirectory(rserver)
add_subdirectory(CLI11)
add_subdirectory(FTXUI)
