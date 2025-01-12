#include "basereg_check.h"
#include "registers/AMDGPU/amdgpu_gfx940_regs.h"

int main() {
  BASEREG_CHECK(amdgpu_gfx940::ttmp0, amdgpu_gfx940::ttmp0);
  BASEREG_CHECK(amdgpu_gfx940::ttmp1, amdgpu_gfx940::ttmp0);
  BASEREG_CHECK(amdgpu_gfx940::ttmp15, amdgpu_gfx940::ttmp0);
  BASEREG_CHECK(amdgpu_gfx940::attr0, amdgpu_gfx940::attr0);
  BASEREG_CHECK(amdgpu_gfx940::attr1, amdgpu_gfx940::attr0);
  BASEREG_CHECK(amdgpu_gfx940::attr32, amdgpu_gfx940::attr0);
  BASEREG_CHECK(amdgpu_gfx940::s0, amdgpu_gfx940::s0);
  BASEREG_CHECK(amdgpu_gfx940::s1, amdgpu_gfx940::s0);
  BASEREG_CHECK(amdgpu_gfx940::s101, amdgpu_gfx940::s0);
  BASEREG_CHECK(amdgpu_gfx940::v0, amdgpu_gfx940::v0);
  BASEREG_CHECK(amdgpu_gfx940::v1, amdgpu_gfx940::v0);
  BASEREG_CHECK(amdgpu_gfx940::v255, amdgpu_gfx940::v0);
  BASEREG_CHECK(amdgpu_gfx940::acc0, amdgpu_gfx940::acc0);
  BASEREG_CHECK(amdgpu_gfx940::acc1, amdgpu_gfx940::acc0);
  BASEREG_CHECK(amdgpu_gfx940::acc255, amdgpu_gfx940::acc0);

  return EXIT_SUCCESS;
}
