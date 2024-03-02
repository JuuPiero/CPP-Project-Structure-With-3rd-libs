project(Test)

file(GLOB_RECURSE LIB_SOURCES "src/*.cpp")

add_library(TEngine ${LIB_SOURCES})

# target_link_libraries(TEngine PRIVATE SDL2)
target_link_libraries(TEngine SDL2 glfw3 glfw3dll)

target_include_directories(TEngine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
