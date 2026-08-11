/* Ghidra address: 016a6c70 */
/* Ghidra symbol: FUN_016a6c70 */


void FUN_016a6c70(longlong param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong local_360;
  int local_350;
  int local_34c;
  longlong local_340;
  longlong local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined1 local_2f8 [8];
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240 [2];
  undefined1 local_230 [256];
  byte local_130 [256];
  undefined8 local_30;
  
  local_330 = 0;
  local_328 = 0;
  local_310 = 0;
  local_318 = 0;
  local_320 = 0;
  local_308 = 0;
  local_300 = 0;
  local_2e0 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  local_2d0 = 0;
  local_2d8 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_278 = 0;
  local_280 = 0;
  local_288 = 0;
  local_270 = 0;
  local_268 = 0;
  local_258 = 0;
  local_260 = 0;
  local_248 = 0;
  local_250 = 0;
  local_240[0] = 0;
  local_30 = 0;
  local_360 = 0;
  local_340 = 0;
  local_338 = 0;
  lVar7 = 0;
  if (*(char *)(param_1 + 0x39) == '\0') {
    local_340 = FUN_01699010(&DAT_01698e98,1,*(undefined8 *)(param_1 + 0x50));
    iVar2 = FUN_0169a3c0();
  }
  else {
    local_360 = FUN_0169c990(&DAT_0169c818,1,*(undefined8 *)(param_1 + 0x50));
    iVar2 = FUN_0169d820();
  }
  if (iVar2 != 0) {
    sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10) + 0x2d8);
    FUN_010c2250(&local_30,sVar1);
    if ((*(char *)(param_1 + 0x3a) == '\0') && (*(longlong *)(param_1 + 0x40) != 0)) {
      FUN_00415560(local_130,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18),0xff);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                (*(longlong **)(param_1 + 0x48),local_240,0);
      FUN_00416910(local_130,local_240[0],0xff);
    }
    local_34c = 1;
    local_230[0] = 0;
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10) + 0x38);
    if (sVar1 == 0x22) {
      lVar3 = FUN_00b94e60(lVar3,*(int *)(lVar3 + 0x10) + -1);
      FUN_004154b0(&local_250,lVar3 + 0xc,0);
      FUN_004156b0(&local_248,&DAT_016a795c,local_250);
      FUN_00415560(local_230,local_248,0xff);
    }
    else if ((sVar1 == 0x23) && (2 < *(int *)(lVar3 + 0x10))) {
      lVar3 = FUN_00b94e60(lVar3,*(int *)(lVar3 + 0x10) + -3);
      FUN_004154b0(&local_260,lVar3 + 0xc,0);
      FUN_004156b0(&local_258,&DAT_016a795c,local_260);
      FUN_00415560(local_230,local_258,0xff);
    }
    else {
      iVar2 = *(int *)(lVar3 + 0x10);
      local_350 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar4 = FUN_00b94e60(lVar3,local_350);
          if ((*(int *)(lVar4 + 8) == 0x104) || (*(int *)(lVar4 + 8) == 0x105)) {
            if (local_350 == *(int *)(lVar3 + 0x10) + -1) {
              iVar8 = ((uint)local_130[0] - local_34c) + 1;
            }
            else {
              lVar5 = FUN_00b94e60(lVar3,local_350 + 1);
              FUN_004169a0(&local_268,lVar5 + 0xc);
              uVar6 = local_268;
              FUN_004169a0(&local_270,local_130);
              iVar8 = FUN_004170c0(uVar6,local_270,local_34c);
              iVar8 = iVar8 - local_34c;
            }
            FUN_004151b0(lVar4 + 0xc,local_130,local_34c,iVar8);
          }
          else {
            iVar8 = *(int *)(lVar4 + 0x24c);
          }
          local_34c = local_34c + iVar8;
          local_350 = local_350 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (((sVar1 == 0x21) || (sVar1 == 0x20)) && (1 < *(int *)(lVar3 + 0x10))) {
        lVar4 = FUN_00b94e60(lVar3,*(int *)(lVar3 + 0x10) + -2);
        FUN_004154b0(&local_280,lVar4 + 0xc,0);
        lVar3 = FUN_00b94e60(lVar3,*(int *)(lVar3 + 0x10) + -1);
        FUN_004154b0(&local_288,lVar3 + 0xc,0);
        FUN_00415980(&local_278,4,"\r\n... ",local_280,local_288,&DAT_016a7980);
        FUN_00415560(local_230,local_278,0xff);
      }
      else if (((((sVar1 == 0x18) || (sVar1 == 0x24)) ||
                ((sVar1 == 0x17 || ((sVar1 == 2 || (sVar1 == 5)))))) || (sVar1 == 6)) &&
              (2 < *(int *)(lVar3 + 0x10))) {
        lVar4 = FUN_00b94e60(lVar3,*(int *)(lVar3 + 0x10) + -3);
        FUN_004154b0(&local_298,lVar4 + 0xc,0);
        lVar4 = FUN_00b94e60(lVar3,*(int *)(lVar3 + 0x10) + -2);
        FUN_004154b0(&local_2a0,lVar4 + 0xc,0);
        lVar3 = FUN_00b94e60(lVar3,*(int *)(lVar3 + 0x10) + -1);
        FUN_004154b0(&local_2a8,lVar3 + 0xc,0);
        FUN_00415980(&local_290,5,"\r\n... ",local_298,local_2a0,local_2a8,&DAT_016a7980);
        FUN_00415560(local_230,local_290,0xff);
      }
      else if ((sVar1 == 0x19) && (3 < *(int *)(lVar3 + 0x10))) {
        lVar4 = FUN_00b94e60(lVar3,*(int *)(lVar3 + 0x10) + -4);
        FUN_004154b0(&local_2b8,lVar4 + 0xc,0);
        lVar4 = FUN_00b94e60(lVar3,*(int *)(lVar3 + 0x10) + -3);
        FUN_004154b0(&local_2c0,lVar4 + 0xc,0);
        lVar3 = FUN_00b94e60(lVar3,*(int *)(lVar3 + 0x10) + -2);
        FUN_004154b0(&local_2c8,lVar3 + 0xc,0);
        FUN_00415980(&local_2b0,5,"\r\n... ",local_2b8,local_2c0,local_2c8,&DAT_016a7980);
        FUN_00415560(local_230,local_2b0,0xff);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))
                  (*(longlong **)(param_1 + 0x48),&local_2d8);
        FUN_00416ba0(&local_2d0,&DAT_016a7994,local_2d8);
        FUN_00416910(local_230,local_2d0,0xff);
      }
    }
    if ((*(char *)(param_1 + 0x3a) == '\0') && (*(longlong *)(param_1 + 0x40) != 0)) {
      FUN_004169a0(&local_2e0,local_230);
      uVar6 = FUN_00b89270();
      FUN_00b8e520(uVar6,&local_2e8,0x3e5);
      FUN_0043f750(&local_2f0,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x20));
      FUN_00416cd0(&local_30,7,local_30,&DAT_016a79a4,local_2e0,&DAT_016a79b4,local_2e8,
                   &DAT_016a79a4,local_2f0);
      local_2f8[0] = 0;
      FUN_016a3c50(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x10),local_30,local_2f8,
                   *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x20));
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x58);
      if (lVar3 == 0) {
        FUN_004169a0(&local_308,local_230);
        FUN_00416cd0(&local_30,3,local_30,&DAT_016a79a4,local_308);
        uVar6 = FUN_0044d490(&PTR_FUN_0169f798,1,local_30);
        FUN_004134c0(uVar6);
      }
      else {
        FUN_004169a0(&local_300,local_230);
        FUN_00416cd0(&local_30,3,local_30,&DAT_016a79a4,local_300);
        local_2f8[0] = 0;
        FUN_016a3c50(*(undefined8 *)(lVar3 + 0x10),local_30,local_2f8,0xffffffff);
      }
    }
  }
  FUN_01696180(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x10));
  if (*(char *)(param_1 + 0x39) == '\0') {
    lVar7 = FUN_0169ad30(&DAT_0169abc0,1,*(undefined8 *)(param_1 + 0x50));
    iVar2 = FUN_0169c0a0(lVar7);
  }
  else {
    local_338 = FUN_0169e190(&DAT_0169e020,1,*(undefined8 *)(param_1 + 0x50));
    iVar2 = FUN_0169f020();
  }
  if (iVar2 != 0) {
    FUN_010c2250(&local_30,*(undefined2 *)(*(longlong *)(param_1 + 0x50) + 8));
    if ((*(char *)(param_1 + 0x3a) == '\0') && (*(longlong *)(param_1 + 0x40) != 0)) {
      FUN_00416880(&local_310,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x18));
      uVar6 = FUN_00b89270();
      FUN_00b8e520(uVar6,&local_318,0x3e5);
      FUN_0043f750(&local_320,*(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x20));
      FUN_00416cd0(&local_30,8,local_30,&DAT_016a79a4,&DAT_016a79b4,local_310,&DAT_016a79b4,
                   local_318,&DAT_016a79a4,local_320);
      local_2f8[0] = 0;
      FUN_016a3c50(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x10),local_30,local_2f8,
                   *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x20));
    }
    else if (*(longlong *)(param_1 + 0x58) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))
                (*(longlong **)(param_1 + 0x48),&local_330);
      FUN_00416cd0(&local_30,3,local_30,&DAT_016a79a4,local_330);
      uVar6 = FUN_0044d490(&PTR_FUN_0169f798,1,local_30);
      FUN_004134c0(uVar6);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x38))
                (*(longlong **)(param_1 + 0x48),&local_328);
      FUN_00416cd0(&local_30,3,local_30,&DAT_016a79a4,local_328);
      local_2f8[0] = 0;
      FUN_016a3c50(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x10),local_30,local_2f8,
                   0xffffffff);
    }
  }
  if (local_360 != 0) {
    FUN_00410f20(local_360);
  }
  if (local_340 != 0) {
    FUN_00410f20(local_340);
  }
  if (local_338 != 0) {
    FUN_00410f20(local_338);
  }
  if (lVar7 != 0) {
    FUN_00410f20(lVar7);
  }
  FUN_00414560(&local_330,7);
  FUN_00414560(&local_2f0,5);
  FUN_00414590(&local_2c8,0xb);
  FUN_00414560(&local_270,2);
  FUN_00414590(&local_260,4);
  FUN_00414480(local_240);
  FUN_00414480(&local_30);
  return;
}

