project(type_query LANGUAGES CXX)

add_executable(type_query_x86 x86.cpp)
target_compile_options(type_query_x86 PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(type_query_x86 PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(type_query_x86 PRIVATE Dyninst::common)
add_test(NAME machregister_type_query_x86 COMMAND type_query_x86)