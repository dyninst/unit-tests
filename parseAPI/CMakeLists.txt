project(parseAPI LANGUAGES CXX)

add_executable(lea_nop_x86 lea-nop-x86.cpp)
target_compile_options(lea_nop_x86 PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(lea_nop_x86 PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(lea_nop_x86 PRIVATE Dyninst::parseAPI)

add_test(NAME parseAPI_lea_nop_x86 COMMAND lea_nop_x86)
