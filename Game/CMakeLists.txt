project(Test)

file(GLOB SOURCES "src/*.cpp")

add_executable(MyApp ${SOURCES})

target_link_libraries(MyApp MyMath)

target_include_directories(MyApp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(MyApp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../Engine/include)