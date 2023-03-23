
cmake_minimum_required(VERSION 3.1...3.26)

project(
  AdventOfCodeExe
  LANGUAGES CXX)

# Setting which days will be built
set(DAY0_ENABLED TRUE)

# Sources and includes for the main executable
set(SOURCES
    src/advent_general.cpp
    src/main.cpp)
add_executable(
    ${PROJECT_NAME}
    ${SOURCES})
target_include_directories(
    ${PROJECT_NAME}
    PRIVATE
    include)

# Adding libraries for the various days
if(DAY0_ENABLED)
    add_library(
        day0lib
        days/day0/day0.h
        days/day0/day0.cpp)
    target_link_libraries(
        ${PROJECT_NAME}
        PRIVATE
        day0lib)
endif()