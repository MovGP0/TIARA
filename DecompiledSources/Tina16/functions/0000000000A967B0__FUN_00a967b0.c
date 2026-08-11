/* Ghidra address: 00a967b0 */
/* Ghidra symbol: FUN_00a967b0 */


void FUN_00a967b0(longlong *param_1,longlong *param_2,int param_3,int param_4,int param_5,
                 longlong param_6)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_3d8 [32];
  longlong local_3b8;
  int *local_3b0;
  undefined1 local_3a8;
  undefined1 local_3a0;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 *local_300;
  undefined4 local_2ec;
  undefined1 local_2e5;
  undefined4 local_2e4;
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined8 local_29c;
  undefined8 uStack_294;
  undefined4 local_28c;
  undefined1 local_285;
  undefined4 local_284;
  undefined1 local_27e;
  bool local_27d;
  int local_27c;
  undefined1 local_275;
  undefined4 local_274;
  char local_26e;
  bool local_26d;
  undefined4 local_26c;
  undefined4 local_268;
  undefined8 local_264;
  undefined8 uStack_25c;
  int local_254;
  int local_250;
  int local_24c;
  longlong local_248;
  undefined1 local_23c [16];
  undefined1 local_22c [16];
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined1 local_1e1;
  undefined4 local_1e0;
  undefined1 local_1da;
  bool local_1d9;
  int local_1d8;
  undefined1 local_1d1;
  undefined4 local_1d0;
  char local_1ca;
  bool local_1c9;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  int local_1b0;
  int local_1ac;
  longlong local_1a8;
  undefined1 local_19c [16];
  undefined1 local_18c [16];
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined1 local_141;
  undefined4 local_140;
  undefined1 local_13a;
  bool local_139;
  int local_138;
  undefined1 local_131;
  undefined4 local_130;
  char local_12a;
  bool local_129;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  int local_110;
  int local_10c;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  char local_f7;
  char local_f6;
  char local_f5;
  char local_f4;
  char local_f3;
  char local_f2;
  byte local_f1;
  longlong local_f0;
  byte local_e5;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined4 local_d0;
  int local_cc;
  byte local_c6;
  char local_c5;
  int local_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_300 = auStack_3d8;
  local_390 = 0;
  uStack_388 = 0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  uStack_368 = 0;
  local_360 = 0;
  uStack_358 = 0;
  uStack_350 = 0;
  local_348 = 0;
  uStack_340 = 0;
  uStack_338 = 0;
  local_330 = 0;
  uStack_328 = 0;
  uStack_320 = 0;
  local_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  lVar2 = param_1[3];
  local_c5 = *(char *)(lVar2 + 0x91);
  param_4 = param_4 - *(int *)(lVar2 + 0x94);
  param_5 = param_5 - *(int *)(lVar2 + 0x94);
  local_e5 = *(byte *)(lVar2 + 0x90);
  if (local_c5 == '\0') {
    local_c0 = *(longlong *)PTR_DAT_02001ae8;
LAB_00a96944:
    local_c6 = 1;
  }
  else {
    local_c0 = param_1[0x33];
    if ((local_c0 == *(longlong *)PTR_DAT_02003010) || (local_c0 == *(longlong *)PTR_DAT_02001ae8))
    goto LAB_00a96944;
    local_c6 = 0;
  }
  FUN_005fdcb0(param_2[0x10],1);
  FUN_005fce30(param_2[0xe],8);
  FUN_005fcd80(param_2[0xe],L"Arial");
  local_f0 = param_2[0xe];
  local_f1 = *(byte *)(*(longlong *)(local_f0 + 0x18) + 0x31);
  FUN_005fce70(local_f0,local_f1 & 0xfe);
  if (local_c6 == 0) {
    local_cc = 0;
  }
  else {
    local_cc = 4;
  }
  if ((char)param_1[0x15] == '\x02') {
    iVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
    local_c4 = ((param_5 + *(int *)(param_6 + 0x58)) - *(int *)(param_6 + 0x4c) / 2) -
               ((iVar4 - *(int *)((longlong)param_1 + 0xb4)) + (int)param_1[0x17]) / 2;
  }
  else {
    local_c4 = 0;
  }
  *(int *)((longlong)param_1 + 0xc4) = param_3;
  *(int *)(param_1 + 0x18) = param_4;
  if ((char)param_1[0xc] == '\0') {
    if (*(char *)((longlong)param_1 + 0x4c) == '\x02') {
      FUN_00a93550(param_1,&local_e0);
      local_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      FUN_00468530(&local_40,(int)param_1[10],0xfffffffffffffffc);
      FUN_00468530(&local_318,0xff4392a3,0xfffffffffffffffc);
      local_f2 = FUN_0046f320(&local_40,&local_318);
      FUN_00460ba0(&local_40);
      if (local_f2 == '\0') {
        *(int *)((longlong)param_1 + 0xc4) = (int)param_1[10] + local_e0;
      }
      local_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_00468530(&local_58,*(undefined4 *)((longlong)param_1 + 0x54),0xfffffffffffffffc);
      FUN_00468530(&local_330,0xff4392a3,0xfffffffffffffffc);
      local_f3 = FUN_0046f320(&local_58,&local_330);
      FUN_00460ba0(&local_58);
      if (local_f3 == '\0') {
        *(int *)(param_1 + 0x18) = *(int *)((longlong)param_1 + 0x54) + local_dc;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x4c) == '\x03') {
      FUN_00aa6360(param_1[3],&local_e0);
      local_70 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      FUN_00468530(&local_70,(int)param_1[10],0xfffffffffffffffc);
      FUN_00468530(&local_348,0xff4392a3,0xfffffffffffffffc);
      local_f4 = FUN_0046f320(&local_70,&local_348);
      FUN_00460ba0(&local_70);
      if (local_f4 == '\0') {
        *(int *)((longlong)param_1 + 0xc4) = (int)param_1[10] + local_e0;
      }
      local_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      FUN_00468530(&local_88,*(undefined4 *)((longlong)param_1 + 0x54),0xfffffffffffffffc);
      FUN_00468530(&local_360,0xff4392a3,0xfffffffffffffffc);
      local_f5 = FUN_0046f320(&local_88,&local_360);
      FUN_00460ba0(&local_88);
      if (local_f5 == '\0') {
        *(int *)(param_1 + 0x18) = *(int *)((longlong)param_1 + 0x54) + local_dc;
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x15);
      if (bVar1 < 2) {
        *(int *)(param_1 + 0x18) = param_4 + *(int *)((longlong)param_1 + 0xb4);
      }
      else if (bVar1 == 2) {
        *(int *)(param_1 + 0x18) = local_c4;
      }
      else if ((byte)(bVar1 - 3) < 2) {
        iVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
        *(int *)(param_1 + 0x18) = (param_5 - iVar4) - (int)param_1[0x17];
      }
      if (*(char *)((longlong)param_1 + 0x4c) == '\x01') {
        local_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        FUN_00468530(&local_a0,(int)param_1[10],0xfffffffffffffffc);
        FUN_00468530(&local_378,0xff4392a3,0xfffffffffffffffc);
        local_f6 = FUN_0046f320(&local_a0,&local_378);
        FUN_00460ba0(&local_a0);
        if (local_f6 == '\0') {
          *(int *)((longlong)param_1 + 0xc4) = *(int *)((longlong)param_1 + 0xc4) + (int)param_1[10]
          ;
        }
        local_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        FUN_00468530(&local_b8,*(undefined4 *)((longlong)param_1 + 0x54),0xfffffffffffffffc);
        FUN_00468530(&local_390,0xff4392a3,0xfffffffffffffffc);
        local_f7 = FUN_0046f320(&local_b8,&local_390);
        FUN_00460ba0(&local_b8);
        if (local_f7 == '\0') {
          *(int *)(param_1 + 0x18) = (int)param_1[0x18] + *(int *)((longlong)param_1 + 0x54);
        }
      }
    }
  }
  if ((local_c6 == 0) ||
     ((0x17 < *(int *)((longlong)param_1 + 0x1ac) && (0x17 < (int)param_1[0x36])))) {
    local_3b8 = local_c0;
    FUN_00a96620(param_1,param_2,*(int *)((longlong)param_1 + 0xc4) + local_cc,
                 (int)param_1[0x18] + local_cc);
  }
  *(int *)(param_1 + 0x18) = (int)param_1[0x18] + *(int *)(param_1[3] + 0x94);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)((longlong)param_1 + 0xc4);
  *(int *)((longlong)param_1 + 0x94) = (int)param_1[0x18];
  iVar4 = (**(code **)(*param_1 + 200))(param_1);
  *(int *)(param_1 + 0x13) = (int)param_1[0x12] + iVar4;
  iVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
  *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x94) + iVar4;
  uVar6 = FUN_005ffa40(param_2);
  thunk_FUN_041afa90(uVar6,0);
  if ((local_c6 == 0) || (*(int *)((longlong)param_1 + 0xf4) != 0)) goto LAB_00a97d7e;
  local_fc = *(undefined4 *)(*(longlong *)(param_6 + 0x38) + 0x28);
  if (((local_e5 & 1) == 0) || (cVar3 = FUN_00781870(), cVar3 == '\0')) {
    local_100 = local_fc;
  }
  else {
    uVar6 = FUN_00781840();
    local_100 = FUN_007793c0(uVar6,local_fc);
  }
  local_100 = FUN_005fbf20(local_100);
  FUN_005fc860(param_2[0xe],local_100);
  bVar1 = *(byte *)(param_1 + 0x15);
  if (1 < bVar1) {
    if (bVar1 != 2) {
      if (1 < (byte)(bVar1 - 3)) goto LAB_00a97d7e;
      if (param_1[0x19] != 0) {
        local_3b8 = CONCAT44(local_3b8._4_4_,(param_5 - (int)param_1[0x17]) + -1);
        local_3b0 = (int *)param_1[0x19];
        FUN_00a71c80(param_2,param_3 + 0x18,
                     ((param_5 - *(int *)((longlong)param_1 + 0x1ac)) + local_cc) -
                     (int)param_1[0x17],param_3 + (int)param_1[0x36] + -2);
      }
      local_248 = param_1[3];
      local_24c = (param_5 - *(int *)((longlong)param_1 + 0x1ac)) - (int)param_1[0x17];
      local_250 = param_3 + (int)param_1[0x36];
      local_254 = param_5 - (int)param_1[0x17];
      local_3b8._0_4_ = local_254;
      FUN_004238d0(local_2e0,param_3,local_24c,local_250);
      local_3b8 = CONCAT44(local_3b8._4_4_,local_254 + -1);
      FUN_004238d0(local_2d0,param_3 + 1,local_24c + 1,local_250 + -1);
      if ((*(char *)(local_248 + 0x92) == '\0') || (*(char *)(local_248 + 0xb2) == '\0')) {
LAB_00a97af6:
        local_26e = '\0';
      }
      else {
        uVar6 = FUN_005ffa40(param_2);
        iVar4 = thunk_FUN_03e5bd07(uVar6,0xc);
        if (iVar4 != 1) goto LAB_00a97af6;
        uVar6 = FUN_005ffa40(param_2);
        iVar4 = thunk_FUN_03e5bd07(uVar6,0xe);
        if (iVar4 != 1) goto LAB_00a97af6;
        local_26e = '\x01';
      }
      if (local_26e == '\0') {
        if (*(char *)(local_248 + 0x92) == '\0') {
          local_274 = *(undefined4 *)(local_248 + 0x168);
          local_275 = (*(byte *)(local_248 + 0x90) & 1) != 0;
          if (((bool)local_275) && (cVar3 = FUN_00781870(), cVar3 != '\0')) {
            uVar6 = FUN_00781840();
            local_27c = FUN_007793c0(uVar6,local_274);
          }
          else {
            local_27c = local_274;
          }
          local_27c = FUN_005fbf20(local_27c);
          local_27d = local_27c == 0xffffff;
        }
        else {
          local_27d = true;
        }
        local_26d = local_27d;
        local_27e = (*(byte *)(local_248 + 0x90) & 1) != 0;
        if (((bool)local_27e) && (cVar3 = FUN_00781870(), cVar3 != '\0')) {
          uVar6 = FUN_00781840();
          local_284 = FUN_007793c0(uVar6,0xff000010);
        }
        else {
          local_284 = 0xff000010;
        }
        local_284 = FUN_005fbf20(local_284);
        local_26c = local_284;
        if (local_26d == false) {
          local_285 = (*(byte *)(local_248 + 0x90) & 1) != 0;
          if (((bool)local_285) && (cVar3 = FUN_00781870(), cVar3 != '\0')) {
            uVar6 = FUN_00781840();
            local_28c = FUN_007793c0(uVar6,0xff000014);
          }
          else {
            local_28c = 0xff000014;
          }
          local_28c = FUN_005fbf20(local_28c);
          local_268 = local_28c;
        }
        else {
          local_268 = 0xc0c0c0;
        }
      }
      else {
        local_268 = 0;
        local_26c = 0;
      }
      local_2bc = local_26c;
      local_2b8 = local_26c;
      local_2b4 = local_268;
      local_2b0 = local_268;
      local_29c = CONCAT44(local_26c,local_26c);
      uStack_294 = CONCAT44(local_268,local_268);
      local_2c0 = 0x1010101;
      local_3b8 = CONCAT44(local_3b8._4_4_,0x1010101);
      local_3b0 = (int *)CONCAT44(local_3b0._4_4_,0x1fffffff);
      local_3a8 = 0;
      local_3a0 = 7;
      local_264 = local_29c;
      uStack_25c = uStack_294;
      FUN_00a75130(param_2,local_2e0,local_2d0,&local_264);
      goto LAB_00a97d7e;
    }
    if (param_1[0x19] != 0) {
      local_3b8 = CONCAT44(local_3b8._4_4_,local_c4 + *(int *)((longlong)param_1 + 0x1ac) + -1);
      local_3b0 = (int *)param_1[0x19];
      FUN_00a71c80(param_2,param_3 + 0x18,local_c4 + local_cc,param_3 + (int)param_1[0x36] + -2);
    }
    local_1a8 = param_1[3];
    local_1ac = param_3 + (int)param_1[0x36];
    local_1b0 = local_c4 + *(int *)((longlong)param_1 + 0x1ac);
    local_3b8._0_4_ = local_1b0;
    FUN_004238d0(local_23c,param_3,local_c4,local_1ac);
    local_3b8 = CONCAT44(local_3b8._4_4_,local_1b0 + -1);
    FUN_004238d0(local_22c,param_3 + 1,local_c4 + 1,local_1ac + -1);
    if ((*(char *)(local_1a8 + 0x92) == '\0') || (*(char *)(local_1a8 + 0xb2) == '\0')) {
LAB_00a976a3:
      local_1ca = '\0';
    }
    else {
      uVar6 = FUN_005ffa40(param_2);
      iVar4 = thunk_FUN_03e5bd07(uVar6,0xc);
      if (iVar4 != 1) goto LAB_00a976a3;
      uVar6 = FUN_005ffa40(param_2);
      iVar4 = thunk_FUN_03e5bd07(uVar6,0xe);
      if (iVar4 != 1) goto LAB_00a976a3;
      local_1ca = '\x01';
    }
    if (local_1ca == '\0') {
      if (*(char *)(local_1a8 + 0x92) == '\0') {
        local_1d0 = *(undefined4 *)(local_1a8 + 0x168);
        local_1d1 = (*(byte *)(local_1a8 + 0x90) & 1) != 0;
        if (((bool)local_1d1) && (cVar3 = FUN_00781870(), cVar3 != '\0')) {
          uVar6 = FUN_00781840();
          local_1d8 = FUN_007793c0(uVar6,local_1d0);
        }
        else {
          local_1d8 = local_1d0;
        }
        local_1d8 = FUN_005fbf20(local_1d8);
        local_1d9 = local_1d8 == 0xffffff;
      }
      else {
        local_1d9 = true;
      }
      local_1c9 = local_1d9;
      local_1da = (*(byte *)(local_1a8 + 0x90) & 1) != 0;
      if (((bool)local_1da) && (cVar3 = FUN_00781870(), cVar3 != '\0')) {
        uVar6 = FUN_00781840();
        local_1e0 = FUN_007793c0(uVar6,0xff000010);
      }
      else {
        local_1e0 = 0xff000010;
      }
      local_1e0 = FUN_005fbf20(local_1e0);
      local_1c8 = local_1e0;
      if (local_1c9 == false) {
        local_1e1 = (*(byte *)(local_1a8 + 0x90) & 1) != 0;
        if (((bool)local_1e1) && (cVar3 = FUN_00781870(), cVar3 != '\0')) {
          uVar6 = FUN_00781840();
          local_1e8 = FUN_007793c0(uVar6,0xff000014);
        }
        else {
          local_1e8 = 0xff000014;
        }
        local_1e8 = FUN_005fbf20(local_1e8);
        local_1c4 = local_1e8;
      }
      else {
        local_1c4 = 0xc0c0c0;
      }
    }
    else {
      local_1c4 = 0;
      local_1c8 = 0;
    }
    local_218 = local_1c8;
    local_214 = local_1c8;
    local_210 = local_1c4;
    local_20c = local_1c4;
    local_1f8 = CONCAT44(local_1c8,local_1c8);
    uStack_1f0 = CONCAT44(local_1c4,local_1c4);
    local_21c = 0x1010101;
    local_3b8 = CONCAT44(local_3b8._4_4_,0x1010101);
    local_3b0 = (int *)CONCAT44(local_3b0._4_4_,0x1fffffff);
    local_3a8 = 0;
    local_3a0 = 7;
    local_1c0 = local_1f8;
    uStack_1b8 = uStack_1f0;
    FUN_00a75130(param_2,local_23c,local_22c,&local_1c0);
    goto LAB_00a97d7e;
  }
  if (param_1[0x19] != 0) {
    local_3b8 = CONCAT44(local_3b8._4_4_,param_4 + *(int *)((longlong)param_1 + 0x1ac) + -1);
    local_3b0 = (int *)param_1[0x19];
    FUN_00a71c80(param_2,param_3 + 0x18,param_4 + local_cc,param_3 + (int)param_1[0x36] + -2);
  }
  local_108 = param_1[3];
  local_10c = param_3 + (int)param_1[0x36];
  local_110 = param_4 + *(int *)((longlong)param_1 + 0x1ac);
  local_3b8._0_4_ = local_110;
  FUN_004238d0(local_19c,param_3,param_4,local_10c);
  local_3b8 = CONCAT44(local_3b8._4_4_,local_110 + -1);
  FUN_004238d0(local_18c,param_3 + 1,param_4 + 1,local_10c + -1);
  if ((*(char *)(local_108 + 0x92) == '\0') || (*(char *)(local_108 + 0xb2) == '\0')) {
LAB_00a97296:
    local_12a = '\0';
  }
  else {
    uVar6 = FUN_005ffa40(param_2);
    iVar4 = thunk_FUN_03e5bd07(uVar6,0xc);
    if (iVar4 != 1) goto LAB_00a97296;
    uVar6 = FUN_005ffa40(param_2);
    iVar4 = thunk_FUN_03e5bd07(uVar6,0xe);
    if (iVar4 != 1) goto LAB_00a97296;
    local_12a = '\x01';
  }
  if (local_12a == '\0') {
    if (*(char *)(local_108 + 0x92) == '\0') {
      local_130 = *(undefined4 *)(local_108 + 0x168);
      local_131 = (*(byte *)(local_108 + 0x90) & 1) != 0;
      if (((bool)local_131) && (cVar3 = FUN_00781870(), cVar3 != '\0')) {
        uVar6 = FUN_00781840();
        local_138 = FUN_007793c0(uVar6,local_130);
      }
      else {
        local_138 = local_130;
      }
      local_138 = FUN_005fbf20(local_138);
      local_139 = local_138 == 0xffffff;
    }
    else {
      local_139 = true;
    }
    local_129 = local_139;
    local_13a = (*(byte *)(local_108 + 0x90) & 1) != 0;
    if (((bool)local_13a) && (cVar3 = FUN_00781870(), cVar3 != '\0')) {
      uVar6 = FUN_00781840();
      local_140 = FUN_007793c0(uVar6,0xff000010);
    }
    else {
      local_140 = 0xff000010;
    }
    local_140 = FUN_005fbf20(local_140);
    local_128 = local_140;
    if (local_129 == false) {
      local_141 = (*(byte *)(local_108 + 0x90) & 1) != 0;
      if (((bool)local_141) && (cVar3 = FUN_00781870(), cVar3 != '\0')) {
        uVar6 = FUN_00781840();
        local_148 = FUN_007793c0(uVar6,0xff000014);
      }
      else {
        local_148 = 0xff000014;
      }
      local_148 = FUN_005fbf20(local_148);
      local_124 = local_148;
    }
    else {
      local_124 = 0xc0c0c0;
    }
  }
  else {
    local_124 = 0;
    local_128 = 0;
  }
  local_178 = local_128;
  local_174 = local_128;
  local_170 = local_124;
  local_16c = local_124;
  local_158 = CONCAT44(local_128,local_128);
  uStack_150 = CONCAT44(local_124,local_124);
  local_17c = 0x1010101;
  local_3b8 = CONCAT44(local_3b8._4_4_,0x1010101);
  local_3b0 = (int *)CONCAT44(local_3b0._4_4_,0x1fffffff);
  local_3a8 = 0;
  local_3a0 = 7;
  local_120 = local_158;
  uStack_118 = uStack_150;
  FUN_00a75130(param_2,local_19c,local_18c,&local_120);
