#include "basereg_check.h"
#include "registers/x86_64_regs.h"

int main() {
  BASEREG_CHECK(x86_64::ax, x86_64::rax);
  BASEREG_CHECK(x86_64::eax, x86_64::rax);
  BASEREG_CHECK(x86_64::rax, x86_64::rax);

  BASEREG_CHECK(x86_64::sp, x86_64::rsp);
  BASEREG_CHECK(x86_64::esp, x86_64::rsp);
  BASEREG_CHECK(x86_64::rsp, x86_64::rsp);

  BASEREG_CHECK(x86_64::flags, x86_64::flags);
  BASEREG_CHECK(x86_64::cf, x86_64::flags);
  BASEREG_CHECK(x86_64::flag1, x86_64::flags);
  BASEREG_CHECK(x86_64::pf, x86_64::flags);
  BASEREG_CHECK(x86_64::flag3, x86_64::flags);
  BASEREG_CHECK(x86_64::af, x86_64::flags);
  BASEREG_CHECK(x86_64::flag5, x86_64::flags);
  BASEREG_CHECK(x86_64::zf, x86_64::flags);
  BASEREG_CHECK(x86_64::sf, x86_64::flags);
  BASEREG_CHECK(x86_64::tf, x86_64::flags);
  BASEREG_CHECK(x86_64::if_, x86_64::flags);
  BASEREG_CHECK(x86_64::df, x86_64::flags);
  BASEREG_CHECK(x86_64::of, x86_64::flags);
  BASEREG_CHECK(x86_64::flagc, x86_64::flags);
  BASEREG_CHECK(x86_64::flagd, x86_64::flags);
  BASEREG_CHECK(x86_64::nt_, x86_64::flags);
  BASEREG_CHECK(x86_64::flagf, x86_64::flags);
  BASEREG_CHECK(x86_64::rf, x86_64::flags);
  BASEREG_CHECK(x86_64::vm, x86_64::flags);
  BASEREG_CHECK(x86_64::ac, x86_64::flags);
  BASEREG_CHECK(x86_64::vif, x86_64::flags);
  BASEREG_CHECK(x86_64::vip, x86_64::flags);
  BASEREG_CHECK(x86_64::id, x86_64::flags);

  BASEREG_CHECK(x86_64::mm0, x86_64::st0);
  BASEREG_CHECK(x86_64::mm7, x86_64::st7);

  BASEREG_CHECK(x86_64::xmm0, x86_64::zmm0);
  BASEREG_CHECK(x86_64::xmm31, x86_64::zmm31);

  BASEREG_CHECK(x86_64::ymm0, x86_64::zmm0);
  BASEREG_CHECK(x86_64::ymm31, x86_64::zmm31);

  BASEREG_CHECK(x86_64::zmm0, x86_64::zmm0);
  BASEREG_CHECK(x86_64::zmm31, x86_64::zmm31);

  return EXIT_SUCCESS;
}
