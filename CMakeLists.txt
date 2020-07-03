cmake_minimum_required(VERSION 3.17)
project(ExampleProject)

set(CMAKE_CXX_STANDARD 17)


include_directories(src)

add_subdirectory(src)
add_subdirectory(test)

add_subdirectory(lib/googletest)

#add_executable(ExampleProject src/main.cpp src/Formula.h src/Formula.cpp)