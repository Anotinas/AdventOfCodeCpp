
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

message("day0_enabled=${DAY0_ENABLED}")
# Adding libraries for the various days
if(DAY0_ENABLED)
target_include_directories(
    ${PROJECT_NAME}
    PRIVATE
    days/day0)
target_sources(
    ${PROJECT_NAME}
    PRIVATE
    days/day0/day0.cpp)
endif()

message("day3_enabled=${DAY3_ENABLED}")
if(DAY3_ENABLED)
    add_library(
        day3lib
        days/day3/day3.h
        days/day3/day3.cpp)
    target_link_libraries(
        ${PROJECT_NAME}
        PRIVATE
        day3lib)
endif()