project(Test)

file(GLOB LIB_SOURCES "src/*.cpp")

# Create the library
add_library(MyMath ${LIB_SOURCES})

target_include_directories(MyMath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

