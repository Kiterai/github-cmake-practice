cmake_minimum_required(VERSION 3.11)

project(github-cmake-test)

add_library(hello lib.cpp)
target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(app main.cpp)
target_link_libraries(app PRIVATE hello)

find_package(Vulkan REQUIRED)
target_include_directories(app PRIVATE ${Vulkan_INCLUDE_DIRS})
target_link_libraries(app PRIVATE ${Vulkan_LIBRARIES})

set_target_properties(hello app PROPERTIES CXX_STANDARD 17)
