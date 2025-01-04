#include "dataflowAPI/rose/registers/convert.h"
#include "external/rose/rose-compat.h"
#include "registers/x86_regs.h"
#include "rose_reg_check.h"

int main() {
  ROSEREG_CHECK(Dyninst::x86::eip, x86_regclass_ip, 0, x86_regpos_dword);

  ROSEREG_CHECK(Dyninst::x86::al, x86_regclass_gpr, x86_gpr_ax, x86_regpos_low_byte);
  ROSEREG_CHECK(Dyninst::x86::ah, x86_regclass_gpr, x86_gpr_ax, x86_regpos_high_byte);
  ROSEREG_CHECK(Dyninst::x86::ax, x86_regclass_gpr, x86_gpr_ax, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86::eax, x86_regclass_gpr, x86_gpr_ax, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::bl, x86_regclass_gpr, x86_gpr_bx, x86_regpos_low_byte);
  ROSEREG_CHECK(Dyninst::x86::bh, x86_regclass_gpr, x86_gpr_bx, x86_regpos_high_byte);
  ROSEREG_CHECK(Dyninst::x86::bx, x86_regclass_gpr, x86_gpr_bx, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86::ebx, x86_regclass_gpr, x86_gpr_bx, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::cl, x86_regclass_gpr, x86_gpr_cx, x86_regpos_low_byte);
  ROSEREG_CHECK(Dyninst::x86::ch, x86_regclass_gpr, x86_gpr_cx, x86_regpos_high_byte);
  ROSEREG_CHECK(Dyninst::x86::cx, x86_regclass_gpr, x86_gpr_cx, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86::ecx, x86_regclass_gpr, x86_gpr_cx, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::dl, x86_regclass_gpr, x86_gpr_dx, x86_regpos_low_byte);
  ROSEREG_CHECK(Dyninst::x86::dh, x86_regclass_gpr, x86_gpr_dx, x86_regpos_high_byte);
  ROSEREG_CHECK(Dyninst::x86::dx, x86_regclass_gpr, x86_gpr_dx, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86::edx, x86_regclass_gpr, x86_gpr_dx, x86_regpos_all);

  ROSEREG_CHECK(Dyninst::x86::sp, x86_regclass_gpr, x86_gpr_sp, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86::esp, x86_regclass_gpr, x86_gpr_sp, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::bp, x86_regclass_gpr, x86_gpr_bp, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86::ebp, x86_regclass_gpr, x86_gpr_bp, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::si, x86_regclass_gpr, x86_gpr_si, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86::esi, x86_regclass_gpr, x86_gpr_si, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::di, x86_regclass_gpr, x86_gpr_di, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86::edi, x86_regclass_gpr, x86_gpr_di, x86_regpos_all);

  ROSEREG_CHECK(Dyninst::x86::ds, x86_regclass_segment, x86_segreg_ds, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::es, x86_regclass_segment, x86_segreg_es, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::fs, x86_regclass_segment, x86_segreg_fs, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::gs, x86_regclass_segment, x86_segreg_gs, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::cs, x86_regclass_segment, x86_segreg_cs, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::ss, x86_regclass_segment, x86_segreg_ss, x86_regpos_all);

  // These are broken because we use the base register in x86Rose.
  // That needs to be fixed.
  ROSEREG_CHECK(Dyninst::x86::cf, x86_regclass_flags, x86_flag_cf, 0);
//  ROSEREG_CHECK(Dyninst::x86::flag1, x86_regclass_flags, x86_flag_1, 0);
//  ROSEREG_CHECK(Dyninst::x86::pf, x86_regclass_flags, x86_flag_pf, 0);
//  ROSEREG_CHECK(Dyninst::x86::flag3, x86_regclass_flags, x86_flag_3, 0);
//  ROSEREG_CHECK(Dyninst::x86::af, x86_regclass_flags, x86_flag_af, 0);
//  ROSEREG_CHECK(Dyninst::x86::flag5, x86_regclass_flags, x86_flag_5, 0);
//  ROSEREG_CHECK(Dyninst::x86::zf, x86_regclass_flags, x86_flag_zf, 0);
//  ROSEREG_CHECK(Dyninst::x86::sf, x86_regclass_flags, x86_flag_sf, 0);
//  ROSEREG_CHECK(Dyninst::x86::tf, x86_regclass_flags, x86_flag_tf, 0);
//  ROSEREG_CHECK(Dyninst::x86::if_, x86_regclass_flags, x86_flag_if, 0);
//  ROSEREG_CHECK(Dyninst::x86::df, x86_regclass_flags, x86_flag_df, 0);
//  ROSEREG_CHECK(Dyninst::x86::of, x86_regclass_flags, x86_flag_of, 0);
//  ROSEREG_CHECK(Dyninst::x86::flagc, x86_regclass_flags, x86_flag_iopl0, 0);
//  ROSEREG_CHECK(Dyninst::x86::flagd, x86_regclass_flags, x86_flag_iopl1, 0);
//  ROSEREG_CHECK(Dyninst::x86::nt_, x86_regclass_flags, x86_flag_nt, 0);
//  ROSEREG_CHECK(Dyninst::x86::flagf, x86_regclass_flags, x86_flag_15, 0);
//  ROSEREG_CHECK(Dyninst::x86::rf, x86_regclass_flags, x86_flag_rf, 0);
//  ROSEREG_CHECK(Dyninst::x86::vm, x86_regclass_flags, x86_flag_vm, 0);
//  ROSEREG_CHECK(Dyninst::x86::ac, x86_regclass_flags, x86_flag_ac, 0);
//  ROSEREG_CHECK(Dyninst::x86::vif, x86_regclass_flags, x86_flag_vif, 0);
//  ROSEREG_CHECK(Dyninst::x86::vip, x86_regclass_flags, x86_flag_vip, 0);
//  ROSEREG_CHECK(Dyninst::x86::id, x86_regclass_flags, x86_flag_id, 0);

  ROSEREG_CHECK(Dyninst::x86::mm0, x86_regclass_mm, 0, x86_regpos_qword);
  ROSEREG_CHECK(Dyninst::x86::mm7, x86_regclass_mm, 7, x86_regpos_qword);
  ROSEREG_CHECK(Dyninst::x86::st0, x86_regclass_st, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::st7, x86_regclass_st, 7, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::xmm0, x86_regclass_xmm, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::xmm7, x86_regclass_xmm, 7, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::ymm0, x86_regclass_ymm, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::ymm7, x86_regclass_ymm, 7, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::zmm0, x86_regclass_zmm, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::zmm7, x86_regclass_zmm, 7, x86_regpos_all);

  ROSEREG_CHECK(Dyninst::x86::cr0, x86_regclass_cr, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::cr7, x86_regclass_cr, 7, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::dr0, x86_regclass_dr, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::dr7, x86_regclass_dr, 7, x86_regpos_all);

  ROSEREG_CHECK(Dyninst::x86::k0, x86_regclass_kmask, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86::k7, x86_regclass_kmask, 7, x86_regpos_all);

  return EXIT_SUCCESS;
}
