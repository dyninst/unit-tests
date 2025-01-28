project(parseAPI LANGUAGES CXX)

add_executable(lea_nop_x86 lea-nop-x86.cpp)
target_compile_options(lea_nop_x86 PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(lea_nop_x86 PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(lea_nop_x86 PRIVATE Dyninst::parseAPI)

add_test(NAME parseAPI_lea_nop_x86 COMMAND lea_nop_x86)

add_executable(parse_amdgpu branchInfo.cpp)
target_compile_options(parse_amdgpu PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(parse_amdgpu PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(parse_amdgpu PRIVATE Dyninst::parseAPI)
add_custom_command(
  TARGET parse_amdgpu POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_directory
  ${CMAKE_CURRENT_SOURCE_DIR}/amdgpu_test_case
  ${CMAKE_CURRENT_BINARY_DIR}/amdgpu_test_case)

add_test(NAME parseAPI_parse_amdgpu_908 COMMAND parse_amdgpu amdgpu_test_case/1-908.gpubin 1.out)
add_test(compare_parse_amdgpu_908 ${CMAKE_COMMAND} -E compare_files 1.out amdgpu_test_case/1.out)
add_test(NAME parseAPI_parse_amdgpu_90a COMMAND parse_amdgpu amdgpu_test_case/2-90a.gpubin 2.out)
add_test(compare_parse_amdgpu_908 ${CMAKE_COMMAND} -E compare_files 2.out amdgpu_test_case/2.out)
#add_test(NAME parseAPI_parse_amdgpu_940 COMMAND parse_amdgpu amdgpu_test_case/3-940.gpubin 3.out)
#add_test(compare_parse_amdgpu_908 ${CMAKE_COMMAND} -E compare_files 3.out amdgpu_test_case/3.out)

