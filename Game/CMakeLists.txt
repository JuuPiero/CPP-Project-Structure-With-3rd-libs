project(Test)

file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*/*.cpp")

add_executable(MyApp ${SOURCES})

target_link_libraries(MyApp TEngine)

target_include_directories(MyApp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(MyApp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Engine/include)