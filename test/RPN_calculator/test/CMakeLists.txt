cmake_minimum_required(VERSION 3.13)

set(THIS calc-test)

file(GLOB SOURCES "*.cpp")

add_executable(${THIS} ${SOURCES})
target_link_libraries(${THIS} PUBLIC
    gtest_main
    calc
)

add_test(
    NAME ${THIS}
    COMMAND ${THIS}
)