#include "dataflowAPI/rose/registers/convert.h"
#include "external/rose/armv8InstructionEnum.h"
#include "registers/aarch64_regs.h"
#include "rose_reg_check.h"

int main() {

  namespace da = Dyninst::aarch64;
  ROSEREG_CHECK(da::pc, armv8_regclass_pc, 0, 0);
  ROSEREG_CHECK(da::xzr, armv8_regclass_gpr, armv8_gpr_zr, 0);
  ROSEREG_CHECK(da::sp, armv8_regclass_sp, 0, 0);
  ROSEREG_CHECK(da::pstate, armv8_pstatefield_pstate, 0, 0);

  ROSEREG_CHECK(da::w0, armv8_regclass_gpr, armv8_gpr_r0, 0);
  ROSEREG_CHECK(da::w30, armv8_regclass_gpr, armv8_gpr_r30, 0);
  ROSEREG_CHECK(da::x0, armv8_regclass_gpr, armv8_gpr_r0, 0);
  ROSEREG_CHECK(da::x30, armv8_regclass_gpr, armv8_gpr_r30, 0);

  ROSEREG_CHECK(da::b0, armv8_regclass_simd_fpr, armv8_simdfpr_v0, 0);
  ROSEREG_CHECK(da::b30, armv8_regclass_simd_fpr, armv8_simdfpr_v30, 0);
  ROSEREG_CHECK(da::d0, armv8_regclass_simd_fpr, armv8_simdfpr_v0, 0);
  ROSEREG_CHECK(da::d30, armv8_regclass_simd_fpr, armv8_simdfpr_v30, 0);
  ROSEREG_CHECK(da::h0, armv8_regclass_simd_fpr, armv8_simdfpr_v0, 0);
  ROSEREG_CHECK(da::h30, armv8_regclass_simd_fpr, armv8_simdfpr_v30, 0);
  ROSEREG_CHECK(da::q0, armv8_regclass_simd_fpr, armv8_simdfpr_v0, 0);
  ROSEREG_CHECK(da::q30, armv8_regclass_simd_fpr, armv8_simdfpr_v30, 0);
  ROSEREG_CHECK(da::s0, armv8_regclass_simd_fpr, armv8_simdfpr_v0, 0);
  ROSEREG_CHECK(da::s30, armv8_regclass_simd_fpr, armv8_simdfpr_v30, 0);
  ROSEREG_CHECK(da::hq0, armv8_regclass_simd_fpr, armv8_simdfpr_v0, 64);
  ROSEREG_CHECK(da::hq30, armv8_regclass_simd_fpr, armv8_simdfpr_v30, 64);

  ROSEREG_CHECK(da::n, armv8_regclass_pstate, 0, armv8_pstatefield_n);
  ROSEREG_CHECK(da::z, armv8_regclass_pstate, 0, armv8_pstatefield_z);
  ROSEREG_CHECK(da::c, armv8_regclass_pstate, 0, armv8_pstatefield_c);
  ROSEREG_CHECK(da::v, armv8_regclass_pstate, 0, armv8_pstatefield_v);


  return EXIT_SUCCESS;
}
