/* Ghidra address: 016d8e70 */
/* Ghidra symbol: FUN_016d8e70 */


void FUN_016d8e70(byte param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
                 ulonglong *param_5,byte param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_2b8 [32];
  undefined *local_298;
  undefined **local_290;
  undefined4 local_288;
  char local_271;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
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
  undefined1 local_144 [16];
  undefined8 local_134;
  undefined8 local_12c;
  undefined8 local_124;
  undefined1 local_119;
  int local_118;
  undefined4 uStack_114;
  undefined7 local_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined8 uStack_101;
  undefined1 uStack_f9;
  double *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  int local_e0;
  int local_dc;
  int local_cc;
  double local_c8;
  int local_bc;
  
  local_270 = 0;
  local_268 = 0;
  local_258 = 0;
  local_260 = 0;
  local_248 = 0;
  local_250 = 0;
  local_238 = 0;
  local_240 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_150 = 0;
  local_158 = 0;
  uVar15 = *param_2;
  local_119 = (undefined1)uVar15;
  local_118 = (int)((ulonglong)uVar15 >> 8);
  uStack_114._0_3_ = (undefined3)((ulonglong)uVar15 >> 0x28);
  uStack_114._3_1_ = (undefined1)param_2[1];
  local_110 = (undefined7)((ulonglong)param_2[1] >> 8);
  uStack_109 = (undefined1)param_2[2];
  uStack_108 = (undefined7)((ulonglong)param_2[2] >> 8);
  uStack_101 = param_2[3];
  uStack_f9 = *(undefined1 *)(param_2 + 4);
  local_12c = *param_5;
  local_124 = param_5[1];
  FUN_005fd6d0(param_4[0xf],1);
  FUN_005fdab0(param_4[0x10],0xffffff);
  local_298._0_4_ = local_124._4_4_;
  local_290 = (undefined **)CONCAT44(local_290._4_4_,10);
  local_288 = 10;
  (**(code **)(*param_4 + 0x108))
            (param_4,local_12c & 0xffffffff,local_12c._4_4_,local_124 & 0xffffffff);
  (**(code **)(*param_4 + 200))
            (param_4,(int)local_12c + 5,
             (longlong)(local_124._4_4_ - local_12c._4_4_) / 2 & 0xffffffff);
  (**(code **)(*param_4 + 0xc0))
            (param_4,(int)local_124 + -5,
             (longlong)(local_124._4_4_ - local_12c._4_4_) / 2 & 0xffffffff);
  (**(code **)(*param_4 + 200))(param_4,(int)local_12c + 0x14,local_12c._4_4_ + 5);
  (**(code **)(*param_4 + 0xc0))(param_4,(int)local_12c + 0x14,local_124._4_4_ + -5);
  FUN_005fd6d0(param_4[0xf],2);
  local_bc = ((int)local_124 - (int)local_12c) + -0x19;
  local_dc = (local_124._4_4_ - local_12c._4_4_) + -10;
  local_cc = (int)local_12c + 0x14;
  local_e0 = local_12c._4_4_ + 5;
  uVar2 = FUN_004230a0(&local_12c);
  uVar2 = thunk_FUN_03f3ed25(uVar2,1,5);
  uVar3 = FUN_004230c0(&local_12c);
  uVar3 = thunk_FUN_03f3ed25(uVar3,7,10);
  uVar4 = FUN_004230a0(&local_12c);
  uVar5 = FUN_004230c0(&local_12c);
  local_298 = (undefined *)CONCAT44(local_298._4_4_,uVar5);
  FUN_00498350(local_144,uVar2,uVar3,uVar4);
  local_f8 = (double *)CONCAT44(uStack_114,local_118);
  local_f0 = CONCAT17(uStack_109,local_110);
  if (param_1 < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)local_f0 >> 8),1) << (param_1 & 0x1f) & 0xfeU) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    local_271 = FUN_016d87d0(auStack_2b8,&local_150);
  }
  if (param_1 < 6) {
    if (param_1 == 5) {
      if (local_271 == '\0') {
        (**(code **)(*param_4 + 0x128))(param_4,local_144,&local_150,0);
      }
      else {
        local_c8 = 1.0 / local_f8[1];
        FUN_016d8780(auStack_2b8,*local_f8 * 1.5);
        dVar17 = *local_f8;
        dVar19 = local_f8[2];
        local_230 = FUN_016d8160(auStack_2b8,0,0);
        local_228 = FUN_016d8160(auStack_2b8,dVar19,dVar17);
        local_220 = FUN_016d8160(auStack_2b8,local_c8 / 2.0 - dVar19,dVar17);
        local_218 = FUN_016d8160(auStack_2b8,local_c8 / 2.0 + dVar19,-dVar17);
        local_210 = FUN_016d8160(auStack_2b8,local_c8 - dVar19,-dVar17);
        local_208 = FUN_016d8160(auStack_2b8,local_c8,0);
        (**(code **)(*param_4 + 0xe0))(param_4,&local_230,5);
        if (dVar17 <= 0.0) {
          local_298 = &DAT_016da794;
          FUN_016d8200(auStack_2b8,-dVar17,dVar17,&DAT_016da86c);
        }
        else {
          local_298 = &DAT_016da86c;
          FUN_016d8200(auStack_2b8,dVar17,-dVar17,&DAT_016da794);
        }
        local_298._0_1_ = 1;
        local_290 = (undefined **)&DAT_016da7a4;
        FUN_016d84c0(auStack_2b8,local_c8,0,dVar17);
        uVar2 = FUN_004230a0(&local_12c);
        uVar2 = thunk_FUN_03f3ed25(uVar2,1,5);
        iVar6 = FUN_005fdfd0(param_4,&DAT_016da880);
        local_298 = (undefined *)CONCAT71(local_298._1_7_,1);
        FUN_00b8fd60(&local_240,local_c8,*PTR_DAT_02005310,0);
        FUN_00416ba0(&local_238,L"T = 1/f = ",local_240);
        (**(code **)(*param_4 + 0x120))(param_4,uVar2,(local_124._4_4_ - iVar6) + -5,local_238);
      }
      goto code_r0x016da635;
    }
    if (param_1 == 1) {
      if (local_271 == '\0') {
        (**(code **)(*param_4 + 0x128))(param_4,local_144,&local_150,0);
      }
      else {
        local_c8 = local_f8[1] * 8.0;
        FUN_016d8780(auStack_2b8,*local_f8 * 1.15);
        dVar17 = *local_f8;
        dVar19 = local_f8[1];
        local_180 = FUN_016d8160(auStack_2b8,0,0);
        local_178 = FUN_016d8160(auStack_2b8,0,dVar17);
        local_170 = FUN_016d8160(auStack_2b8,dVar19,dVar17);
        local_168 = FUN_016d8160(auStack_2b8,dVar19,0);
        local_160 = FUN_016d8160(auStack_2b8,local_c8,0);
        (**(code **)(*param_4 + 0xe0))(param_4,&local_180,4);
        if (dVar17 <= 0.0) {
          local_298 = &DAT_016da794;
          FUN_016d8200(auStack_2b8,0,dVar17,0);
        }
        else {
          local_298 = (undefined *)0x0;
          FUN_016d8200(auStack_2b8,dVar17,0,&DAT_016da794);
        }
        local_298 = (undefined *)((ulonglong)local_298 & 0xffffffffffffff00);
        local_290 = (undefined **)&DAT_016da7a4;
        FUN_016d84c0(auStack_2b8,dVar19,0,dVar17);
      }
      goto code_r0x016da635;
    }
    if (param_1 == 2) {
      if (local_271 == '\0') {
        (**(code **)(*param_4 + 0x128))(param_4,local_144,&local_150,0);
      }
      else {
        if (local_f8[1] == 0.0) {
          local_c8 = 4.0;
        }
        else {
          local_c8 = local_f8[1] * 4.0;
        }
        FUN_016d8780(auStack_2b8,*local_f8 * 1.5);
        dVar17 = *local_f8;
        dVar19 = local_f8[1];
        local_1a0 = FUN_016d8160(auStack_2b8,0,0);
        local_198 = FUN_016d8160(auStack_2b8,dVar19,0);
        local_190 = FUN_016d8160(auStack_2b8,dVar19,dVar17);
        local_188 = FUN_016d8160(auStack_2b8,local_c8,dVar17);
        (**(code **)(*param_4 + 0xe0))(param_4,&local_1a0,3);
        if (dVar17 <= 0.0) {
          local_298 = &DAT_016da794;
          FUN_016d8200(auStack_2b8,0,dVar17,0);
        }
        else {
          local_298 = (undefined *)0x0;
          FUN_016d8200(auStack_2b8,dVar17,0,&DAT_016da794);
        }
        if (0.0 < dVar19) {
          local_298 = (undefined *)((ulonglong)local_298 & 0xffffffffffffff00);
          local_290 = (undefined **)&DAT_016da7a4;
          FUN_016d84c0(auStack_2b8,dVar19,0,dVar17);
        }
      }
      goto code_r0x016da635;
    }
    if (param_1 == 3) {
      if (local_271 == '\0') {
        (**(code **)(*param_4 + 0x128))(param_4,local_144,&local_150,0);
      }
      else {
        dVar17 = local_f8[8];
        dVar18 = local_f8[2] + dVar17;
        dVar11 = local_f8[3] + dVar18;
        dVar12 = local_f8[4] + dVar11;
        dVar20 = local_f8[5] + dVar12;
        dVar21 = local_f8[6] + dVar20;
        dVar22 = local_f8[7] + dVar21;
        local_c8 = dVar22;
        dVar19 = (double)FUN_0040c850(*local_f8);
        dVar10 = (double)FUN_0040c850(local_f8[1]);
        if (dVar19 < dVar10) {
          FUN_016d8780(auStack_2b8,local_f8[1] * 1.5);
        }
        else {
          FUN_016d8780(auStack_2b8,*local_f8 * 1.5);
        }
        dVar19 = *local_f8;
        dVar10 = local_f8[1];
        local_1e0 = FUN_016d8160(auStack_2b8,0,0);
        local_1d8 = FUN_016d8160(auStack_2b8,dVar17,0);
        local_1d0 = FUN_016d8160(auStack_2b8,dVar18,dVar19);
        local_1c8 = FUN_016d8160(auStack_2b8,dVar11,dVar19);
        local_1c0 = FUN_016d8160(auStack_2b8,dVar12,0);
        local_1b8 = FUN_016d8160(auStack_2b8,dVar20,dVar10);
        local_1b0 = FUN_016d8160(auStack_2b8,dVar21,dVar10);
        local_1a8 = FUN_016d8160(auStack_2b8,dVar22,0);
        (**(code **)(*param_4 + 0xe0))(param_4,&local_1e0,7);
        local_298 = &DAT_016da7cc;
        FUN_016d8200(auStack_2b8,dVar19,dVar10,&DAT_016da7b8);
        if (0.0 < local_f8[8]) {
          local_298 = (undefined *)((ulonglong)local_298 & 0xffffffffffffff00);
          local_290 = &PTR_DAT_016da7e0;
          FUN_016d84c0(auStack_2b8,dVar17,dVar17 / 2.0,0x3ff0000000000000);
        }
        if (0.0 < local_f8[2]) {
          local_298 = (undefined *)((ulonglong)local_298 & 0xffffffffffffff00);
          local_290 = (undefined **)&DAT_016da7f4;
          FUN_016d84c0(auStack_2b8,dVar18,local_f8[2] / 2.0,dVar19);
        }
        if (0.0 < local_f8[3]) {
          local_298 = (undefined *)((ulonglong)local_298 & 0xffffffffffffff00);
          local_290 = (undefined **)&DAT_016da808;
          FUN_016d84c0(auStack_2b8,dVar11,local_f8[3] / 2.0,dVar19);
        }
        if (0.0 < local_f8[4]) {
          local_298 = (undefined *)((ulonglong)local_298 & 0xffffffffffffff00);
          local_290 = (undefined **)&DAT_016da81c;
          FUN_016d84c0(auStack_2b8,dVar12,local_f8[4] / 2.0,dVar19);
        }
        if (0.0 < local_f8[5]) {
          local_298 = (undefined *)((ulonglong)local_298 & 0xffffffffffffff00);
          local_290 = (undefined **)&DAT_016da830;
          FUN_016d84c0(auStack_2b8,dVar20,local_f8[5] / 2.0,dVar10);
        }
        if (0.0 < local_f8[6]) {
          local_298 = (undefined *)((ulonglong)local_298 & 0xffffffffffffff00);
          local_290 = (undefined **)&DAT_016da844;
          FUN_016d84c0(auStack_2b8,dVar21,local_f8[6] / 2.0,dVar10);
        }
        if (0.0 < local_f8[7]) {
          local_298 = (undefined *)((ulonglong)local_298 & 0xffffffffffffff00);
          local_290 = (undefined **)&DAT_016da858;
          FUN_016d84c0(auStack_2b8,dVar22,local_f8[7] / 2.0,dVar10);
        }
      }
      goto code_r0x016da635;
    }
    if (param_1 != 4) goto code_r0x016da635;
  }
  else {
    if (param_1 == 6) {
      if (local_271 == '\0') {
        (**(code **)(*param_4 + 0x128))(param_4,local_144,&local_150,0);
      }
      else {
        local_c8 = 1.0 / local_f8[1];
        FUN_016d8780(auStack_2b8,*local_f8 * 1.5);
        dVar17 = *local_f8;
        local_1a0 = FUN_016d8160(auStack_2b8,0,0);
        local_198 = FUN_016d8160(auStack_2b8,local_c8 / 4.0,dVar17);
        local_190 = FUN_016d8160(auStack_2b8,(local_c8 * 3.0) / 4.0,-dVar17);
        local_188 = FUN_016d8160(auStack_2b8,local_c8,0);
        (**(code **)(*param_4 + 0xe0))(param_4,&local_1a0,3);
        if (dVar17 <= 0.0) {
          local_298 = &DAT_016da794;
          FUN_016d8200(auStack_2b8,-dVar17,dVar17,&DAT_016da86c);
        }
        else {
          local_298 = &DAT_016da86c;
          FUN_016d8200(auStack_2b8,dVar17,-dVar17,&DAT_016da794);
        }
        local_298._0_1_ = 1;
        local_290 = (undefined **)&DAT_016da7a4;
        FUN_016d84c0(auStack_2b8,local_c8,0,dVar17);
        uVar2 = FUN_004230a0(&local_12c);
        uVar2 = thunk_FUN_03f3ed25(uVar2,1,5);
        iVar6 = FUN_005fdfd0(param_4,&DAT_016da880);
        local_298 = (undefined *)CONCAT71(local_298._1_7_,1);
        FUN_00b8fd60(&local_200,local_c8,*PTR_DAT_02005310,0);
        FUN_00416ba0(&local_1f8,L"T = 1/f = ",local_200);
        (**(code **)(*param_4 + 0x120))(param_4,uVar2,(local_124._4_4_ - iVar6) + -5,local_1f8);
      }
      goto code_r0x016da635;
    }
    if (param_1 != 7) {
      if ((param_1 == 9) && (CONCAT17(uStack_109,local_110) != 0)) {
        uVar13 = 0;
        uVar14 = 0;
        iVar8 = 1;
        iVar6 = local_118;
        uVar15 = 0;
        uVar16 = 0;
        if (0 < local_118) {
          do {
            uVar13 = FUN_00b90620(*(undefined8 *)
                                   (CONCAT17(uStack_109,local_110) + -8 + (longlong)iVar8 * 0x10),
                                  uVar13);
            uVar14 = FUN_00b90650(*(undefined8 *)
                                   (CONCAT17(uStack_109,local_110) + -8 + (longlong)iVar8 * 0x10),
                                  uVar14);
            iVar8 = iVar8 + 1;
            iVar6 = iVar6 + -1;
            uVar15 = uVar13;
            uVar16 = uVar14;
          } while (iVar6 != 0);
        }
        if (local_118 < 1) {
          local_c8 = 0.0;
        }
        else {
          local_c8 = *(double *)
                      (CONCAT17(uStack_109,local_110) + -0x10 + (longlong)local_118 * 0x10);
        }
        if (local_c8 == 0.0) {
          local_c8 = 1e-06;
        }
        uVar13 = FUN_0040c850(uVar15);
        uVar14 = FUN_0040c850(uVar16);
        dVar17 = (double)FUN_00b90620(uVar13,uVar14);
        FUN_016d8780(auStack_2b8,dVar17 * 1.5);
        uVar7 = FUN_016d8160(auStack_2b8,*(undefined8 *)CONCAT17(uStack_109,local_110),
                             ((undefined8 *)CONCAT17(uStack_109,local_110))[1]);
        local_e8._4_4_ = (int)(uVar7 >> 0x20);
        uVar2 = local_e8._4_4_;
        local_e8 = uVar7;
        (**(code **)(*param_4 + 200))(param_4,uVar7 & 0xffffffff,uVar2);
        iVar6 = 2;
        if (1 < local_118) {
          iVar8 = local_118 + -1;
          do {
            uVar7 = FUN_016d8160(auStack_2b8,
                                 *(undefined8 *)
                                  (CONCAT17(uStack_109,local_110) + -0x10 + (longlong)iVar6 * 0x10),
                                 *(undefined8 *)
                                  (CONCAT17(uStack_109,local_110) + -8 + (longlong)iVar6 * 0x10));
            local_134._0_4_ = (int)uVar7;
            local_134._4_4_ = (int)(uVar7 >> 0x20);
            iVar1 = local_134._4_4_;
            local_134 = uVar7;
            if (((int)local_134 != (int)local_e8) ||
               (bVar9 = local_134._4_4_ != local_e8._4_4_, bVar9)) {
              (**(code **)(*param_4 + 0xc0))(param_4,uVar7 & 0xffffffff,iVar1);
              local_e8 = local_134;
            }
            iVar6 = iVar6 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        local_298._0_1_ = 1;
        FUN_00b8fd60(&local_158,local_c8,*PTR_DAT_02005310,0);
        local_298._0_1_ = 1;
        FUN_00b8fd60(&local_250,uVar15,*PTR_DAT_02005310,0);
        FUN_00416ba0(&local_248,L"Max: ",local_250);
        (**(code **)(*param_4 + 0x120))(param_4,(int)local_12c + 5,local_12c._4_4_ + 5,local_248);
        iVar6 = FUN_005fdfd0(param_4,&DAT_016da880);
        local_298 = (undefined *)CONCAT71(local_298._1_7_,1);
        FUN_00b8fd60(&local_260,uVar16,*PTR_DAT_02005310,0);
        FUN_00416ba0(&local_258,L"Min: ",local_260);
        (**(code **)(*param_4 + 0x120))
                  (param_4,(int)local_12c + 5,(local_124._4_4_ - iVar6) + -5,local_258);
        FUN_00416ba0(&local_268,L"Max: ",local_158);
        iVar6 = FUN_005fdff0(param_4,local_268);
        iVar8 = FUN_005fdfd0(param_4,&DAT_016da880);
        FUN_00416ba0(&local_270,L"Max: ",local_158);
        (**(code **)(*param_4 + 0x120))
                  (param_4,((int)local_124 - iVar6) + -5,(local_124._4_4_ - iVar8) + -5,local_270);
      }
      goto code_r0x016da635;
    }
  }
  if (local_271 == '\0') {
    (**(code **)(*param_4 + 0x128))(param_4,local_144,&local_150,0);
  }
  else {
    local_c8 = 1.0 / local_f8[1];
    FUN_016d8780(auStack_2b8,*local_f8 * 1.5);
    dVar17 = local_c8 / 40.0;
    dVar19 = local_f8[2] * 0.017453292519943295;
    if ((param_6 & param_1 == 4) != 0) {
      dVar19 = dVar19 - 1.5707963267948966;
    }
    dVar10 = local_f8[1];
    dVar18 = *local_f8;
    dVar11 = (double)FUN_0040bcd0(dVar19);
    uVar7 = FUN_016d8160(auStack_2b8,0,dVar18 * dVar11);
    local_e8._4_4_ = (int)(uVar7 >> 0x20);
    uVar2 = local_e8._4_4_;
    local_e8 = uVar7;
    (**(code **)(*param_4 + 200))(param_4,uVar7 & 0xffffffff,uVar2);
    for (dVar11 = dVar17; dVar11 <= local_c8 + local_c8 / 100.0; dVar11 = dVar11 + dVar17) {
      dVar12 = (double)FUN_0040bcd0(dVar10 * 6.283185307179586 * dVar11 + dVar19);
      uVar7 = FUN_016d8160(auStack_2b8,dVar11,dVar18 * dVar12);
      local_e8._4_4_ = (int)(uVar7 >> 0x20);
      uVar2 = local_e8._4_4_;
      local_e8 = uVar7;
      (**(code **)(*param_4 + 0xc0))(param_4,uVar7 & 0xffffffff,uVar2);
    }
    if (dVar18 <= 0.0) {
      local_298 = &DAT_016da794;
      FUN_016d8200(auStack_2b8,-dVar18,dVar18,&DAT_016da86c);
    }
    else {
      local_298 = &DAT_016da86c;
      FUN_016d8200(auStack_2b8,dVar18,-dVar18,&DAT_016da794);
    }
    if (param_1 == 4) {
      local_298 = (undefined *)CONCAT71(local_298._1_7_,1);
      local_290 = (undefined **)&DAT_016da7a4;
      FUN_016d84c0(auStack_2b8,local_c8,0,dVar18);
    }
    else {
      local_298 = (undefined *)((ulonglong)local_298._1_7_ << 8);
      local_290 = (undefined **)&DAT_016da7a4;
      FUN_016d84c0(auStack_2b8,local_c8,0,0x3ff0000000000000);
    }
    uVar2 = FUN_004230a0(&local_12c);
    uVar2 = thunk_FUN_03f3ed25(uVar2,1,5);
    iVar6 = FUN_005fdfd0(param_4,&DAT_016da880);
    local_298 = (undefined *)CONCAT71(local_298._1_7_,1);
    FUN_00b8fd60(&local_1f0,local_c8,*PTR_DAT_02005310,0);
    FUN_00416ba0(&local_1e8,L"T = 1/f = ",local_1f0);
    (**(code **)(*param_4 + 0x120))(param_4,uVar2,(local_124._4_4_ - iVar6) + -5,local_1e8);
  }
code_r0x016da635:
  FUN_00414560(&local_270,8);
  FUN_00414560(&local_200,4);
  FUN_00414560(&local_158,2);
  return;
}

