#include "basereg_check.h"
#include "registers/AMDGPU/amdgpu_gfx908_regs.h"

int main() {
  BASEREG_CHECK(amdgpu_gfx908::ttmp0, amdgpu_gfx908::ttmp0);
  BASEREG_CHECK(amdgpu_gfx908::ttmp1, amdgpu_gfx908::ttmp0);
  BASEREG_CHECK(amdgpu_gfx908::ttmp15, amdgpu_gfx908::ttmp0);
  BASEREG_CHECK(amdgpu_gfx908::attr0, amdgpu_gfx908::attr0);
  BASEREG_CHECK(amdgpu_gfx908::attr1, amdgpu_gfx908::attr0);
  BASEREG_CHECK(amdgpu_gfx908::attr32, amdgpu_gfx908::attr0);
  BASEREG_CHECK(amdgpu_gfx908::s0, amdgpu_gfx908::s0);
  BASEREG_CHECK(amdgpu_gfx908::s1, amdgpu_gfx908::s0);
  BASEREG_CHECK(amdgpu_gfx908::s101, amdgpu_gfx908::s0);
  BASEREG_CHECK(amdgpu_gfx908::v0, amdgpu_gfx908::v0);
  BASEREG_CHECK(amdgpu_gfx908::v1, amdgpu_gfx908::v0);
  BASEREG_CHECK(amdgpu_gfx908::v255, amdgpu_gfx908::v0);
  BASEREG_CHECK(amdgpu_gfx908::acc0, amdgpu_gfx908::acc0);
  BASEREG_CHECK(amdgpu_gfx908::acc1, amdgpu_gfx908::acc0);
  BASEREG_CHECK(amdgpu_gfx908::acc255, amdgpu_gfx908::acc0);

  return EXIT_SUCCESS;
}
