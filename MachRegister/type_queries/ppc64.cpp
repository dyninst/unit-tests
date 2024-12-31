#include "registers/MachRegister.h"
#include "registers/ppc64_regs.h"
#include "type_query_check.h"
#include <iostream>

int main() {
  TYPE_QUERIES_CHECK(Dyninst::ppc64::pc, isPC);

  TYPE_QUERIES_CHECK(Dyninst::ppc64::r1, isFramePointer);

  TYPE_QUERIES_CHECK(Dyninst::ppc64::r1, isStackPointer);

  TYPE_QUERIES_CHECK(Dyninst::ppc64::r0, isSyscallNumberReg);

  TYPE_QUERIES_CHECK(Dyninst::ppc64::r3, isSyscallReturnValueReg);

  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr0l, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr0g, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr0e, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr0s, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr7l, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr7g, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr7e, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr7s, isFlag);

  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr0, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr7, isFlag);

  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr0e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr1e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr2e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr3e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr4e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr5e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr6e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::cr7e, isZeroFlag);

  TYPE_QUERIES_CHECK(Dyninst::ppc64::r0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::r31, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::ppc64::ctr, isControlStatus);

  TYPE_QUERIES_CHECK(Dyninst::ppc64::fpr0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::fpr31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::fsr0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::fsr31, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::ppc64::vsr0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::vsr63, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::ppc64::vsr0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::ppc64::vsr63, isVector);

  return EXIT_SUCCESS;
}
