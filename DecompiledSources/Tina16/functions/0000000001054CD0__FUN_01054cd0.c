/* Ghidra address: 01054cd0 */
/* Ghidra symbol: FUN_01054cd0 */


int FUN_01054cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5,longlong param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_res10;
  undefined8 local_res18;
  ulonglong in_stack_fffffffffffe6c38;
  uint uVar8;
  undefined8 in_stack_fffffffffffe6c40;
  undefined8 *puVar9;
  undefined8 in_stack_fffffffffffe6c48;
  undefined4 uVar11;
  undefined8 uVar10;
  longlong lStack_19378;
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
  undefined1 auStack_1909c [2048];
  undefined1 auStack_1889c [2048];
  undefined1 auStack_1809c [65536];
  undefined1 local_809c [28812];
  undefined1 auStack_1010 [3956];
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_80 [15];
  undefined4 local_44;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong uVar5;
  
  uVar2 = (undefined4)((ulonglong)in_stack_fffffffffffe6c40 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffe6c48 >> 0x20);
  uVar5 = 0xc28;
  do {
    uVar4 = uVar5 - 0x1000;
    auStack_1010[uVar5] = (char)uVar4;
    uVar5 = uVar4;
  } while (0xfffffffffffe6c28 < uVar4);
  uStack_19368 = 0;
  uStack_19370 = 0;
  uStack_19360 = 0;
  uStack_190f8 = 0;
  uStack_19100 = 0;
  uStack_19108 = 0;
  uStack_19110 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  FUN_00442620(auStack_1889c,local_res10);
  FUN_00442620(auStack_1909c,local_res18);
  uVar8 = (uint)(in_stack_fffffffffffe6c38 >> 0x20);
  auStack_190b8[0] = 0x18;
  uStack_190b0 = 0;
  uStack_190a8 = 0xffffffff;
  if (param_6 != 0) {
    uVar6 = FUN_00416740(param_6);
    uVar7 = FUN_00416740(param_7);
    in_stack_fffffffffffe6c38 = (ulonglong)uVar8 << 0x20;
    puVar9 = &uStack_19328;
    iVar1 = thunk_FUN_04140a87(uVar6,0,uVar7,2,in_stack_fffffffffffe6c38,puVar9);
    uVar2 = (undefined4)((ulonglong)puVar9 >> 0x20);
    if (iVar1 == 0) {
      uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"RunExternal: Logon user problem");
      FUN_004134c0(uVar6);
    }
    lStack_19378 = 0;
    uStack_1932c = 0x105;
    iVar1 = thunk_FUN_041966e8(uStack_19328,auStack_1931a,&uStack_1932c);
    if (iVar1 == 0) {
      uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"RunExternal: user profile problem");
      FUN_004134c0(uVar6);
    }
  }
  thunk_FUN_041aab45(&uStack_190c0,&uStack_190d0,auStack_190b8,0);
  uVar6 = thunk_FUN_04149b47();
  uVar7 = thunk_FUN_04149b47();
  in_stack_fffffffffffe6c38 = in_stack_fffffffffffe6c38 & 0xffffffff00000000;
  uVar5 = CONCAT44(uVar2,0xffffffff);
  uVar10 = CONCAT44(uVar11,2);
  thunk_FUN_04168163(uVar6,uStack_190d0,uVar7,&uStack_190f0,in_stack_fffffffffffe6c38,uVar5,uVar10);
  uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
  thunk_FUN_041aab45(&uStack_190e0,&uStack_190d8,auStack_190b8,0);
  uVar6 = thunk_FUN_04149b47();
  uVar7 = thunk_FUN_04149b47();
  in_stack_fffffffffffe6c38 = in_stack_fffffffffffe6c38 & 0xffffffff00000000;
  uVar5 = uVar5 & 0xffffffff00000000;
  uVar10 = CONCAT44(uVar2,2);
  thunk_FUN_04168163(uVar6,uStack_190c0,uVar7,&uStack_190c8,in_stack_fffffffffffe6c38,uVar5,uVar10);
  uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar6 = thunk_FUN_04149b47();
  uVar7 = thunk_FUN_04149b47();
  in_stack_fffffffffffe6c38 = in_stack_fffffffffffe6c38 & 0xffffffff00000000;
  uVar5 = uVar5 & 0xffffffff00000000;
  uVar10 = CONCAT44(uVar2,2);
  thunk_FUN_04168163(uVar6,uStack_190d8,uVar7,auStack_190e8,in_stack_fffffffffffe6c38,uVar5,uVar10);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar2 = (undefined4)(in_stack_fffffffffffe6c38 >> 0x20);
  thunk_FUN_041d2921(uStack_190c0);
  thunk_FUN_041d2921(uStack_190d8);
  FUN_0040d200(&local_98,0x18,0);
  FUN_0040d200(local_80,0x68,0);
  local_80[0] = 0x68;
  local_44 = 0x101;
  local_30 = uStack_190e0;
  local_28 = uStack_190d0;
  local_20 = uStack_190f0;
  if (param_6 == 0) {
    iVar1 = thunk_FUN_04169e31(0,auStack_1889c,auStack_190b8,auStack_190b8,
                               CONCAT44(uVar2,0xffffffff),uVar5 & 0xffffffff00000000,0,auStack_1909c
                               ,local_80,&local_98);
    if (iVar1 == 0) {
      uVar2 = thunk_FUN_03ce33a6();
      FUN_0044b630(&uStack_19108,uVar2,0);
      uStack_19350 = 0;
      uStack_19348 = uStack_19108;
      uStack_19340 = 0x11;
      auStack_19358[0] = uVar2;
      FUN_00442f70(&uStack_19110,L"RunExternal: CreateProcess failed. Error %d: %s",auStack_19358,1)
      ;
      uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,uStack_19110);
      FUN_004134c0(uVar6);
    }
  }
  else {
    uVar6 = FUN_00416740(param_6);
    uVar7 = FUN_00416740(param_7);
    iVar1 = thunk_FUN_03d7b102(uVar6,0,uVar7,1,0,auStack_1889c,CONCAT44(uVar11,0x400),lStack_19378,
                               auStack_1909c,local_80,&local_98);
    if (iVar1 == 0) {
      uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"RunExternal: create process #1");
      FUN_004134c0(uVar6);
    }
    if (lStack_19378 != 0) {
      iVar1 = thunk_FUN_0417eb3c(lStack_19378);
      if (iVar1 == 0) {
        uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"RunExternal: destroy block");
        FUN_004134c0(uVar6);
      }
    }
    thunk_FUN_041d2921(uStack_19328);
  }
  iVar1 = thunk_FUN_0418d6df(local_98,param_5);
  if (iVar1 == 0x102) {
    thunk_FUN_040e52a8(local_98,0);
  }
  thunk_FUN_041d2921(uStack_190d0);
  thunk_FUN_041d2921(uStack_190e0);
  thunk_FUN_041d2921(uStack_190f0);
  thunk_FUN_041d2921(local_98);
  thunk_FUN_041d2921(local_90);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  if (iVar1 != 0x102) {
    FUN_004144d0(&uStack_190f8);
    do {
      iVar3 = thunk_FUN_0411366f(uStack_190c8,local_809c,0x8000,&local_9c,0);
      if ((iVar3 == 0) || (local_9c == 0)) {
        iVar3 = thunk_FUN_03ce33a6();
        if (iVar3 == 0x6d) goto code_r0x01055304;
        uVar6 = FUN_0044d490(&PTR_FUN_015ef458,1,L"Pipe read error, could not execute file");
        FUN_004134c0(uVar6);
      }
      local_809c[local_9c] = 0;
      FUN_00415430(&uStack_19360,local_809c,0);
      FUN_004155b0(&uStack_190f8,uStack_19360);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    } while( true );
  }
LAB_01055381:
  FUN_00414560(&uStack_19370,2);
  FUN_004144d0(&uStack_19360);
  FUN_00414560(&uStack_19110,3);
  FUN_004144d0(&uStack_190f8);
  FUN_00414560(&local_res10,2);
  FUN_00414560(&param_6,2);
  return iVar1;
code_r0x01055304:
  FUN_00416880(&uStack_19370,uStack_190f8);
  FUN_0043f0c0(&uStack_19368,uStack_19370,1);
  FUN_00415dd0(&uStack_190f8,uStack_19368,0);
  FUN_00416880(&uStack_19100,uStack_190f8);
  FUN_00442620(auStack_1809c,uStack_19100);
  FUN_004ae3e0(&DAT_01055650,&DAT_01055670,auStack_1809c,param_1);
  goto LAB_01055381;
}

