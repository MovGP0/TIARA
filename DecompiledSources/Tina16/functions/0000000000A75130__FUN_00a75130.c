/* Ghidra address: 00a75130 */
/* Ghidra symbol: FUN_00a75130 */


void FUN_00a75130(longlong param_1,undefined8 *param_2,undefined8 *param_3,int *param_4,
                 undefined8 param_5,int param_6,undefined1 param_7,byte param_8)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  int7 iVar9;
  bool bVar10;
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  undefined1 *local_3c0;
  int *local_3b0;
  ulonglong *local_3a8;
  undefined8 *local_3a0;
  ulonglong *local_398;
  ulonglong *local_390;
  ulonglong *local_388;
  int *local_380;
  byte *local_378;
  ulonglong local_370;
  ulonglong uStack_368;
  ulonglong uStack_360;
  ulonglong uStack_358;
  ulonglong local_350;
  ulonglong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  ulonglong local_330;
  ulonglong uStack_328;
  ulonglong uStack_320;
  ulonglong uStack_318;
  undefined1 local_30f;
  undefined1 local_30e;
  undefined1 local_30d;
  uint local_30c;
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  uint local_304;
  undefined1 local_2ff;
  undefined1 local_2fe;
  undefined1 local_2fd;
  uint local_2fc;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  uint local_2f4;
  ulonglong local_2f0;
  ulonglong uStack_2e8;
  undefined8 uStack_2e0;
  ulonglong uStack_2d8;
  undefined1 local_2cf;
  undefined1 local_2ce;
  undefined1 local_2cd;
  uint local_2cc;
  undefined1 local_2c7;
  undefined1 local_2c6;
  undefined1 local_2c5;
  uint local_2c4;
  undefined1 local_2bf;
  undefined1 local_2be;
  undefined1 local_2bd;
  uint local_2bc;
  undefined1 local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5;
  uint local_2b4;
  ulonglong local_2b0;
  ulonglong uStack_2a8;
  ulonglong uStack_2a0;
  ulonglong uStack_298;
  undefined1 local_28f;
  undefined1 local_28e;
  undefined1 local_28d;
  uint local_28c;
  undefined1 local_287;
  undefined1 local_286;
  undefined1 local_285;
  uint local_284;
  undefined1 local_27f;
  undefined1 local_27e;
  undefined1 local_27d;
  uint local_27c;
  undefined1 local_277;
  undefined1 local_276;
  undefined1 local_275;
  uint local_274;
  uint local_270;
  int local_26c;
  uint local_268;
  undefined4 local_264;
  undefined4 uStack_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 uStack_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 local_214;
  int local_210;
  int iStack_20c;
  int local_208;
  int local_204;
  int local_200;
  int iStack_1fc;
  int local_1f8;
  int local_1f4;
  int iStack_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int iStack_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  ushort local_1b6;
  uint local_1b4;
  uint local_1b0;
  char local_1a9;
  int local_1a8 [4];
  int local_198 [4];
  undefined4 local_188;
  uint local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  uint local_164;
  uint local_160;
  uint local_15c;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138 [4];
  undefined8 local_118 [4];
  undefined8 local_f8;
  ulonglong local_d8 [4];
  ulonglong local_b8 [4];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_3c0 = auStack_3f8;
  local_80._4_4_ = (int)((ulonglong)param_2[1] >> 0x20);
  local_1bc = local_80._4_4_;
  if (local_80._4_4_ < 5000) {
    local_1c0 = local_80._4_4_;
  }
  else {
    local_1c0 = 5000;
  }
  local_80._0_4_ = (int)param_2[1];
  local_80 = CONCAT44(local_1c0,(int)local_80);
  local_88._4_4_ = (int)((ulonglong)*param_2 >> 0x20);
  local_1c4 = local_88._4_4_;
  if (local_88._4_4_ < -199) {
    local_1c8 = -200;
  }
  else {
    local_1c8 = local_88._4_4_;
  }
  local_88._0_4_ = (int)*param_2;
  local_88 = CONCAT44(local_1c8,(int)local_88);
  local_90._4_4_ = (int)((ulonglong)param_3[1] >> 0x20);
  local_1cc = local_90._4_4_;
  if (local_90._4_4_ < 5000) {
    local_1d0 = local_90._4_4_;
  }
  else {
    local_1d0 = 5000;
  }
  local_90._0_4_ = (int)param_3[1];
  local_90 = CONCAT44(local_1d0,(int)local_90);
  local_98._4_4_ = (int)((ulonglong)*param_3 >> 0x20);
  local_1d4 = local_98._4_4_;
  if (local_98._4_4_ < -199) {
    local_1d8 = -200;
  }
  else {
    local_1d8 = local_98._4_4_;
  }
  local_98._0_4_ = (int)*param_3;
  local_98 = CONCAT44(local_1d8,(int)local_98);
  local_198[0] = (int)local_98 - (int)local_88;
  local_198[1] = local_1d8 - local_1c8;
  local_198[2] = (int)local_80 - (int)local_90;
  local_198[3] = local_1c0 - local_1d0;
  if ((((local_198[0] == 0) && (local_198[1] == 0)) && (local_198[2] == 0)) && (local_198[3] == 0))
  {
    return;
  }
  local_1b6 = 0;
  iVar3 = 4;
  local_378 = (byte *)&param_5;
  do {
    if (*local_378 < 0x10) {
      uVar8 = (int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << (*local_378 & 0x1f);
      param_2 = (undefined8 *)(ulonglong)uVar8;
      local_1b6 = local_1b6 | (ushort)uVar8;
    }
    local_378 = local_378 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_1dc = local_1c0;
  local_1e4 = (int)local_88;
  iStack_1e0 = local_1c0;
  local_b8[0] = CONCAT44(local_1c0,(int)local_88);
  local_b8[1] = local_88;
  local_1e8 = (int)local_80;
  local_1ec = local_1c8;
  local_1f4 = (int)local_80;
  iStack_1f0 = local_1c8;
  local_b8[2] = CONCAT44(local_1c8,(int)local_80);
  local_b8[3] = local_80;
  local_1f8 = local_1d0;
  local_200 = (int)local_98;
  iStack_1fc = local_1d0;
  local_d8[0] = CONCAT44(local_1d0,(int)local_98);
  local_d8[1] = local_98;
  local_204 = (int)local_90;
  local_208 = local_1d8;
  local_210 = (int)local_90;
  iStack_20c = local_1d8;
  local_d8[2] = CONCAT44(local_1d8,(int)local_90);
  local_d8[3] = local_90;
  puVar1 = auStack_3f8;
  if ((local_1b6 & 0xf0) != 0) {
    local_3d8 = CONCAT44(local_3d8._4_4_,(local_1c0 + local_1d0) / 2);
    FUN_004238d0(&local_174,(longlong)((int)local_88 + (int)local_98) / 2 & 0xffffffff,
                 (longlong)(local_1c8 + local_1d8) / 2 & 0xffffffff,
                 (longlong)((int)local_80 + (int)local_90) / 2 & 0xffffffff);
    local_214 = uStack_168;
    local_21c = local_174;
    uStack_218 = uStack_168;
    local_220 = local_16c;
    local_224 = uStack_170;
    local_22c = local_16c;
    uStack_228 = uStack_170;
    puVar1 = local_3c0;
  }
  local_3c0 = puVar1;
  if ((local_1b6 & 0x100) != 0) {
    iVar3 = 4;
    local_378 = (byte *)local_198;
    local_380 = local_1a8;
    do {
      *local_380 = *(int *)local_378 / 3;
      if (*(int *)local_378 % 3 == 2) {
        *local_380 = *local_380 + 1;
      }
      local_380 = local_380 + 1;
      local_378 = local_378 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_3d8._0_4_ = local_80._4_4_ - local_1a8[3];
    FUN_004238d0(&local_174,(int)local_88 + local_1a8[0],local_88._4_4_ + local_1a8[1],
                 (int)local_80 - local_1a8[2]);
    local_230 = uStack_168;
    local_238 = local_174;
    uStack_234 = uStack_168;
    local_23c = local_16c;
    local_240 = uStack_170;
    local_248 = local_16c;
    uStack_244 = uStack_170;
    local_3d8 = CONCAT44(local_3d8._4_4_,local_90._4_4_ + local_1a8[3]);
    FUN_004238d0(&local_174,(int)local_98 - local_1a8[0],local_98._4_4_ - local_1a8[1],
                 (int)local_90 + local_1a8[2]);
    local_24c = uStack_168;
    local_254 = local_174;
    uStack_250 = uStack_168;
    local_258 = local_16c;
    local_25c = uStack_170;
    local_264 = local_16c;
    uStack_260 = uStack_170;
  }
  if ((param_6 != 0x1fffffff) && ((local_1b6 & 0x1c0) != 0)) {
    local_38 = thunk_FUN_03976db5(local_88 & 0xffffffff,local_88._4_4_,local_80 & 0xffffffff,
                                  local_80._4_4_);
    local_40 = thunk_FUN_03976db5(local_98 & 0xffffffff,local_98._4_4_,local_90 & 0xffffffff,
                                  local_90._4_4_);
    thunk_FUN_04199bfe(local_38,local_38,local_40,4);
    local_30 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
    if (((param_8 & 2) == 0) || (cVar2 = FUN_00781870(), cVar2 == '\0')) {
      local_268 = param_6;
    }
    else {
      uVar5 = FUN_00781840();
      local_268 = FUN_007793c0(uVar5,param_6);
    }
    local_268 = FUN_005fbf20(local_268);
    FUN_005fdab0(local_30,local_268 | *(uint *)PTR_DAT_02005078);
    FUN_005fdcb0(local_30,0);
    uVar5 = FUN_005ffa40(param_1);
    uVar6 = FUN_005fdb10(local_30);
    thunk_FUN_041e66f2(uVar5,local_38,uVar6);
    FUN_00410f20(local_30);
    thunk_FUN_0416f828(local_38);
    thunk_FUN_0416f828(local_40);
  }
  local_1a9 = '\0';
  local_70 = 0;
  local_78 = 0;
  local_1b4 = 0;
  local_15c = 0;
  local_378 = (byte *)&param_5;
  local_388 = local_b8;
  local_390 = local_d8;
  local_398 = &local_f8;
  local_3a0 = local_118;
  local_3a8 = local_138;
  local_3b0 = local_198;
  local_380 = param_4;
  do {
    local_26c = *local_380;
    if (((param_8 & 2) == 0) || (cVar2 = FUN_00781870(), cVar2 == '\0')) {
      local_270 = local_26c;
    }
    else {
      uVar5 = FUN_00781840();
      local_270 = FUN_007793c0(uVar5,local_26c);
    }
    local_270 = FUN_005fbf20(local_270);
    local_164 = local_270;
    cVar2 = *local_378;
    bVar7 = (byte)local_15c;
    if ((byte)(cVar2 - 1U) < 3) {
      local_158 = *local_388;
      local_150 = local_b8[(int)(local_15c + 1) % 4];
      iVar3 = (int)(local_15c + 1) % 4;
      local_148 = local_d8[iVar3];
      local_140 = *local_390;
      iVar9 = (int7)(int3)((uint)iVar3 >> 8);
      if (*local_378 == '\x02') {
        if (local_15c < 8) {
          bVar10 = ((int)CONCAT71(iVar9,1) << (bVar7 & 0x1f) & 3U) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          uVar4 = FUN_005fbf20(local_270);
          local_274._0_1_ = (byte)uVar4;
          local_275 = PTR_DAT_02004358[(byte)local_274];
          local_276 = PTR_DAT_02004358[(byte)((uint)uVar4 >> 8)];
          local_277 = PTR_DAT_02004358[(byte)((uint)uVar4 >> 0x10)];
          local_274 = (uint)CONCAT12(local_277,CONCAT11(local_276,local_275));
          local_164 = local_274;
        }
        else {
          uVar4 = FUN_005fbf20(local_270);
          local_27c._0_1_ = (byte)uVar4;
          local_27d = PTR_DAT_02003938[(byte)local_27c];
          local_27e = PTR_DAT_02003938[(byte)((uint)uVar4 >> 8)];
          local_27f = PTR_DAT_02003938[(byte)((uint)uVar4 >> 0x10)];
          local_27c = (uint)CONCAT12(local_27f,CONCAT11(local_27e,local_27d));
          local_164 = local_27c;
        }
      }
      else if (*local_378 == '\x03') {
        if (local_15c < 8) {
          bVar10 = ((int)CONCAT71(iVar9,1) << (bVar7 & 0x1f) & 0xcU) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          uVar4 = FUN_005fbf20(local_270);
          local_284._0_1_ = (byte)uVar4;
          local_285 = PTR_DAT_02004358[(byte)local_284];
          local_286 = PTR_DAT_02004358[(byte)((uint)uVar4 >> 8)];
          local_287 = PTR_DAT_02004358[(byte)((uint)uVar4 >> 0x10)];
          local_284 = (uint)CONCAT12(local_287,CONCAT11(local_286,local_285));
          local_164 = local_284;
        }
        else {
          uVar4 = FUN_005fbf20(local_270);
          local_28c._0_1_ = (byte)uVar4;
          local_28d = PTR_DAT_02003938[(byte)local_28c];
          local_28e = PTR_DAT_02003938[(byte)((uint)uVar4 >> 8)];
          local_28f = PTR_DAT_02003938[(byte)((uint)uVar4 >> 0x10)];
          local_28c = (uint)CONCAT12(local_28f,CONCAT11(local_28e,local_28d));
          local_164 = local_28c;
        }
      }
      local_2b0 = local_158;
      uStack_2a8 = local_150;
      uStack_2a0 = local_148;
      uStack_298 = local_140;
      local_48 = thunk_FUN_041c22cf(&local_2b0,4,1);
      FUN_005fdcb0(*(undefined8 *)(param_1 + 0x80),0);
      FUN_005fdab0(*(undefined8 *)(param_1 + 0x80),local_164 | *(uint *)PTR_DAT_02005078);
      uVar5 = FUN_005ffa40(param_1);
      uVar6 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x80));
      thunk_FUN_041e66f2(uVar5,local_48,uVar6);
      thunk_FUN_0416f828(local_48);
    }
    else if ((byte)(cVar2 - 4U) < 2) {
      local_160 = local_270;
      local_158 = *local_388;
      local_150 = local_b8[(int)(local_15c + 1) % 4];
      iVar3 = (int)(local_15c + 1) % 4;
      local_148 = (&local_f8)[iVar3];
      local_140 = *local_398;
      iVar9 = (int7)(int3)((uint)iVar3 >> 8);
      if (*local_378 == '\x04') {
        if (local_15c < 8) {
          bVar10 = ((int)CONCAT71(iVar9,1) << (bVar7 & 0x1f) & 3U) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          uVar4 = FUN_005fbf20(local_270);
          local_2b4._0_1_ = (byte)uVar4;
          local_2b5 = PTR_DAT_02004358[(byte)local_2b4];
          local_2b6 = PTR_DAT_02004358[(byte)((uint)uVar4 >> 8)];
          local_2b7 = PTR_DAT_02004358[(byte)((uint)uVar4 >> 0x10)];
          local_2b4 = (uint)CONCAT12(local_2b7,CONCAT11(local_2b6,local_2b5));
          local_164 = local_2b4;
        }
        else {
          uVar4 = FUN_005fbf20(local_270);
          local_2bc._0_1_ = (byte)uVar4;
          local_2bd = PTR_DAT_02003938[(byte)local_2bc];
          local_2be = PTR_DAT_02003938[(byte)((uint)uVar4 >> 8)];
          local_2bf = PTR_DAT_02003938[(byte)((uint)uVar4 >> 0x10)];
          local_2bc = (uint)CONCAT12(local_2bf,CONCAT11(local_2be,local_2bd));
          local_164 = local_2bc;
        }
      }
      else if (*local_378 == '\x05') {
        if (local_15c < 8) {
          bVar10 = ((int)CONCAT71(iVar9,1) << (bVar7 & 0x1f) & 0xcU) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          uVar4 = FUN_005fbf20(local_270);
          local_2c4._0_1_ = (byte)uVar4;
          local_2c5 = PTR_DAT_02004358[(byte)local_2c4];
          local_2c6 = PTR_DAT_02004358[(byte)((uint)uVar4 >> 8)];
          local_2c7 = PTR_DAT_02004358[(byte)((uint)uVar4 >> 0x10)];
          local_2c4 = (uint)CONCAT12(local_2c7,CONCAT11(local_2c6,local_2c5));
          local_164 = local_2c4;
        }
        else {
          uVar4 = FUN_005fbf20(local_270);
          local_2cc._0_1_ = (byte)uVar4;
          local_2cd = PTR_DAT_02003938[(byte)local_2cc];
          local_2ce = PTR_DAT_02003938[(byte)((uint)uVar4 >> 8)];
          local_2cf = PTR_DAT_02003938[(byte)((uint)uVar4 >> 0x10)];
          local_2cc = (uint)CONCAT12(local_2cf,CONCAT11(local_2ce,local_2cd));
          local_164 = local_2cc;
        }
      }
      local_2f0 = local_158;
      uStack_2e8 = local_150;
      uStack_2e0 = local_148;
      uStack_2d8 = local_140;
      local_50 = thunk_FUN_041c22cf(&local_2f0,4,1);
      FUN_005fdcb0(*(undefined8 *)(param_1 + 0x80),0);
      FUN_005fdab0(*(undefined8 *)(param_1 + 0x80),local_164 | *(uint *)PTR_DAT_02005078);
      uVar5 = FUN_005ffa40(param_1);
      uVar6 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x80));
      thunk_FUN_041e66f2(uVar5,local_50,uVar6);
      thunk_FUN_0416f828(local_50);
      local_164 = local_160;
      local_158 = *local_398;
      local_150 = (&local_f8)[(int)(local_15c + 1) % 4];
      iVar3 = (int)(local_15c + 1) % 4;
      local_148 = local_d8[iVar3];
      local_140 = *local_390;
      iVar9 = (int7)(int3)((uint)iVar3 >> 8);
      if (*local_378 == '\x04') {
        if (local_15c < 8) {
          bVar10 = ((int)CONCAT71(iVar9,1) << ((byte)local_15c & 0x1f) & 0xcU) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          uVar4 = FUN_005fbf20(local_160);
          local_304._0_1_ = (byte)uVar4;
          local_305 = PTR_DAT_02004358[(byte)local_304];
          local_306 = PTR_DAT_02004358[(byte)((uint)uVar4 >> 8)];
          local_307 = PTR_DAT_02004358[(byte)((uint)uVar4 >> 0x10)];
          local_304 = (uint)CONCAT12(local_307,CONCAT11(local_306,local_305));
          local_164 = local_304;
        }
        else {
          uVar4 = FUN_005fbf20(local_160);
          local_30c._0_1_ = (byte)uVar4;
          local_30d = PTR_DAT_02003938[(byte)local_30c];
          local_30e = PTR_DAT_02003938[(byte)((uint)uVar4 >> 8)];
          local_30f = PTR_DAT_02003938[(byte)((uint)uVar4 >> 0x10)];
          local_30c = (uint)CONCAT12(local_30f,CONCAT11(local_30e,local_30d));
          local_164 = local_30c;
        }
      }
      else if (*local_378 == '\x05') {
        if (local_15c < 8) {
          bVar10 = ((int)CONCAT71(iVar9,1) << ((byte)local_15c & 0x1f) & 3U) != 0;
        }
        else {
          bVar10 = false;
        }
        if (bVar10) {
          uVar4 = FUN_005fbf20(local_160);
          local_2f4._0_1_ = (byte)uVar4;
          local_2f5 = PTR_DAT_02004358[(byte)local_2f4];
          local_2f6 = PTR_DAT_02004358[(byte)((uint)uVar4 >> 8)];
          local_2f7 = PTR_DAT_02004358[(byte)((uint)uVar4 >> 0x10)];
          local_2f4 = (uint)CONCAT12(local_2f7,CONCAT11(local_2f6,local_2f5));
          local_164 = local_2f4;
        }
        else {
          uVar4 = FUN_005fbf20(local_160);
          local_2fc._0_1_ = (byte)uVar4;
          local_2fd = PTR_DAT_02003938[(byte)local_2fc];
          local_2fe = PTR_DAT_02003938[(byte)((uint)uVar4 >> 8)];
          local_2ff = PTR_DAT_02003938[(byte)((uint)uVar4 >> 0x10)];
          local_2fc = (uint)CONCAT12(local_2ff,CONCAT11(local_2fe,local_2fd));
          local_164 = local_2fc;
        }
      }
      local_330 = local_158;
      uStack_328 = local_150;
      uStack_320 = local_148;
      uStack_318 = local_140;
      local_58 = thunk_FUN_041c22cf(&local_330,4,1);
      FUN_005fdcb0(*(undefined8 *)(param_1 + 0x80),0);
      FUN_005fdab0(*(undefined8 *)(param_1 + 0x80),local_164 | *(uint *)PTR_DAT_02005078);
      uVar5 = FUN_005ffa40(param_1);
      uVar6 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x80));
      thunk_FUN_041e66f2(uVar5,local_58,uVar6);
      thunk_FUN_0416f828(local_58);
    }
    else if ((byte)(cVar2 - 6U) < 2) {
      if (local_1a9 == '\0') {
        local_188 = 0;
        local_184 = local_270 | *(uint *)PTR_DAT_02005078;
        local_180 = 0;
        if (*local_378 == '\a') {
          local_1b0 = 2;
        }
        else {
          local_1b0 = 0x101;
        }
        local_3d8 = 0;
        local_70 = thunk_FUN_04164f7c(local_1b0 | 0x12000,*local_3b0,&local_188,0);
        uVar5 = FUN_005ffa40(param_1);
        local_78 = thunk_FUN_041a19a1(uVar5,local_70);
        uVar5 = FUN_005ffa40(param_1);
        thunk_FUN_041cb0d4(uVar5);
        uVar5 = FUN_005ffa40(param_1);
        thunk_FUN_041a2b10(uVar5,(int)*local_398,*(undefined4 *)((longlong)local_398 + 4),0);
        local_1b4 = local_15c;
        local_1a9 = '\x01';
      }
      uVar5 = FUN_005ffa40(param_1);
      thunk_FUN_04151b0d(uVar5,*(undefined4 *)(&local_f8 + (int)(local_15c + 1) % 4),
                         *(undefined4 *)
                          ((longlong)&local_f8 + (longlong)((int)(local_15c + 1) % 4) * 8 + 4));
      if ((((local_15c == 3) ||
           (*(char *)((longlong)&param_5 + (longlong)(int)(local_15c + 1)) != *local_378)) ||
          (param_4[(int)(local_15c + 1)] != *local_380)) ||
         (local_198[(int)(local_15c + 1)] != *local_3b0)) {
        if ((local_15c == 3) && (local_1b4 == 0)) {
          uVar5 = FUN_005ffa40(param_1);
          thunk_FUN_0415cf7b(uVar5);
        }
        uVar5 = FUN_005ffa40(param_1);
        thunk_FUN_039a9576(uVar5);
        uVar5 = FUN_005ffa40(param_1);
        thunk_FUN_0419b773(uVar5);
        uVar5 = FUN_005ffa40(param_1);
        thunk_FUN_041a19a1(uVar5,local_78);
        thunk_FUN_0416f828(local_70);
        local_70 = 0;
        local_1a9 = '\0';
      }
    }
    else if (cVar2 == '\b') {
      local_164 = local_270 | *(uint *)PTR_DAT_02005078;
      local_350 = *local_388;
      local_158 = local_350;
      uStack_348 = local_b8[(int)(local_15c + 1) % 4];
      local_150 = uStack_348;
      uStack_340 = local_118[(int)(local_15c + 1) % 4];
      uStack_338 = *local_3a0;
      local_148 = uStack_340;
      local_140 = uStack_338;
      local_60 = thunk_FUN_041c22cf(&local_350,4,1);
      FUN_005fdcb0(*(undefined8 *)(param_1 + 0x80),0);
      FUN_005fdab0(*(undefined8 *)(param_1 + 0x80),local_164);
      uVar5 = FUN_005ffa40(param_1);
      uVar6 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x80));
      thunk_FUN_041e66f2(uVar5,local_60,uVar6);
      thunk_FUN_0416f828(local_60);
      local_370 = *local_3a8;
      local_158 = local_370;
      uStack_368 = local_138[(int)(local_15c + 1) % 4];
      local_150 = uStack_368;
      uStack_360 = local_d8[(int)(local_15c + 1) % 4];
      uStack_358 = *local_390;
      local_148 = uStack_360;
      local_140 = uStack_358;
      local_68 = thunk_FUN_041c22cf(&local_370,4,1);
      FUN_005fdcb0(*(undefined8 *)(param_1 + 0x80),0);
      FUN_005fdab0(*(undefined8 *)(param_1 + 0x80),local_164);
      uVar5 = FUN_005ffa40(param_1);
      uVar6 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x80));
      thunk_FUN_041e66f2(uVar5,local_68,uVar6);
      thunk_FUN_0416f828(local_68);
    }
    local_15c = local_15c + 1;
    local_3b0 = local_3b0 + 1;
    local_3a8 = local_3a8 + 1;
    local_3a0 = local_3a0 + 1;
    local_398 = local_398 + 1;
    local_390 = local_390 + 1;
    local_388 = local_388 + 1;
    local_378 = local_378 + 1;
    local_380 = local_380 + 1;
  } while (local_15c != 4);
  if (local_70 != 0) {
    uVar5 = FUN_005ffa40(param_1);
    thunk_FUN_041a19a1(uVar5,local_78);
    thunk_FUN_0416f828(local_70);
  }
  return;
}

