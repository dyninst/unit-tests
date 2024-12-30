#include "basereg_check.h"
#include "registers/aarch64_regs.h"

int main() {

  // GPR 32 -> 64
  BASEREG_CHECK(aarch64::w0, aarch64::x0);
  BASEREG_CHECK(aarch64::w8, aarch64::x8);
  BASEREG_CHECK(aarch64::w30, aarch64::x30);

  // GPR 64 -> 64
  BASEREG_CHECK(aarch64::x0, aarch64::x0);
  BASEREG_CHECK(aarch64::x8, aarch64::x8);
  BASEREG_CHECK(aarch64::x30, aarch64::x30);

  // FPR 8 -> 64
  BASEREG_CHECK(aarch64::b0, aarch64::q0);
  BASEREG_CHECK(aarch64::b8, aarch64::q8);
  BASEREG_CHECK(aarch64::b31, aarch64::q31);

  // FPR 16 -> 64
  BASEREG_CHECK(aarch64::h0, aarch64::q0);
  BASEREG_CHECK(aarch64::h8, aarch64::q8);
  BASEREG_CHECK(aarch64::h31, aarch64::q31);

  // FPR 32 -> 64
  BASEREG_CHECK(aarch64::s0, aarch64::q0);
  BASEREG_CHECK(aarch64::s8, aarch64::q8);
  BASEREG_CHECK(aarch64::s31, aarch64::q31);

  // FPR 64 -> 64
  BASEREG_CHECK(aarch64::q0, aarch64::q0);
  BASEREG_CHECK(aarch64::q8, aarch64::q8);
  BASEREG_CHECK(aarch64::q31, aarch64::q31);

  // SPR 32 -> 64
  BASEREG_CHECK(aarch64::wsp, aarch64::sp);
  BASEREG_CHECK(aarch64::wzr, aarch64::xzr);

  // SPR 64 -> 64
  BASEREG_CHECK(aarch64::sp, aarch64::sp);
  BASEREG_CHECK(aarch64::xzr, aarch64::xzr);

  return EXIT_SUCCESS;
}
