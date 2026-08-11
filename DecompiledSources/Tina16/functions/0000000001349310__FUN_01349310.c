/* Ghidra address: 01349310 */
/* Ghidra symbol: FUN_01349310 */


char FUN_01349310(byte param_1,char param_2,wchar_t *param_3,char param_4,byte param_5,
                 undefined8 param_6,wchar_t *param_7,undefined2 *param_8,undefined8 param_9,
                 wchar_t *param_10,ulonglong param_11,char param_12,undefined4 param_13,
                 undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                 undefined4 param_18,undefined1 param_19,undefined1 param_20,undefined4 param_21,
                 char param_22,wchar_t *param_23,undefined2 *param_24)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined1 auStack_328 [32];
  wchar_t *local_308;
  undefined2 *local_300;
  undefined8 local_2f8;
  ulonglong local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  code *local_270;
  ulonglong local_268;
  undefined8 *local_260;
  undefined1 local_258;
  longlong local_250;
  undefined1 local_248;
  longlong local_240;
  undefined1 local_238;
  uint local_230;
  undefined1 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 *local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a3;
  char local_1a1;
  undefined8 local_198;
  wchar_t *local_190 [2];
  short local_17a;
  ushort local_178;
  short local_176;
  short local_174;
  ushort local_172;
  double local_170;
  undefined8 local_168;
  double local_160;
  undefined8 local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  char local_11b;
  char local_11a;
  undefined1 local_119;
  undefined8 local_118;
  undefined2 local_10b;
  undefined2 local_109 [12];
  undefined4 local_f0;
  char local_e9;
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  char local_d2;
  char local_d1;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  char local_b3;
  ushort local_b2;
  undefined8 local_b0 [8];
  char local_69;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_4c;
  longlong local_48;
  undefined8 local_40;
  byte local_31;
  longlong local_30;
  char local_21;
  ulonglong local_20;
  
  local_1f0 = auStack_328;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2c8 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2a0 = (undefined8 *)0x0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_118 = 0;
  local_c0 = 0;
  local_190[0] = (wchar_t *)0x0;
  local_198 = 0;
  local_58 = 0;
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  FUN_00414610(param_11);
  FUN_00414610(param_23);
  FUN_00414610(param_24);
  local_1a1 = '\0';
  if (param_4 == '\x02') {
    FUN_01341480(*(undefined8 *)(param_3 + 0x244));
    local_b3 = '\x01';
    goto LAB_0134c8a6;
  }
  FUN_00b92140(0);
  local_b3 = '\0';
  *PTR_DAT_02002ce0 = 0;
  puVar9 = PTR_DAT_02005168;
  local_d1 = 1;
  local_69 = param_2 != '\0';
  local_11a = *PTR_DAT_02005258;
  local_11b = '\0';
  local_20 = 0;
  local_c8 = 0;
  local_e0 = 0;
  if (*PTR_DAT_020052a0 == '\0') {
    *(undefined8 *)PTR_DAT_02005168 = 0;
    local_21 = '\0';
    if (param_5 < 8) {
      uVar5 = (int)CONCAT71((int7)((ulonglong)puVar9 >> 8),1) << (param_5 & 0x1f);
      uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0x38) != 0);
    }
    else {
      uVar8 = 0;
    }
    if ((char)uVar8 == '\0') {
      local_b2 = *(ushort *)(*(longlong *)PTR_DAT_02005950 + 0x9c);
      uVar8 = (ulonglong)local_b2;
    }
    if (((bool)local_69) && (param_5 == 0)) {
      uVar8 = FUN_0129da80(param_1,param_2,PTR_DAT_02004010,local_b0);
    }
    if (param_1 < 8) {
      bVar11 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (param_1 & 0x1f) & 5U) != 0;
    }
    else {
      bVar11 = false;
    }
    if (bVar11) {
      if (param_2 == '\x01') {
        if (param_5 == 0) {
          *(undefined8 *)(PTR_DAT_02004010 + 0x2b0) = 0;
          local_170 = 2.0 / *(double *)(PTR_DAT_02004010 + 0x3de) +
                      *(double *)(PTR_DAT_02004010 + 0x3d6);
          *(double *)(PTR_DAT_02004010 + 0x2b8) = local_170;
          PTR_DAT_02004010[3] = 0;
          *(undefined8 *)(PTR_DAT_02004010 + 0xbd) = 0x3ff0000000000000;
          PTR_DAT_02004010[0x2ad] = PTR_DAT_02004010[0x82b];
        }
      }
      else if (param_2 == '\x02') {
        if (param_5 == 0) {
          cVar3 = FUN_0113f6d0(PTR_DAT_02004010 + 1000);
          if (cVar3 == '\0') {
            FUN_0114dbe0(*(undefined8 *)(PTR_DAT_02004010 + 0x3e9),
                         *(undefined8 *)(PTR_DAT_02004010 + 0x3f1));
          }
          else {
            FUN_0114dbe0(*(undefined8 *)(PTR_DAT_02004010 + 0x2b0),
                         *(undefined8 *)(PTR_DAT_02004010 + 0x2b8));
            FUN_0113f760(*(undefined8 *)(PTR_DAT_02004010 + 0x2b0),
                         *(undefined8 *)(PTR_DAT_02004010 + 0x2b8),PTR_DAT_02004010 + 1000);
          }
          local_308 = (wchar_t *)0x0;
          local_1b0 = (longlong *)
                      FUN_0114c680(&PTR_FUN_0114b798,1,*(undefined8 *)PTR_DAT_02004030,0);
          iVar7 = (**(code **)(*local_1b0 + 0x2d0))(local_1b0);
          local_b3 = iVar7 == 2;
          FUN_00410f20(local_1b0);
          if (local_b3 == '\0') {
            *(undefined8 *)(PTR_DAT_02004010 + 0x2b0) = 0;
            local_170 = *(double *)(PTR_DAT_02004010 + 0x3f1);
            *(double *)(PTR_DAT_02004010 + 0x2b8) = local_170;
            PTR_DAT_02004010[0x2ad] = PTR_DAT_02004010[0x82c];
          }
        }
      }
      else if (param_2 == '\x03') {
        if ((param_5 == 0) && (param_1 == 0)) {
          local_308 = param_3;
          local_1b8 = (longlong *)
                      FUN_00f5f180(&PTR_FUN_00f5e108,1,*(undefined8 *)PTR_DAT_02004030,0);
          FUN_0064dbe0(*(undefined8 *)(local_1b8[0xd6] + 0x538),0);
          iVar7 = (**(code **)(*local_1b8 + 0x2d0))(local_1b8);
          local_b3 = iVar7 == 2;
          if (!(bool)local_b3) {
            local_170 = (double)FUN_0129d830(PTR_DAT_02004010);
          }
          FUN_00410f20(local_1b8);
        }
      }
      else if ((param_5 == 0) && (param_1 == 0)) {
        local_1c0 = (longlong *)
                    FUN_00f5ded0(&PTR_FUN_00f5d7b8,1,*(undefined8 *)PTR_DAT_02004030,param_3);
        local_17a = (**(code **)(*local_1c0 + 0x2d0))(local_1c0);
        local_b3 = local_17a == 2;
        if (!(bool)local_b3) {
          local_170 = *(double *)(PTR_DAT_02004010 + 0x2b8);
        }
        FUN_00410f20(local_1c0);
      }
      if (local_b3 == '\0') {
        local_160 = local_170;
      }
      local_119 = 1;
    }
    else if (param_1 == 3) {
      local_170 = *(double *)(PTR_DAT_02004010 + 0x2b8);
      local_119 = 1;
      local_160 = local_170;
    }
    else {
      if ((char)param_3[0x248] == '\0') {
        if ((PTR_DAT_02004010[0x813] == '\x03') || (*PTR_DAT_02002ec0 != '\0')) {
          local_170 = *(double *)(PTR_DAT_02004010 + 0x7f0);
          if (*PTR_DAT_020052b8 != '\0') {
            *(undefined1 *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) = 2;
          }
        }
        else {
          if (param_2 == '\x02') {
            PTR_DAT_02004010[0x819] = 1;
            *(undefined8 *)(PTR_DAT_02004010 + 0x2b0) = 0;
            local_170 = *(double *)(PTR_DAT_02004010 + 0x3f1);
            *(double *)(PTR_DAT_02004010 + 0x2b8) = local_170;
          }
          else {
            local_170 = 1e+50;
          }
          if (*PTR_DAT_020052b8 != '\0') {
            *(undefined1 *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) = 3;
          }
        }
      }
      else if (*(char *)((longlong)param_3 + 0xca5) == '\x03') {
        local_170 = *(double *)(param_3 + 0x641);
      }
      else {
        local_170 = 1e+50;
      }
      if (*PTR_DAT_020052b8 == '\0') {
        if ((char)param_3[0x248] == '\0') {
          local_160 = *(double *)(PTR_DAT_02004010 + 0x2b8);
        }
        else {
          local_160 = *(double *)(param_3 + 0x3a5);
        }
      }
      else {
        local_160 = 0.0;
      }
      local_168 = *(undefined8 *)(PTR_DAT_02004010 + 0x2b8);
      local_158 = *(undefined8 *)(PTR_DAT_02004010 + 0x2b8);
      param_3[0x6e8] = L'\0';
      param_3[0x6e9] = L'\0';
      param_3[0x6ea] = L'\0';
      param_3[0x6eb] = L'\0';
      param_3[0x6ec] = L'\0';
      param_3[0x6ed] = L'\0';
      param_3[0x6ee] = L'\0';
      param_3[0x6ef] = L'\0';
      if (((*PTR_DAT_02002b78 == '\0') || (cVar3 = FUN_017d2770(param_3), cVar3 != '\0')) ||
         (param_22 != '\0')) {
        local_119 = 1;
      }
      else {
        local_119 = 0;
      }
    }
    if (local_b3 == '\0') {
      if (param_10 == (wchar_t *)0x0) {
        FUN_00414480(&local_198);
      }
      else {
        FUN_00441640(&local_200,*(undefined8 *)(param_10 + 4));
        FUN_0044f8b0(&local_1f8,local_200);
        FUN_00441920(&local_198,local_1f8);
      }
      *(undefined4 *)(param_3 + 0x6f0) = param_21;
      local_308 = (wchar_t *)0x0;
      FUN_015fc970(&local_208,param_10,param_11,0);
      local_308 = (wchar_t *)CONCAT71(local_308._1_7_,param_1);
      local_300 = (undefined2 *)CONCAT71(local_300._1_7_,param_5);
      local_2f8 = local_198;
      local_2f0 = param_11;
      local_2e8 = CONCAT71(local_2e8._1_7_,param_20);
      local_2e0 = 1;
      local_2d8 = local_208;
      local_20 = FUN_0133d3e0(&PTR_FUN_0133c678,1,param_3,6);
      if ((((char)param_3[0x248] == '\0') || (param_12 != '\0')) || (param_1 == 1)) {
        if (param_5 < 8) {
          bVar11 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (param_5 & 0x1f) & 0x46U) !=
                   0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          *(undefined8 *)(local_20 + 0x388) = *(undefined8 *)(PTR_DAT_02004010 + 0x2b8);
        }
        else {
          *(double *)(local_20 + 0x388) = local_170;
        }
      }
      else {
        *(undefined8 *)(local_20 + 0x388) = *(undefined8 *)(param_3 + 0x3a5);
      }
      if ((*PTR_DAT_02002b78 == '\0') && (param_12 == '\0')) {
        *(undefined4 *)(local_20 + 0x1464) = 0x28;
      }
      else {
        *(undefined4 *)(local_20 + 0x1464) = 10;
      }
      *(double *)(local_20 + 0x13a0) = local_160 / (double)*(int *)(local_20 + 0x1464);
      *(undefined1 *)(local_20 + 0x13b0) = local_119;
      *(undefined8 *)(local_20 + 0x13a8) = local_158;
      *(undefined8 *)(local_20 + 0x1398) = local_168;
      *(wchar_t **)(local_20 + 0x1320) = param_10;
      *(bool *)(local_20 + 0x335) = param_12 != '\0';
      *(char *)(local_20 + 0x1490) = param_12;
      *(undefined4 *)(local_20 + 0x1460) = param_18;
      *(undefined1 *)(local_20 + 0x12f2) = param_19;
      *(char *)(local_20 + 0x1520) = param_2;
      *(undefined4 *)(local_20 + 0x1470) = param_13;
      *(undefined4 *)(local_20 + 0x1474) = param_14;
      *(undefined4 *)(local_20 + 0x1478) = param_15;
      *(undefined4 *)(local_20 + 0x147c) = param_16;
      FUN_00414ad0(local_20 + 0x1440,&DAT_0134d6a8);
      if (param_10 != (wchar_t *)0x0) {
        if (param_12 == '\x01') {
          FUN_00441640(&local_210,*(undefined8 *)(param_10 + 4));
          local_308 = L".";
          local_300 = *(undefined2 **)(local_20 + 0x1440);
          FUN_00416cd0(local_20 + 0x1430,4,local_210,param_11);
        }
        else {
          FUN_00441640(&local_218,*(undefined8 *)(param_10 + 4));
          local_308 = L".xml";
          FUN_00416cd0(local_20 + 0x1430,3,local_218,param_11);
        }
        FUN_00441640(&local_220,*(undefined8 *)(param_10 + 4));
        local_308 = L".txt";
        FUN_00416cd0(local_20 + 0x1438,3,local_220,param_11);
      }
      FUN_01340600(param_1,param_5,local_20);
      if (param_2 == '\x02') {
        FUN_016f1c10(local_20,9);
      }
      else if (param_2 == '\x03') {
        if (param_1 == 0) {
          FUN_016f1c10(local_20,0xb);
        }
      }
      else {
        FUN_016f1c10(local_20,6);
      }
      if (param_1 == 2) {
        if ((param_2 == '\x03') && (param_5 == 0)) {
          local_138 = *(double *)(local_20 + 0xe98);
          local_140 = *(double *)(local_20 + 0xea0);
          local_174 = *(short *)(local_20 + 0xec0);
          local_178 = (ushort)*(byte *)(local_20 + 0xec6);
          local_148 = *(double *)(local_20 + 0xea8);
          local_150 = *(double *)(local_20 + 0xeb0);
          local_176 = *(short *)(local_20 + 0xec2);
          local_308 = *(wchar_t **)(local_20 + 0xa0);
          local_1c8 = (longlong *)
                      FUN_00f5f180(&PTR_FUN_00f5e108,1,*(undefined8 *)PTR_DAT_02004030,local_20);
          FUN_0064dbe0(*(undefined8 *)(local_1c8[0xd6] + 0x538),0);
          local_17a = (**(code **)(*local_1c8 + 0x2d0))(local_1c8);
          local_b3 = local_17a == 2;
          if (!(bool)local_b3) {
            if ((local_17a == 1) &&
               (((local_138 != *(double *)(local_20 + 0xe98) ||
                 (local_140 != *(double *)(local_20 + 0xea0))) ||
                (((int)local_174 != (uint)*(ushort *)(local_20 + 0xec0) ||
                 (local_178 != *(byte *)(local_20 + 0xec6))))))) {
              local_260 = (undefined8 *)(local_20 + 0xe98);
              local_258 = 3;
              local_250 = local_20 + 0xea0;
              local_248 = 3;
              local_240 = CONCAT44(local_240._4_4_,(uint)*(ushort *)(local_20 + 0xec0));
              local_238 = 0;
              local_230 = (uint)*(byte *)(local_20 + 0xec6);
              local_228 = 0;
              local_308 = (wchar_t *)CONCAT44(local_308._4_4_,3);
              FUN_016cd2c0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)PTR_DAT_020023c0 + 0x958) + 0x4e8),
                           &DAT_0134d6fc,0,&local_260);
            }
            if (local_148 != *(double *)(local_20 + 0xea8)) {
              local_270 = (code *)(local_20 + 0xea8);
              local_268 = CONCAT71(local_268._1_7_,3);
              local_308 = (wchar_t *)((ulonglong)local_308 & 0xffffffff00000000);
              FUN_016cd2c0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)PTR_DAT_020023c0 + 0x958) + 0x4e8),
                           L".OPTIONS",L"MSAMPLITUDE",&local_270);
            }
            if (local_150 != *(double *)(local_20 + 0xeb0)) {
              local_270 = (code *)(local_20 + 0xeb0);
              local_268 = CONCAT71(local_268._1_7_,3);
              local_308 = (wchar_t *)((ulonglong)local_308 & 0xffffffff00000000);
              FUN_016cd2c0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)PTR_DAT_020023c0 + 0x958) + 0x4e8),
                           L".OPTIONS",L"MSSTEADYTIME",&local_270);
            }
            if ((int)local_176 != *(int *)(local_20 + 0xec2)) {
              local_270 = (code *)CONCAT44(local_270._4_4_,*(undefined4 *)(local_20 + 0xec2));
              local_268 = local_268 & 0xffffffffffffff00;
              local_308 = (wchar_t *)((ulonglong)local_308 & 0xffffffff00000000);
              FUN_016cd2c0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)PTR_DAT_020023c0 + 0x958) + 0x4e8),
                           L".OPTIONS",L"MSCYCLES",&local_270);
            }
            uVar12 = FUN_0129d830(local_20 + 0x5d8);
            *(undefined8 *)(local_20 + 0x388) = uVar12;
            FUN_016f1c10(local_20,0xb);
            cVar3 = FUN_01b07dd0(local_20);
            if (cVar3 != '\0') {
              uVar12 = FUN_014cdce0(*(undefined8 *)(local_20 + 0xe8));
              _reinit_hdl_simulation(uVar12,*(undefined8 *)(local_20 + 0x890));
            }
          }
          FUN_00410f20(local_1c8);
        }
        else {
          local_128 = *(double *)(local_20 + 0x888);
          local_130 = *(double *)(local_20 + 0x890);
          local_172 = (ushort)*(byte *)(local_20 + 0x885);
          local_1d0 = (longlong *)
                      FUN_00f5de10(&PTR_FUN_00f5d7b8,1,*(undefined8 *)PTR_DAT_02004030,local_20);
          local_17a = (**(code **)(*local_1d0 + 0x2d0))(local_1d0);
          local_b3 = local_17a == 2;
          if ((local_17a == 1) &&
             (((local_130 != *(double *)(local_20 + 0x890) ||
               (local_128 != *(double *)(local_20 + 0x888))) ||
              (local_172 != *(byte *)(local_20 + 0x885))))) {
            local_260 = (undefined8 *)(local_20 + 0x890);
            local_258 = 3;
            local_250 = local_20 + 0x888;
            local_248 = 3;
            local_240 = local_20 + 0x750;
            local_238 = 3;
            local_230 = (uint)*(byte *)(local_20 + 0x885);
            local_228 = 0;
            local_308 = (wchar_t *)CONCAT44(local_308._4_4_,3);
            FUN_016cd2c0(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_020023c0 + 0x958) + 0x4e8),L".TRAN",0,
                         &local_260);
          }
          FUN_00410f20(local_1d0);
          if (local_b3 == '\0') {
            cVar3 = FUN_01b07dd0(local_20);
            if (cVar3 != '\0') {
              uVar12 = FUN_014cdce0(*(undefined8 *)(local_20 + 0xe8));
              _reinit_hdl_simulation(uVar12,*(undefined8 *)(local_20 + 0x890));
            }
            *(undefined8 *)(local_20 + 0x388) = *(undefined8 *)(local_20 + 0x890);
            *(undefined8 *)(local_20 + 0x13a0) = *(undefined8 *)(local_20 + 0x388);
          }
        }
      }
      FUN_017d18e0(local_20,6);
    }
  }
  if (local_b3 == '\0') {
    if (*PTR_DAT_020052a0 == '\0') {
      if ((*PTR_DAT_02002b78 != '\0') || (*(char *)(local_20 + 0x335) != '\0')) {
        FUN_017d2d10(*(undefined8 *)(local_20 + 0xa0),6);
      }
      if (param_10 == (wchar_t *)0x0) {
        uVar12 = FUN_00414480(local_190);
      }
      else {
        uVar12 = FUN_00441640(local_190,*(undefined8 *)(param_10 + 4));
      }
      if (param_2 == '\x03') {
        local_1a3 = 0xf;
      }
      else {
        local_1a3 = 3;
      }
      if (param_1 < 8) {
        bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar12 >> 8),1) << (param_1 & 0x1f) & 5U) != 0;
      }
      else {
        bVar11 = false;
      }
      if ((bVar11) && (param_2 == '\0')) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      local_308 = local_190[0];
      local_300 = (undefined2 *)CONCAT71(local_300._1_7_,param_2 != '\x03');
      local_2f8 = CONCAT71(local_2f8._1_7_,uVar4);
      FUN_017cc620(local_20,local_1a3,param_1 == 1,*(undefined8 *)(param_3 + 0x1b0));
      lVar1 = *(longlong *)(local_20 + 0xb0);
      *(undefined1 *)(lVar1 + 0x57) = *(undefined1 *)(local_20 + 0x886);
      *(undefined1 *)(lVar1 + 0x58) = *(undefined1 *)(local_20 + 0x887);
      FUN_00414ad0(local_20 + 0x1528,local_190[0]);
      uVar12 = FUN_00409570((longlong)(*(int *)(local_20 + 0x691) << 4));
      *(undefined8 *)(local_20 + 0x1b0) = uVar12;
      local_1d8 = local_20 + 0x5d8;
      if (*(byte *)(local_20 + 0x5db) < 8) {
        bVar11 = ((int)CONCAT71((int7)((ulonglong)local_1d8 >> 8),1) <<
                  (*(byte *)(local_20 + 0x5db) & 0x1f) & 0xdeU) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        cVar3 = *(char *)(local_20 + 0x5db);
        if (cVar3 == '\x01') {
          local_40 = *(undefined8 *)(local_20 + 0x6a0);
        }
        else if (cVar3 == '\x02') {
          if (*(int *)(*(longlong *)(*(longlong *)(local_20 + 0xa0) + 0x470) + 0x10) < 2) {
            if (((*(longlong *)(local_20 + 0xa09) == 0) && (*(char *)(local_20 + 0xa15) == '\0')) ||
               (*(int *)(*(longlong *)(*(longlong *)(local_20 + 0xa0) + 0x470) + 0x10) == 0)) {
              FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_20 + 0x1310),0);
            }
            if (*(longlong *)(local_1d8 + 0x431) == 0) {
              FUN_004169a0(&local_278,local_1d8 + 0x43d);
              plVar2 = *(longlong **)(*(longlong *)(local_20 + 0xa0) + 0x438);
              local_4c = (**(code **)(*plVar2 + 0xb8))(plVar2,local_278);
              if (local_4c == -1) {
                FUN_01b04ef0(0x10e,0x1588,*(undefined8 *)(local_20 + 0x1310),0);
              }
              FUN_004b5390(*(undefined8 *)(*(longlong *)(local_20 + 0xa0) + 0x438),&local_58,
                           local_4c);
            }
            else {
              iVar7 = FUN_01b07e10(local_20,*(undefined8 *)(local_1d8 + 0x431));
              *(undefined8 *)(local_20 + 5000) =
                   *(undefined8 *)(*(longlong *)(local_20 + 0x2b0) + -8 + (longlong)iVar7 * 8);
              local_308 = &local_10b;
              local_300 = local_109;
              uVar12 = FUN_01b05ad0(*(undefined8 *)(local_20 + 5000),
                                    *(undefined1 *)(local_1d8 + 0x439),
                                    *(undefined1 *)(local_1d8 + 0x43a),(longlong)&local_10b + 1);
              *(undefined8 *)(local_20 + 0x1390) = uVar12;
              local_40 = **(undefined8 **)(local_20 + 0x1390);
              FUN_012b4370(local_20,*(undefined8 *)(local_20 + 5000),
                           *(char *)(local_1d8 + 0x439) + -1,*(char *)(local_1d8 + 0x43a) + -1);
            }
          }
          else {
            uVar12 = FUN_012b4460(&DAT_012b4088,1,local_20,6);
            *(undefined8 *)(local_20 + 0x588) = uVar12;
          }
        }
        else if ((byte)(cVar3 - 3U) < 2) {
          uVar12 = FUN_0114ee90(&DAT_0114e878,1,local_20);
          *(undefined8 *)(local_20 + 0x590) = uVar12;
        }
      }
      FUN_01af2a70(*(undefined8 *)(local_20 + 0xf10),FUN_013411e0);
      lVar1 = *(longlong *)(local_20 + 0xf10);
      *(double *)(lVar1 + 0x18) = *(double *)(local_20 + 0x388) * *(double *)(local_20 + 0x695);
      FUN_01af29b0(lVar1,*(undefined1 *)(local_20 + 0x5dc));
      lVar1 = *(longlong *)(local_20 + 0xf10);
      *(wchar_t **)(lVar1 + 0x30) = param_10;
      FUN_00414ad0(lVar1 + 0x28,param_11);
      uVar12 = FUN_01af2a90(*(undefined8 *)(local_20 + 0xf10),param_9);
      if (param_5 < 8) {
        bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar12 >> 8),1) << (param_5 & 0x1f) & 0x38U) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        FUN_01af29d0(*(undefined8 *)(local_20 + 0xf10),4);
      }
      else if (((local_69 == '\0') && (param_5 != 2)) && (param_5 != 6)) {
        if (local_11a == '\0') {
          FUN_01af29d0(*(undefined8 *)(local_20 + 0xf10),2);
        }
        else {
          FUN_01af29d0(*(undefined8 *)(local_20 + 0xf10),3);
        }
      }
      else {
        FUN_01af29d0(*(undefined8 *)(local_20 + 0xf10),0);
      }
      if (*(byte *)(local_20 + 0x5db) < 8) {
        bVar11 = ((int)CONCAT71((int7)(local_20 >> 8),1) << (*(byte *)(local_20 + 0x5db) & 0x1f) &
                 0x21U) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        if (*(char *)(local_20 + 0x325) == '\0') {
          uVar12 = FUN_01af25b0(*(undefined8 *)(local_20 + 0xf10),0,&DAT_0134d7ae,4);
        }
        else {
          uVar12 = FUN_01af25b0(*(undefined8 *)(local_20 + 0xf10),0,&DAT_0134d7aa,1);
        }
      }
      else if (*(char *)(local_20 + 0x325) == '\0') {
        uVar12 = FUN_01af25b0(*(undefined8 *)(local_20 + 0xf10),0,&DAT_0134d7be,5);
      }
      else {
        uVar12 = FUN_01af25b0(*(undefined8 *)(local_20 + 0xf10),0,&DAT_0134d7b8,2);
      }
      if (param_1 < 8) {
        uVar5 = (int)CONCAT71((int7)((ulonglong)uVar12 >> 8),1) << (param_1 & 0x1f);
        uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0xd) != 0);
      }
      else {
        uVar8 = 0;
      }
      if ((char)uVar8 != '\0') {
        if (param_5 < 8) {
          uVar5 = (int)CONCAT71((int7)(uVar8 >> 8),1) << (param_5 & 0x1f);
          uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0x38) != 0);
        }
        else {
          uVar8 = 0;
        }
        if (((char)uVar8 == '\0') &&
           (uVar8 = *(ulonglong *)PTR_DAT_02004e40, *(char *)(uVar8 + 0x27d0) == '\0')) {
          uVar8 = FUN_01af2ae0(*(undefined8 *)(local_20 + 0xf10));
        }
      }
      if (param_5 < 8) {
        uVar5 = (int)CONCAT71((int7)(uVar8 >> 8),1) << (param_5 & 0x1f);
        uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0xc) != 0);
      }
      else {
        uVar8 = 0;
      }
      if ((char)uVar8 != '\0') {
        local_308 = L"TINA.INI";
        FUN_00416cd0(&local_280,3,*(undefined8 *)PTR_DAT_02005010,&DAT_0134d7d8);
        local_1e0 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_280);
        local_308 = param_10;
        FUN_012ce750(&local_288,param_7,param_6,L"timeout");
        uVar6 = (**(code **)(*local_1e0 + 0x20))
                          (local_1e0,L"TestMode Settings",L"MaxAutoTestSimulationTime",0xe10);
        iVar7 = FUN_0043fc50(local_288,uVar6);
        *(int *)(local_20 + 0x146c) = iVar7 * 1000;
        if (0 < *(int *)(local_20 + 0x146c)) {
          local_268 = local_20;
          local_270 = FUN_0133d8c0;
          FUN_00f833f0(&local_270,*(undefined4 *)(local_20 + 0x146c));
        }
        uVar8 = FUN_00410f20(local_1e0);
      }
      if (param_5 < 8) {
        uVar5 = (int)CONCAT71((int7)(uVar8 >> 8),1) << (param_5 & 0x1f);
        uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0x40) != 0);
      }
      else {
        uVar8 = 0;
      }
      if ((char)uVar8 != '\0') {
        local_308 = L"TINA.INI";
        FUN_00416cd0(&local_290,3,*(undefined8 *)PTR_DAT_02005010,&DAT_0134d7d8);
        local_1e8 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_290);
        local_308 = param_10;
        FUN_012ce750(&local_298,param_7,param_6,L"timeout");
        uVar6 = (**(code **)(*local_1e8 + 0x20))
                          (local_1e8,L"ModelTest Settings",L"MaxModelTestSimulationTime",0xe10);
        iVar7 = FUN_0043fc50(local_298,uVar6);
        *(int *)(local_20 + 0x146c) = iVar7 * 1000;
        if (0 < *(int *)(local_20 + 0x146c)) {
          local_268 = local_20;
          local_270 = FUN_0133d8c0;
          FUN_00f833f0(&local_270,*(undefined4 *)(local_20 + 0x146c));
        }
        uVar8 = FUN_00410f20(local_1e8);
      }
      if (param_5 < 8) {
        bVar11 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (param_5 & 0x1f) & 0x38U) != 0;
      }
      else {
        bVar11 = false;
      }
      if (!bVar11) {
        FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
      }
      FUN_016d7180(local_20,param_5,param_10);
      FUN_017d2fb0(local_20);
      uVar12 = FUN_01340be0(local_20);
      if (param_5 < 8) {
        uVar5 = (int)CONCAT71((int7)((ulonglong)uVar12 >> 8),1) << (param_5 & 0x1f);
        uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0x38) != 0);
      }
      else {
        uVar8 = 0;
      }
      if ((char)uVar8 == '\0') {
        uVar8 = FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,local_b2);
      }
      if (local_1a1 == '\0') {
        if (param_5 < 8) {
          bVar11 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (param_5 & 0x1f) & 3U) != 0;
        }
        else {
          bVar11 = false;
        }
        if ((!bVar11) || (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x18e8) == '\0'))
        goto LAB_0134b29b;
        puVar9 = PTR_DAT_02003610;
        if (*(longlong *)PTR_DAT_02003610 == 0) {
          uVar12 = FUN_007fc180(&PTR_FUN_0133aef8,1,*(undefined8 *)PTR_DAT_02004030);
          *(undefined8 *)PTR_DAT_02003610 = uVar12;
          uVar12 = FUN_014cdce0(*(undefined8 *)(local_20 + 0xe8));
          FUN_0133bbf0(*(undefined8 *)PTR_DAT_02003610,uVar12);
          puVar9 = (undefined *)FUN_008059a0(*(undefined8 *)PTR_DAT_02003610);
        }
      }
      else {
LAB_0134b29b:
        local_308 = param_23;
        local_300 = param_24;
        puVar9 = (undefined *)FUN_01342150(local_20,param_10,param_11,param_17);
      }
      if (local_11a == '\0') {
LAB_0134b33e:
        if ((local_11b == '\0') || (param_12 == '\0')) goto LAB_0134b37e;
      }
      else {
        if (param_1 < 8) {
          bVar11 = ((int)CONCAT71((int7)((ulonglong)puVar9 >> 8),1) << (param_1 & 0x1f) & 0xdU) != 0
          ;
        }
        else {
          bVar11 = false;
        }
        if (((!bVar11) || (local_69 != '\0')) || (*PTR_DAT_02002b78 != '\0')) goto LAB_0134b33e;
        if (param_5 < 8) {
          bVar11 = ((int)CONCAT71((int7)((ulonglong)PTR_DAT_02002b78 >> 8),1) << (param_5 & 0x1f) &
                   0x13U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (!bVar11) goto LAB_0134b33e;
      }
      uVar12 = FUN_01341640(&DAT_0133c068,1,local_20,param_12 != '\0');
      *(undefined8 *)(local_20 + 0x1410) = uVar12;
    }
LAB_0134b37e:
    local_21 = '\x01';
    if (param_4 == '\x01') {
      if (local_20 == 0) {
        local_20 = *(ulonglong *)(param_3 + 0x244);
      }
      *PTR_DAT_020052a0 = 0;
      *(undefined1 *)(local_20 + 0x49c) = 1;
    }
    else {
      if (local_20 == 0) {
        local_20 = *(ulonglong *)(param_3 + 0x244);
      }
      if ((*PTR_DAT_02002b78 == '\0') && (*(char *)(local_20 + 0xf18) != '\0')) {
        if (param_5 < 8) {
          bVar11 = ((int)CONCAT71((int7)(local_20 >> 8),1) << (param_5 & 0x1f) & 3U) != 0;
        }
        else {
          bVar11 = false;
        }
        if (bVar11) {
          local_268 = *(ulonglong *)PTR_DAT_02004e40;
          local_270 = FUN_01c88f60;
          FUN_00f83540(&local_270,local_20,500);
        }
      }
      *(undefined1 *)(local_20 + 0x49c) = 0;
      uVar12 = FUN_00b921a0(*(undefined8 *)(local_20 + 0xf30));
      *(undefined8 *)(local_20 + 0xf40) = uVar12;
      FUN_01342880(param_1,local_20,param_5,param_17);
      cVar3 = FUN_01b07dd0(local_20);
      if (cVar3 != '\0') {
        FUN_01601490(local_20);
      }
      if (param_5 != 3) {
        if (*(char *)(local_20 + 0x1338) == '\0') {
          cVar3 = FUN_01b07dd0(local_20);
          if (cVar3 != '\0') {
            uVar12 = FUN_014cdce0(*(undefined8 *)(local_20 + 0xe8));
            FUN_014cdcf0(*(undefined8 *)(local_20 + 0xe8),&local_2a0);
            uVar10 = FUN_014cdd20(*(undefined8 *)(local_20 + 0xe8));
            FUN_01601740(uVar12,local_2a0,uVar10,*(undefined1 *)(local_20 + 0xf1));
          }
        }
        else {
          FUN_01601740(*(undefined8 *)(local_20 + 0x1330),*(undefined8 *)(local_20 + 0x1340),0,
                       *(undefined1 *)(local_20 + 0xf1));
        }
      }
    }
  }
  local_d1 = '\0';
  if (local_20 != 0) {
    if (param_2 != '\x03') {
      FUN_017cc960(*(undefined8 *)(local_20 + 0xb0),*(undefined8 *)(local_20 + 0xb8));
    }
    if ((*PTR_DAT_02002b78 == '\0') && (*(char *)(local_20 + 0xf18) != '\0')) {
      if (param_5 < 8) {
        bVar11 = ((int)CONCAT71((int7)(local_20 >> 8),1) << (param_5 & 0x1f) & 3U) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        local_268 = *(ulonglong *)PTR_DAT_02004e40;
        local_270 = FUN_01c88f60;
        FUN_00f83590(&local_270);
        FUN_01c88f60(*(undefined8 *)PTR_DAT_02004e40,local_20);
      }
    }
  }
  if (*PTR_DAT_020052a0 == '\0') {
    if ((local_21 != '\0') && (local_20 != 0)) {
      local_30 = local_20 + 0x5d8;
      local_31 = *(byte *)(local_20 + 0x5db);
      if (local_31 < 8 && (1 << (local_31 & 0x1f) & 0x9eU) != 0) {
        if (local_31 == 1) {
          *(undefined8 *)(local_20 + 0x6a0) = local_40;
        }
        else if (local_31 == 2) {
          local_48 = *(longlong *)(local_20 + 0xa0);
          if (*(int *)(*(longlong *)(local_48 + 0x470) + 0x10) < 2) {
            if (*(longlong *)(local_20 + 0xa09) == 0) {
              FUN_004b5450(*(undefined8 *)(local_48 + 0x438),local_4c,local_58);
              FUN_01440040(*(undefined8 *)(local_20 + 0xa0),*(undefined8 *)(local_20 + 0x1310),0);
              FUN_019af810(*(undefined8 *)(local_20 + 0xa0),6);
            }
            else {
              **(undefined8 **)(local_20 + 0x1390) = local_40;
            }
          }
          else {
            FUN_00410f20(*(undefined8 *)(local_20 + 0x588));
          }
          local_60 = *(longlong *)(local_20 + 0xd0);
          if (local_60 != 0) {
            FUN_01cc0070(*(undefined8 *)(local_60 + 0x10),
                         *(undefined8 *)(*(longlong *)(local_20 + 0xb0) + 0x10));
          }
        }
        else if ((byte)(local_31 - 3) < 2) {
          FUN_00410f20(*(undefined8 *)(local_20 + 0x590));
          local_68 = *(longlong *)(local_20 + 0xd0);
          if (local_68 != 0) {
            FUN_01cc0070(*(undefined8 *)(local_68 + 0x10),
                         *(undefined8 *)(*(longlong *)(local_20 + 0xb0) + 0x10));
          }
        }
      }
    }
    if ((local_69 != '\0') && (param_5 == 0)) {
      FUN_0129db70(param_1,param_2,PTR_DAT_02004010,local_b0);
    }
    if ((local_20 != 0) && (*(char *)(local_20 + 0x1520) == '\x03')) {
      FUN_0129d760(local_20 + 0x14f5,local_20 + 0x1518);
    }
    if ((local_20 != 0) && (*(longlong *)(*(longlong *)(local_20 + 0xf10) + 8) != 0)) {
      FUN_01af23d0(*(undefined8 *)(*(longlong *)(local_20 + 0xf10) + 8),0);
    }
    FUN_016d7a10(local_20);
    uVar12 = FUN_017d3200(local_20);
    if (param_5 < 8) {
      bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar12 >> 8),1) << (param_5 & 0x1f) & 0x38U) != 0;
    }
    else {
      bVar11 = false;
    }
    if (!bVar11) {
      FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,local_b2);
    }
    if ((param_1 == 1) && (local_20 != 0)) {
      FUN_013490c0(*(undefined8 *)(local_20 + 0xb0));
    }
    if (((local_20 != 0) && (*(longlong *)(local_20 + 0x1410) != 0)) &&
       (*(char *)(local_20 + 0x49c) != '\x01')) {
      local_b3 = *(char *)(*(longlong *)(local_20 + 0x1410) + 0x24);
    }
    if (((local_20 != 0) && (param_2 == '\x03')) && (*(char *)(local_20 + 0xed2) == '\0')) {
      FUN_017cc920(local_20);
    }
    puVar9 = PTR_DAT_02004010;
    if (PTR_DAT_02004010[0x813] == '\x03') {
      puVar9 = (undefined *)FUN_01c87d20(*(undefined8 *)PTR_DAT_02004e40);
    }
    if (param_5 < 8) {
      uVar5 = (int)CONCAT71((int7)((ulonglong)puVar9 >> 8),1) << (param_5 & 0x1f);
      uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 3) != 0);
    }
    else {
      uVar8 = 0;
    }
    if ((char)uVar8 != '\0') {
      if (local_20 != 0) {
        FUN_019af4b0(*(undefined8 *)(local_20 + 0xa0));
      }
      uVar12 = FUN_019a45d0();
      uVar8 = FUN_0199dd30(uVar12,0,1);
      if (param_1 != 3) {
        uVar12 = FUN_019a45d0();
        FUN_0199ddf0(uVar12);
        uVar12 = FUN_019a45d0();
        uVar8 = FUN_0199dd30(uVar12,1,1);
      }
    }
    if (param_5 < 8) {
      uVar5 = (int)CONCAT71((int7)(uVar8 >> 8),1) << (param_5 & 0x1f);
      uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0x2c) != 0);
    }
    else {
      uVar8 = 0;
    }
    if (((char)uVar8 != '\0') && (local_20 != 0)) {
      if (param_5 < 8) {
        bVar11 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (param_5 & 0x1f) & 0xcU) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        local_268 = local_20;
        local_270 = FUN_0133d8c0;
        FUN_00f834f0(&local_270);
      }
      if (param_10 == (wchar_t *)0x0) {
        FUN_00414480(&local_c0);
      }
      else {
        FUN_00441640(&local_c0,*(undefined8 *)(param_10 + 4));
      }
      local_308 = param_7;
      local_300 = param_8;
      local_2f8 = local_c0;
      local_2f0 = local_2f0 & 0xffffffffffffff00;
      local_2e8 = 0;
      local_c8 = FUN_012cf740(&DAT_012cd510,1,local_20,param_6);
      uVar8 = 0;
      if (local_c8 != 0) {
        local_d0 = FUN_012d23d0(local_c8,6);
        uVar4 = FUN_01b07dd0(local_20);
        *(undefined1 *)(local_d0 + 0x38) = uVar4;
        if (*(char *)(local_20 + 0x49c) == '\x01') {
          if (local_d1 == '\0') {
            FUN_012d5130(local_c8,6,1,param_9);
          }
          local_d2 = *(char *)(local_20 + 0x13b6);
          if (local_d2 == '\0') {
            local_d8 = 4;
          }
          else {
            local_d8 = 5;
          }
          local_308 = (wchar_t *)0x0;
          local_300 = (undefined2 *)CONCAT71(local_300._1_7_,*(undefined1 *)(local_20 + 0x13b8));
          FUN_012d2550(local_c8,(undefined1)local_d8,6,*(undefined1 *)(local_20 + 0x12f1));
        }
        else if (local_d1 == '\0') {
          FUN_012d5130(local_c8,6,0,param_9);
          FUN_012d5130(local_c8,6,1,param_9);
          cVar3 = FUN_012d5820(local_c8,6);
          if (cVar3 == '\0') {
            local_308 = (wchar_t *)0x0;
            local_300 = (undefined2 *)((ulonglong)local_300 & 0xffffffffffffff00);
            FUN_012d2550(local_c8,0,6,*(undefined1 *)(local_20 + 0x12f1));
          }
          else {
            cVar3 = FUN_012d5850(local_c8,6,*(undefined1 *)(local_20 + 0x12f1),param_9);
            if (cVar3 != '\0') {
              local_308 = (wchar_t *)0x0;
              local_300 = (undefined2 *)((ulonglong)local_300 & 0xffffffffffffff00);
              FUN_012d2550(local_c8,1,6,*(undefined1 *)(local_20 + 0x12f1));
            }
          }
        }
        uVar8 = FUN_017cc920(local_20);
      }
    }
    if (param_5 < 8) {
      uVar5 = (int)CONCAT71((int7)(uVar8 >> 8),1) << (param_5 & 0x1f);
      bVar11 = (uVar5 & 0x40) != 0;
      uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar11);
    }
    else {
      uVar8 = 0;
      bVar11 = false;
    }
    if ((bVar11) && (local_20 != 0)) {
      if (param_5 < 8) {
        bVar11 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (param_5 & 0x1f) & 0x40U) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        local_268 = local_20;
        local_270 = FUN_0133d8c0;
        FUN_00f834f0(&local_270);
      }
      if (param_10 == (wchar_t *)0x0) {
        FUN_00414480(&local_c0);
      }
      else {
        FUN_00441640(&local_c0,*(undefined8 *)(param_10 + 4));
      }
      local_308 = param_7;
      local_300 = param_8;
      local_2f8 = local_c0;
      local_2f0 = local_2f0 & 0xffffffffffffff00;
      local_2e8 = 0;
      local_e0 = FUN_01309b50(&DAT_01307998,1,local_20,param_6);
      if (local_e0 != 0) {
        local_e8 = FUN_0130e420(local_e0,6);
        uVar4 = FUN_01b07dd0(local_20);
        *(undefined1 *)(local_e8 + 0x38) = uVar4;
        FUN_0130dae0(local_e0,1);
        if (*(char *)(local_20 + 0x49c) == '\x01') {
          if (local_d1 == '\0') {
            FUN_013136a0(local_e0,6,1,param_9);
          }
          local_e9 = *(char *)(local_20 + 0x13b6);
          if (local_e9 == '\0') {
            local_f0 = 4;
          }
          else {
            local_f0 = 5;
          }
          local_308 = (wchar_t *)0x0;
          local_300 = (undefined2 *)CONCAT71(local_300._1_7_,*(undefined1 *)(local_20 + 0x13b8));
          FUN_0130ea10(local_e0,(undefined1)local_f0,6,*(undefined1 *)(local_20 + 0x12f1));
        }
        else if (local_d1 == '\0') {
          FUN_013136a0(local_e0,6,0,param_9);
          FUN_013136a0(local_e0,6,1,param_9);
          cVar3 = FUN_01313d60(local_e0,6,*(undefined1 *)(local_20 + 0x12f1),param_9);
          if (cVar3 != '\0') {
            local_308 = (wchar_t *)0x0;
            local_300 = (undefined2 *)((ulonglong)local_300 & 0xffffffffffffff00);
            FUN_0130ea10(local_e0,1,6,*(undefined1 *)(local_20 + 0x12f1));
          }
        }
        FUN_017cc920(local_20);
      }
    }
    if (local_d1 != '\0') {
      if (local_20 != 0) {
        FUN_017cc920(local_20);
      }
      local_b3 = '\x01';
    }
    if (local_20 != 0) {
      if ((local_b3 == '\0') && (2 < *(int *)(local_20 + 0x1418))) {
        local_b3 = '\0';
      }
      else {
        local_b3 = '\x01';
      }
    }
    FUN_00410f20(local_20);
    puVar9 = PTR_DAT_020052b8;
    if (*PTR_DAT_020052b8 != '\0') {
      if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02002da0 + 0x6d8) + 0x328) == '\0') {
        if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02002da0 + 0x6e0) + 0x328) == '\0') {
          *(undefined1 *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) = 4;
        }
        else {
          *(undefined1 *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) = 1;
        }
      }
      else {
        *(undefined1 *)(*(longlong *)PTR_DAT_02002da0 + 0x71c) = 0;
      }
      FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02002da0 + 0x6f0),0);
      FUN_0132b070(*(undefined8 *)PTR_DAT_02002da0,0);
      puVar9 = (undefined *)FUN_0132b640(*(undefined8 *)PTR_DAT_02002da0);
    }
    if (param_5 < 8) {
      bVar11 = ((int)CONCAT71((int7)((ulonglong)puVar9 >> 8),1) << (param_5 & 0x1f) & 3U) != 0;
    }
    else {
      bVar11 = false;
    }
    if ((bVar11) && (*(longlong *)PTR_DAT_02001e00 != 0)) {
      FUN_01a80d70(*(undefined8 *)PTR_DAT_02001e00,1);
    }
  }
  puVar9 = PTR_DAT_020052b8;
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_013a48d0(*(undefined8 *)PTR_DAT_020032b8);
    puVar9 = (undefined *)FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,"StopAnalysis()",0,1);
  }
  if (param_5 < 8) {
    uVar5 = (int)CONCAT71((int7)((ulonglong)puVar9 >> 8),1) << (param_5 & 0x1f);
    uVar8 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(uVar5 & 0x2c) != 0);
  }
  else {
    uVar8 = 0;
  }
  if ((char)uVar8 != '\0') {
    uVar8 = FUN_00410f20(local_c8);
  }
  if (param_5 < 8) {
    bVar11 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (param_5 & 0x1f) & 0x40U) != 0;
  }
  else {
    bVar11 = false;
  }
  if (bVar11) {
    FUN_00410f20(local_e0);
  }
LAB_0134c8a6:
  FUN_00414480(&local_2c8);
  FUN_00414520(&local_2c0);
  FUN_00414590(&local_2b8,2);
  FUN_00414560(&local_2a8,7);
  FUN_00414560(&local_220,6);
  FUN_00414560(&local_198,2);
  FUN_0041b800(&local_118);
  FUN_00414480(&local_c0);
  FUN_00414480(&local_58);
  FUN_00414560(&param_6,3);
  FUN_00414480(&param_11);
  FUN_00414560(&param_23,2);
  return local_b3;
}

