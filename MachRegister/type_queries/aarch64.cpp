#include "registers/MachRegister.h"
#include "registers/aarch64_regs.h"
#include "type_query_check.h"
#include <iostream>

static bool is_arithmetic_vector(Dyninst::MachRegister);

namespace dreg = Dyninst::aarch64;
constexpr auto arch = Dyninst::Arch_aarch64;
using mreg = Dyninst::MachRegister;

int main() {
  TYPE_QUERIES_CHECK(dreg::pc, isPC);
  TYPE_QUERIES_CHECK(mreg::getPC(arch), isPC);

  TYPE_QUERIES_CHECK(dreg::x29, isFramePointer);
  TYPE_QUERIES_CHECK(dreg::fp, isFramePointer);
  TYPE_QUERIES_CHECK(mreg::getFramePointer(arch), isFramePointer);

  TYPE_QUERIES_CHECK(dreg::sp, isStackPointer);
  TYPE_QUERIES_CHECK(dreg::wsp, isStackPointer);
  TYPE_QUERIES_CHECK(dreg::wsp.getBaseRegister(), isStackPointer);
  TYPE_QUERIES_CHECK(mreg::getStackPointer(arch), isStackPointer);

  TYPE_QUERIES_CHECK(dreg::w8, isSyscallNumberReg);
  TYPE_QUERIES_CHECK(dreg::x8, isSyscallNumberReg);
  TYPE_QUERIES_CHECK(mreg::getSyscallNumberReg(arch), isSyscallNumberReg);

  TYPE_QUERIES_CHECK(dreg::w0, isSyscallReturnValueReg);
  TYPE_QUERIES_CHECK(dreg::x0, isSyscallReturnValueReg);

  /*********************************************************************
   *      General Purpose
   *********************************************************************/
  TYPE_QUERIES_CHECK(dreg::w0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(dreg::w30, isGeneralPurpose);
  TYPE_QUERIES_CHECK(dreg::x0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(dreg::x30, isGeneralPurpose);

  /*********************************************************************
   *      Flags
  *********************************************************************/
  TYPE_QUERIES_CHECK(dreg::pstate, isFlag);
  TYPE_QUERIES_CHECK(dreg::n, isFlag);
  TYPE_QUERIES_CHECK(dreg::z, isFlag);
  TYPE_QUERIES_CHECK(dreg::c, isFlag);
  TYPE_QUERIES_CHECK(dreg::v, isFlag);
  TYPE_QUERIES_CHECK(dreg::pstate.getBaseRegister(), isFlag);
  TYPE_QUERIES_CHECK(dreg::n.getBaseRegister(), isFlag);
  TYPE_QUERIES_CHECK(dreg::z.getBaseRegister(), isFlag);
  TYPE_QUERIES_CHECK(dreg::c.getBaseRegister(), isFlag);
  TYPE_QUERIES_CHECK(dreg::v.getBaseRegister(), isFlag);

  /*********************************************************************
   *      Zero Flag
  *********************************************************************/
  TYPE_QUERIES_CHECK(dreg::z, isZeroFlag);
  TYPE_QUERIES_CHECK_FALSE(dreg::pstate, isZeroFlag);
  TYPE_QUERIES_CHECK_FALSE(dreg::n, isZeroFlag);
  TYPE_QUERIES_CHECK_FALSE(dreg::c, isZeroFlag);
  TYPE_QUERIES_CHECK_FALSE(dreg::v, isZeroFlag);
  TYPE_QUERIES_CHECK(mreg::getZeroFlag(arch), isZeroFlag);

  /*********************************************************************
   *      Control/Status
  *********************************************************************/
  TYPE_QUERIES_CHECK(dreg::p0, isControlStatus);
  TYPE_QUERIES_CHECK(dreg::p15, isControlStatus);
  TYPE_QUERIES_CHECK(dreg::fpcr, isControlStatus);
  TYPE_QUERIES_CHECK(dreg::fpsr, isControlStatus);
  TYPE_QUERIES_CHECK(dreg::ffr, isControlStatus);
  TYPE_QUERIES_CHECK(dreg::vg, isControlStatus);
  TYPE_QUERIES_CHECK(dreg::zt0, isControlStatus);

  /*********************************************************************
   *      Floating-Point
  *********************************************************************/
  TYPE_QUERIES_CHECK(dreg::b0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::b31, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::d0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::d31, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::h0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::h31, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::q0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::q31, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::s0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::s31, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::hq0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::hq31, isFloatingPoint);

  TYPE_QUERIES_CHECK(dreg::fpcr, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::fpsr, isFloatingPoint);

  TYPE_QUERIES_CHECK(dreg::ffr, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::vg, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::zt0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::za, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::zab0, isFloatingPoint);

  TYPE_QUERIES_CHECK(dreg::p0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::p15, isFloatingPoint);

  TYPE_QUERIES_CHECK(dreg::z0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::z31, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::zad0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::zad7, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::zah0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::zah1, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::zaq0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::zaq15, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::zas0, isFloatingPoint);
  TYPE_QUERIES_CHECK(dreg::zas3, isFloatingPoint);

  /*********************************************************************
   *      Vector
  *********************************************************************/
  TYPE_QUERIES_CHECK(dreg::ffr, isVector);
  TYPE_QUERIES_CHECK(dreg::vg, isVector);
  TYPE_QUERIES_CHECK(dreg::zt0, isVector);
  TYPE_QUERIES_CHECK(dreg::za, isVector);
  TYPE_QUERIES_CHECK(dreg::zab0, isVector);
  TYPE_QUERIES_CHECK(dreg::p0, isVector);
  TYPE_QUERIES_CHECK(dreg::p15, isVector);
  TYPE_QUERIES_CHECK(dreg::z0, isVector);
  TYPE_QUERIES_CHECK(dreg::z31, isVector);
  TYPE_QUERIES_CHECK(dreg::zad0, isVector);
  TYPE_QUERIES_CHECK(dreg::zad7, isVector);
  TYPE_QUERIES_CHECK(dreg::zah0, isVector);
  TYPE_QUERIES_CHECK(dreg::zah1, isVector);
  TYPE_QUERIES_CHECK(dreg::zaq0, isVector);
  TYPE_QUERIES_CHECK(dreg::zaq15, isVector);
  TYPE_QUERIES_CHECK(dreg::zas0, isVector);
  TYPE_QUERIES_CHECK(dreg::zas3, isVector);


  /*********************************************************************
   *      Filtering
  *********************************************************************/
  {
    using mr = Dyninst::MachRegister;
    for(auto reg : mr::getAllRegistersForArch(arch)) {
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

static bool is_arithmetic_vector(Dyninst::MachRegister reg) {
  switch(reg) {
    case dreg::iz0:
    case dreg::iz1:
    case dreg::iz2:
    case dreg::iz3:
    case dreg::iz4:
    case dreg::iz5:
    case dreg::iz6:
    case dreg::iz7:
    case dreg::iz8:
    case dreg::iz9:
    case dreg::iz10:
    case dreg::iz11:
    case dreg::iz12:
    case dreg::iz13:
    case dreg::iz14:
    case dreg::iz15:
    case dreg::iz16:
    case dreg::iz17:
    case dreg::iz18:
    case dreg::iz19:
    case dreg::iz20:
    case dreg::iz21:
    case dreg::iz22:
    case dreg::iz23:
    case dreg::iz24:
    case dreg::iz25:
    case dreg::iz26:
    case dreg::iz27:
    case dreg::iz28:
    case dreg::iz29:
    case dreg::iz30:
    case dreg::iz31:
    case dreg::iza:
    case dreg::izab0:
    case dreg::izad0:
    case dreg::izad1:
    case dreg::izad2:
    case dreg::izad3:
    case dreg::izad4:
    case dreg::izad5:
    case dreg::izad6:
    case dreg::izad7:
    case dreg::izah0:
    case dreg::izah1:
    case dreg::izaq0:
    case dreg::izaq1:
    case dreg::izaq2:
    case dreg::izaq3:
    case dreg::izaq4:
    case dreg::izaq5:
    case dreg::izaq6:
    case dreg::izaq7:
    case dreg::izaq8:
    case dreg::izaq9:
    case dreg::izaq10:
    case dreg::izaq11:
    case dreg::izaq12:
    case dreg::izaq13:
    case dreg::izaq14:
    case dreg::izaq15:
    case dreg::izas0:
    case dreg::izas1:
    case dreg::izas2:
    case dreg::izas3:
      return true;
  }
  return false;
}
