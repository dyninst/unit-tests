#include "registers/MachRegister.h"
#include "registers/AMDGPU/amdgpu_gfx908_regs.h"
#include "type_query_check.h"

int main() {
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::pc_all, isPC);

  TYPE_QUERIES_CHECK_INVALID(getFramePointer, Dyninst::Arch_amdgpu_gfx908);
  TYPE_QUERIES_CHECK_INVALID(getStackPointer, Dyninst::Arch_amdgpu_gfx908);
  TYPE_QUERIES_CHECK_INVALID(getSyscallNumberReg, Dyninst::Arch_amdgpu_gfx908);
  TYPE_QUERIES_CHECK_INVALID(getSyscallReturnValueReg, Dyninst::Arch_amdgpu_gfx908);
  TYPE_QUERIES_CHECK_INVALID(getZeroFlag, Dyninst::Arch_amdgpu_gfx908);

  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::s0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::s101, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::ttmp0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::ttmp15, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::s0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::s101, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::v0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::v255, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::acc0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::acc255, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::s0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::s101, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::v0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::v255, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::acc0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::acc255, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::v0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::v255, isVector);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::acc0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx908::acc255, isVector);

  return EXIT_SUCCESS;
}
