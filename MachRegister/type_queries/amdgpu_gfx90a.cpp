#include "registers/MachRegister.h"
#include "registers/AMDGPU/amdgpu_gfx90a_regs.h"
#include "type_query_check.h"

namespace dreg = Dyninst::amdgpu_gfx90a;
constexpr auto arch = Dyninst::Arch_amdgpu_gfx90a;
using mreg = Dyninst::MachRegister;

int main() {
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::pc_all, isPC);

  TYPE_QUERIES_CHECK_INVALID(getFramePointer, Dyninst::Arch_amdgpu_gfx90a);
  TYPE_QUERIES_CHECK_INVALID(getStackPointer, Dyninst::Arch_amdgpu_gfx90a);
  TYPE_QUERIES_CHECK_INVALID(getSyscallNumberReg, Dyninst::Arch_amdgpu_gfx90a);
  TYPE_QUERIES_CHECK_INVALID(getSyscallReturnValueReg, Dyninst::Arch_amdgpu_gfx90a);
  TYPE_QUERIES_CHECK_INVALID(getSyscallNumberOReg, Dyninst::Arch_amdgpu_gfx90a);
  TYPE_QUERIES_CHECK_INVALID(getZeroFlag, Dyninst::Arch_amdgpu_gfx90a);

  /*********************************************************************
   *      General Purpose
   *********************************************************************/
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

  /*********************************************************************
   *      Control/Status
  *********************************************************************/
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::s0, isControlStatus);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::s101, isControlStatus);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::v0, isControlStatus);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::v255, isControlStatus);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::acc0, isControlStatus);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::acc255, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::vcc, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::vcc_lo, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::vcc_hi, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::exec, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::exec_lo, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::exec_hi, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::src_scc, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::src_vccz, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::src_execz, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::xnack_mask_lo, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::xnack_mask_hi, isControlStatus);

  /*********************************************************************
   *      Floating-Point
  *********************************************************************/
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::s0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::s101, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::v0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::v255, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::acc0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::acc255, isFloatingPoint);

  /*********************************************************************
   *      Vector
  *********************************************************************/
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::v0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::v255, isVector);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::acc0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx90a::acc255, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::ttmp0, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::ttmp15, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::mrt0, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::mrt7, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::null, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::pos0, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::pos3, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::param0, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::param31, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::attr0, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::attr31, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::s0, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx90a::s101, isVector);

  /*********************************************************************
   *      Filtering
  *********************************************************************/
  {
    auto is_arithmetic_vector = [](mreg reg) {
      auto const base = reg.getBaseRegister();
      auto const cat = reg.regClass();
      if(cat == Dyninst::amdgpu_gfx90a::ACC_VGPR) {
        return base == Dyninst::amdgpu_gfx90a::acc0;
      }
      if(cat == Dyninst::amdgpu_gfx90a::VGPR) {
        return base == Dyninst::amdgpu_gfx90a::v0;
      }
      return false;
    };

    for(auto reg : mreg::getAllRegistersForArch(arch)) {
      if(reg.isVector() && !reg.isControlStatus()) {
        TYPE_QUERIES_ASSERT_TRUE(reg, is_arithmetic_vector(reg));
      }
      if(is_arithmetic_vector(reg)) {
        TYPE_QUERIES_ASSERT_TRUE(reg, reg.isVector() && !reg.isControlStatus());
      }
    }
  }
  return EXIT_SUCCESS;
}
