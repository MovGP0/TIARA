/* Ghidra address: 0124dd80 */
/* Ghidra symbol: FUN_0124dd80 */


longlong FUN_0124dd80(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_5a8 [32];
  undefined4 *local_588;
  undefined4 *local_580;
  double local_578;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined1 local_4e8 [256];
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  longlong local_388;
  undefined8 local_380;
  undefined8 local_378;
  longlong local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined1 *local_330;
  undefined4 local_324;
  longlong local_320;
  int local_314;
  longlong local_310;
  undefined2 *local_308;
  undefined2 *local_300;
  undefined2 *local_2f8;
  undefined4 *local_2f0;
  undefined4 *local_2e8;
  undefined4 *local_2e0;
  undefined2 *local_2d8;
  undefined2 *local_2d0;
  undefined1 local_2c6;
  undefined1 local_2c5;
  int local_2c4;
  int local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  int local_29c;
  undefined4 *local_298;
  undefined4 *local_290;
  byte local_288 [256];
  byte local_188 [256];
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_30;
  longlong *local_28;
  undefined8 *local_20;
  
  local_330 = auStack_5a8;
  local_568 = 0;
  local_560 = 0;
  local_558 = 0;
  local_550 = 0;
  local_548 = 0;
  local_540 = 0;
  local_538 = 0;
  local_530 = 0;
  local_528 = 0;
  local_520 = 0;
  local_518 = 0;
  local_510 = 0;
  local_508 = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_370 = 0;
  local_358 = 0;
  local_360 = 0;
  local_368 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  local_70 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  local_80 = 0;
  local_88 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_40 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
  FUN_00414480(local_res18);
  (**(code **)(*param_1 + 0x100))(param_1,&local_338,L"origo");
  FUN_00416ba0(&local_88,local_338,&DAT_0124f824);
  local_2d0 = (undefined2 *)(local_40 + 0x24);
  uVar3 = FUN_012421e0(&local_88);
  *local_2d0 = uVar3;
  uVar3 = FUN_012421e0(&local_88);
  local_2d0[1] = uVar3;
  (**(code **)(*param_1 + 0x100))(param_1,&local_340,&DAT_0124f834);
  FUN_00416ba0(&local_88,local_340,&DAT_0124f824);
  local_2d8 = (undefined2 *)(local_40 + 0x28);
  uVar3 = FUN_012421e0(&local_88);
  *local_2d8 = uVar3;
  uVar3 = FUN_012421e0(&local_88);
  local_2d8[1] = uVar3;
  (**(code **)(*param_1 + 0xe8))(param_1,&local_68,L"shape");
  (**(code **)(*local_68 + 0x68))(local_68);
  (**(code **)(*local_68 + 0x70))(local_68,&local_348);
  FUN_0041b890(&local_48,local_348,&DAT_0124f854);
  local_2a0 = 0x7fffffff;
  local_2a4 = 0x7fffffff;
  local_2a8 = 0x80000001;
  local_2ac = 0x80000001;
  while (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x100))(local_48,&local_80,L"type");
    iVar4 = FUN_00416db0(local_80,L"line");
    if ((((iVar4 == 0) || (iVar4 = FUN_00416db0(local_80,L"rectangle"), iVar4 == 0)) ||
        (iVar4 = FUN_00416db0(local_80,L"ellipse"), iVar4 == 0)) ||
       (((iVar4 = FUN_00416db0(local_80,&DAT_0124f8dc), iVar4 == 0 ||
         (iVar4 = FUN_00416db0(local_80,L"polygon"), iVar4 == 0)) ||
        (iVar4 = FUN_00416db0(local_80,L"edfarc"), iVar4 == 0)))) {
      local_588 = &local_2a8;
      local_580 = &local_2ac;
      uVar7 = FUN_0124ce70(local_80,local_48,&local_2a0,&local_2a4);
      FUN_004ae7e0(*(undefined8 *)(local_40 + 0x38),uVar7);
    }
    iVar4 = FUN_00416db0(local_80,L"image");
    if (iVar4 == 0) {
      local_29c = 0x14;
      local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      FUN_0060bbf0(local_28,6);
      plVar8 = (longlong *)FUN_00609e10(local_28);
      uVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,0,0);
      FUN_0060be30(local_28,uVar5);
      local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
      local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      (**(code **)(*local_48 + 0xb8))(local_48,&local_350);
      FUN_0043ea00(&local_88,local_350);
      FUN_012429f0(&local_80,&local_88);
      FUN_00c7b9b0(local_88,local_20);
      FUN_004b6dc0(local_20,0);
      FUN_01242b40(local_28,local_20,local_80);
      FUN_004b9ec0(local_20);
      (**(code **)(*local_28 + 200))(local_28,local_20);
      iVar4 = (**(code **)*local_20)(local_20);
      local_29c = local_29c + iVar4;
      iVar4 = FUN_004170c0(&DAT_0124f964,local_res10,1);
      FUN_00416dc0(&local_368,local_res10,1,iVar4 + -1);
      FUN_0043ea00(&local_360,local_368);
      local_588 = (undefined4 *)&DAT_0124f974;
      FUN_00416cd0(&local_358,3,L"Picture #0{",local_360);
      (**(code **)(*local_30 + 0x78))(local_30,local_358);
      (**(code **)(*local_30 + 0x38))(local_30,&local_370);
      local_310 = local_370;
      local_314 = 0;
      if (local_370 != 0) {
        local_314 = *(int *)(local_370 + -4);
      }
      local_29c = local_29c + local_314;
      local_298 = (undefined4 *)FUN_004095c0((longlong)(local_29c + 0xc));
      *local_298 = 0x6a;
      local_298[1] = 0x105;
      local_298[2] = local_29c;
      local_2e0 = local_298 + 3;
      (**(code **)(*local_48 + 0x100))(local_48,&local_378,L"position");
      FUN_00416ba0(&local_88,local_378,&DAT_0124f824);
      uVar3 = FUN_012421e0(&local_88);
      *(undefined2 *)local_2e0 = uVar3;
      uVar3 = FUN_012421e0(&local_88);
      *(undefined2 *)((longlong)local_2e0 + 2) = uVar3;
      (**(code **)(*local_48 + 0x100))(local_48,&local_380,L"size");
      FUN_00416ba0(&local_88,local_380,&DAT_0124f824);
      iVar4 = (**(code **)(*local_28 + 0x60))(local_28);
      iVar6 = FUN_012421e0(&local_88);
      local_2e0[4] = (float)iVar4 / (float)iVar6;
      *(undefined1 *)(local_2e0 + 1) = 1;
      *(undefined1 *)((longlong)local_2e0 + 5) = 1;
      *(undefined1 *)((longlong)local_2e0 + 6) = 0;
      *(undefined1 *)((longlong)local_2e0 + 7) = 0;
      uVar5 = (**(code **)*local_20)(local_20);
      local_2e0[2] = uVar5;
      (**(code **)(*local_30 + 0x38))(local_30,&local_388);
      local_320 = local_388;
      local_324 = 0;
      if (local_388 != 0) {
        local_324 = *(undefined4 *)(local_388 + -4);
      }
      local_2e0[3] = local_324;
      local_290 = local_2e0 + 5;
      FUN_00409a70(local_20[1],local_290,(longlong)(int)local_2e0[2]);
      if (local_2e0[3] != 0) {
        FUN_00b909d0(&local_290,local_2e0[2]);
        FUN_004b9ec0(local_20);
        (**(code **)(*local_30 + 0x110))(local_30,local_20);
        FUN_00409a70(local_20[1],local_290,(longlong)(int)local_2e0[3]);
      }
      FUN_00410f20(local_20);
      FUN_00410f20(local_28);
      FUN_00410f20(local_30);
      FUN_004ae7e0(*(undefined8 *)(local_40 + 0x38),local_298);
    }
    (**(code **)(*local_68 + 0x70))(local_68,&local_390);
    FUN_0041b890(&local_48,local_390,&DAT_0124f854);
  }
  (**(code **)(*param_1 + 0xe8))(param_1,&local_78,L"legend");
  (**(code **)(*local_78 + 0x68))(local_78);
  (**(code **)(*local_78 + 0x70))(local_78,&local_398);
  FUN_0041b890(&local_58,local_398,&DAT_0124f854);
  while (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x100))(local_58,&local_3a0,L"text");
    FUN_00416910(local_188,local_3a0,0xff);
    (**(code **)(*local_58 + 0x100))(local_58,&local_3a8,L"fontname");
    FUN_00416910(local_288,local_3a8,0xff);
    local_298 = (undefined4 *)FUN_004095c0((uint)local_188[0] + (uint)local_288[0] + 0x22);
    *local_298 = 0x67;
    local_298[1] = 0x105;
    local_298[2] = (uint)local_188[0] + (uint)local_288[0] + 0x16;
    local_290 = local_298 + 3;
    FUN_00409a70(local_188,local_290,local_188[0] + 1);
    FUN_00b909d0(&local_290,local_188[0] + 1);
    *(undefined1 *)local_290 = 0;
    FUN_00b909d0(&local_290,1);
    FUN_00409a70(local_288,local_290,local_288[0] + 1);
    FUN_00b909d0(&local_290,local_288[0] + 1);
    *(undefined1 *)local_290 = 0;
    FUN_00b909d0(&local_290,1);
    local_2e8 = local_290;
    (**(code **)(*local_58 + 0x100))(local_58,&local_3b0,L"position");
    FUN_00416ba0(&local_88,local_3b0,&DAT_0124f824);
    uVar3 = FUN_012421e0(&local_88);
    *(undefined2 *)local_2e8 = uVar3;
    uVar3 = FUN_012421e0(&local_88);
    *(undefined2 *)((longlong)local_2e8 + 2) = uVar3;
    (**(code **)(*local_58 + 0x100))(local_58,&local_3b8,L"fontsize");
    iVar4 = FUN_0043fc50(local_3b8,0xb);
    *(double *)(local_2e8 + 1) = (double)iVar4 / 11.0;
    (**(code **)(*local_58 + 0x100))(local_58,&local_3c0,L"bold");
    uVar1 = FUN_0043fc50(local_3c0,0);
    *(undefined1 *)(local_2e8 + 3) = uVar1;
    (**(code **)(*local_58 + 0x100))(local_58,&local_3c8,L"italic");
    uVar1 = FUN_0043fc50(local_3c8,0);
    *(undefined1 *)((longlong)local_2e8 + 0xd) = uVar1;
    (**(code **)(*local_58 + 0x100))(local_58,&local_3d0,L"color");
    uVar5 = FUN_0043fd00(local_3d0,0xff000000);
    uVar5 = FUN_01242280(uVar5);
    *(undefined4 *)((longlong)local_2e8 + 0xe) = uVar5;
    FUN_004ae7e0(*(undefined8 *)(local_40 + 0x38),local_298);
    (**(code **)(*local_78 + 0x70))(local_78,&local_3d8);
    FUN_0041b890(&local_58,local_3d8,&DAT_0124f854);
  }
  local_2b0 = 0;
  local_2b4 = 0;
  local_2b8 = 0;
  local_2bc = 0;
  (**(code **)(*param_1 + 0xe8))(param_1,&local_70,&DAT_0124fa7c);
  (**(code **)(*local_70 + 0x68))(local_70);
  (**(code **)(*local_70 + 0x70))(local_70,&local_3e0);
  FUN_0041b890(&local_50,local_3e0,&DAT_0124f854);
  while (local_50 != (longlong *)0x0) {
    local_298 = (undefined4 *)FUN_004095c0(0x3a);
    *local_298 = 100;
    local_298[1] = 0x105;
    local_298[2] = 0x2e;
    local_2f0 = local_298 + 3;
    (**(code **)(*local_50 + 0x100))(local_50,&local_3e8,L"text");
    FUN_00416910(local_4e8,local_3e8,0xff);
    FUN_00415020(local_2f0,local_4e8,0x10);
    (**(code **)(*local_50 + 0x100))(local_50,&local_4f0,L"electype");
    uVar1 = FUN_0043fc50(local_4f0,0);
    *(undefined1 *)((longlong)local_2f0 + 0x12) = uVar1;
    (**(code **)(*local_50 + 0x100))(local_50,&local_4f8,L"length");
    iVar4 = FUN_0043fc50(local_4f8,0x20);
    (**(code **)(*local_50 + 0x100))(local_50,&local_500,L"type");
    cVar2 = FUN_0043fc50(local_500,0);
    *(char *)((longlong)local_2f0 + 0x13) = (char)(iVar4 / 4 << 4) + cVar2;
    (**(code **)(*local_50 + 0x100))(local_50,&local_508,&DAT_0124facc);
    uVar1 = FUN_0043fc50(local_508,0);
    *(undefined1 *)(local_2f0 + 5) = uVar1;
    (**(code **)(*local_50 + 0x100))(local_50,&local_510,L"position");
    FUN_00416ba0(&local_88,local_510,&DAT_0124f824);
    uVar3 = FUN_012421e0(&local_88);
    *(undefined2 *)((longlong)local_2f0 + 0x15) = uVar3;
    uVar3 = FUN_012421e0(&local_88);
    *(undefined2 *)((longlong)local_2f0 + 0x17) = uVar3;
    *(undefined1 *)((longlong)local_2f0 + 0x19) = 0;
    (**(code **)(*local_50 + 0xd8))(local_50,&local_518,L"legend");
    FUN_0041b890(&local_58,local_518,&DAT_0124f854);
    *(bool *)((longlong)local_2f0 + 0x11) = local_58 != (longlong *)0x0;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x100))(local_58,&local_520,L"position");
      FUN_00416ba0(&local_88,local_520,&DAT_0124f824);
      local_2c4 = FUN_012421e0(&local_88);
      local_2c0 = FUN_012421e0(&local_88);
      local_2c4 = local_2c4 - *(short *)((longlong)local_2f0 + 0x15);
      local_2c0 = local_2c0 - *(short *)((longlong)local_2f0 + 0x17);
      cVar2 = *(char *)(local_2f0 + 5);
      if (cVar2 == '\0') {
        local_2b0 = FUN_00b905e0(local_2b0,(*(byte *)((longlong)local_2f0 + 0x13) / 0x10) * 4);
        local_2c5 = 0;
        local_2c6 = 1;
      }
      else if (cVar2 == '\x01') {
        local_2bc = FUN_00b905e0(local_2bc,(*(byte *)((longlong)local_2f0 + 0x13) / 0x10) * 4);
        local_2c5 = 0;
        local_2c6 = 1;
      }
      else if (cVar2 == '\x02') {
        local_2b4 = FUN_00b905e0(local_2b4,(*(byte *)((longlong)local_2f0 + 0x13) / 0x10) * 4);
        local_2c5 = 0;
        local_2c6 = 1;
      }
      else if (cVar2 == '\x03') {
        local_2b8 = FUN_00b905e0(local_2b8,(*(byte *)((longlong)local_2f0 + 0x13) / 0x10) * 4);
        local_2c5 = 0;
        local_2c6 = 1;
      }
      (**(code **)(*local_58 + 0x100))(local_58,&local_528,L"color");
      uVar5 = FUN_0043fd00(local_528,0xff000000);
      uVar5 = FUN_01242280(uVar5);
      *(undefined4 *)((longlong)local_2f0 + 0x2a) = uVar5;
      (**(code **)(*local_58 + 0x100))(local_58,&local_530,L"fontsize");
      iVar4 = FUN_0043fc50(local_530,0xb);
      *(double *)((longlong)local_2f0 + 0x22) = (double)(iVar4 << 3) / 9.9;
      FUN_004169a0(&local_538,local_2f0);
      local_588 = (undefined4 *)CONCAT71(local_588._1_7_,local_2c5);
      local_580 = (undefined4 *)CONCAT71(local_580._1_7_,local_2c6);
      local_578 = (*(double *)((longlong)local_2f0 + 0x22) * 0.9) / 8.0;
      FUN_01245210(local_538,&local_2c4,&local_2c0,*(undefined1 *)(local_2f0 + 5));
      FUN_01245bb0(&local_2c4,&local_2c0,*(undefined1 *)(local_2f0 + 5));
      *(uint *)((longlong)local_2f0 + 0x1a) =
           local_2c4 + (*(byte *)((longlong)local_2f0 + 0x13) / 0x10) * -4 + -2;
      *(int *)((longlong)local_2f0 + 0x1e) = local_2c0;
    }
    FUN_004ae7e0(*(undefined8 *)(local_40 + 0x30),local_298);
    (**(code **)(*local_70 + 0x70))(local_70,&local_540);
    FUN_0041b890(&local_50,local_540,&DAT_0124f854);
  }
  (**(code **)(*param_1 + 0xd8))(param_1,&local_548,L"label");
  FUN_0041b890(&local_60,local_548,&DAT_0124f854);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x100))(local_60,&local_550,L"prefix");
    FUN_00414ad0(local_res18,local_550);
    (**(code **)(*local_60 + 0x100))(local_60,&local_558,L"position");
    FUN_00416ba0(&local_88,local_558,&DAT_0124f824);
    local_2f8 = (undefined2 *)(local_40 + 0x2c);
    uVar3 = FUN_012421e0(&local_88);
    *local_2f8 = uVar3;
    uVar3 = FUN_012421e0(&local_88);
    local_2f8[1] = uVar3;
  }
  (**(code **)(*param_1 + 0xd8))(param_1,&local_560,L"hotzone");
  FUN_0041b890(&local_60,local_560,&DAT_0124f854);
  if (local_60 == (longlong *)0x0) {
    local_308 = (undefined2 *)(local_40 + 0x14);
    *local_308 = (undefined2)local_2a0;
    *(undefined2 *)(local_40 + 0x16) = (undefined2)local_2a4;
    *(undefined2 *)(local_40 + 0x18) = (undefined2)local_2a8;
    *(undefined2 *)(local_40 + 0x1a) = (undefined2)local_2ac;
  }
  else {
    (**(code **)(*local_60 + 0x100))(local_60,&local_568,L"points");
    FUN_00416ba0(&local_88,local_568,&DAT_0124f824);
    local_300 = (undefined2 *)(local_40 + 0x14);
    uVar3 = FUN_012421e0(&local_88);
    *local_300 = uVar3;
    uVar3 = FUN_012421e0(&local_88);
    local_300[1] = uVar3;
    uVar3 = FUN_012421e0(&local_88);
    local_300[2] = uVar3;
    uVar3 = FUN_012421e0(&local_88);
    local_300[3] = uVar3;
  }
  *(undefined8 *)(local_40 + 0xc) = *(undefined8 *)(local_40 + 0x14);
  *(short *)(local_40 + 0xc) = *(short *)(local_40 + 0xc) - (short)local_2b4;
  *(short *)(local_40 + 0xe) = *(short *)(local_40 + 0xe) - (short)local_2b8;
  *(short *)(local_40 + 0x10) = *(short *)(local_40 + 0x10) + (short)local_2b0;
  *(short *)(local_40 + 0x12) = *(short *)(local_40 + 0x12) + (short)local_2bc;
  FUN_00414480(&local_568);
  FUN_0041b800(&local_560);
  FUN_00414560(&local_558,2);
  FUN_00417840(&local_548,&DAT_00b9f8e0,2);
  FUN_00414560(&local_538,4);
  FUN_0041b800(&local_518);
  FUN_00414560(&local_510,5);
  FUN_00414480(&local_3e8);
  FUN_00417840(&local_3e0,&DAT_00b9f8e0,2);
  FUN_00414560(&local_3d0,7);
  FUN_00417840(&local_398,&DAT_00b9f8e0,2);
  FUN_00414560(&local_388,8);
  FUN_0041b800(&local_348);
  FUN_00414560(&local_340,2);
  FUN_00414560(&local_88,2);
  FUN_00417840(&local_78,&DAT_00b9f960,3);
  FUN_00417840(&local_60,&LAB_00b9fca0,4);
  FUN_00414480(&local_res10);
  return local_40;
}

