/* Ghidra address: 01335c00 */
/* Ghidra symbol: FUN_01335c00 */


void FUN_01335c00(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  undefined8 local_30;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x6c0) + 0x490);
  iVar2 = FUN_004230c0(param_1 + 0x80);
  FUN_00422db0(local_50,*(int *)(param_1 + 0x88) + -0x14,*(int *)(param_1 + 0x84) + iVar2 / 2);
  local_40[0] = local_50[0];
  if (param_2 == '\0') {
    iVar2 = FUN_004230c0(param_1 + 0x80);
    FUN_00422db0(local_50,*(int *)(param_1 + 0x88) + -0xc,*(int *)(param_1 + 0x84) + iVar2 / 2 + 8);
  }
  else {
    iVar2 = FUN_004230c0(param_1 + 0x80);
    FUN_00422db0(local_50,*(int *)(param_1 + 0x88) + -0xc,*(int *)(param_1 + 0x84) + iVar2 / 2 + -8)
    ;
  }
  iVar2 = FUN_004230c0(param_1 + 0x80);
  FUN_00422db0(local_50,*(int *)(param_1 + 0x88) + -4,*(int *)(param_1 + 0x84) + iVar2 / 2);
  local_30 = local_50[0];
  FUN_005fd4e0(plVar1[0xf],0);
  uVar3 = FUN_005fdaa0(plVar1[0x10]);
  FUN_005fdab0(plVar1[0x10],0);
  (**(code **)(*plVar1 + 0xd8))(plVar1,local_40,2);
  FUN_005fdab0(plVar1[0x10],uVar3);
  return;
}

