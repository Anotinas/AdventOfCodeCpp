
cmake_minimum_required(VERSION 3.1...3.26)

project(
  AdventOfCodeExe
  LANGUAGES CXX)

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

# Sources and includes for Day0
target_include_directories(
    ${PROJECT_NAME}
    PRIVATE
    days/day0)
target_sources(
    ${PROJECT_NAME}
    PRIVATE
    days/day0/day0.cpp)
