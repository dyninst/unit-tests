cmake_minimum_required(VERSION 3.13.0)
project(unit-tests)

find_package(Dyninst 12.3.0 REQUIRED COMPONENTS parseAPI instructionAPI)

if(NOT DYNINST_SOURCE_TREE)
  message(FATAL_ERROR"Must specify DYNINST_SOURCE_TREE")
endif()

set(UNIT_TESTS_INCLUDES ${DYNINST_SOURCE_TREE})

set(UNIT_TESTS_WARNING_FLAGS -Wall -Wextra -pedantic)

enable_testing()

add_subdirectory(instructionAPI)
add_subdirectory(parseAPI)
