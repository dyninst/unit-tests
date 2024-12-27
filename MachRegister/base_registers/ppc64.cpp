#include "basereg_check.h"
#include "registers/ppc64_regs.h"

int main() {
  // Dyninst doesn't currently have any aliased registers for ppc64, so
  // just make sure the round-trip is valid.

  BASEREG_CHECK(ppc64::r0, ppc64::r0);
  BASEREG_CHECK(ppc64::r31, ppc64::r31);

  BASEREG_CHECK(ppc64::fpr0, ppc64::fpr0);
  BASEREG_CHECK(ppc64::fpr31, ppc64::fpr31);

  BASEREG_CHECK(ppc64::fsr0, ppc64::fsr0);
  BASEREG_CHECK(ppc64::fsr31, ppc64::fsr31);

  BASEREG_CHECK(ppc64::vsr0, ppc64::vsr0);
  BASEREG_CHECK(ppc64::vsr63, ppc64::vsr63);

  return EXIT_SUCCESS;
}
