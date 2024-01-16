cmake_minimum_required(VERSION 3.12)

set(PROJECT_NAME "Timer")

project(${PROJECT_NAME})

add_executable(
    ${PROJECT_NAME}
    timer.cpp
)

set_target_properties(
    ${PROJECT_NAME}
    PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)