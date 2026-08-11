/* Ghidra address: 01394040 */
/* Ghidra symbol: FUN_01394040 */


char FUN_01394040(byte param_1,longlong param_2,byte param_3,undefined8 param_4,undefined1 *param_5,
                 undefined1 *param_6,undefined8 param_7,undefined1 *param_8,ulonglong param_9,
                 longlong param_10,undefined4 param_11,undefined1 param_12,undefined1 param_13)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  undefined *puVar13;
  bool bVar14;
  undefined8 local_res20;
  undefined1 auStack_248 [32];
  wchar_t *local_228;
  undefined1 *local_220;
  ulonglong local_218;
  ulonglong local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  code *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180;
  uint local_178;
  undefined1 local_170;
  uint local_168;
  undefined1 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 *local_140;
  longlong *local_130;
  longlong local_128;
  longlong local_120;
  longlong *local_110;
  int local_104;
  longlong *local_100;
  longlong *local_f8;
  ulonglong local_f0;
  undefined1 *local_e8;
  char local_d9;
  int local_d8;
  uint local_d4;
  char local_cf;
  short local_ce;
  ushort local_cc;
  short local_ca;
  double local_c8;
  double local_c0;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1 [32];
  char local_91;
  undefined4 local_90;
  char local_89;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  char local_72;
  char local_71;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  int local_4c;
  longlong local_48;
  undefined8 local_40;
  byte local_31;
  undefined8 *local_30;
  longlong local_28;
  char local_19;
  
  local_140 = auStack_248;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1e8 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_158 = 0;
  local_148 = 0;
  local_150 = 0;
  local_60 = 0;
  local_e8 = (undefined1 *)0x0;
  local_f0 = 0;
  local_58 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_9);
  local_91 = '\0';
  local_19 = '\0';
  local_71 = 1;
  local_d9 = *(char *)(param_2 + 0xe2a);
  local_28 = 0;
  local_68 = 0;
  local_80 = 0;
  if (param_8 == (undefined1 *)0x0) {
    FUN_00414480(&local_f0);
  }
  else {
    FUN_00441640(&local_150,*(undefined8 *)(param_8 + 8));
    FUN_0044f8b0(&local_148,local_150);
    FUN_00441920(&local_f0,local_148);
  }
  local_228 = (wchar_t *)0x0;
  FUN_015fc970(&local_158,param_8,param_9,0);
  local_228 = (wchar_t *)CONCAT71(local_228._1_7_,param_1);
  local_220 = (undefined1 *)CONCAT71(local_220._1_7_,param_3);
  local_218 = local_f0;
  local_210 = param_9;
  local_208 = CONCAT71(local_208._1_7_,param_13);
  local_200 = 1;
  local_1f8 = local_158;
  local_28 = FUN_0138de60(&PTR_FUN_0138d958,1,param_2,8);
  *(undefined1 **)(local_28 + 0x1320) = param_8;
  *(bool *)(local_28 + 0x335) = param_10 != 0;
  *(longlong *)(local_28 + 0x13e0) = param_10;
  *(undefined4 *)(local_28 + 0x13e8) = param_11;
  *(undefined1 *)(local_28 + 0x12f2) = param_12;
  FUN_013908e0(param_1,param_3,local_28);
  uVar9 = FUN_016f1ea0(local_28,8,&local_d4);
  local_cf = param_1 == 2;
  if (param_1 < 8) {
    uVar6 = (int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1) << (param_1 & 0x1f);
    puVar10 = (undefined8 *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),(uVar6 & 5) != 0);
  }
  else {
    puVar10 = (undefined8 *)0x0;
  }
  if ((char)puVar10 != '\0') {
    if (param_1 == 2) {
      local_c0 = *(double *)(local_28 + 0x965);
      local_c8 = *(double *)(local_28 + 0x96d);
      local_ca = *(short *)(local_28 + 0x963);
      local_cc = (ushort)*(byte *)(local_28 + 0x975);
      puVar10 = (undefined8 *)CONCAT62((int6)((ulonglong)local_28 >> 0x10),local_cc);
    }
    if (param_3 == 0) {
      local_110 = (longlong *)
                  FUN_00f08900(&PTR_FUN_00f082b8,1,*(undefined8 *)PTR_DAT_02004030,local_28);
      FUN_0064dbe0(*(undefined8 *)(local_110[0xd6] + 0x538),local_d4 != 0xffffffff);
      local_ce = (**(code **)(*local_110 + 0x2d0))(local_110);
      local_91 = local_ce == 2;
      if (((local_ce == 1) && (param_1 == 2)) &&
         ((local_c0 != *(double *)(local_28 + 0x965) ||
          (((local_c8 != *(double *)(local_28 + 0x96d) ||
            ((int)local_ca != (uint)*(ushort *)(local_28 + 0x963))) ||
           (local_cc != *(byte *)(local_28 + 0x975))))))) {
        local_198 = local_28 + 0x965;
        local_190 = 3;
        local_188 = local_28 + 0x96d;
        local_180 = 3;
        local_178 = (uint)*(ushort *)(local_28 + 0x963);
        local_170 = 0;
        local_168 = (uint)*(byte *)(local_28 + 0x975);
        local_160 = 0;
        local_228 = (wchar_t *)CONCAT44(local_228._4_4_,3);
        FUN_016cd2c0(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_020023c0 + 0x958) + 0x4e8),
                     &DAT_013965b0,0,&local_198);
      }
      if (((local_ce == 1) && (*(char *)(*(longlong *)(local_110[0xd6] + 0x538) + 0xa9) != '\0')) &&
         (cVar3 = (**(code **)(**(longlong **)(local_110[0xd6] + 0x538) + 0x260))
                            (*(longlong **)(local_110[0xd6] + 0x538)), cVar3 != '\0')) {
        local_d9 = '\x01';
      }
      else {
        local_d9 = '\0';
      }
      puVar10 = (undefined8 *)FUN_00410f20(local_110);
    }
    if (local_d9 != '\0') {
      puVar10 = (undefined8 *)FUN_016f1b60(local_28,0,local_d4);
    }
  }
  if (local_91 == '\0') {
    if ((*PTR_DAT_02002b78 != '\0') || (*(char *)(local_28 + 0x335) != '\0')) {
      FUN_017d2d10(*(undefined8 *)(local_28 + 0xa0),8);
    }
    if (*(char *)(local_28 + 0x335) != '\0') {
      iVar7 = *(int *)(param_2 + 0x10);
      local_104 = 0;
      if (-1 < iVar7 + -1) {
        do {
          local_f8 = (longlong *)FUN_00b94e60(param_2,local_104);
          cVar3 = FUN_0198a580(local_f8);
          if (((cVar3 == '\x04') &&
              (cVar3 = (**(code **)(*local_f8 + 0x2d8))(local_f8), cVar3 != '\0')) &&
             ((sVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8), sVar5 == 0x3e ||
              (sVar5 = (**(code **)(*local_f8 + 0xf8))(local_f8), sVar5 == 0x66)))) {
            local_100 = local_f8;
            local_120 = local_28 + 0x5d8;
            local_228 = (wchar_t *)&local_b3;
            local_220 = local_b1;
            puVar10 = (undefined8 *)FUN_01cfde70(local_f8,3,0,&local_b2);
            *(undefined8 *)(local_120 + 0x38d) = *puVar10;
            local_228 = (wchar_t *)&local_b3;
            local_220 = local_b1;
            puVar10 = (undefined8 *)FUN_01cfde70(local_100,4,0,&local_b2);
            *(undefined8 *)(local_120 + 0x395) = *puVar10;
            local_228 = (wchar_t *)&local_b3;
            local_220 = local_b1;
            puVar11 = (undefined2 *)FUN_01cfde70(local_100,7,0,&local_b2);
            *(undefined2 *)(local_120 + 0x38b) = *puVar11;
            *(undefined1 *)(local_120 + 0x39d) = 1;
            *(undefined1 *)(local_120 + 3) = 0;
            *(undefined8 *)(local_120 + 0xbd) = 0x3ff0000000000000;
            break;
          }
          local_104 = local_104 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    FUN_017d18e0(local_28,8);
    if (param_8 == (undefined1 *)0x0) {
      FUN_00414480(&local_e8);
    }
    else {
      FUN_00441640(&local_e8,*(undefined8 *)(param_8 + 8));
    }
    local_228 = (wchar_t *)local_e8;
    local_220 = (undefined1 *)CONCAT71(local_220._1_7_,1);
    local_218 = local_218 & 0xffffffffffffff00;
    FUN_017cc620(local_28,4,param_1 == 1,*(undefined8 *)(param_2 + 0x360));
    *(undefined1 *)(*(longlong *)(local_28 + 0xb0) + 0x56) = *(undefined1 *)(local_28 + 0x975);
    local_128 = local_28 + 0x5d8;
    if (*(byte *)(local_28 + 0x5db) < 8) {
      bVar14 = ((int)CONCAT71((int7)((ulonglong)local_128 >> 8),1) <<
                (*(byte *)(local_28 + 0x5db) & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar14 = false;
    }
    if (bVar14) {
      cVar3 = *(char *)(local_28 + 0x5db);
      if (cVar3 == '\x01') {
        local_40 = *(undefined8 *)(local_28 + 0x6a0);
      }
      else if (cVar3 == '\x02') {
        if (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) < 2) {
          if (((*(longlong *)(local_28 + 0xa09) == 0) && (*(char *)(local_28 + 0xa15) == '\0')) ||
             (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) == 0)) {
            FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_28 + 0x1310),0);
          }
          if (*(longlong *)(local_128 + 0x431) == 0) {
            FUN_004169a0(&local_1a0,local_128 + 0x43d);
            plVar1 = *(longlong **)(*(longlong *)(local_28 + 0xa0) + 0x438);
            local_4c = (**(code **)(*plVar1 + 0xb8))(plVar1,local_1a0);
            if (local_4c == -1) {
              FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_28 + 0x1310),0);
            }
            FUN_004b5390(*(undefined8 *)(*(longlong *)(local_28 + 0xa0) + 0x438),&local_58,local_4c)
            ;
          }
          else {
            iVar7 = FUN_01b07e10(local_28,*(undefined8 *)(local_128 + 0x431));
            *(undefined8 *)(local_28 + 0x13c0) =
                 *(undefined8 *)(*(longlong *)(local_28 + 0x2b0) + -8 + (longlong)iVar7 * 8);
            local_228 = (wchar_t *)&local_b3;
            local_220 = local_b1;
            uVar9 = FUN_01b05ad0(*(undefined8 *)(local_28 + 0x13c0),
                                 *(undefined1 *)(local_128 + 0x439),
                                 *(undefined1 *)(local_128 + 0x43a),local_28 + 0x13c8);
            *(undefined8 *)(local_28 + 0x13d0) = uVar9;
            local_40 = **(undefined8 **)(local_28 + 0x13d0);
            FUN_012b4370(local_28,*(undefined8 *)(local_28 + 0x13c0),
                         *(char *)(local_128 + 0x439) + -1,*(char *)(local_128 + 0x43a) + -1);
          }
        }
        else {
          uVar9 = FUN_012b4460(&DAT_012b4088,1,local_28,8);
          *(undefined8 *)(local_28 + 0x588) = uVar9;
        }
      }
      else if ((byte)(cVar3 - 3U) < 2) {
        uVar9 = FUN_0114ee90(&DAT_0114e878,1,local_28);
        *(undefined8 *)(local_28 + 0x590) = uVar9;
      }
    }
    FUN_01af2a70(*(undefined8 *)(local_28 + 0xf10),FUN_01390b40);
    if ((local_cf == '\0') || (*(char *)(local_28 + 0x975) != '\x01')) {
      *(uint *)(local_28 + 0x13f0) = (uint)*(ushort *)(local_28 + 0x963);
    }
    else {
      uVar8 = FUN_017c59c0(*(undefined8 *)(local_28 + 0x965),*(undefined8 *)(local_28 + 0x96d),
                           *(undefined2 *)(local_28 + 0x963));
      *(undefined4 *)(local_28 + 0x13f0) = uVar8;
    }
    lVar2 = *(longlong *)(local_28 + 0xf10);
    *(double *)(lVar2 + 0x18) = (double)*(int *)(local_28 + 0x13f0) * *(double *)(local_28 + 0x695);
    FUN_01af29b0(lVar2,*(undefined1 *)(local_28 + 0x5dc));
    lVar2 = *(longlong *)(local_28 + 0xf10);
    *(undefined1 **)(lVar2 + 0x30) = param_8;
    FUN_00414ad0(lVar2 + 0x28,param_9);
    uVar9 = FUN_01af2a90(*(undefined8 *)(local_28 + 0xf10),param_7);
    if (param_3 < 8) {
      bVar14 = ((int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1) << (param_3 & 0x1f) & 0x38U) != 0;
    }
    else {
      bVar14 = false;
    }
    if (bVar14) {
      FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),4);
    }
    else if (param_3 == 2) {
      FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),0);
    }
    else {
      FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),1);
    }
    if (*(byte *)(local_28 + 0x5db) < 8) {
      bVar14 = ((int)CONCAT71((int7)((ulonglong)local_28 >> 8),1) <<
                (*(byte *)(local_28 + 0x5db) & 0x1f) & 0x21U) != 0;
    }
    else {
      bVar14 = false;
    }
    if (bVar14) {
      uVar9 = FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_013965bc,0);
    }
    else {
      uVar9 = FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_013965be,1);
    }
    if (param_1 < 8) {
      uVar6 = (int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1) << (param_1 & 0x1f);
      uVar12 = (ulonglong)CONCAT31((int3)(uVar6 >> 8),(uVar6 & 5) != 0);
    }
    else {
      uVar12 = 0;
    }
    if ((char)uVar12 != '\0') {
      if (param_3 < 8) {
        uVar6 = (int)CONCAT71((int7)(uVar12 >> 8),1) << (param_3 & 0x1f);
        uVar12 = (ulonglong)CONCAT31((int3)(uVar6 >> 8),(uVar6 & 0x38) != 0);
      }
      else {
        uVar12 = 0;
      }
      if (((char)uVar12 == '\0') &&
         (uVar12 = *(ulonglong *)PTR_DAT_02004e40, *(char *)(uVar12 + 0x27d0) == '\0')) {
        uVar12 = FUN_01af2ae0(*(undefined8 *)(local_28 + 0xf10));
      }
    }
    if (param_3 < 8) {
      bVar14 = ((int)CONCAT71((int7)(uVar12 >> 8),1) << (param_3 & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar14 = false;
    }
    if (bVar14) {
      local_228 = L"TINA.INI";
      FUN_00416cd0(&local_1a8,3,*(undefined8 *)PTR_DAT_02005010,&DAT_013965d0);
      local_130 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_1a8);
      local_228 = (wchar_t *)param_8;
      FUN_012ce750(&local_1b0,param_5,local_res20,L"timeout");
      uVar8 = (**(code **)(*local_130 + 0x20))
                        (local_130,L"TestMode Settings",L"MaxAutoTestSimulationTime",0xe10);
      local_d8 = FUN_0043fc50(local_1b0,uVar8);
      local_d8 = local_d8 * 1000;
      if (0 < local_d8) {
        local_1b8 = local_28;
        local_1c0 = FUN_0138e170;
        FUN_00f833f0(&local_1c0,local_d8);
      }
      FUN_00410f20(local_130);
    }
    local_19 = '\x01';
    puVar10 = (undefined8 *)FUN_01393170(param_1,local_28,param_3);
  }
  local_71 = '\0';
  if ((local_19 != '\0') && (local_28 != 0)) {
    local_30 = (undefined8 *)(local_28 + 0x5d8);
    local_31 = *(byte *)(local_28 + 0x5db);
    if (local_31 < 8) {
      uVar6 = 1 << (local_31 & 0x1f);
      puVar10 = (undefined8 *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),(uVar6 & 0xde) != 0);
    }
    else {
      puVar10 = (undefined8 *)0x0;
    }
    if ((char)puVar10 != '\0') {
      if (local_31 == 1) {
        *(undefined8 *)(local_28 + 0x6a0) = local_40;
        puVar10 = local_30;
      }
      else if (local_31 == 2) {
        local_48 = *(longlong *)(local_28 + 0xa0);
        if (*(int *)(*(longlong *)(local_48 + 0x470) + 0x10) < 2) {
          if (*(longlong *)(local_28 + 0xa09) == 0) {
            FUN_004b5450(*(undefined8 *)(local_48 + 0x438),local_4c,local_58);
            FUN_01440040(*(undefined8 *)(local_28 + 0xa0),*(undefined8 *)(local_28 + 0x1310),0);
            puVar10 = (undefined8 *)FUN_019af810(*(undefined8 *)(local_28 + 0xa0),8);
          }
          else {
            puVar10 = *(undefined8 **)(local_28 + 0x13d0);
            *puVar10 = local_40;
          }
        }
        else {
          puVar10 = (undefined8 *)FUN_00410f20(*(undefined8 *)(local_28 + 0x588));
        }
      }
      else {
        puVar10 = (undefined8 *)0x0;
        if ((byte)(local_31 - 3) < 2) {
          puVar10 = (undefined8 *)FUN_00410f20(*(undefined8 *)(local_28 + 0x590));
        }
      }
    }
  }
  if (local_28 != 0) {
    puVar10 = (undefined8 *)FUN_013900d0(local_28);
  }
  if (param_3 < 8) {
    uVar6 = (int)CONCAT71((int7)((ulonglong)puVar10 >> 8),1) << (param_3 & 0x1f);
    uVar12 = (ulonglong)CONCAT31((int3)(uVar6 >> 8),(uVar6 & 0x2c) != 0);
  }
  else {
    uVar12 = 0;
  }
  if (((char)uVar12 != '\0') && (local_28 != 0)) {
    if (param_3 < 8) {
      bVar14 = ((int)CONCAT71((int7)(uVar12 >> 8),1) << (param_3 & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar14 = false;
    }
    if (bVar14) {
      local_1b8 = local_28;
      local_1c0 = FUN_0138e170;
      FUN_00f834f0(&local_1c0);
    }
    if (param_8 == (undefined1 *)0x0) {
      FUN_00414480(&local_60);
    }
    else {
      FUN_00441640(&local_60,*(undefined8 *)(param_8 + 8));
    }
    local_228 = (wchar_t *)param_5;
    local_220 = param_6;
    local_218 = local_60;
    local_210 = local_210 & 0xffffffffffffff00;
    local_208 = 0;
    local_68 = FUN_012cf740(&DAT_012cd510,1,local_28,local_res20);
    uVar12 = 0;
    if (local_68 != 0) {
      local_70 = FUN_012d23d0(local_68,8);
      uVar4 = FUN_01b07dd0(local_28);
      *(undefined1 *)(local_70 + 0x38) = uVar4;
      if (*(char *)(local_28 + 0x49c) == '\x01') {
        if (local_71 == '\0') {
          FUN_012d5130(local_68,8,1,param_7);
        }
        local_72 = *(char *)(local_28 + 0x13da);
        if (local_72 == '\0') {
          local_78 = 4;
        }
        else {
          local_78 = 5;
        }
        local_228 = (wchar_t *)0x0;
        local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffffffffff00);
        FUN_012d2550(local_68,(undefined1)local_78,8,*(undefined1 *)(local_28 + 0x12f1));
      }
      else if (local_71 == '\0') {
        FUN_012d5130(local_68,8,0,param_7);
        FUN_012d5130(local_68,8,1,param_7);
        cVar3 = FUN_012d5820(local_68,8);
        if (cVar3 == '\0') {
          local_228 = (wchar_t *)0x0;
          local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffffffffff00);
          FUN_012d2550(local_68,0,8,*(undefined1 *)(local_28 + 0x12f1));
        }
        else {
          cVar3 = FUN_012d5850(local_68,8,*(undefined1 *)(local_28 + 0x12f1),param_7);
          if (cVar3 != '\0') {
            local_228 = (wchar_t *)0x0;
            local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffffffffff00);
            FUN_012d2550(local_68,1,8,*(undefined1 *)(local_28 + 0x12f1));
          }
        }
      }
      uVar12 = FUN_017cc920(local_28);
    }
  }
  if (param_3 < 8) {
    bVar14 = ((int)CONCAT71((int7)(uVar12 >> 8),1) << (param_3 & 0x1f) & 0x40U) != 0;
  }
  else {
    bVar14 = false;
  }
  if ((bVar14) && (local_28 != 0)) {
    local_1b8 = local_28;
    local_1c0 = FUN_0138e170;
    FUN_00f834f0(&local_1c0);
    if (param_8 == (undefined1 *)0x0) {
      FUN_00414480(&local_60);
    }
    else {
      FUN_00441640(&local_60,*(undefined8 *)(param_8 + 8));
    }
    local_228 = (wchar_t *)param_5;
    local_220 = param_6;
    local_218 = local_60;
    local_210 = local_210 & 0xffffffffffffff00;
    local_208 = 0;
    local_80 = FUN_01309b50(&DAT_01307998,1,local_28,local_res20);
    if (local_80 != 0) {
      local_88 = FUN_0130e420(local_80,8);
      uVar4 = FUN_01b07dd0(local_28);
      *(undefined1 *)(local_88 + 0x38) = uVar4;
      if (*(char *)(local_28 + 0x49c) == '\x01') {
        if (local_71 == '\0') {
          FUN_013136a0(local_80,8,1,param_7);
        }
        local_89 = *(char *)(local_28 + 0x13da);
        if (local_89 == '\0') {
          local_90 = 4;
        }
        else {
          local_90 = 5;
        }
        local_228 = (wchar_t *)0x0;
        local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffffffffff00);
        FUN_0130ea10(local_80,(undefined1)local_90,8,*(undefined1 *)(local_28 + 0x12f1));
      }
      else if (local_71 == '\0') {
        FUN_013136a0(local_80,8,0,param_7);
        FUN_013136a0(local_80,8,1,param_7);
        cVar3 = FUN_01313d60(local_80,8,*(undefined1 *)(local_28 + 0x12f1),param_7);
        if (cVar3 != '\0') {
          local_228 = (wchar_t *)0x0;
          local_220 = (undefined1 *)((ulonglong)local_220 & 0xffffffffffffff00);
          FUN_0130ea10(local_80,1,8,*(undefined1 *)(local_28 + 0x12f1));
        }
      }
      FUN_017cc920(local_28);
    }
  }
  if (local_71 != '\0') {
    if (local_28 != 0) {
      FUN_017cc920(local_28);
    }
    local_91 = '\x01';
  }
  FUN_00f513f0(local_28,1);
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_0132bb80(*(undefined8 *)PTR_DAT_02002da0,L" t =  0",0);
    FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02002da0 + 0x6f0),0);
    FUN_0132b070(*(undefined8 *)PTR_DAT_02002da0,0);
  }
  puVar13 = PTR_DAT_02002b78;
  if (((*PTR_DAT_02002b78 != '\0') &&
      (puVar13 = PTR_DAT_02004010, PTR_DAT_02004010[0x813] != '\x02')) &&
     (PTR_DAT_02004010[0x813] != '\x03')) {
    FUN_01c87d20(*(undefined8 *)PTR_DAT_02004e40);
    puVar13 = PTR_DAT_02004010;
    PTR_DAT_02004010[0x813] = 1;
  }
  if (param_3 < 8) {
    bVar14 = ((int)CONCAT71((int7)((ulonglong)puVar13 >> 8),1) << (param_3 & 0x1f) & 0x2cU) != 0;
  }
  else {
    bVar14 = false;
  }
  if (bVar14) {
    FUN_00410f20(local_68);
  }
  FUN_00414480(&local_1e8);
  FUN_00414520(&local_1e0);
  FUN_00414590(&local_1d8,2);
  FUN_00414480(&local_1c8);
  FUN_00414560(&local_1b0,3);
  FUN_00414560(&local_158,3);
  FUN_00414560(&local_f0,2);
  FUN_00414560(&local_60,2);
  FUN_00414560(&local_res20,3);
  FUN_00414480(&param_9);
  return local_91;
}

