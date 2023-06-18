cmake_minimum_required(VERSION 3.22)

add_executable(console main.cpp ${MY_INCLUDE_DIR}/console.ui ${MY_INCLUDE_DIR}/console.h console.cpp)

target_include_directories(console PRIVATE ${MY_INCLUDE_DIR})
