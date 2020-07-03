cmake_minimum_required(VERSION 3.17)
project(ExampleProject)

set(CMAKE_CXX_STANDARD 17)

set(BINARY ${CMAKE_PROJECT_NAME})
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

add_executable(${BINARY}_run ${SOURCES})
add_library(${BINARY}_lib STATIC ${SOURCES})