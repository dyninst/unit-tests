project(elf)

add_executable(dynelf_includes includes.cpp)
target_compile_options(dynelf_includes PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(dynelf_includes PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(dynelf_includes PRIVATE Dyninst::symtabAPI)
target_include_directories(dynelf_includes PRIVATE "elf/h")

add_test(NAME dynelf_includes COMMAND dynelf_includes)
