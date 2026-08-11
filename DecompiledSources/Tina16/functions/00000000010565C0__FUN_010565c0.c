/* Ghidra address: 010565c0 */
/* Ghidra symbol: FUN_010565c0 */


int FUN_010565c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                char *param_5,uint param_6,longlong param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_193e8 [32];
  undefined8 uStack_193c8;
  undefined8 uStack_193c0;
  undefined8 uStack_193b8;
  undefined8 *puStack_193b0;
  undefined8 *puStack_193a8;
  undefined8 *puStack_193a0;
  undefined8 *puStack_19398;
  undefined8 uStack_19388;
  int iStack_1937c;
  undefined8 *puStack_19378;
  undefined8 uStack_19370;
  undefined8 uStack_19368;
  undefined8 uStack_19360;
  undefined4 auStack_19358 [2];
  undefined1 uStack_19350;
  undefined8 uStack_19348;
  undefined1 uStack_19340;
  undefined4 uStack_1932c;
  undefined8 uStack_19328;
  undefined1 auStack_1931a [522];
  undefined8 uStack_19110;
  undefined8 uStack_19108;
  undefined8 uStack_19100;
  undefined8 uStack_190f8;
  undefined8 uStack_190f0;
  undefined1 auStack_190e8 [8];
  undefined8 uStack_190e0;
  undefined8 uStack_190d8;
  undefined8 uStack_190d0;
  undefined8 uStack_190c8;
  undefined8 uStack_190c0;
  undefined4 auStack_190b8 [2];
  undefined8 uStack_190b0;
  undefined4 uStack_190a8;
  undefined8 auStack_1909c [256];
  undefined1 auStack_1889c [2048];
  undefined1 auStack_1809c [65536];
  undefined1 local_809c [28804];
  undefined1 auStack_1018 [3964];
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80 [7];
  undefined4 local_44;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong uVar7;
  
  uVar7 = 0xc30;
  do {
    uVar6 = uVar7 - 0x1000;
    auStack_1018[uVar7] = (char)uVar6;
    uVar7 = uVar6;
  } while (0xfffffffffffe6c30 < uVar6);
  uStack_19368 = 0;
  uStack_19370 = 0;
  uStack_19360 = 0;
  uStack_190f8 = 0;
  uStack_19100 = 0;
  uStack_19108 = 0;
  uStack_19110 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  uStack_19388 = param_1;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  FUN_00442620(auStack_1889c,local_res10);
  FUN_00442620(auStack_1909c,local_res18);
  auStack_190b8[0] = 0x18;
  uStack_190b0 = 0;
  uStack_190a8 = 0xffffffff;
  if (param_7 != 0) {
    uVar8 = FUN_00416740(param_7);
    uVar9 = FUN_00416740(param_8);
    uStack_193c8 = (ulonglong)uStack_193c8._4_4_ << 0x20;
    uStack_193c0 = &uStack_19328;
    iVar2 = thunk_FUN_04140a87(uVar8,0,uVar9,2);
    if (iVar2 == 0) {
      uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,L"RunExternal: Logon user problem");
      FUN_004134c0(uVar8);
    }
    puStack_19378 = (undefined8 *)0x0;
    uStack_1932c = 0x105;
    iVar2 = thunk_FUN_041966e8(uStack_19328,auStack_1931a,&uStack_1932c);
    if (iVar2 == 0) {
      uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,L"RunExternal: user profile problem");
      FUN_004134c0(uVar8);
    }
  }
  thunk_FUN_041aab45(&uStack_190c0,&uStack_190d0,auStack_190b8,0);
  uVar8 = thunk_FUN_04149b47();
  uVar9 = thunk_FUN_04149b47();
  uStack_193c8 = uStack_193c8 & 0xffffffff00000000;
  uStack_193c0._0_4_ = 0xffffffff;
  uStack_193b8._0_4_ = 2;
  thunk_FUN_04168163(uVar8,uStack_190d0,uVar9,&uStack_190f0);
  thunk_FUN_041aab45(&uStack_190e0,&uStack_190d8,auStack_190b8,0);
  uVar8 = thunk_FUN_04149b47();
  uVar9 = thunk_FUN_04149b47();
  uStack_193c8 = uStack_193c8 & 0xffffffff00000000;
  uStack_193c0._0_4_ = 0;
  uStack_193b8._0_4_ = 2;
  thunk_FUN_04168163(uVar8,uStack_190c0,uVar9,&uStack_190c8);
  uVar8 = thunk_FUN_04149b47();
  uVar9 = thunk_FUN_04149b47();
  uStack_193c8 = uStack_193c8 & 0xffffffff00000000;
  uStack_193c0._0_4_ = 0;
  uStack_193b8._0_4_ = 2;
  thunk_FUN_04168163(uVar8,uStack_190d8,uVar9,auStack_190e8);
  thunk_FUN_041d2921(uStack_190c0);
  thunk_FUN_041d2921(uStack_190d8);
  FUN_0040d200(&local_98,0x18,0);
  FUN_0040d200(local_80,0x68,0);
  local_80[0]._0_4_ = 0x68;
  local_44 = 0x101;
  local_30 = uStack_190e0;
  local_28 = uStack_190d0;
  local_20 = uStack_190f0;
  if (param_7 == 0) {
    uStack_193c8 = CONCAT44(uStack_193c8._4_4_,0xffffffff);
    uStack_193c0 = (undefined8 *)((ulonglong)uStack_193c0._4_4_ << 0x20);
    uStack_193b8 = 0;
    puStack_193b0 = auStack_1909c;
    puStack_193a8 = local_80;
    puStack_193a0 = &local_98;
    iVar2 = thunk_FUN_04169e31(0,auStack_1889c,auStack_190b8,auStack_190b8);
    if (iVar2 == 0) {
      uVar3 = thunk_FUN_03ce33a6();
      FUN_0044b630(&uStack_19108,uVar3,0);
      uStack_19350 = 0;
      uStack_19348 = uStack_19108;
      uStack_19340 = 0x11;
      auStack_19358[0] = uVar3;
      FUN_00442f70(&uStack_19110,L"RunExternal: CreateProcess failed. Error %d: %s",auStack_19358,1)
      ;
      uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,uStack_19110);
      FUN_004134c0(uVar8);
    }
  }
  else {
    uVar8 = FUN_00416740(param_7);
    uVar9 = FUN_00416740(param_8);
    uStack_193c8 = 0;
    uStack_193c0 = (undefined8 *)auStack_1889c;
    uStack_193b8 = CONCAT44(uStack_193b8._4_4_,0x400);
    puStack_193b0 = puStack_19378;
    puStack_193a8 = auStack_1909c;
    puStack_193a0 = local_80;
    puStack_19398 = &local_98;
    iVar2 = thunk_FUN_03d7b102(uVar8,0,uVar9,1);
    if (iVar2 == 0) {
      uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,L"RunExternal: create process #1");
      FUN_004134c0(uVar8);
    }
    if (puStack_19378 != (undefined8 *)0x0) {
      iVar2 = thunk_FUN_0417eb3c(puStack_19378);
      if (iVar2 == 0) {
        uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,L"RunExternal: destroy block");
        FUN_004134c0(uVar8);
      }
    }
    thunk_FUN_041d2921(uStack_19328);
  }
  iVar2 = FUN_00427dd0();
  *param_5 = '\0';
  do {
    iVar4 = thunk_FUN_0418d6df(local_98,300);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    cVar1 = FUN_01056590(auStack_193e8);
    if (cVar1 != '\0') {
      thunk_FUN_040e52a8(local_98,0);
      *param_5 = '\x01';
      break;
    }
    if (0 < (int)param_6) {
      iVar5 = FUN_00427dd0();
      if (param_6 < (uint)(iVar5 - iVar2)) {
        thunk_FUN_040e52a8(local_98,0);
        break;
      }
    }
  } while (iVar4 == 0x102);
  thunk_FUN_041d2921(uStack_190d0);
  thunk_FUN_041d2921(uStack_190e0);
  thunk_FUN_041d2921(uStack_190f0);
  thunk_FUN_041d2921(local_98);
  thunk_FUN_041d2921(local_90);
  if (*param_5 == '\0') {
    FUN_004144d0(&uStack_190f8);
    do {
      uStack_193c8 = 0;
      iVar2 = thunk_FUN_0411366f(uStack_190c8,local_809c,0x8000,&local_9c);
      if ((iVar2 == 0) || (local_9c == 0)) {
        iVar2 = thunk_FUN_03ce33a6();
        if (iVar2 == 0x6d) goto code_r0x01056c4a;
        uVar8 = FUN_0044d490(&PTR_FUN_015ef458,1,L"Pipe read error, could not execute file");
        FUN_004134c0(uVar8);
      }
      local_809c[local_9c] = 0;
      FUN_00415430(&uStack_19360,local_809c,0);
      FUN_004155b0(&uStack_190f8,uStack_19360);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    } while( true );
  }
LAB_01056cc7:
  iStack_1937c = iVar4;
  FUN_00414560(&uStack_19370,2);
  FUN_004144d0(&uStack_19360);
  FUN_00414560(&uStack_19110,3);
  FUN_004144d0(&uStack_190f8);
  FUN_00414560(&local_res10,2);
  FUN_00414560(&param_7,2);
  return iStack_1937c;
code_r0x01056c4a:
  FUN_00416880(&uStack_19370,uStack_190f8);
  FUN_0043f0c0(&uStack_19368,uStack_19370,1);
  FUN_00415dd0(&uStack_190f8,uStack_19368,0);
  FUN_00416880(&uStack_19100,uStack_190f8);
  FUN_00442620(auStack_1809c,uStack_19100);
  FUN_004ae3e0(&DAT_01056fa0,&DAT_01056fc0,auStack_1809c,uStack_19388);
  goto LAB_01056cc7;
}

