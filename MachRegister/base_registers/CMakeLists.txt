project(base_registers LANGUAGES CXX)

add_executable(basereg_x86 x86.cpp)
target_compile_options(basereg_x86 PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(basereg_x86 PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(basereg_x86 PRIVATE Dyninst::common)
add_test(NAME machregister_basereg_x86 COMMAND basereg_x86)

add_executable(basereg_x86_64 x86_64.cpp)
target_compile_options(basereg_x86_64 PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(basereg_x86_64 PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(basereg_x86_64 PRIVATE Dyninst::common)
add_test(NAME machregister_basereg_x86_64 COMMAND basereg_x86_64)

add_executable(basereg_aarch64 aarch64.cpp)
target_compile_options(basereg_aarch64 PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(basereg_aarch64 PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(basereg_aarch64 PRIVATE Dyninst::common)
add_test(NAME machregister_basereg_aarch64 COMMAND basereg_aarch64)

add_executable(basereg_ppc64 ppc64.cpp)
target_compile_options(basereg_ppc64 PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(basereg_ppc64 PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(basereg_ppc64 PRIVATE Dyninst::common)
add_test(NAME machregister_basereg_ppc64 COMMAND basereg_ppc64)

add_executable(basereg_ppc32 ppc32.cpp)
target_compile_options(basereg_ppc32 PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(basereg_ppc32 PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(basereg_ppc32 PRIVATE Dyninst::common)
add_test(NAME machregister_basereg_ppc32 COMMAND basereg_ppc32)


# These are disabled until we can decide on how to represent base registers for AMDGPU
add_executable(basereg_amdgpu_gfx908 amdgpu_gfx908.cpp)
target_compile_options(basereg_amdgpu_gfx908 PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(basereg_amdgpu_gfx908 PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(basereg_amdgpu_gfx908 PRIVATE Dyninst::common)
#add_test(NAME basereg_amdgpu_gfx908 COMMAND basereg_amdgpu_gfx908)

add_executable(basereg_amdgpu_gfx90a amdgpu_gfx90a.cpp)
target_compile_options(basereg_amdgpu_gfx90a PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(basereg_amdgpu_gfx90a PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(basereg_amdgpu_gfx90a PRIVATE Dyninst::common)
#add_test(NAME basereg_amdgpu_gfx90a COMMAND basereg_amdgpu_gfx90a)

add_executable(basereg_amdgpu_gfx940 amdgpu_gfx940.cpp)
target_compile_options(basereg_amdgpu_gfx940 PRIVATE ${UNIT_TESTS_WARNING_FLAGS})
target_include_directories(basereg_amdgpu_gfx940 PRIVATE ${UNIT_TESTS_INCLUDES})
target_link_libraries(basereg_amdgpu_gfx940 PRIVATE Dyninst::common)
#add_test(NAME basereg_amdgpu_gfx940 COMMAND basereg_amdgpu_gfx940)
