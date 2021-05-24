cmake_minimum_required(VERSION 3.10)

set(THIS dijkstra)

project(${THIS} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

# include_directories(include)

set(HEADERS
    include/graph.hpp
)

# file(GLOB SOURCES "src/*.cpp")

set(SOURCES
    src/graph.cpp
)

# add_executable(${PROJECT_NAME} ${SOURCES})

add_library(${THIS} STATIC ${SOURCES} ${HEADERS})

add_subdirectory(test)