project(parseAPI LANGUAGES CXX)

add_executable(syscall_x86 syscall-x86.cpp)
target_compile_options(syscall_x86 PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(syscall_x86 PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(syscall_x86 PRIVATE Dyninst::instructionAPI)

add_test(NAME instructionAPI_syscall_x86_32 COMMAND syscall_x86 "32")
add_test(NAME instructionAPI_syscall_x86_64 COMMAND syscall_x86 "64")


add_executable(invalid_insn invalid_instruction.cpp)
target_compile_options(invalid_insn PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(invalid_insn PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(invalid_insn PRIVATE Dyninst::instructionAPI)

add_test(NAME invalid_insn COMMAND invalid_insn)