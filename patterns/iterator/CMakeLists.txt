cmake_minimum_required(VERSION 3.10)
project(iterator)

include_directories(include)

set(SRC
    src/main.cpp
    src/iterator.cpp
)

add_executable(${PROJECT_NAME} ${SRC})
