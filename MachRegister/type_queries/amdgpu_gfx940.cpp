#include "registers/MachRegister.h"
#include "registers/AMDGPU/amdgpu_gfx940_regs.h"
#include "type_query_check.h"

namespace dreg = Dyninst::amdgpu_gfx940;
constexpr auto arch = Dyninst::Arch_amdgpu_gfx940;
using mreg = Dyninst::MachRegister;

int main() {
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::pc_all, isPC);

  TYPE_QUERIES_CHECK_INVALID(getFramePointer, Dyninst::Arch_amdgpu_gfx940);
  TYPE_QUERIES_CHECK_INVALID(getStackPointer, Dyninst::Arch_amdgpu_gfx940);
  TYPE_QUERIES_CHECK_INVALID(getSyscallNumberReg, Dyninst::Arch_amdgpu_gfx940);
  TYPE_QUERIES_CHECK_INVALID(getSyscallReturnValueReg, Dyninst::Arch_amdgpu_gfx940);
  TYPE_QUERIES_CHECK_INVALID(getSyscallNumberOReg, Dyninst::Arch_amdgpu_gfx940);
  TYPE_QUERIES_CHECK_INVALID(getZeroFlag, Dyninst::Arch_amdgpu_gfx940);

  /*********************************************************************
   *      General Purpose
   *********************************************************************/
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::s0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::s101, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::ttmp0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::ttmp15, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::s0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::s101, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::v0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::v255, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::acc0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::acc255, isGeneralPurpose);

  /*********************************************************************
   *      Control/Status
  *********************************************************************/
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::s0, isControlStatus);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::s101, isControlStatus);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::v0, isControlStatus);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::v255, isControlStatus);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::acc0, isControlStatus);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::acc255, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::vcc, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::vcc_lo, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::vcc_hi, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::exec, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::exec_lo, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::exec_hi, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::src_scc, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::src_vccz, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::src_execz, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::xnack_mask_lo, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::xnack_mask_hi, isControlStatus);

  /*********************************************************************
   *      Floating-Point
  *********************************************************************/
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::s0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::s101, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::v0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::v255, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::acc0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::acc255, isFloatingPoint);

  /*********************************************************************
   *      Vector
  *********************************************************************/
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::v0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::v255, isVector);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::acc0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::amdgpu_gfx940::acc255, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::ttmp0, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::ttmp15, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::mrt0, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::mrt7, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::null, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::pos0, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::pos3, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::param0, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::param31, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::attr0, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::attr31, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::s0, isVector);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::amdgpu_gfx940::s101, isVector);

  /*********************************************************************
   *      Filtering
  *********************************************************************/
  {
    auto is_arithmetic_vector = [](mreg reg) {
      auto const base = reg.getBaseRegister();
      auto const cat = reg.regClass();
      if(cat == Dyninst::amdgpu_gfx940::ACC_VGPR) {
        return base == Dyninst::amdgpu_gfx940::acc0;
      }
      if(cat == Dyninst::amdgpu_gfx940::VGPR) {
        return base == Dyninst::amdgpu_gfx940::v0;
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
