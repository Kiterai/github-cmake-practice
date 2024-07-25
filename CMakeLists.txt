cmake_minimum_required(VERSION 3.11)

project(github-cmake-test)

add_library(hello lib.cpp)
target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(app main.cpp)
target_link_libraries(app PRIVATE hello)
