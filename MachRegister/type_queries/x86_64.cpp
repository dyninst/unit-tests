#include "registers/MachRegister.h"
#include "registers/x86_64_regs.h"
#include "type_query_check.h"

int main() {
  TYPE_QUERIES_CHECK(Dyninst::x86_64::eip, isPC);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::rip, isPC);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::bp, isFramePointer);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ebp, isFramePointer);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::rbp, isFramePointer);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::sp, isStackPointer);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::esp, isStackPointer);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::rsp, isStackPointer);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::al, isSyscallNumberReg);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ah, isSyscallNumberReg);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ax, isSyscallNumberReg);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::eax, isSyscallNumberReg);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::rax, isSyscallNumberReg);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::al, isSyscallReturnValueReg);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ah, isSyscallReturnValueReg);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ax, isSyscallReturnValueReg);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::eax, isSyscallReturnValueReg);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::rax, isSyscallReturnValueReg);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::cf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::flag1, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::pf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::flag3, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::af, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::flag5, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::zf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::sf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::tf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::if_, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::df, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::of, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::flagc, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::flagd, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::nt_, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::flagf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::rf, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::vm, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ac, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::vif, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::vip, isFlag);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::id, isFlag);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::zf, isZeroFlag);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::al, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ah, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ax, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::eax, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::rax, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::bl, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::bh, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::bx, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ebx, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::rbx, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::cl, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ch, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::cx, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ecx, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::rcx, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::dl, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::dh, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::dx, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::edx, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::rdx, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::si, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::esi, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::rsi, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::sil, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::di, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::edi, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::rdi, isGeneralPurpose);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::dil, isGeneralPurpose);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::st0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::st7, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::mm0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::mm7, isFloatingPoint);

  TYPE_QUERIES_ASSERT_FALSE(Dyninst::x86_64::k0, isFloatingPoint);
  TYPE_QUERIES_ASSERT_FALSE(Dyninst::x86_64::k7, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::fcw, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::fsw, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::mxcsr, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::xmm0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::xmm31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ymm0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ymm31, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::zmm0, isFloatingPoint);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::zmm31, isFloatingPoint);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::fcw, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::fsw, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::mxcsr, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::cr0, isControlStatus);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::cr7, isControlStatus);

  TYPE_QUERIES_CHECK(Dyninst::x86_64::xmm0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::xmm31, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ymm0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::ymm31, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::zmm0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::zmm31, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::mm0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::mm7, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::k0, isVector);
  TYPE_QUERIES_CHECK(Dyninst::x86_64::k7, isVector);

  return EXIT_SUCCESS;
}
