cmake_minimum_required(VERSION 3.13)

project(calc C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

# include_directories(include)

set(HEADERS
    include/calc.hpp
    include/utils.hpp
)

set(SOURCES
    src/calc.cpp
    src/utils.cpp
)

# file(GLOB SOURCES "src/*.cpp")

# add_executable(${PROJECT_NAME} ${SOURCES})

add_library(${PROJECT_NAME} STATIC ${SOURCES} ${HEADERS})

add_subdirectory(test)
