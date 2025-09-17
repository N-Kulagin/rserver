cmake_minimum_required(VERSION 3.14)
project(rserver)

set(SRCS main.cpp)

add_executable(${PROJECT_NAME} ${SRCS})
target_link_libraries(${PROJECT_NAME} PRIVATE core PRIVATE CLI11::CLI11)

# Used for clang-tidy because CMake won't bother to add includes from header-only library into a compile_commands.json
target_include_directories(${PROJECT_NAME} PRIVATE CLI11/include)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)

set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${BIN_OUTPUT_DIR})
