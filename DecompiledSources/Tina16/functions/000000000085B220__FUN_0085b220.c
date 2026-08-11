/* Ghidra address: 0085b220 */
/* Ghidra symbol: FUN_0085b220 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_0085b220(longlong *param_1,undefined8 param_2,int param_3,uint param_4,byte param_5,
                 byte param_6,int param_7,int param_8,longlong param_9,char param_10,char param_11,
                 longlong *param_12)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint *puVar14;
  bool bVar15;
  byte local_res10;
  int local_res18;
  uint local_res20;
  undefined1 auStack_328 [32];
  int local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  longlong local_2d8;
  undefined8 local_2d0;
  ulonglong local_2c8;
  ulonglong local_2c0;
  undefined8 local_2b8;
  ulonglong local_2b0;
  ulonglong local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined *local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined *local_260;
  longlong local_258;
  undefined *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 *local_208;
  undefined4 *local_200;
  undefined4 *local_1f8;
  undefined1 *local_1f0;
  undefined4 *local_1e0;
  longlong local_1d8;
  bool local_1cd;
  int local_1cc;
  longlong local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong local_190;
  longlong *local_188;
  byte local_179;
  longlong *local_178;
  uint local_170;
  int local_16c;
  undefined4 local_168;
  longlong local_164;
  uint local_154;
  uint local_150;
  undefined8 local_14c;
  longlong local_144;
  undefined8 local_13c;
  undefined8 local_134;
  int local_12c;
  longlong local_128;
  int local_120;
  int local_11c;
  longlong local_118;
  int local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  longlong local_ec;
  undefined8 local_e4;
  code *local_dc;
  longlong *local_d4;
  undefined4 local_cc;
  longlong local_c8;
  longlong lStack_c0;
  uint local_b4;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_6e;
  int local_6c;
  longlong *local_68;
  int local_5c;
  int local_58;
  int local_54;
  longlong *local_50;
  undefined4 local_44;
  undefined *local_40;
  longlong local_38 [3];
  
  local_1f0 = auStack_328;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_288 = (undefined *)0x0;
  local_290 = 0;
  local_280 = 0;
  local_270 = 0;
  local_278 = 0;
  local_258 = 0;
  local_260 = (undefined *)0x0;
  local_268 = 0;
  local_250 = (undefined *)0x0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = (undefined4 *)0x0;
  local_200 = (undefined4 *)0x0;
  local_1f8 = (undefined4 *)0x0;
  local_40 = (undefined *)0x0;
  local_38[1] = 0;
  local_38[0] = 0;
  local_190 = 0;
  local_c8 = *param_12;
  lStack_c0 = param_12[1];
  local_res10 = (byte)param_2;
  puVar1 = auStack_328;
  if ((param_1[0x12] != 0) && (puVar1 = auStack_328, DAT_02012788 != (code *)0x0)) {
    local_b4 = (*DAT_02012788)(param_1[0x12]);
    if (local_b4 < 8) {
      bVar15 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << ((byte)local_b4 & 0x1f) & 0xcU)
               != 0;
    }
    else {
      bVar15 = false;
    }
    if (bVar15) {
      local_b4 = 0;
    }
    puVar1 = local_1f0;
    if (local_b4 != 0) goto LAB_0085d19f;
  }
  local_1f0 = puVar1;
  local_res18 = param_3;
  if (((local_res10 == 0) && (param_1[3] == 0)) && (local_res10 = 1, param_3 == 0)) {
    local_res18 = 1;
  }
  if (*param_1 == 0) {
    if (*(longlong *)(*(longlong *)PTR_DAT_02004030 + 0xa8) == 0) {
      FUN_0080c340(*(undefined8 *)PTR_DAT_02004030,&local_1f8);
      FUN_00414ad0(param_1,local_1f8);
    }
    else {
      FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0xa8),&local_200);
      FUN_00414ad0(param_1,local_200);
    }
  }
  if (param_1[1] == 0) {
    FUN_0085a450(&local_208,param_5);
    FUN_00414ad0(param_1 + 1,local_208);
  }
  param_1[0xe] = local_c8;
  param_1[0xf] = lStack_c0;
  if (param_9 == 0) {
    if (*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd0) == 0) {
      param_9 = *(longlong *)(*(longlong *)PTR_DAT_02004030 + 0x2d0);
    }
    else {
      param_9 = FUN_0065b870(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0xd0));
    }
  }
  local_res20 = param_4;
  if (((DAT_02012798 == '\0') && (DAT_02012778 != (code *)0x0)) &&
     ((param_10 == '\0' && (((param_4 & 0x10000) == 0 && (param_1[10] == 0)))))) {
    *(undefined1 *)(param_1 + 0x10) = 0;
    FUN_0040d200(&local_168,0xa0,0);
    local_168 = 0xa0;
    local_164 = param_9;
    FUN_0085aa60(auStack_328,&local_210,*param_1);
    local_14c = local_210;
    FUN_0085aa60(auStack_328,&local_218,param_1[1]);
    local_13c = local_218;
    FUN_0085aa60(auStack_328,&local_220,param_1[2]);
    local_134 = local_220;
    local_44 = 0;
    FUN_0085aae0(auStack_328,param_1[3],&local_12c,100);
    FUN_0085aae0(auStack_328,param_1[4],&local_11c,200);
    if (0 < local_12c) {
      local_128 = local_38[0];
    }
    if (0 < local_11c) {
      local_118 = local_38[0] + (longlong)local_12c * 0xc;
    }
    FUN_0085aa60(auStack_328,&local_228,param_1[9]);
    local_10c = local_228;
    FUN_0085aa60(auStack_328,&local_230,param_1[5]);
    local_104 = local_230;
    FUN_0085aa60(auStack_328,&local_238,param_1[6]);
    local_fc = local_238;
    FUN_0085aa60(auStack_328,&local_240,param_1[7]);
    local_f4 = local_240;
    FUN_0085aa60(auStack_328,&local_248,param_1[8]);
    local_e4 = local_248;
    local_150 = (uint)local_res10;
    if ((param_1[9] != 0) && ((char)param_1[0xd] != '\0')) {
      local_res20 = param_4 | 0x100;
    }
    if ((local_12c == 0) && (local_res10 == 1)) {
      local_res20 = local_res20 | 8;
    }
    local_154 = local_res20;
    local_144 = (longlong)*(int *)(&DAT_01e1ba14 + (ulonglong)param_5 * 4);
    local_ec = (longlong)*(int *)(&DAT_01e1ba30 + (ulonglong)param_6 * 4);
    local_120 = local_res18;
    local_110 = param_7;
    local_cc = FUN_0040c770((double)param_8);
    local_dc = FUN_0085a710;
    puVar14 = &local_b4;
    local_d4 = param_1;
    iVar4 = (*DAT_02012778)(&local_168,puVar14,param_1 + 0xc,param_1 + 0xd);
    if (iVar4 == 0) {
      if (((param_1[0x12] != 0) && (DAT_02012790 != (code *)0x0)) && ((char)param_1[0xd] != '\0')) {
        if (local_b4 < 8) {
          bVar15 = ((int)CONCAT71((int7)((ulonglong)puVar14 >> 8),1) << ((byte)local_b4 & 0x1f) &
                   0xdU) != 0;
        }
        else {
          bVar15 = false;
        }
        if (!bVar15) {
          (*DAT_02012790)(param_1[0x12],local_b4);
        }
      }
      goto LAB_0085d19f;
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  local_2d8 = FUN_0085d580(&PTR_FUN_00859300,1,*(undefined8 *)PTR_DAT_02004030,0);
  param_1[0x11] = local_2d8;
  *(longlong **)(local_2d8 + 0x6b0) = param_1;
  FUN_007ff680(local_2d8,3);
  if ((local_res20 & 8) == 0) {
    FUN_007ff400(param_1[0x11],0);
  }
  else {
    FUN_007ff400(param_1[0x11],1);
  }
  if ((local_res20 & 0x1000) == 0) {
    FUN_00800470(param_1[0x11],4);
  }
  else {
    FUN_00800470(param_1[0x11],7);
  }
  if (param_11 == '\0') {
    FUN_0064df10(param_1[0x11],DAT_02012770);
  }
  local_1c0 = *(longlong *)(param_1[0x11] + 0xb8);
  local_54 = *(int *)(*(longlong *)(local_1c0 + 0x18) + 0x28);
  if (param_8 == 0) {
    uVar8 = FUN_007ffbe0(param_1[0x11]);
    iVar4 = FUN_005fdff0(uVar8,param_1[1]);
    if (iVar4 < 0x12d) {
      uVar8 = FUN_007ffbe0(param_1[0x11]);
      iVar4 = FUN_005fdff0(uVar8,param_1[2]);
      if (300 < iVar4) goto LAB_0085bb4e;
      local_1c8 = param_1[3];
      local_1cc = 0;
      if (local_1c8 != 0) {
        local_1cc = *(int *)(local_1c8 + -4);
      }
      local_1cd = 0x28 < local_1cc;
    }
    else {
LAB_0085bb4e:
      local_1cd = true;
    }
    if (local_1cd == false) {
      param_8 = 0x1a4;
    }
    else {
      param_8 = 0x1e0;
    }
  }
  uVar5 = FUN_0040c770((double)param_8);
  FUN_007fded0(param_1[0x11],uVar5);
  FUN_0064cc50(param_1[0x11],200);
  FUN_0064de00(param_1[0x11],*param_1);
  local_178 = (longlong *)FUN_00742f60(&PTR_FUN_00733e50,1,param_1[0x11]);
  (**(code **)(*local_178 + 0x130))(local_178,param_1[0x11]);
  FUN_0064c650(local_178,1);
  FUN_00743910(local_178,0);
  FUN_00743880(local_178,0);
  if (param_11 == '\0') {
    FUN_0064e030(local_178,0xffffff);
    (**(code **)(*local_178 + 0x230))(local_178,0);
  }
  local_50 = local_178;
  if (param_11 == '\0') {
    local_16c = 0x18;
  }
  else {
    local_16c = 10;
  }
  if (*(longlong *)(&DAT_01e1ba48 + (ulonglong)param_5 * 8) == 0) {
    local_68 = (longlong *)0x0;
    if (param_11 == '\0') {
      local_16c = local_16c * 2;
    }
    local_58 = local_16c;
    local_5c = local_16c;
  }
  else {
    local_68 = (longlong *)FUN_007416c0(&PTR_FUN_00732068,1,param_1[0x11]);
    (**(code **)(*local_68 + 0x130))(local_68,local_50);
    uVar8 = FUN_00603c90(local_68[99]);
    uVar9 = thunk_FUN_03ccce41(0,*(undefined8 *)(&DAT_01e1ba48 + (ulonglong)param_5 * 8));
    FUN_0060d3b0(uVar8,uVar9);
    plVar10 = (longlong *)FUN_00603c90(local_68[99]);
    uVar5 = (**(code **)(*plVar10 + 0x60))(plVar10);
    plVar10 = (longlong *)FUN_00603c90(local_68[99]);
    local_308 = (**(code **)(*plVar10 + 0x48))(plVar10);
    (**(code **)(*local_68 + 400))(local_68,local_16c,local_16c,uVar5);
    local_58 = (int)local_68[0x13] + local_16c * 2;
    local_5c = *(int *)((longlong)local_68 + 0x94);
    if (param_11 != '\0') {
      local_5c = local_5c + 8;
    }
  }
  uVar8 = FUN_0085acc0(auStack_328,param_1[1],1);
  *(undefined8 *)(param_1[0x11] + 0x6d0) = uVar8;
  uVar8 = FUN_0085acc0(auStack_328,param_1[2],0);
  *(undefined8 *)(param_1[0x11] + 0x6b8) = uVar8;
  if (param_1[5] != 0) {
    uVar8 = FUN_0085acc0(auStack_328,param_1[5],0);
    *(undefined8 *)(param_1[0x11] + 0x6c0) = uVar8;
  }
  if (((local_res20 & 0x10) != 0) && (param_1[3] != 0)) {
    local_78 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_5c = local_5c + 8;
    FUN_0043ea00(&local_250,param_1[3]);
    (**(code **)(*local_78 + 0x60))(local_78,local_250);
    iVar4 = (**(code **)(*local_78 + 0x28))();
    local_170 = 0;
    if (-1 < iVar4 + -1) {
      do {
        (**(code **)(*local_78 + 0x18))(local_78,&local_268,local_170);
        FUN_0085a960(auStack_328,&local_260,local_268);
        FUN_0043ea00(&local_258,local_260);
        if (local_258 != 0) {
          local_188 = (longlong *)FUN_0082ae80(&PTR_FUN_00859f20,1,param_1[0x11]);
          (**(code **)(*local_188 + 0x130))(local_188,local_50);
          FUN_005fcc80(local_188[0x17],local_54 + -3);
          if (param_11 == '\0') {
            local_308 = FUN_0085a380(0x28);
            (**(code **)(*local_188 + 400))
                      (local_188,local_58,local_5c,(param_8 - local_58) + -0x10);
          }
          else {
            local_308 = FUN_0085a380(0x28);
            (**(code **)(*local_188 + 400))(local_188,local_58,local_5c,(param_8 - local_58) + -10);
          }
          (**(code **)(*local_78 + 0x18))(local_78,&local_278,local_170);
          FUN_0085a960(auStack_328,&local_270,local_278);
          FUN_0064de00(local_188,local_270);
          if (local_40 != (undefined *)0x0) {
            FUN_0064dfb0(local_188,1);
            FUN_00414ad0(local_188 + 0x1e,local_40);
          }
          local_5c = local_5c + *(int *)((longlong)local_188 + 0x9c) + 2;
          *(uint *)(local_188 + 0x9e) = local_170 + 100;
          local_188[0x40] = param_1[0x11];
          local_188[0x3f] = (longlong)FUN_0085d640;
          if ((int)local_188[0x9e] == local_res18) {
            FUN_00801e40(param_1[0x11],local_188);
          }
          if (param_11 == '\0') {
            FUN_0082bff0(local_188,0x18);
            FUN_0082bfc0(local_188,10);
          }
          else {
            FUN_005fcc80(local_188[0x17],local_54 + -2);
            FUN_005fce70(local_188[0x17],1);
            FUN_0082bff0(local_188,7);
            FUN_0082bfc0(local_188,7);
          }
          if ((local_res20 & 0x20) == 0) {
            FUN_0085a430(local_188,DAT_02012768);
          }
        }
        local_170 = local_170 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_5c = local_5c + 0x18;
    FUN_00410f20(local_78);
  }
  if (param_1[4] != 0) {
    local_80 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_0043ea00(&local_280,param_1[4]);
    (**(code **)(*local_80 + 0x60))(local_80,local_280);
    iVar4 = (**(code **)(*local_80 + 0x28))(local_80);
    FUN_00419260(&local_190,&DAT_0085a820,1,(longlong)iVar4);
    iVar4 = (**(code **)(*local_80 + 0x28))();
    local_170 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar8 = FUN_0068a170(&PTR_FUN_006757e8,1,param_1[0x11]);
        *(undefined8 *)(local_190 + (longlong)(int)local_170 * 8) = uVar8;
        local_1a0 = *(longlong **)(local_190 + (longlong)(int)local_170 * 8);
        (**(code **)(*local_1a0 + 0x130))(local_1a0,local_50);
        local_308 = 6 - local_54;
        (**(code **)(*local_1a0 + 400))
                  (local_1a0,local_58 + 0x10,local_5c,(param_8 - local_58) + -0x20);
        (**(code **)(*local_80 + 0x18))(local_80,&local_290,local_170);
        FUN_0085a960(auStack_328,&local_288,local_290);
        FUN_0064de00(local_1a0,local_288);
        if (local_40 != (undefined *)0x0) {
          FUN_0064dfb0(local_1a0,1);
          FUN_00414ad0(local_1a0 + 0x1e,local_40);
        }
        local_5c = local_5c + *(int *)((longlong)local_1a0 + 0x9c);
        if ((local_170 == 0) || (local_170 + 200 == param_7)) {
          (**(code **)(*local_1a0 + 0x268))(local_1a0,1);
        }
        local_170 = local_170 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_5c = local_5c + 0x18;
    FUN_00410f20(local_80);
  }
  if (param_1[10] == 0) {
    if ((local_res20 & 0x10000) != 0) {
      uVar8 = FUN_00680200(&PTR_FUN_0066b990,1,param_1[0x11]);
      *(undefined8 *)(param_1[0x11] + 0x6e0) = uVar8;
      local_1b0 = *(longlong **)(param_1[0x11] + 0x6e0);
      (**(code **)(*local_1b0 + 0x130))(local_1b0,local_50);
      local_308 = FUN_0085a380(0x16);
      (**(code **)(*local_1b0 + 400))(local_1b0,local_58,local_5c,(param_8 - local_58) + -0x10);
      FUN_0064de00(local_1b0,param_1[0xb]);
      if ((local_res20 & 0x20000) != 0) {
        FUN_006807a0(local_1b0,0x2a);
      }
      if ((local_res20 & 0x40000) != 0) {
        FUN_00801e40(param_1[0x11],*(undefined8 *)(param_1[0x11] + 0x6e0));
      }
      local_5c = local_5c + 0x2a;
    }
  }
  else {
    local_88 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar8 = FUN_00685410(&PTR_FUN_00670158,1,param_1[0x11]);
    lVar12 = param_1[0x11];
    *(undefined8 *)(lVar12 + 0x6d8) = uVar8;
    local_1a8 = *(longlong **)(lVar12 + 0x6d8);
    (**(code **)(*local_1a8 + 0x130))(local_1a8,local_50);
    local_308 = FUN_0085a380(0x16);
    (**(code **)(*local_1a8 + 400))(local_1a8,local_58,local_5c,(param_8 - local_58) + -0x20);
    if ((local_res20 & 0x10000) == 0) {
      (**(code **)(*local_1a8 + 0x318))(local_1a8,2);
    }
    else {
      (**(code **)(*local_1a8 + 0x318))(local_1a8,0);
    }
    FUN_0043ea00(&local_298,param_1[10]);
    (**(code **)(*local_88 + 0x60))(local_88,local_298);
    (**(code **)(*(longlong *)local_1a8[0x9e] + 0x10))((longlong *)local_1a8[0x9e],local_88);
    if (param_1[0xb] == 0) {
      (**(code **)(*local_1a8 + 0x268))(local_1a8,0);
    }
    else {
      FUN_0064de00(local_1a8,param_1[0xb]);
    }
    local_5c = local_5c + 0x2a;
    FUN_00410f20(local_88);
  }
  FUN_0064cc50(local_178,local_5c);
  local_50 = (longlong *)param_1[0x11];
  if (((local_res10 == 0) && (param_1[9] == 0)) &&
     ((param_1[3] == 0 || ((local_res20 & 0x10) != 0)))) {
    local_6c = 0;
  }
  else {
    local_6e = FUN_0065bc10(local_178);
    local_5c = local_5c + 0x10;
    local_6c = param_8;
    if ((local_res20 & 0x10) == 0) {
      local_90 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_0043ea00(&local_2a0,param_1[3]);
      (**(code **)(*local_90 + 0x60))(local_90,local_2a0);
      iVar4 = (**(code **)(*local_90 + 0x28))(local_90);
      local_170 = iVar4 - 1;
      if (-1 < (int)local_170) {
        do {
          (**(code **)(*local_90 + 0x18))(local_90,&local_2a8,local_170);
          FUN_0085b000(auStack_328,local_2a8,local_170 + 100);
          local_170 = local_170 - 1;
        } while (local_170 != 0xffffffff);
      }
      FUN_00410f20(local_90);
    }
    local_179 = 5;
    puVar11 = &DAT_01e1ba0c;
    local_1e0 = (undefined4 *)&DAT_01e1ba0c;
    do {
      if (local_179 < 8) {
        iVar4 = (int)CONCAT71((int7)((ulonglong)puVar11 >> 8),1) << (local_179 & 0x1f);
        puVar11 = (undefined *)
                  (ulonglong)CONCAT31((int3)((uint)iVar4 >> 8),((byte)iVar4 & local_res10) != 0);
      }
      else {
        puVar11 = (undefined *)0x0;
      }
      if ((char)puVar11 != '\0') {
        uVar8 = FUN_0085a300(local_179);
        FUN_0041ddd0(&local_2b8,uVar8);
        FUN_0085a3a0(&local_2b0,local_2b8);
        puVar11 = (undefined *)FUN_0085b000(auStack_328,local_2b0,*local_1e0);
      }
      local_179 = local_179 - 1;
      local_1e0 = local_1e0 + -1;
    } while (local_179 != 0xff);
    if (param_1[9] != 0) {
      uVar8 = FUN_00689210(&PTR_FUN_006747f8,1,param_1[0x11]);
      *(undefined8 *)(param_1[0x11] + 0x6e8) = uVar8;
      local_1b8 = *(longlong **)(param_1[0x11] + 0x6e8);
      (**(code **)(*local_1b8 + 0x130))(local_1b8,local_50);
      uVar8 = FUN_007ffbe0(param_1[0x11]);
      iVar4 = FUN_005fdff0(uVar8,param_1[9]);
      if (local_6c < local_58 + iVar4 + 0x10) {
        local_5c = local_5c + 0x20;
        local_6c = param_8;
      }
      local_308 = FUN_0085a380(0x18);
      (**(code **)(*local_1b8 + 400))(local_1b8,local_58,local_5c,local_6c - local_58);
      FUN_0064de00(local_1b8,param_1[9]);
      (**(code **)(*local_1b8 + 0x268))(local_1b8,(char)param_1[0xd]);
    }
    local_5c = local_5c + 0x24;
  }
  if (param_1[8] != 0) {
    if (local_6c == 0) {
      local_5c = local_5c + 0x10;
    }
    else {
      FUN_0085af40(auStack_328);
    }
    if (*(longlong *)(&DAT_01e1ba80 + (ulonglong)param_6 * 8) == 0) {
      local_58 = 0x18;
    }
    else {
      local_68 = (longlong *)FUN_007416c0(&PTR_FUN_00732068,1,param_1[0x11]);
      (**(code **)(*local_68 + 0x130))(local_68,local_50);
      local_a0 = (longlong *)FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
      local_98 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      (**(code **)(*local_98 + 0x80))(local_98,1);
      uVar8 = thunk_FUN_03ccce41(0,*(undefined8 *)(&DAT_01e1ba80 + (ulonglong)param_6 * 8));
      FUN_0060d3b0(local_a0,uVar8);
      uVar6 = (**(code **)(*local_a0 + 0x60))(local_a0);
      (**(code **)(*local_98 + 0x88))(local_98,uVar6 >> 1);
      uVar6 = (**(code **)(*local_a0 + 0x48))(local_a0);
      (**(code **)(*local_98 + 0x70))(local_98,uVar6 >> 1);
      lVar12 = FUN_00609e10(local_98);
      FUN_005fdab0(*(undefined8 *)(lVar12 + 0x80),*(undefined4 *)(param_1[0x11] + 200));
      uVar8 = FUN_00609e10(local_98);
      local_2d0 = FUN_005ffa40(uVar8);
      uVar8 = FUN_0060ce20(local_a0);
      uVar5 = (**(code **)(*local_98 + 0x60))(local_98);
      uVar7 = (**(code **)(*local_98 + 0x48))(local_98);
      lVar12 = FUN_00609e10(local_98);
      local_2f0 = FUN_005fdb10(*(undefined8 *)(lVar12 + 0x80));
      local_2f8 = 0;
      local_2e8 = 3;
      local_308 = uVar5;
      local_300 = uVar7;
      thunk_FUN_041a8a5c(local_2d0,0,0,uVar8);
      FUN_00603cf0(local_68[99],local_98);
      uVar5 = (**(code **)(*local_98 + 0x60))(local_98);
      local_308 = (**(code **)(*local_98 + 0x48))(local_98);
      (**(code **)(*local_68 + 400))(local_68,0x18,local_5c,uVar5);
      local_58 = (int)local_68[0x13] + 0x28;
      FUN_00410f20(local_98);
      FUN_00410f20(local_a0);
    }
    uVar8 = FUN_0085acc0(auStack_328,param_1[8],0);
    *(undefined8 *)(param_1[0x11] + 0x6c8) = uVar8;
  }
  uVar6 = FUN_0040c770((double)local_5c);
  uVar13 = (ulonglong)uVar6;
  FUN_007fdf10(param_1[0x11],uVar13);
  if (param_9 != 0) {
    iVar4 = FUN_008080c0();
    local_170 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar13 = (ulonglong)local_170;
        uVar8 = FUN_008080a0(*(undefined8 *)PTR_DAT_02005950,uVar13);
        lVar12 = FUN_0065b870(uVar8);
        if (lVar12 == param_9) {
          uVar13 = FUN_008080a0(*(undefined8 *)PTR_DAT_02005950,local_170);
          FUN_00800510(param_1[0x11],uVar13);
          break;
        }
        local_170 = local_170 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if (*(longlong *)(param_1[0x11] + 0x648) == 0) {
    uVar13 = *(ulonglong *)(*(longlong *)PTR_DAT_02005950 + 0xd0);
    FUN_00800510(param_1[0x11],uVar13);
  }
  if (*(longlong *)(param_1[0x11] + 0x648) != 0) {
    uVar13 = CONCAT71((int7)(uVar13 >> 8),2);
    FUN_008004a0(param_1[0x11],uVar13);
  }
  local_b4 = (**(code **)(*(longlong *)param_1[0x11] + 0x2d0))((longlong *)param_1[0x11]);
  lVar12 = param_1[0x11];
  if (*(longlong *)(lVar12 + 0x6d8) == 0) {
    if (*(longlong *)(lVar12 + 0x6e0) != 0) {
      FUN_0064dd90(*(undefined8 *)(lVar12 + 0x6e0),&local_2c8);
      uVar13 = local_2c8;
      FUN_00414ad0(param_1 + 0xb,local_2c8);
    }
  }
  else {
    uVar5 = (**(code **)(**(longlong **)(param_1[0x11] + 0x6d8) + 0x260))
                      (*(longlong **)(param_1[0x11] + 0x6d8));
    *(undefined4 *)((longlong)param_1 + 100) = uVar5;
    FUN_0064dd90(*(undefined8 *)(param_1[0x11] + 0x6d8),&local_2c0);
    uVar13 = local_2c0;
    FUN_00414ad0(param_1 + 0xb,local_2c0);
  }
  if (*(longlong *)(param_1[0x11] + 0x6e8) != 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1[0x11] + 0x6e8) + 0x260))
                      (*(longlong **)(param_1[0x11] + 0x6e8));
    *(undefined1 *)(param_1 + 0xd) = uVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_1d8 = local_190;
  if (local_190 != 0) {
    local_1d8 = *(longlong *)(local_190 + -8);
  }
  iVar4 = (int)local_1d8;
  local_170 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar10 = *(longlong **)(local_190 + (longlong)(int)local_170 * 8);
      cVar3 = (**(code **)(*plVar10 + 0x260))(plVar10);
      if (cVar3 != '\0') {
        *(uint *)(param_1 + 0xc) = local_170 + 200;
      }
      local_170 = local_170 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_a8 = param_1 + 0x11;
  local_b0 = *local_a8;
  *local_a8 = 0;
  FUN_00410f20(local_b0);
  if (((param_1[0x12] != 0) && (DAT_02012790 != (code *)0x0)) && ((char)param_1[0xd] != '\0')) {
    if (local_b4 < 8) {
      bVar15 = ((int)CONCAT71((int7)(uVar13 >> 8),1) << ((byte)local_b4 & 0x1f) & 0xdU) != 0;
    }
    else {
      bVar15 = false;
    }
    if (!bVar15) {
      (*DAT_02012790)(param_1[0x12],local_b4);
    }
  }
LAB_0085d19f:
  FUN_00414560(&local_2c8,2);
  FUN_00414560(&local_2b8,0x17);
  FUN_00414480(&local_200);
  FUN_00414480(&local_1f8);
  FUN_00419430(&local_190,&DAT_0085a820);
  FUN_00414480(&local_40);
  FUN_00419430(local_38,&DAT_0085a7d8);
  FUN_00419430(local_38 + 1,&DAT_0085a790);
  return local_b4;
}

