cmake_minimum_required(VERSION 3.10)
project(dijkstra)

include_directories(include())

file(GLOB SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})
