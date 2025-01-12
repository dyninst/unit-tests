#include "basereg_check.h"
#include "registers/AMDGPU/amdgpu_gfx90a_regs.h"

int main() {
  BASEREG_CHECK(amdgpu_gfx90a::ttmp0, amdgpu_gfx90a::ttmp0);
  BASEREG_CHECK(amdgpu_gfx90a::ttmp1, amdgpu_gfx90a::ttmp0);
  BASEREG_CHECK(amdgpu_gfx90a::ttmp15, amdgpu_gfx90a::ttmp0);
  BASEREG_CHECK(amdgpu_gfx90a::attr0, amdgpu_gfx90a::attr0);
  BASEREG_CHECK(amdgpu_gfx90a::attr1, amdgpu_gfx90a::attr0);
  BASEREG_CHECK(amdgpu_gfx90a::attr32, amdgpu_gfx90a::attr0);
  BASEREG_CHECK(amdgpu_gfx90a::s0, amdgpu_gfx90a::s0);
  BASEREG_CHECK(amdgpu_gfx90a::s1, amdgpu_gfx90a::s0);
  BASEREG_CHECK(amdgpu_gfx90a::s101, amdgpu_gfx90a::s0);
  BASEREG_CHECK(amdgpu_gfx90a::v0, amdgpu_gfx90a::v0);
  BASEREG_CHECK(amdgpu_gfx90a::v1, amdgpu_gfx90a::v0);
  BASEREG_CHECK(amdgpu_gfx90a::v255, amdgpu_gfx90a::v0);
  BASEREG_CHECK(amdgpu_gfx90a::acc0, amdgpu_gfx90a::acc0);
  BASEREG_CHECK(amdgpu_gfx90a::acc1, amdgpu_gfx90a::acc0);
  BASEREG_CHECK(amdgpu_gfx90a::acc255, amdgpu_gfx90a::acc0);

  return EXIT_SUCCESS;
}
