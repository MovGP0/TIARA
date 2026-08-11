/* Ghidra address: 0123bf30 */
/* Ghidra symbol: FUN_0123bf30 */


void FUN_0123bf30(longlong param_1)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_10 = 0;
  local_18 = 0;
  local_40 = 0;
  local_48 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  pdVar2 = *(double **)(param_1 + 0x600);
  if (*(short *)((longlong)pdVar2 + 0x1fa4) == 0x4c) {
    if (*pdVar2 <= -3.0103 && *pdVar2 != -3.0103) {
      FUN_00b8fd60(&local_40,**(undefined8 **)(param_1 + 0x600),*PTR_DAT_02005310,0,1);
      local_38 = local_40;
      local_30 = 0x11;
      FUN_00b8fd60(&local_48,0xc00815182a9930be,*PTR_DAT_02005310,0,1);
      local_28 = local_48;
      local_20 = 0x11;
      FUN_00442f70(&local_18,L"Passband below the lower limit (val=%s) (min=%s) !",&local_38,1);
      FUN_00416ba0(&local_10,L"Filter error: ",local_18);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
      FUN_004134c0(uVar5);
    }
    if (-0.01 < **(double **)(param_1 + 0x600)) {
      FUN_00b8fd60(&local_60,**(undefined8 **)(param_1 + 0x600),*PTR_DAT_02005310,0,1);
      local_38 = local_60;
      local_30 = 0x11;
      FUN_00b8fd60(&local_68,0xbf847ae147ae147b,*PTR_DAT_02005310,0,1);
      local_28 = local_68;
      local_20 = 0x11;
      FUN_00442f70(&local_58,L"Passband above the upper limit (val=%s) (max=%s) !",&local_38,1);
      FUN_00416ba0(&local_50,L"Filter error: ",local_58);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_50);
      FUN_004134c0(uVar5);
    }
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x600) + 0x10);
    if (*pdVar2 <= -600.0 && *pdVar2 != -600.0) {
      FUN_00b8fd60(&local_80,*(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x10),
                   *PTR_DAT_02005310,0,1);
      local_38 = local_80;
      local_30 = 0x11;
      FUN_00b8fd60(&local_88,0xc082c00000000000,*PTR_DAT_02005310,0,1);
      local_28 = local_88;
      local_20 = 0x11;
      FUN_00442f70(&local_78,L"Stopband below the lower limit (val=%s) (min=%s) !",&local_38,1);
      FUN_00416ba0(&local_70,L"Filter error: ",local_78);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_70);
      FUN_004134c0(uVar5);
    }
    if (-3.0103 < *(double *)(*(longlong *)(param_1 + 0x600) + 0x10)) {
      FUN_00b8fd60(&local_a0,*(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x10),
                   *PTR_DAT_02005310,0,1);
      local_38 = local_a0;
      local_30 = 0x11;
      FUN_00b8fd60(&local_a8,0xc00815182a9930be,*PTR_DAT_02005310,0,1);
      local_28 = local_a8;
      local_20 = 0x11;
      FUN_00442f70(&local_98,L"Stopband above the upper limit (val=%s) (max=%s) !",&local_38,1);
      FUN_00416ba0(&local_90,L"Filter error: ",local_98);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_90);
      FUN_004134c0(uVar5);
    }
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x600) + 0x20);
    if (*pdVar2 <= 1.0 && *pdVar2 != 1.0) {
      FUN_00b8fd60(&local_c0,*(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x20),
                   *PTR_DAT_02005310,0,1);
      local_38 = local_c0;
      local_30 = 0x11;
      FUN_00b8fd60(&local_c8,0x3ff0000000000000,*PTR_DAT_02005310,0,1);
      local_28 = local_c8;
      local_20 = 0x11;
      FUN_00442f70(&local_b8,L"Passband frequency below the lower limit (val=%s) (min=%s) !",
                   &local_38,1);
      FUN_00416ba0(&local_b0,L"Filter error: ",local_b8);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_b0);
      FUN_004134c0(uVar5);
    }
    dVar1 = *(double *)(*(longlong *)(param_1 + 0x600) + 0x20);
    if (*(double *)(param_1 + 0x10) <= dVar1 && dVar1 != *(double *)(param_1 + 0x10)) {
      FUN_00b8fd60(&local_e0,*(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x20),
                   *PTR_DAT_02005310,0,1);
      local_38 = local_e0;
      local_30 = 0x11;
      FUN_00b8fd60(&local_e8,0x4202a05f20000000,*PTR_DAT_02005310,0,1);
      local_28 = local_e8;
      local_20 = 0x11;
      FUN_00442f70(&local_d8,L"Passband frequency above the upper limit (val=%s) (max=%s) !",
                   &local_38,1);
      FUN_00416ba0(&local_d0,L"Filter error: ",local_d8);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_d0);
      FUN_004134c0(uVar5);
    }
    dVar1 = *(double *)(*(longlong *)(param_1 + 0x600) + 0x20);
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x600) + 0x30);
    if (*pdVar2 <= dVar1 && dVar1 != *pdVar2) {
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,
                           L"Filter error: Stopband frequency lower than passband frequency!");
      FUN_004134c0(uVar5);
    }
    dVar1 = *(double *)(*(longlong *)(param_1 + 0x600) + 0x30);
    if (*(double *)(param_1 + 0x10) <= dVar1 && dVar1 != *(double *)(param_1 + 0x10)) {
      FUN_00b8fd60(&local_100,*(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x30),
                   *PTR_DAT_02005310,0,1);
      local_38 = local_100;
      local_30 = 0x11;
      FUN_00b8fd60(&local_108,0x4202a05f20000000,*PTR_DAT_02005310,0,1);
      local_28 = local_108;
      local_20 = 0x11;
      FUN_00442f70(&local_f8,L"Stopband frequency above the upper limit (val=%s) (max=%s) !",
                   &local_38,1);
      FUN_00416ba0(&local_f0,L"Filter error: ",local_f8);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_f0);
      FUN_004134c0(uVar5);
    }
  }
  pdVar2 = *(double **)(param_1 + 0x600);
  if (*(short *)((longlong)pdVar2 + 0x1fa4) == 0x48) {
    if (*pdVar2 <= -3.0103 && *pdVar2 != -3.0103) {
      FUN_00b8fd60(&local_120,**(undefined8 **)(param_1 + 0x600),*PTR_DAT_02005310,0,1);
      local_38 = local_120;
      local_30 = 0x11;
      FUN_00b8fd60(&local_128,0xc00815182a9930be,*PTR_DAT_02005310,0,1);
      local_28 = local_128;
      local_20 = 0x11;
      FUN_00442f70(&local_118,L"Passband below the lower limit (val=%s) (min=%s) !",&local_38,1);
      FUN_00416ba0(&local_110,L"Filter error: ",local_118);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_110);
      FUN_004134c0(uVar5);
    }
    if (-0.01 < **(double **)(param_1 + 0x600)) {
      FUN_00b8fd60(&local_140,**(undefined8 **)(param_1 + 0x600),*PTR_DAT_02005310,0,1);
      local_38 = local_140;
      local_30 = 0x11;
      FUN_00b8fd60(&local_148,0xbf847ae147ae147b,*PTR_DAT_02005310,0,1);
      local_28 = local_148;
      local_20 = 0x11;
      FUN_00442f70(&local_138,L"Passband above the upper limit (val=%s) (max=%s) !",&local_38,1);
      FUN_00416ba0(&local_130,L"Filter error: ",local_138);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_130);
      FUN_004134c0(uVar5);
    }
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x600) + 0x10);
    if (*pdVar2 <= -600.0 && *pdVar2 != -600.0) {
      FUN_00b8fd60(&local_160,*(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x10),
                   *PTR_DAT_02005310,0,1);
      local_38 = local_160;
      local_30 = 0x11;
      FUN_00b8fd60(&local_168,0xc082c00000000000,*PTR_DAT_02005310,0,1);
      local_28 = local_168;
      local_20 = 0x11;
      FUN_00442f70(&local_158,L"Stopband below the lower limit (val=%s) (min=%s) !",&local_38,1);
      FUN_00416ba0(&local_150,L"Filter error: ",local_158);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_150);
      FUN_004134c0(uVar5);
    }
    if (-3.0103 < *(double *)(*(longlong *)(param_1 + 0x600) + 0x10)) {
      FUN_00b8fd60(&local_180,*(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x10),
                   *PTR_DAT_02005310,0,1);
      local_38 = local_180;
      local_30 = 0x11;
      FUN_00b8fd60(&local_188,0xc00815182a9930be,*PTR_DAT_02005310,0,1);
      local_28 = local_188;
      local_20 = 0x11;
      FUN_00442f70(&local_178,L"Stopband above the upper limit (val=%s) (max=%s) !",&local_38,1);
      FUN_00416ba0(&local_170,L"Filter error: ",local_178);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_170);
      FUN_004134c0(uVar5);
    }
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x600) + 0x20);
    if (*pdVar2 <= 1.0 && *pdVar2 != 1.0) {
      FUN_00b8fd60(&local_1a0,*(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x20),
                   *PTR_DAT_02005310,0,1);
      local_38 = local_1a0;
      local_30 = 0x11;
      FUN_00b8fd60(&local_1a8,0x3ff0000000000000,*PTR_DAT_02005310,0,1);
      local_28 = local_1a8;
      local_20 = 0x11;
      FUN_00442f70(&local_198,L"Passband frequency below the lower limit (val=%s) (min=%s) !",
                   &local_38,1);
      FUN_00416ba0(&local_190,L"Filter error: ",local_198);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_190);
      FUN_004134c0(uVar5);
    }
    dVar1 = *(double *)(*(longlong *)(param_1 + 0x600) + 0x20);
    if (*(double *)(param_1 + 0x10) <= dVar1 && dVar1 != *(double *)(param_1 + 0x10)) {
      FUN_00b8fd60(&local_1c0,*(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x20),
                   *PTR_DAT_02005310,0,1);
      local_38 = local_1c0;
      local_30 = 0x11;
      FUN_00b8fd60(&local_1c8,0x4202a05f20000000,*PTR_DAT_02005310,0,1);
      local_28 = local_1c8;
      local_20 = 0x11;
      FUN_00442f70(&local_1b8,L"Passband frequency above the upper limit (val=%s) (max=%s) !",
                   &local_38,1);
      FUN_00416ba0(&local_1b0,L"Filter error: ",local_1b8);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_1b0);
      FUN_004134c0(uVar5);
    }
    dVar1 = *(double *)(*(longlong *)(param_1 + 0x600) + 0x30);
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x600) + 0x20);
    if (*pdVar2 <= dVar1 && dVar1 != *pdVar2) {
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,
                           L"Filter error: Passband frequency lower than stopband frequency!");
      FUN_004134c0(uVar5);
    }
    pdVar2 = (double *)(*(longlong *)(param_1 + 0x600) + 0x30);
    if (*pdVar2 <= 1.0 && *pdVar2 != 1.0) {
      FUN_00b8fd60(&local_1e0,*(undefined8 *)(*(longlong *)(param_1 + 0x600) + 0x30),
                   *PTR_DAT_02005310,0,1);
      local_38 = local_1e0;
      local_30 = 0x11;
      FUN_00b8fd60(&local_1e8,0x3ff0000000000000,*PTR_DAT_02005310,0,1);
      local_28 = local_1e8;
      local_20 = 0x11;
      FUN_00442f70(&local_1d8,L"Stopband frequency below the lower limit (val=%s) (min=%s) !",
                   &local_38,1);
      FUN_00416ba0(&local_1d0,L"Filter error: ",local_1d8);
      uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_1d0);
      FUN_004134c0(uVar5);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x600);
  *(double *)(lVar3 + 0x20) = *(double *)(lVar3 + 0x20) * 6.2831853071796;
  *(double *)(lVar3 + 0x28) = *(double *)(lVar3 + 0x28) * 6.2831853071796;
  *(double *)(lVar3 + 0x30) = *(double *)(lVar3 + 0x30) * 6.2831853071796;
  *(double *)(lVar3 + 0x38) = *(double *)(lVar3 + 0x38) * 6.2831853071796;
  if (*(short *)(lVar3 + 0x1fa8) == 0x41) {
    *(undefined8 *)(param_1 + 0x10) = 0x4202a05f20000000;
    uVar4 = FUN_01238b40(param_1 + 0x28);
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
  else {
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Filter error: FP1.implem error");
    FUN_004134c0(uVar5);
  }
  if (0 < *(int *)(param_1 + 8)) {
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Circuit synthesis error. Try another specification.")
    ;
    FUN_004134c0(uVar5);
  }
  FUN_00414560(&local_1e8,0x36);
  FUN_00414560(&local_18,2);
  return;
}

