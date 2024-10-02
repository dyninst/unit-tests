project(dwarf)

add_executable(dwarf_includes includes.cpp)
target_compile_options(dwarf_includes PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(dwarf_includes PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(dwarf_includes PRIVATE Dyninst::symtabAPI)
target_include_directories(dwarf_includes PRIVATE "dwarf/h")

add_test(NAME dwarf_includes COMMAND dwarf_includes)
