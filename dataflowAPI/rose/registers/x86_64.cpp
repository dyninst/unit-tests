#include "dataflowAPI/rose/registers/convert.h"
#include "external/rose/rose-compat.h"
#include "registers/x86_64_regs.h"
#include "rose_reg_check.h"

int main() {
  ROSEREG_CHECK(Dyninst::x86_64::eip, x86_regclass_ip, 0, x86_regpos_dword);
  ROSEREG_CHECK(Dyninst::x86_64::rip, x86_regclass_ip, 0, x86_regpos_all);

  ROSEREG_CHECK(Dyninst::x86_64::al, x86_regclass_gpr, x86_gpr_ax, x86_regpos_low_byte);
  ROSEREG_CHECK(Dyninst::x86_64::ah, x86_regclass_gpr, x86_gpr_ax, x86_regpos_high_byte);
  ROSEREG_CHECK(Dyninst::x86_64::ax, x86_regclass_gpr, x86_gpr_ax, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86_64::eax, x86_regclass_gpr, x86_gpr_ax, x86_regpos_dword);
  ROSEREG_CHECK(Dyninst::x86_64::rax, x86_regclass_gpr, x86_gpr_ax, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::bl, x86_regclass_gpr, x86_gpr_bx, x86_regpos_low_byte);
  ROSEREG_CHECK(Dyninst::x86_64::bh, x86_regclass_gpr, x86_gpr_bx, x86_regpos_high_byte);
  ROSEREG_CHECK(Dyninst::x86_64::bx, x86_regclass_gpr, x86_gpr_bx, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86_64::ebx, x86_regclass_gpr, x86_gpr_bx, x86_regpos_dword);
  ROSEREG_CHECK(Dyninst::x86_64::rbx, x86_regclass_gpr, x86_gpr_bx, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::cl, x86_regclass_gpr, x86_gpr_cx, x86_regpos_low_byte);
  ROSEREG_CHECK(Dyninst::x86_64::ch, x86_regclass_gpr, x86_gpr_cx, x86_regpos_high_byte);
  ROSEREG_CHECK(Dyninst::x86_64::cx, x86_regclass_gpr, x86_gpr_cx, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86_64::ecx, x86_regclass_gpr, x86_gpr_cx, x86_regpos_dword);
  ROSEREG_CHECK(Dyninst::x86_64::rcx, x86_regclass_gpr, x86_gpr_cx, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::dl, x86_regclass_gpr, x86_gpr_dx, x86_regpos_low_byte);
  ROSEREG_CHECK(Dyninst::x86_64::dh, x86_regclass_gpr, x86_gpr_dx, x86_regpos_high_byte);
  ROSEREG_CHECK(Dyninst::x86_64::dx, x86_regclass_gpr, x86_gpr_dx, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86_64::edx, x86_regclass_gpr, x86_gpr_dx, x86_regpos_dword);
  ROSEREG_CHECK(Dyninst::x86_64::rdx, x86_regclass_gpr, x86_gpr_dx, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::r8b, x86_regclass_gpr, x86_gpr_r8, x86_regpos_low_byte);
  ROSEREG_CHECK(Dyninst::x86_64::r8w, x86_regclass_gpr, x86_gpr_r8, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86_64::r8d, x86_regclass_gpr, x86_gpr_r8, x86_regpos_dword);
  ROSEREG_CHECK(Dyninst::x86_64::r8, x86_regclass_gpr, x86_gpr_r8, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::r15b, x86_regclass_gpr, x86_gpr_r15, x86_regpos_low_byte);
  ROSEREG_CHECK(Dyninst::x86_64::r15w, x86_regclass_gpr, x86_gpr_r15, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86_64::r15d, x86_regclass_gpr, x86_gpr_r15, x86_regpos_dword);
  ROSEREG_CHECK(Dyninst::x86_64::r15, x86_regclass_gpr, x86_gpr_r15, x86_regpos_all);

  ROSEREG_CHECK(Dyninst::x86_64::sp, x86_regclass_gpr, x86_gpr_sp, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86_64::esp, x86_regclass_gpr, x86_gpr_sp, x86_regpos_dword);
  ROSEREG_CHECK(Dyninst::x86_64::rsp, x86_regclass_gpr, x86_gpr_sp, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::bp, x86_regclass_gpr, x86_gpr_bp, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86_64::ebp, x86_regclass_gpr, x86_gpr_bp, x86_regpos_dword);
  ROSEREG_CHECK(Dyninst::x86_64::rbp, x86_regclass_gpr, x86_gpr_bp, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::si, x86_regclass_gpr, x86_gpr_si, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86_64::esi, x86_regclass_gpr, x86_gpr_si, x86_regpos_dword);
  ROSEREG_CHECK(Dyninst::x86_64::rsi, x86_regclass_gpr, x86_gpr_si, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::di, x86_regclass_gpr, x86_gpr_di, x86_regpos_word);
  ROSEREG_CHECK(Dyninst::x86_64::edi, x86_regclass_gpr, x86_gpr_di, x86_regpos_dword);
  ROSEREG_CHECK(Dyninst::x86_64::rdi, x86_regclass_gpr, x86_gpr_di, x86_regpos_all);

  ROSEREG_CHECK(Dyninst::x86_64::ds, x86_regclass_segment, x86_segreg_ds, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::es, x86_regclass_segment, x86_segreg_es, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::fs, x86_regclass_segment, x86_segreg_fs, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::gs, x86_regclass_segment, x86_segreg_gs, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::cs, x86_regclass_segment, x86_segreg_cs, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::ss, x86_regclass_segment, x86_segreg_ss, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::cf, x86_regclass_flags, x86_flag_cf, 0);

  // These are broken because we use the base register in x86Rose.
  // That needs to be fixed.
  ROSEREG_CHECK(Dyninst::x86_64::cf, x86_regclass_flags, x86_flag_cf, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::flag1, x86_regclass_flags, x86_flag_1, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::pf, x86_regclass_flags, x86_flag_pf, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::flag3, x86_regclass_flags, x86_flag_3, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::af, x86_regclass_flags, x86_flag_af, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::flag5, x86_regclass_flags, x86_flag_5, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::zf, x86_regclass_flags, x86_flag_zf, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::sf, x86_regclass_flags, x86_flag_sf, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::tf, x86_regclass_flags, x86_flag_tf, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::if_, x86_regclass_flags, x86_flag_if, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::df, x86_regclass_flags, x86_flag_df, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::of, x86_regclass_flags, x86_flag_of, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::flagc, x86_regclass_flags, x86_flag_iopl0, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::flagd, x86_regclass_flags, x86_flag_iopl1, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::nt_, x86_regclass_flags, x86_flag_nt, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::flagf, x86_regclass_flags, x86_flag_15, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::rf, x86_regclass_flags, x86_flag_rf, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::vm, x86_regclass_flags, x86_flag_vm, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::ac, x86_regclass_flags, x86_flag_ac, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::vif, x86_regclass_flags, x86_flag_vif, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::vip, x86_regclass_flags, x86_flag_vip, 0);
//  ROSEREG_CHECK(Dyninst::x86_64::id, x86_regclass_flags, x86_flag_id, 0);

  ROSEREG_CHECK(Dyninst::x86_64::mm0, x86_regclass_mm, 0, x86_regpos_qword);
  ROSEREG_CHECK(Dyninst::x86_64::mm7, x86_regclass_mm, 7, x86_regpos_qword);
  ROSEREG_CHECK(Dyninst::x86_64::st0, x86_regclass_st, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::st7, x86_regclass_st, 7, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::xmm0, x86_regclass_xmm, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::xmm31, x86_regclass_xmm, 31, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::ymm0, x86_regclass_ymm, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::ymm31, x86_regclass_ymm, 31, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::zmm0, x86_regclass_zmm, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::zmm31, x86_regclass_zmm, 31, x86_regpos_all);

  ROSEREG_CHECK(Dyninst::x86_64::cr0, x86_regclass_cr, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::cr7, x86_regclass_cr, 7, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::dr0, x86_regclass_dr, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::dr7, x86_regclass_dr, 7, x86_regpos_all);

  ROSEREG_CHECK(Dyninst::x86_64::k0, x86_regclass_kmask, 0, x86_regpos_all);
  ROSEREG_CHECK(Dyninst::x86_64::k7, x86_regclass_kmask, 7, x86_regpos_all);

  return EXIT_SUCCESS;
}
