#include "registers/MachRegister.h"
#include "registers/aarch64_regs.h"
#include "type_query_check.h"
#include <iostream>

int main() {
  TYPE_QUERIES_CHECK(Dyninst::aarch64::pc, isPC);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::x29, isFramePointer);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::fp, isFramePointer);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::sp, isStackPointer);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::wsp, isStackPointer);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::w8, isSyscallNumberReg);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::x8, isSyscallNumberReg);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::w0, isSyscallReturnValueReg);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::x0, isSyscallReturnValueReg);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::n, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::c, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::z, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::v, isFlag);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::z, isZeroFlag);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::w0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::w30, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::x0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::x30, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::b0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::b31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::d0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::d31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::h0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::h31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::q0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::q31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::s0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::s31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::hq0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::hq31, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::b0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::b31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::d0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::d31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::h0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::h31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::q0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::q31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::s0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::s31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::hq0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::hq31, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::fpcr, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::fpsr, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::ffr, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::vg, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zt0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::za, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zab0, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::p0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::p15, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::z0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::z31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zad0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zad7, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zah0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zah1, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zaq0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zaq15, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zas0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zas3, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::ffr, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::vg, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zt0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::za, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zab0, isVector);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::p0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::p15, isVector);

  TYPE_QUERIES_CHECK(Dyninst::aarch64::z0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::z31, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zad0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zad7, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zah0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zah1, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zaq0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zaq15, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zas0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::aarch64::zas3, isVector);

  return EXIT_SUCCESS;
}
