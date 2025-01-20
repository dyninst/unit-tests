#include "basereg_check.h"
#include "registers/riscv64_regs.h"

int main() {

  // GPR 64 -> 64
  BASEREG_CHECK(riscv64::x0, riscv64::x0);
  BASEREG_CHECK(riscv64::x8, riscv64::x0);
  BASEREG_CHECK(riscv64::x31, riscv64::x0);

  // FPR 32 -> *
  BASEREG_CHECK(riscv64::f0_32, riscv64::f0);
  BASEREG_CHECK(riscv64::f8_32, riscv64::f0);
  BASEREG_CHECK(riscv64::f31_32, riscv64::f0);

  // FPR 64 -> *
  BASEREG_CHECK(riscv64::f0_64, riscv64::f0);
  BASEREG_CHECK(riscv64::f8_64, riscv64::f0);
  BASEREG_CHECK(riscv64::f31_64, riscv64::f0);

  // FPR * -> *
  BASEREG_CHECK(riscv64::f0, riscv64::f0);
  BASEREG_CHECK(riscv64::f8, riscv64::f0);
  BASEREG_CHECK(riscv64::f31, riscv64::f0);

  return EXIT_SUCCESS;
}
