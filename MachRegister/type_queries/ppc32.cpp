#include "registers/MachRegister.h"
#include "registers/ppc32_regs.h"
#include "type_query_check.h"
#include <iostream>

int main() {
  TYPE_QUERIES_CHECK(Dyninst::ppc32::pc, isPC);

  TYPE_QUERIES_CHECK(Dyninst::ppc32::r1, isFramePointer);

  TYPE_QUERIES_CHECK(Dyninst::ppc32::r1, isStackPointer);

  TYPE_QUERIES_CHECK(Dyninst::ppc32::r0, isSyscallNumberReg);

  TYPE_QUERIES_CHECK(Dyninst::ppc32::r3, isSyscallReturnValueReg);

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

  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr0e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr1e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr2e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr3e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr4e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr5e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr6e, isZeroFlag);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::cr7e, isZeroFlag);

  TYPE_QUERIES_CHECK(Dyninst::ppc32::r0, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::r31, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::ppc32::ctr, isControlStatus);

  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpr0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fpr31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fsr0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::ppc32::fsr31, isFloatingPoint);

  return EXIT_SUCCESS;
}
