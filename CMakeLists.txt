cmake_minimum_required(VERSION 3.13.0)
project(unit-tests)

find_package(Dyninst 13.0.0 REQUIRED COMPONENTS parseAPI instructionAPI)

if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
endif()

if(NOT DYNINST_SOURCE_TREE)
  message(FATAL_ERROR "Must specify DYNINST_SOURCE_TREE")
endif()

set(UNIT_TESTS_INCLUDES ${DYNINST_SOURCE_TREE})

set(UNIT_TESTS_WARNING_FLAGS -Wall -Wextra -pedantic)

list(INSERT CMAKE_MODULE_PATH 0 "${PROJECT_SOURCE_DIR}/cmake"
     "${PROJECT_SOURCE_DIR}/cmake/tpls" "${PROJECT_SOURCE_DIR}/cmake/Modules")

include(DyninstElfUtils)

enable_testing()

add_subdirectory(dwarf)
add_subdirectory(elf)
add_subdirectory(instructionAPI)
add_subdirectory(parseAPI)
