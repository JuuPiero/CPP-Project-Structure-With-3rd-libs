cmake_minimum_required(VERSION 3.10)
project(Test)

include_directories(${CMAKE_SOURCE_DIR}/Dependencies/SDL2/include)
link_directories(${CMAKE_SOURCE_DIR}/Dependencies/SDL2/lib)

include_directories(${CMAKE_SOURCE_DIR}/Dependencies/GLFW/include)
link_directories(${CMAKE_SOURCE_DIR}/Dependencies/GLFW/lib)

add_subdirectory(Engine)
add_subdirectory(Game)
add_subdirectory(Dependencies)
