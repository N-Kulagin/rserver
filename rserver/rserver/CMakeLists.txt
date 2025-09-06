cmake_minimum_required(VERSION 3.10)
project(rserver)

set(SRCS main.cpp)

add_executable(${PROJECT_NAME} ${SRCS})
target_link_libraries(${PROJECT_NAME} PRIVATE core)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)