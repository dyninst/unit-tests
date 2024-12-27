#include "basereg_check.h"
#include "registers/x86_regs.h"

int main() {
  BASEREG_CHECK(x86::ax, x86::eax);
  BASEREG_CHECK(x86::eax, x86::eax);

  BASEREG_CHECK(x86::sp, x86::esp);
  BASEREG_CHECK(x86::esp, x86::esp);

  BASEREG_CHECK(x86::flags, x86::flags);
  BASEREG_CHECK(x86::cf, x86::flags);
  BASEREG_CHECK(x86::flag1, x86::flags);
  BASEREG_CHECK(x86::pf, x86::flags);
  BASEREG_CHECK(x86::flag3, x86::flags);
  BASEREG_CHECK(x86::af, x86::flags);
  BASEREG_CHECK(x86::flag5, x86::flags);
  BASEREG_CHECK(x86::zf, x86::flags);
  BASEREG_CHECK(x86::sf, x86::flags);
  BASEREG_CHECK(x86::tf, x86::flags);
  BASEREG_CHECK(x86::if_, x86::flags);
  BASEREG_CHECK(x86::df, x86::flags);
  BASEREG_CHECK(x86::of, x86::flags);
  BASEREG_CHECK(x86::flagc, x86::flags);
  BASEREG_CHECK(x86::flagd, x86::flags);
  BASEREG_CHECK(x86::nt_, x86::flags);
  BASEREG_CHECK(x86::flagf, x86::flags);
  BASEREG_CHECK(x86::rf, x86::flags);
  BASEREG_CHECK(x86::vm, x86::flags);
  BASEREG_CHECK(x86::ac, x86::flags);
  BASEREG_CHECK(x86::vif, x86::flags);
  BASEREG_CHECK(x86::vip, x86::flags);
  BASEREG_CHECK(x86::id, x86::flags);

  BASEREG_CHECK(x86::mm0, x86::st0);
  BASEREG_CHECK(x86::mm7, x86::st7);

  BASEREG_CHECK(x86::xmm0, x86::zmm0);
  BASEREG_CHECK(x86::xmm7, x86::zmm7);

  BASEREG_CHECK(x86::ymm0, x86::zmm0);
  BASEREG_CHECK(x86::ymm7, x86::zmm7);

  BASEREG_CHECK(x86::zmm0, x86::zmm0);
  BASEREG_CHECK(x86::zmm7, x86::zmm7);

  return EXIT_SUCCESS;
}