LAB_00a97d7e:
  if ((((0 < (int)param_1[0x28]) || (0 < *(int *)((longlong)param_1 + 0x144))) ||
      (0 < (int)param_1[0x29])) || (0 < *(int *)((longlong)param_1 + 0x14c))) {
    local_2e4 = *(undefined4 *)(*(longlong *)(param_6 + 0x38) + 0x28);
    local_2e5 = (*(byte *)(param_1[3] + 0x90) & 1) != 0;
    if (((bool)local_2e5) && (cVar3 = FUN_00781870(), cVar3 != '\0')) {
      uVar6 = FUN_00781840();
      local_2ec = FUN_007793c0(uVar6,local_2e4);
    }
    else {
      local_2ec = local_2e4;
    }
    local_2ec = FUN_005fbf20(local_2ec);
    FUN_005fc860(param_2[0xe],local_2ec);
    if ((local_c6 & param_1[0x19] != 0) != 0) {
      local_e4 = (int)param_1[0x18] - *(int *)(param_1[3] + 0x94);
      bVar1 = *(byte *)(param_1 + 0x15);
      if (bVar1 < 2) {
        local_3b8 = CONCAT44(local_3b8._4_4_,local_e4 + *(int *)((longlong)param_1 + 0x1ac) + -1);
        local_3b0 = (int *)param_1[0x19];
        FUN_00a71c80(param_2,*(int *)((longlong)param_1 + 0xc4) + 0x18,local_e4 + local_cc,
                     *(int *)((longlong)param_1 + 0xc4) + (int)param_1[0x36] + -2);
      }
      else if (bVar1 == 2) {
        local_3b8 = CONCAT44(local_3b8._4_4_,local_e4 + *(int *)((longlong)param_1 + 0x1ac) + -1);
        local_3b0 = (int *)param_1[0x19];
        FUN_00a71c80(param_2,*(int *)((longlong)param_1 + 0xc4) + 0x18,local_e4 + local_cc,
                     *(int *)((longlong)param_1 + 0xc4) + (int)param_1[0x36] + -2);
      }
      else if ((byte)(bVar1 - 3) < 2) {
        local_3b8 = CONCAT44(local_3b8._4_4_,local_e4 + *(int *)((longlong)param_1 + 0x1ac) + -1);
        local_3b0 = (int *)param_1[0x19];
        FUN_00a71c80(param_2,*(int *)((longlong)param_1 + 0xc4) + 0x18,local_e4 + local_cc,
                     *(int *)((longlong)param_1 + 0xc4) + (int)param_1[0x36] + -2);
      }
    }
  }
  if (((param_1[0x39] != 0) && (*(char *)(param_1[0x39] + 0xe8) != '\0')) ||
     ((*(char *)(param_6 + 0x2c) != '\0' ||
      (((cVar3 = (**(code **)(*param_1 + 0x30))(param_1), cVar3 != '\0' &&
        (*(longlong *)(param_1[3] + 0x2e0) != 0)) &&
       (*(longlong *)(*(longlong *)(param_6 + 8) + 8) != 0)))))) {
    uVar6 = FUN_005ffa40(param_2);
    local_d0 = thunk_FUN_0412a071(uVar6,0);
    FUN_005fdab0(param_2[0x10],0xffffff);
    bVar1 = *(byte *)(param_1 + 0x15);
    if (bVar1 < 2) {
      iVar4 = (**(code **)(*param_1 + 200))(param_1);
      iVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
      local_3b8 = CONCAT44(local_3b8._4_4_,param_4 + *(int *)((longlong)param_1 + 0xb4) + iVar5);
      FUN_004238d0(&local_e0,param_3,param_4 + *(int *)((longlong)param_1 + 0xb4),param_3 + iVar4);
    }
    else if (bVar1 == 2) {
      iVar4 = (**(code **)(*param_1 + 200))(param_1);
      iVar5 = (**(code **)(*param_1 + 0xc0))(param_1);
      local_3b8 = CONCAT44(local_3b8._4_4_,local_c4 + iVar5);
      FUN_004238d0(&local_e0,param_3,local_c4,param_3 + iVar4);
    }
    else if ((byte)(bVar1 - 3) < 2) {
      iVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
      iVar5 = (**(code **)(*param_1 + 200))(param_1);
      local_3b8 = CONCAT44(local_3b8._4_4_,param_5 - (int)param_1[0x17]);
      FUN_004238d0(&local_e0,param_3,(param_5 - iVar4) - (int)param_1[0x17],param_3 + iVar5);
    }
    cVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(**(longlong **)(param_1[3] + 0xb8) + 0x450))
                        (*(longlong **)(param_1[3] + 0xb8));
      if (cVar3 != '\0') {
        (**(code **)(*param_2 + 0x98))(param_2,&local_e0);
      }
    }
    else {
      lVar2 = param_1[3];
      local_3b8 = *(longlong *)(*(longlong *)(param_6 + 8) + 0x10);
      local_3b0 = &local_e0;
      (**(code **)(lVar2 + 0x2e0))
                (*(undefined8 *)(lVar2 + 0x2e8),*(undefined8 *)(lVar2 + 0xb8),
                 *(undefined4 *)(lVar2 + 0x2f0),*(undefined8 *)(*(longlong *)(param_6 + 8) + 8));
    }
    uVar6 = FUN_005ffa40(param_2);
    thunk_FUN_0412a071(uVar6,local_d0);
  }
  FUN_00417840(&local_390,&DAT_004013d8,6);
  return;
}

