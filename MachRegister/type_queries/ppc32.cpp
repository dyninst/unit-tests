#include "registers/MachRegister.h"
#include "registers/ppc32_regs.h"
#include "type_query_check.h"
#include <iostream>

constexpr auto arch = Dyninst::Arch_ppc32;
using mreg = Dyninst::MachRegister;

int main() {
  TYPE_QUERIES_CHECK(Dyninst::ppc32::pc, isPC);
  TYPE_QUERIES_CHECK(mreg::getPC(arch), isPC);

  TYPE_QUERIES_CHECK(Dyninst::ppc32::r1, isFramePointer);
  TYPE_QUERIES_CHECK(mreg::getFramePointer(arch), isFramePointer);

  TYPE_QUERIES_CHECK(Dyninst::ppc32::r1, isStackPointer);
  TYPE_QUERIES_CHECK(mreg::getStackPointer(arch), isStackPointer);

  TYPE_QUERIES_CHECK(Dyninst::ppc32::r0, isSyscallNumberReg);
  TYPE_QUERIES_CHECK(mreg::getSyscallNumberReg(arch), isSyscallNumberReg);

  TYPE_QUERIES_CHECK(Dyninst::ppc32::r3, isSyscallReturnValueReg);
  TYPE_QUERIES_CHECK(mreg::getSyscallReturnValueReg(arch), isSyscallReturnValueReg);

  /*********************************************************************
   *      General Purpose
   *********************************************************************/
  TYPE_QUERIES_CHECK(Dyninst::ppc32::r0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::r31, isGeneralPurpose);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::ppc32::fpr0, isGeneralPurpose);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::ppc32::fpr1, isGeneralPurpose);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::ppc32::fsr0, isGeneralPurpose);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::ppc32::fsr1, isGeneralPurpose);

  /*********************************************************************
   *      Flags
  *********************************************************************/
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr0l, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr0g, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr0e, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr0s, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr7l, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr7g, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr7e, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr7s, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr0, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr7, isFlag);
  TYPE_QUERIES_CHECK_FALSE(Dyninst::ppc32::fpscw, isFlag);

  /*********************************************************************
   *      Zero Flag
  *********************************************************************/
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr0e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr1e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr2e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr3e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr4e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr5e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr6e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr7e, isZeroFlag);

  /*********************************************************************
   *      Control/Status
  *********************************************************************/
  TYPE_QUERIES_CHECK(Dyninst::ppc32::ctr, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpscw, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpscw0, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpscw1, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpscw2, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpscw3, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpscw4, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpscw5, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpscw6, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpscw7, isControlStatus);

  /*********************************************************************
   *      Floating-Point
  *********************************************************************/
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpr0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpr31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fsr0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fsr31, isFloatingPoint);

  /*********************************************************************
   *      Filtering
  *********************************************************************/
  {
    auto is_arithmetic_float = [](mreg reg) {
      auto const base = reg.getBaseRegister();
      auto const cat = reg.regClass();
      if(cat == Dyninst::ppc32::FPR) {
        return base == Dyninst::ppc32::fpr0;
      }
      if(cat == Dyninst::ppc32::FSR) {
        return base == Dyninst::ppc32::fsr0;
      }
      return false;
    };

    for(auto reg : mreg::getAllRegistersForArch(arch)) {
      if(reg.isFloatingPoint() && !reg.isVector() && !reg.isControlStatus()) {
        TYPE_QUERIES_ASSERT_TRUE(reg, is_arithmetic_float(reg));
      }
      if(is_arithmetic_float(reg)) {
        TYPE_QUERIES_ASSERT_TRUE(reg, reg.isFloatingPoint() && !reg.isVector() && !reg.isControlStatus());
      }
    }
  }
  return EXIT_SUCCESS;
}
