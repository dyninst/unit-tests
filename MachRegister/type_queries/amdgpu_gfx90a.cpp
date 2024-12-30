#include "registers/MachRegister.h"
#include "registers/AMDGPU/amdgpu_gfx90a_regs.h"
#include "type_query_check.h"

int main() {
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::pc_all, isPC);

  TYPE_QUERIES_CHECK_INVALID(getFramePointer, Dyninst::Arch_amdgpu_gfx90a);
  TYPE_QUERIES_CHECK_INVALID(getStackPointer, Dyninst::Arch_amdgpu_gfx90a);
  TYPE_QUERIES_CHECK_INVALID(getSyscallNumberReg, Dyninst::Arch_amdgpu_gfx90a);
  TYPE_QUERIES_CHECK_INVALID(getSyscallReturnValueReg, Dyninst::Arch_amdgpu_gfx90a);
  TYPE_QUERIES_CHECK_INVALID(getZeroFlag, Dyninst::Arch_amdgpu_gfx90a);

  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::s0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::s101, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::ttmp0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::ttmp15, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::s0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::s101, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::v0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::v255, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::acc0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::acc255, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::s0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::s101, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::v0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::v255, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::acc0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::acc255, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::v0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::v255, isVector);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::acc0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::acc255, isVector);

  return EXIT_SUCCESS;
}
