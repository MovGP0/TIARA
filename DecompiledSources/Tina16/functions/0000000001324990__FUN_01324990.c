/* Ghidra address: 01324990 */
/* Ghidra symbol: FUN_01324990 */


char FUN_01324990(byte param_1,longlong param_2,byte param_3,undefined8 param_4,undefined1 *param_5,
                 undefined1 *param_6,undefined8 param_7,undefined1 *param_8,ulonglong param_9)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  double dVar11;
  undefined8 local_res20;
  undefined1 auStack_308 [32];
  wchar_t *local_2e8;
  undefined1 *local_2e0;
  longlong local_2d8;
  ulonglong local_2d0;
  ulonglong local_2c8;
  undefined1 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  code *local_268;
  undefined8 local_260;
  undefined8 local_258;
  code *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  longlong local_208;
  undefined1 local_200;
  longlong local_1f8;
  undefined1 local_1f0;
  uint local_1e8;
  undefined1 local_1e0;
  code *local_1d8;
  undefined8 *local_1d0;
  code *local_1c8;
  code *local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  double local_188;
  double local_180;
  double local_178;
  char local_169;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  char *local_140;
  longlong local_138;
  longlong *local_130;
  longlong *local_128;
  longlong local_120;
  longlong local_118;
  undefined1 *local_110;
  undefined8 *local_108;
  int local_fc;
  char local_f6;
  char local_f5;
  short local_f4;
  short local_f2;
  double local_f0;
  double local_e8;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9 [24];
  char local_c1;
  undefined4 local_c0;
  char local_b9;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  char local_a2;
  char local_a1;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  int local_7c;
  longlong local_78;
  undefined8 local_70;
  byte local_61;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  longlong local_28;
  char local_19;
  
  local_190 = auStack_308;
  local_280 = 0;
  local_288 = 0;
  local_2a0 = 0;
  local_290 = 0;
  local_298 = 0;
  local_278 = 0;
  local_270 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = (code *)0x0;
  local_240 = 0;
  local_248 = 0;
  local_250 = (code *)0x0;
  local_238 = 0;
  local_228 = 0;
  local_230 = 0;
  local_218 = 0;
  local_220 = 0;
  local_210 = 0;
  local_1d0 = (undefined8 *)0x0;
  local_1d8 = (code *)0x0;
  local_1b0 = 0;
  local_1c8 = (code *)0x0;
  local_1a8 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_108 = (undefined8 *)0x0;
  local_90 = 0;
  local_110 = (undefined1 *)0x0;
  local_118 = 0;
  local_38 = 0;
  local_50 = 0;
  local_88 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_9);
  local_c1 = '\0';
  local_19 = '\0';
  local_a1 = 1;
  local_28 = 0;
  if (param_8 == (undefined1 *)0x0) {
    FUN_00414480(&local_118);
  }
  else {
    FUN_00441640(&local_1a0,*(undefined8 *)(param_8 + 8));
    FUN_0044f8b0(&local_198,local_1a0);
    FUN_00441920(&local_118,local_198);
  }
  local_2e8 = (wchar_t *)0x0;
  FUN_015fc970(&local_1a8,param_8,param_9,0);
  local_2e8 = (wchar_t *)CONCAT71(local_2e8._1_7_,param_1);
  local_2e0 = (undefined1 *)CONCAT71(local_2e0._1_7_,param_3);
  local_2d8 = local_118;
  local_2d0 = param_9;
  local_2c8 = local_2c8 & 0xffffffffffffff00;
  local_2c0 = 1;
  local_2b8 = local_1a8;
  local_28 = FUN_0131dba0(&PTR_FUN_0131cd18,1,param_2,1);
  *(undefined1 **)(local_28 + 0x1320) = param_8;
  FUN_01320320(param_1,param_3,local_28);
  *(undefined1 *)(local_28 + 0x13b1) = 0;
  local_f6 = param_1 == 2;
  if ((bool)local_f6) {
    FUN_004169a0(&local_108,*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0xe70) + 0xb80);
    if (local_108 == (undefined8 *)0x0) {
      uVar7 = FUN_016f1c10(local_28,1);
    }
    else {
      uVar7 = FUN_016f1c10(local_28,6);
    }
  }
  else {
    uVar7 = FUN_016f1c10(local_28,1);
  }
  if (param_1 < 8) {
    bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (param_1 & 0x1f) & 5U) != 0;
  }
  else {
    bVar10 = false;
  }
  if (bVar10) {
    if (param_1 == 2) {
      local_e8 = *(double *)(local_28 + 0x83a);
      local_f0 = *(double *)(local_28 + 0x842);
      local_f2 = *(short *)(local_28 + 0x838);
    }
    if (param_3 == 0) {
      local_2e8 = *(wchar_t **)(local_28 + 0xa0);
      local_130 = (longlong *)
                  FUN_012b31a0(&PTR_FUN_012b2818,1,*(undefined8 *)PTR_DAT_02004030,local_28);
      if (local_108 != (undefined8 *)0x0) {
        (**(code **)(**(longlong **)(local_130[0xd6] + 0x510) + 0x128))
                  (*(longlong **)(local_130[0xd6] + 0x510),0);
      }
      cVar2 = (**(code **)(**(longlong **)(local_130[0xd6] + 0x510) + 0xf0))
                        (*(longlong **)(local_130[0xd6] + 0x510));
      if (cVar2 == '\0') {
        FUN_010bd010(&local_1c8,*(undefined1 *)(local_28 + 0x4c8));
        local_1c0 = local_1c8;
        local_1b8._0_1_ = 0x11;
        FUN_00442f70(&local_1b0,L"[%s]",&local_1c0,0);
        FUN_0064de00(*(undefined8 *)(local_130[0xd6] + 0x4f0),local_1b0);
        FUN_010bd010(&local_1d8,*(undefined1 *)(local_28 + 0x4c8));
        local_1c0 = local_1d8;
        local_1b8 = CONCAT71(local_1b8._1_7_,0x11);
        FUN_00442f70(&local_1d0,L"[%s]",&local_1c0,0);
        FUN_0064de00(*(undefined8 *)(local_130[0xd6] + 0x4f8),local_1d0);
      }
      local_f4 = (**(code **)(*local_130 + 0x2d0))(local_130);
      local_c1 = local_f4 == 2;
      if (((local_f4 == 1) && (param_1 == 2)) &&
         ((local_e8 != *(double *)(local_28 + 0x83a) ||
          ((local_f0 != *(double *)(local_28 + 0x842) ||
           ((int)local_f2 != (uint)*(ushort *)(local_28 + 0x838))))))) {
        local_208 = local_28 + 0x83a;
        local_200 = 3;
        local_1f8 = local_28 + 0x842;
        local_1f0 = 3;
        local_1e8 = (uint)*(ushort *)(local_28 + 0x838);
        local_1e0 = 0;
        local_2e8 = (wchar_t *)CONCAT44(local_2e8._4_4_,2);
        FUN_016cd2c0(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_020023c0 + 0x958) + 0x4e8),
                     &DAT_01327808,0,&local_208);
      }
      uVar3 = (**(code **)(**(longlong **)(local_130[0xd6] + 0x508) + 0x260))
                        (*(longlong **)(local_130[0xd6] + 0x508));
      *(undefined1 *)(local_28 + 0x13b0) = uVar3;
      uVar3 = (**(code **)(**(longlong **)(local_130[0xd6] + 0x4b8) + 0x260))
                        (*(longlong **)(local_130[0xd6] + 0x4b8));
      *(undefined1 *)(local_28 + 0x13b1) = uVar3;
      FUN_00410f20(local_130);
    }
    else {
      *(undefined1 *)(local_28 + 0x13b0) = *(undefined1 *)(local_28 + 0xdb6);
    }
  }
  local_138 = local_28 + 0x5d8;
  local_140 = (char *)(local_28 + 0x4c8);
  if ((*local_140 != '\x01') ||
     ((((0.0 < *(double *)(local_28 + 0x83a) || *(double *)(local_28 + 0x83a) == 0.0 &&
        (*(double *)(local_28 + 0x83a) <= 100.0)) &&
       (0.0 < *(double *)(local_28 + 0x842) || *(double *)(local_28 + 0x842) == 0.0)) &&
      (*(double *)(local_28 + 0x842) <= 100.0)))) {
    local_f5 = '\0';
  }
  else {
    local_f5 = '\x01';
  }
  lVar9 = 0;
  if (local_c1 == '\0' && local_f5 == '\0') {
    if (local_f6 == '\0') {
      if (*(longlong *)(local_28 + 0xda6) == 0) {
        local_128 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        local_2e8 = (wchar_t *)((ulonglong)local_2e8 & 0xffffffffffffff00);
        FUN_010bd500(param_2,local_128,1,0);
        iVar4 = (**(code **)(*local_128 + 0x28))(local_128);
        if (0 < iVar4) {
          (**(code **)(*local_128 + 0x18))(local_128,&local_210,0);
          FUN_00414ad0(local_28 + 0xda6,local_210);
        }
        FUN_00410f20(local_128);
      }
      cVar2 = FUN_012b2e80(local_28,*(undefined8 *)(local_28 + 0xda6));
      if (cVar2 == '\0') {
        plVar1 = *(longlong **)(*(longlong *)(local_28 + 0xa0) + 0x438);
        local_2c = (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined8 *)(local_28 + 0xda6));
        if (local_2c == -1) {
          FUN_00de8980(&local_220,0x107,*(undefined8 *)(local_28 + 0x1310));
          local_1c0 = *(code **)(local_28 + 0xda6);
          local_1b8 = CONCAT71(local_1b8._1_7_,0x11);
          FUN_00442f70(&local_218,local_220,&local_1c0,0);
          FUN_01b05080(local_218,0x1582,0);
        }
        FUN_00414ad0(local_28 + 0x13a0,*(undefined8 *)(local_28 + 0xda6));
        *(longlong *)(local_28 + 5000) = local_28 + 0x1408;
        FUN_004b5390(*(undefined8 *)(*(longlong *)(local_28 + 0xa0) + 0x438),&local_38,local_2c);
      }
      else {
        if (*(char *)(local_28 + 0x4c8) == '\0') {
          FUN_00de8980(&local_230,0x107,*(undefined8 *)(local_28 + 0x1310));
          local_1c0 = *(code **)(local_28 + 0xda6);
          local_1b8 = CONCAT71(local_1b8._1_7_,0x11);
          FUN_00442f70(&local_228,local_230,&local_1c0,0);
          FUN_01b05080(local_228,0x1582,0);
        }
        local_158 = local_28 + 0x4c8;
        local_2e8 = (wchar_t *)&local_da;
        local_2e0 = &local_db;
        uVar7 = FUN_01b05ad0(*(undefined8 *)(local_28 + 0x4d0),*(undefined1 *)(local_28 + 0x4d8),0,
                             local_d9);
        *(undefined8 *)(local_28 + 5000) = uVar7;
        local_40 = **(undefined8 **)(local_28 + 5000);
      }
    }
    else {
      local_148 = local_28 + 0x5d8;
      iVar4 = FUN_004170c0(L"TEMP",local_108,1);
      if (iVar4 == 1) {
        *(longlong *)(local_28 + 5000) = local_148 + 200;
      }
      else {
        iVar4 = FUN_004170c0(L"PARAM",local_108,1);
        if (iVar4 == 1) {
          *(longlong *)(local_28 + 5000) =
               *(longlong *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0xe70) + 0xd98) + 0x28;
        }
        else {
          FUN_012b2e80(local_28,local_108);
          local_150 = local_28 + 0x4c8;
          local_2e8 = (wchar_t *)&local_da;
          local_2e0 = &local_db;
          uVar7 = FUN_01b05ad0(*(undefined8 *)(local_28 + 0x4d0),*(undefined1 *)(local_28 + 0x4d8),0
                               ,local_d9);
          *(undefined8 *)(local_28 + 5000) = uVar7;
          *(undefined8 *)(local_28 + 0x1418) = *(undefined8 *)(local_150 + 8);
        }
      }
    }
    if (*(char *)(local_28 + 0xdb7) != '\0') {
      local_120 = FUN_013235b0(local_28,*(undefined8 *)(local_28 + 0xdae));
      if (local_120 == 0) {
        plVar1 = *(longlong **)(*(longlong *)(local_28 + 0xa0) + 0x438);
        local_44 = (**(code **)(*plVar1 + 0xb8))(plVar1,*(undefined8 *)(local_28 + 0xdae));
        FUN_00414ad0(local_28 + 0x13a8,*(undefined8 *)(local_28 + 0xdae));
        *(longlong *)(local_28 + 0x1398) = local_28 + 0x1408;
        FUN_004b5390(*(undefined8 *)(*(longlong *)(local_28 + 0xa0) + 0x438),&local_50,local_44);
      }
      else {
        local_2e8 = (wchar_t *)&local_da;
        local_2e0 = &local_db;
        uVar7 = FUN_01cfde70(local_120,1,0,local_d9);
        *(undefined8 *)(local_28 + 0x1398) = uVar7;
        local_58 = **(undefined8 **)(local_28 + 0x1398);
      }
    }
    if (param_8 == (undefined1 *)0x0) {
      FUN_00414480(&local_110);
    }
    else {
      FUN_00441640(&local_110,*(undefined8 *)(param_8 + 8));
    }
    FUN_017d18e0(local_28,1);
    if (*(char *)(local_28 + 0x13b0) == '\0') {
      local_2e8 = (wchar_t *)local_110;
      local_2e0 = (undefined1 *)CONCAT71(local_2e0._1_7_,1);
      local_2d8 = (ulonglong)local_2d8._1_7_ << 8;
      FUN_017cc620(local_28,0,param_1 == 1,*(undefined8 *)(param_2 + 0x360));
      *(bool *)(*(longlong *)(local_28 + 0xb0) + 0x55) =
           *(double *)(local_28 + 0x842) <= *(double *)(local_28 + 0x83a) &&
           *(double *)(local_28 + 0x83a) != *(double *)(local_28 + 0x842);
    }
    else {
      local_2e8 = (wchar_t *)local_110;
      local_2e0 = (undefined1 *)CONCAT71(local_2e0._1_7_,1);
      local_2d8 = (ulonglong)local_2d8._1_7_ << 8;
      FUN_017cc620(local_28,1,param_1 == 1,*(undefined8 *)(param_2 + 0x360));
    }
    local_160 = local_28 + 0x5d8;
    if (*(byte *)(local_28 + 0x5db) < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)local_160 >> 8),1) <<
                (*(byte *)(local_28 + 0x5db) & 0x1f) & 0xdeU) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      cVar2 = *(char *)(local_28 + 0x5db);
      if (cVar2 == '\x01') {
        local_70 = *(undefined8 *)(local_28 + 0x6a0);
      }
      else if (cVar2 == '\x02') {
        if (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) < 2) {
          if (((*(longlong *)(local_28 + 0xa09) == 0) && (*(char *)(local_28 + 0xa15) == '\0')) ||
             (*(int *)(*(longlong *)(*(longlong *)(local_28 + 0xa0) + 0x470) + 0x10) == 0)) {
            FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_28 + 0x1310),0);
          }
          if (*(longlong *)(local_160 + 0x431) == 0) {
            FUN_004169a0(&local_238,local_160 + 0x43d);
            plVar1 = *(longlong **)(*(longlong *)(local_28 + 0xa0) + 0x438);
            local_7c = (**(code **)(*plVar1 + 0xb8))(plVar1,local_238);
            if (local_7c == -1) {
              FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_28 + 0x1310),0);
            }
            FUN_004b5390(*(undefined8 *)(*(longlong *)(local_28 + 0xa0) + 0x438),&local_88,local_7c)
            ;
          }
          else {
            iVar4 = FUN_01b07e10(local_28,*(undefined8 *)(local_160 + 0x431));
            *(undefined8 *)(local_28 + 0x1410) =
                 *(undefined8 *)(*(longlong *)(local_28 + 0x2b0) + -8 + (longlong)iVar4 * 8);
            local_2e8 = (wchar_t *)&local_da;
            local_2e0 = &local_db;
            uVar7 = FUN_01b05ad0(*(undefined8 *)(local_28 + 0x1410),
                                 *(undefined1 *)(local_160 + 0x439),
                                 *(undefined1 *)(local_160 + 0x43a),local_d9);
            *(undefined8 *)(local_28 + 0x1390) = uVar7;
            local_70 = **(undefined8 **)(local_28 + 0x1390);
            FUN_012b4370(local_28,*(undefined8 *)(local_28 + 0x1410),
                         *(char *)(local_160 + 0x439) + -1,*(char *)(local_160 + 0x43a) + -1);
          }
        }
        else {
          uVar7 = FUN_012b4460(&DAT_012b4088,1,local_28,1);
          *(undefined8 *)(local_28 + 0x588) = uVar7;
        }
      }
      else if ((byte)(cVar2 - 3U) < 2) {
        uVar7 = FUN_0114ee90(&DAT_0114e878,1,local_28);
        *(undefined8 *)(local_28 + 0x590) = uVar7;
      }
    }
    if (*(char *)(local_28 + 0x13b0) == '\0') {
      uVar7 = FUN_0040c850(*(double *)(local_28 + 0x842) - *(double *)(local_28 + 0x83a));
      *(undefined8 *)(local_28 + 0x1400) = uVar7;
    }
    else {
      dVar11 = (double)FUN_0040c850(*(double *)(local_28 + 0x842) - *(double *)(local_28 + 0x83a));
      *(double *)(local_28 + 0x1400) = dVar11 * 2.0;
    }
    FUN_01af2a70(*(undefined8 *)(local_28 + 0xf10),FUN_01320550);
    local_169 = *(char *)(local_28 + 0xdb7);
    local_178 = *(double *)(local_28 + 0x1400) * (double)*(ushort *)(local_28 + 0x84a) *
                *(double *)(local_28 + 0x695);
    local_180 = *(double *)(local_28 + 0x1400) * *(double *)(local_28 + 0x695);
    local_188 = local_180;
    if (local_169 != '\0') {
      local_188 = local_178;
    }
    lVar9 = *(longlong *)(local_28 + 0xf10);
    *(double *)(lVar9 + 0x18) = local_188;
    FUN_01af29b0(lVar9,*(undefined1 *)(local_28 + 0x5dc));
    lVar9 = *(longlong *)(local_28 + 0xf10);
    *(undefined1 **)(lVar9 + 0x30) = param_8;
    FUN_00414ad0(lVar9 + 0x28,param_9);
    uVar7 = FUN_01af2a90(*(undefined8 *)(local_28 + 0xf10),param_7);
    if (param_3 < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (param_3 & 0x1f) & 0x38U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),4);
    }
    else if (param_3 == 2) {
      FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),0);
    }
    else {
      FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),1);
    }
    if (*(byte *)(local_28 + 0x5db) < 8) {
      bVar10 = ((int)CONCAT71((int7)((ulonglong)local_28 >> 8),1) <<
                (*(byte *)(local_28 + 0x5db) & 0x1f) & 0x21U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      if (*(char *)(local_28 + 0x325) == '\0') {
        FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_01327846,3);
      }
      else {
        FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_01327844,0);
      }
    }
    else if (*(char *)(local_28 + 0x325) == '\0') {
      FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_01327852,4);
    }
    else {
      FUN_01af25b0(*(undefined8 *)(local_28 + 0xf10),0,&DAT_0132784e,1);
    }
    if (*(char *)(local_28 + 0x325) == '\0') {
      FUN_01af2760(*(undefined8 *)(local_28 + 0xf10),&local_260,4);
      FUN_010bd010(&local_268,*(undefined1 *)(local_28 + 0x4c8));
      local_1c0 = local_268;
      local_1b8 = CONCAT71(local_1b8._1_7_,0x11);
      FUN_00442f70(&local_258,local_260,&local_1c0,0);
      uVar7 = FUN_01af2660(*(undefined8 *)(local_28 + 0xf10),4,local_258);
    }
    else {
      FUN_01af2760(*(undefined8 *)(local_28 + 0xf10),&local_248,1);
      FUN_010bd010(&local_250,*(undefined1 *)(local_28 + 0x4c8));
      local_1c0 = local_250;
      local_1b8 = CONCAT71(local_1b8._1_7_,0x11);
      FUN_00442f70(&local_240,local_248,&local_1c0,0);
      uVar7 = FUN_01af2660(*(undefined8 *)(local_28 + 0xf10),1,local_240);
    }
    if (param_1 < 8) {
      uVar5 = (int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (param_1 & 0x1f);
      uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 5) != 0);
    }
    else {
      uVar8 = 0;
    }
    if ((char)uVar8 != '\0') {
      if (param_3 < 8) {
        uVar5 = (int)CONCAT71((int7)(uVar8 >> 8),1) << (param_3 & 0x1f);
        uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0x38) != 0);
      }
      else {
        uVar8 = 0;
      }
      if ((char)uVar8 == '\0') {
        uVar8 = FUN_01af2ae0(*(undefined8 *)(local_28 + 0xf10));
      }
    }
    if (param_3 < 8) {
      bVar10 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (param_3 & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      local_2e8 = L"TINA.INI";
      FUN_00416cd0(&local_270,3,*(undefined8 *)PTR_DAT_02005010,&DAT_0132786c);
      local_168 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_270);
      local_2e8 = (wchar_t *)param_8;
      FUN_012ce750(&local_278,param_5,local_res20,L"timeout");
      uVar6 = (**(code **)(*local_168 + 0x20))
                        (local_168,L"TestMode Settings",L"MaxAutoTestSimulationTime",0xe10);
      local_fc = FUN_0043fc50(local_278,uVar6);
      local_fc = local_fc * 1000;
      if (0 < local_fc) {
        local_1b8 = local_28;
        local_1c0 = FUN_0131ddf0;
        FUN_00f833f0(&local_1c0,local_fc);
      }
      FUN_00410f20(local_168);
    }
    local_19 = '\x01';
    uVar7 = FUN_00b921a0(*(undefined8 *)(local_28 + 0xf30));
    *(undefined8 *)(local_28 + 0xf40) = uVar7;
    FUN_013236d0(param_1,local_28);
    dVar11 = (double)FUN_00b921a0(*(undefined8 *)(local_28 + 0xf30));
    *(double *)(local_28 + 0xf20) = dVar11 - *(double *)(local_28 + 0xf40);
    lVar9 = local_28;
  }
  local_a1 = '\0';
  if ((local_19 != '\0') && (lVar9 = FUN_0165dc50(*(undefined8 *)(local_28 + 0x110)), local_28 != 0)
     ) {
    if (*(longlong *)(local_28 + 0x13a0) == 0) {
      **(undefined8 **)(local_28 + 5000) = local_40;
    }
    else {
      FUN_004b5450(*(undefined8 *)(*(longlong *)(local_28 + 0xa0) + 0x438),local_2c,local_38);
    }
    if (*(char *)(local_28 + 0xdb7) != '\0') {
      if (*(longlong *)(local_28 + 0x13a8) == 0) {
        FUN_01d3a010(*(undefined8 *)(local_28 + 0x1398),3,local_58);
      }
      else {
        FUN_004b5450(*(undefined8 *)(*(longlong *)(local_28 + 0xa0) + 0x438),local_44,local_50);
      }
    }
    local_60 = local_28 + 0x5d8;
    local_61 = *(byte *)(local_28 + 0x5db);
    if (local_61 < 8 && (1 << (local_61 & 0x1f) & 0xdeU) != 0) {
      if (local_61 == 1) {
        *(undefined8 *)(local_28 + 0x6a0) = local_70;
      }
      else if (local_61 == 2) {
        local_78 = *(longlong *)(local_28 + 0xa0);
        if (*(int *)(*(longlong *)(local_78 + 0x470) + 0x10) < 2) {
          if (*(longlong *)(local_28 + 0xa09) == 0) {
            FUN_004b5450(*(undefined8 *)(local_78 + 0x438),local_7c,local_88);
          }
          else {
            **(undefined8 **)(local_28 + 0x1390) = local_70;
          }
        }
        else {
          FUN_00410f20(*(undefined8 *)(local_28 + 0x588));
        }
      }
      else if ((byte)(local_61 - 3) < 2) {
        FUN_00410f20(*(undefined8 *)(local_28 + 0x590));
      }
    }
    lVar9 = local_28;
    if (*(char *)(local_28 + 0x13b9) != '\0') {
      FUN_01440040(*(undefined8 *)(local_28 + 0xa0),*(undefined8 *)(local_28 + 0x1310),0);
      lVar9 = FUN_019af810(*(undefined8 *)(local_28 + 0xa0),1);
    }
  }
  if (param_3 < 8) {
    uVar5 = (int)CONCAT71((int7)((ulonglong)lVar9 >> 8),1) << (param_3 & 0x1f);
    uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0x2c) != 0);
  }
  else {
    uVar8 = 0;
  }
  if (((char)uVar8 != '\0') && (local_28 != 0)) {
    if (param_3 < 8) {
      bVar10 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (param_3 & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      local_1b8 = local_28;
      local_1c0 = FUN_0131ddf0;
      FUN_00f834f0(&local_1c0);
    }
    if (param_8 == (undefined1 *)0x0) {
      FUN_00414480(&local_90);
    }
    else {
      FUN_00441640(&local_90,*(undefined8 *)(param_8 + 8));
    }
    local_2e8 = (wchar_t *)param_5;
    local_2e0 = param_6;
    local_2d8 = local_90;
    local_2d0 = local_2d0 & 0xffffffffffffff00;
    local_2c8 = 0;
    local_98 = FUN_012cf740(&DAT_012cd510,1,local_28,local_res20);
    uVar8 = 0;
    if (local_98 != 0) {
      local_a0 = FUN_012d23d0(local_98,1);
      uVar3 = FUN_01b07dd0(local_28);
      *(undefined1 *)(local_a0 + 0x38) = uVar3;
      if (*(char *)(local_28 + 0x49c) == '\x01') {
        if (local_a1 == '\0') {
          FUN_012d5130(local_98,1,1,param_7);
        }
        local_a2 = *(char *)(local_28 + 0x13b8);
        if (local_a2 == '\0') {
          local_a8 = 4;
        }
        else {
          local_a8 = 5;
        }
        local_2e8 = (wchar_t *)0x0;
        local_2e0 = (undefined1 *)((ulonglong)local_2e0 & 0xffffffffffffff00);
        FUN_012d2550(local_98,(undefined1)local_a8,1,*(undefined1 *)(local_28 + 0x12f1));
      }
      else if (local_a1 == '\0') {
        FUN_012d5130(local_98,1,0,param_7);
        FUN_012d5130(local_98,1,1,param_7);
        cVar2 = FUN_012d5820(local_98,1);
        if (cVar2 == '\0') {
          local_2e8 = (wchar_t *)0x0;
          local_2e0 = (undefined1 *)((ulonglong)local_2e0 & 0xffffffffffffff00);
          FUN_012d2550(local_98,0,1,*(undefined1 *)(local_28 + 0x12f1));
        }
        else {
          cVar2 = FUN_012d5850(local_98,1,*(undefined1 *)(local_28 + 0x12f1),param_7);
          if (cVar2 != '\0') {
            local_2e8 = (wchar_t *)0x0;
            local_2e0 = (undefined1 *)((ulonglong)local_2e0 & 0xffffffffffffff00);
            FUN_012d2550(local_98,1,1,*(undefined1 *)(local_28 + 0x12f1));
          }
        }
      }
      uVar8 = FUN_017cc920(local_28);
    }
  }
  if (param_3 < 8) {
    uVar5 = (int)CONCAT71((int7)(uVar8 >> 8),1) << (param_3 & 0x1f);
    bVar10 = (uVar5 & 0x40) != 0;
    uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar10);
  }
  else {
    uVar8 = 0;
    bVar10 = false;
  }
  if ((bVar10) && (local_28 != 0)) {
    if (param_3 < 8) {
      bVar10 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (param_3 & 0x1f) & 0x40U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      local_1b8 = local_28;
      local_1c0 = FUN_0131ddf0;
      FUN_00f834f0(&local_1c0);
    }
    if (param_8 == (undefined1 *)0x0) {
      FUN_00414480(&local_90);
    }
    else {
      FUN_00441640(&local_90,*(undefined8 *)(param_8 + 8));
    }
    local_2e8 = (wchar_t *)param_5;
    local_2e0 = param_6;
    local_2d8 = local_90;
    local_2d0 = local_2d0 & 0xffffffffffffff00;
    local_2c8 = 0;
    local_b0 = FUN_01309b50(&DAT_01307998,1,local_28,local_res20);
    if (local_b0 != 0) {
      local_b8 = FUN_0130e420(local_b0,1);
      uVar3 = FUN_01b07dd0(local_28);
      *(undefined1 *)(local_b8 + 0x38) = uVar3;
      FUN_0130dae0(local_b0,1);
      if (*(char *)(local_28 + 0x49c) == '\x01') {
        if (local_a1 == '\0') {
          FUN_013136a0(local_b0,1,1,param_7);
        }
        local_b9 = *(char *)(local_28 + 0x13b8);
        if (local_b9 == '\0') {
          local_c0 = 4;
        }
        else {
          local_c0 = 5;
        }
        local_2e8 = (wchar_t *)0x0;
        local_2e0 = (undefined1 *)((ulonglong)local_2e0 & 0xffffffffffffff00);
        FUN_0130ea10(local_b0,(undefined1)local_c0,1,*(undefined1 *)(local_28 + 0x12f1));
      }
      else if (local_a1 == '\0') {
        FUN_013136a0(local_b0,1,0,param_7);
        FUN_013136a0(local_b0,1,1,param_7);
        cVar2 = FUN_01313d60(local_b0,1,*(undefined1 *)(local_28 + 0x12f1),param_7);
        if (cVar2 != '\0') {
          local_2e8 = (wchar_t *)0x0;
          local_2e0 = (undefined1 *)((ulonglong)local_2e0 & 0xffffffffffffff00);
          FUN_0130ea10(local_b0,1,1,*(undefined1 *)(local_28 + 0x12f1));
        }
      }
      FUN_017cc920(local_28);
    }
  }
  if (local_a1 != '\0') {
    if (local_28 != 0) {
      FUN_017cc920(local_28);
      FUN_00414ad0(local_28 + 0x12e0,L"Exception Happened");
    }
    local_c1 = '\x01';
  }
  uVar7 = FUN_00f51380(local_28,1);
  if (param_3 < 8) {
    uVar5 = (int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (param_3 & 0x1f);
    uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0x2c) != 0);
  }
  else {
    uVar8 = 0;
  }
  if ((char)uVar8 != '\0') {
    uVar8 = FUN_00410f20(local_98);
  }
  if (param_3 < 8) {
    bVar10 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (param_3 & 0x1f) & 0x40U) != 0;
  }
  else {
    bVar10 = false;
  }
  if (bVar10) {
    FUN_00410f20(local_b0);
  }
  FUN_00414480(&local_2a0);
  FUN_00414520(&local_298);
  FUN_00414590(&local_290,2);
  FUN_00414560(&local_280,0xf);
  FUN_00414560(&local_1d8,3);
  FUN_00414560(&local_1b0,4);
  FUN_00414560(&local_118,3);
  FUN_00414560(&local_90,2);
  FUN_00414480(&local_50);
  FUN_00414480(&local_38);
  FUN_00414560(&local_res20,3);
  FUN_00414480(&param_9);
  return local_c1;
}

