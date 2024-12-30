#include "registers/MachRegister.h"
#include "registers/x86_regs.h"
#include "type_query_check.h"

int main() {
  TYPE_QUERIES_CHECK(Dyninst::x86::eip, isPC);

  TYPE_QUERIES_CHECK(Dyninst::x86::bp, isFramePointer);
  TYPE_QUERIES_CHECK(Dyninst::x86::ebp, isFramePointer);

  TYPE_QUERIES_CHECK(Dyninst::x86::sp, isStackPointer);
  TYPE_QUERIES_CHECK(Dyninst::x86::esp, isStackPointer);

  TYPE_QUERIES_CHECK(Dyninst::x86::al, isSyscallNumberReg);
  TYPE_QUERIES_CHECK(Dyninst::x86::ah, isSyscallNumberReg);
  TYPE_QUERIES_CHECK(Dyninst::x86::ax, isSyscallNumberReg);
  TYPE_QUERIES_CHECK(Dyninst::x86::eax, isSyscallNumberReg);

  TYPE_QUERIES_CHECK(Dyninst::x86::al, isSyscallReturnValueReg);
  TYPE_QUERIES_CHECK(Dyninst::x86::ah, isSyscallReturnValueReg);
  TYPE_QUERIES_CHECK(Dyninst::x86::ax, isSyscallReturnValueReg);
  TYPE_QUERIES_CHECK(Dyninst::x86::eax, isSyscallReturnValueReg);

  TYPE_QUERIES_CHECK(Dyninst::x86::cf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::flag1, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::pf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::flag3, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::af, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::flag5, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::zf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::sf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::tf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::if_, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::df, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::of, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::flagc, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::flagd, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::nt_, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::flagf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::rf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::vm, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::ac, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::vif, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::vip, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86::id, isFlag);

  TYPE_QUERIES_CHECK(Dyninst::x86::zf, isZeroFlag);

  TYPE_QUERIES_CHECK(Dyninst::x86::al, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::ah, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::ax, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::eax, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::x86::bl, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::bh, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::bx, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::ebx, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::x86::cl, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::ch, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::cx, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::ecx, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::x86::dl, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::dh, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::dx, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::edx, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::x86::si, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::esi, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::di, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86::edi, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::x86::st0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86::st7, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86::mm0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86::mm7, isFloatingPoint);

  TYPE_QUERIES_CHECK_NOT(Dyninst::x86::k0, isFloatingPoint);
  TYPE_QUERIES_CHECK_NOT(Dyninst::x86::k7, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::x86::fcw, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86::fsw, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86::mxcsr, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::x86::xmm0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86::xmm7, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86::ymm0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86::ymm7, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86::zmm0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86::zmm7, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::x86::fcw, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::x86::fsw, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::x86::mxcsr, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::x86::cr0, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::x86::cr7, isControlStatus);

  TYPE_QUERIES_CHECK(Dyninst::x86::xmm0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86::xmm7, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86::ymm0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86::ymm7, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86::zmm0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86::zmm7, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86::mm0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86::mm7, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86::k0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86::k7, isVector);

  return EXIT_SUCCESS;
}
