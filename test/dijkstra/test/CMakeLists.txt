cmake_minimum_required(VERSION 3.13)

set(THIS dijkstra_test)

set(SOURCES
    dijkstra_test.cpp
)

add_executable(${THIS} ${SOURCES})
target_link_libraries(${THIS} PUBLIC
    gtest_main
    dijkstra
)

add_test(
    NAME ${THIS}
    COMMAND ${THIS}
)