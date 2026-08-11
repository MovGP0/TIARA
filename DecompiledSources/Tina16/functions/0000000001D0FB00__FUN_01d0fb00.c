/* Ghidra address: 01d0fb00 */
/* Ghidra symbol: FUN_01d0fb00 */


undefined1 FUN_01d0fb00(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_1288;
  double local_11cb;
  undefined1 local_11c0 [400];
  undefined8 local_1030;
  short local_1028;
  double local_1026;
  double local_101e;
  short local_1016;
  double local_1014;
  double local_100c;
  char local_ffc;
  char local_ffb;
  char local_ff2;
  short local_ff0;
  double local_fee;
  double local_fe6;
  char local_fde;
  char local_fdd;
  char local_fdc;
  char local_fdb;
  char local_fda;
  char local_fd9;
  double local_fd8;
  double local_fd0;
  double local_fc8;
  double local_fc0;
  double local_fb8;
  short local_fb0;
  char local_fae;
  double local_fad;
  double local_fa5;
  double local_f9d;
  double local_f95;
  double local_f8d;
  double local_f85;
  double local_f7d;
  double local_f75;
  double local_f6d;
  double local_f65;
  double local_f5d;
  double local_f55;
  double local_f4d;
  double local_f45;
  double local_f3d;
  double local_f35;
  double local_f2d;
  double local_f25;
  double local_f1d;
  double local_f15;
  double local_f0d;
  double local_f05;
  short local_efd;
  double local_efb;
  double local_ef3;
  char local_eeb;
  short local_ee8;
  double local_ee6;
  double local_ede;
  double local_ed6;
  short local_ecd;
  double local_ecb;
  double local_ec3;
  char local_ebb;
  char local_eba;
  undefined1 local_eb3 [19];
  undefined1 local_ea0 [46];
  undefined1 local_e72 [27];
  undefined1 local_e57 [295];
  undefined1 local_d30 [11];
  undefined1 local_d25 [56];
  undefined1 local_ced [553];
  char local_ac4;
  char local_ac3;
  char local_ac2;
  short local_ac1;
  short local_abf;
  short local_abd;
  char local_abb;
  undefined8 local_aba;
  undefined8 local_ab2;
  double local_aa8;
  double local_aa0;
  double local_a98;
  char local_a75;
  char local_a71;
  char local_a70;
  undefined1 local_a5b [14];
  undefined1 local_a4d [253];
  undefined8 local_950;
  double local_893;
  undefined1 local_888 [400];
  undefined8 local_6f8;
  short local_6f0;
  double local_6ee;
  double local_6e6;
  short local_6de;
  double local_6dc;
  double local_6d4;
  char local_6c4;
  char local_6c3;
  char local_6ba;
  short local_6b8;
  double local_6b6;
  double local_6ae;
  char local_6a6;
  char local_6a5;
  char local_6a4;
  char local_6a3;
  char local_6a2;
  char local_6a1;
  double local_6a0;
  double local_698;
  double local_690;
  double local_688;
  double local_680;
  short local_678;
  char local_676;
  double local_675;
  double local_66d;
  double local_665;
  double local_65d;
  double local_655;
  double local_64d;
  double local_645;
  double local_63d;
  double local_635;
  double local_62d;
  double local_625;
  double local_61d;
  double local_615;
  double local_60d;
  double local_605;
  double local_5fd;
  double local_5f5;
  double local_5ed;
  double local_5e5;
  double local_5dd;
  double local_5d5;
  double local_5cd;
  short local_5c5;
  double local_5c3;
  double local_5bb;
  char local_5b3;
  short local_5b0;
  double local_5ae;
  double local_5a6;
  double local_59e;
  short local_595;
  double local_593;
  double local_58b;
  char local_583;
  char local_582;
  undefined1 local_57b [19];
  undefined1 local_568 [46];
  undefined1 local_53a [27];
  undefined1 local_51f [295];
  byte local_3f8 [11];
  byte local_3ed [56];
  undefined1 local_3b5 [253];
  undefined1 local_2b8;
  char local_18c;
  char local_18b;
  char local_18a;
  short local_189;
  short local_187;
  short local_185;
  char local_183;
  undefined8 local_182;
  undefined8 local_17a;
  double local_170;
  double local_168;
  double local_160;
  char local_13d;
  char local_139;
  char local_138;
  undefined1 local_123 [14];
  undefined1 local_115 [253];
  
  local_2b8 = 0;
  puVar6 = &local_950;
  for (lVar5 = 0x127; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_1;
    param_1 = param_1 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar6 = &local_1288;
  for (lVar5 = 0x127; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_004179d0(&local_950,&DAT_01d0d0b8);
  FUN_004179d0(&local_1288,&DAT_01d0d0b8);
  if ((local_950._3_1_ == local_1288._3_1_) && (local_950._4_1_ == local_1288._4_1_)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_893 == local_11cb)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (cVar2 = FUN_0043e2c0(local_888,local_11c0,0x168), cVar2 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (iVar4 = FUN_00416db0(local_6f8,local_1030), iVar4 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6f0 == local_1028)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6ee == local_1026)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6e6 == local_101e)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6de == local_1016)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6dc == local_1014)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6d4 == local_100c)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6c4 == local_ffc)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6c3 == local_ffb)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6ba == local_ff2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6b8 == local_ff0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6b6 == local_fee)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6ae == local_fe6)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6a6 == local_fde)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6a5 == local_fdd)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6a4 == local_fdc)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6a3 == local_fdb)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6a2 == local_fda)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6a1 == local_fd9)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_6a0 == local_fd8)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_698 == local_fd0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_690 == local_fc8)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_688 == local_fc0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_680 == local_fb8)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_678 == local_fb0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_676 == local_fae)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_675 == local_fad)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_66d == local_fa5)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_665 == local_f9d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_65d == local_f95)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_655 == local_f8d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_64d == local_f85)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_645 == local_f7d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_63d == local_f75)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_635 == local_f6d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_62d == local_f65)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_625 == local_f5d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_61d == local_f55)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_615 == local_f4d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_60d == local_f45)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_605 == local_f3d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5fd == local_f35)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5f5 == local_f2d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5ed == local_f25)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5e5 == local_f1d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5dd == local_f15)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5d5 == local_f0d)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5cd == local_f05)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5c5 == local_efd)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5c3 == local_efb)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5bb == local_ef3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5b3 == local_eeb)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5b0 == local_ee8)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5ae == local_ee6)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_5a6 == local_ede)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_59e == local_ed6)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_595 == local_ecd)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_593 == local_ecb)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_58b == local_ec3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_583 == local_ebb)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_582 == local_eba)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (cVar2 = FUN_0043e2c0(local_57b,local_eb3,0x13), cVar2 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (cVar2 = FUN_0043e2c0(local_568,local_ea0,0x2d), cVar2 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (cVar2 = FUN_0043e2c0(local_53a,local_e72,0x1b), cVar2 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (cVar2 = FUN_0043e2c0(local_51f,local_e57,0x127), cVar2 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (iVar4 = FUN_00414f50(local_3f8,local_d30,(ulonglong)local_3f8[0] + 1), iVar4 == 0)
     ) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (iVar4 = FUN_00414f50(local_3ed,local_d25,(ulonglong)local_3ed[0] + 1), iVar4 == 0)
     ) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (cVar2 = FUN_0043e2c0(local_3b5,local_ced,10), cVar2 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_18c == local_ac4)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_18b == local_ac3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_18a == local_ac2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_189 == local_ac1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_187 == local_abf)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_185 == local_abd)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_183 == local_abb)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (iVar4 = FUN_00416db0(local_182,local_aba), iVar4 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (iVar4 = FUN_00416db0(local_17a,local_ab2), iVar4 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_170 == local_aa8)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_168 == local_aa0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_160 == local_a98)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_13d == local_a75)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_139 == local_a71)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (local_138 == local_a70)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (cVar2 = FUN_0043e2c0(local_123,local_a5b,0xe), cVar2 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((bVar1) && (cVar2 = FUN_0043e2c0(local_115,local_a4d,0x6e), cVar2 != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  FUN_00417840(&local_1288,&DAT_01d0d0b8,2);
  return uVar3;
}

