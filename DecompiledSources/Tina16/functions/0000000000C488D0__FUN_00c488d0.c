/* Ghidra address: 00c488d0 */
/* Ghidra symbol: FUN_00c488d0 */


bool FUN_00c488d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool local_61;
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  undefined1 local_48;
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  int local_c;
  
  local_20[0] = 0;
  uVar4 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x48));
  **(undefined8 **)(param_1 + 0x38) = uVar4;
  iVar2 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x48));
  local_c = (iVar2 - *(int *)(param_1 + 0x50)) + -4;
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))(*(longlong **)(param_1 + 0x48),&local_c,4);
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x48),**(undefined8 **)(param_1 + 0x38));
  uVar3 = FUN_00427dd0();
  *(ulonglong *)(*(longlong *)(param_1 + 0x38) + 0x20) = (ulonglong)uVar3;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
  *plVar1 = *plVar1 + 1;
  thunk_FUN_03cc2d41(*(undefined8 *)(param_1 + 0x60));
  local_60 = *(longlong *)(param_1 + 0x30);
  local_58 = 0x10;
  local_50 = local_60 + 0x10;
  local_48 = 0x10;
  local_40 = local_60 + 8;
  local_38 = 0x10;
  local_30 = local_60 + 0x18;
  local_28 = 0x10;
  FUN_00442f70(local_20,L"SM flush pos out %d / %d, pos in %d / %d",&local_60,3);
  FUN_00c4c420(local_20[0]);
  uVar4 = FUN_00416740(*(undefined8 *)(param_1 + 0x28));
  lVar5 = FUN_004280c0(0x1f0001,0,uVar4);
  if (lVar5 == 0) {
    FUN_00c4c420(L"SM flush FAIL");
  }
  else {
    thunk_FUN_041d2921(lVar5);
  }
  local_61 = lVar5 != 0;
  FUN_00c479d0(param_1);
  FUN_00414480(local_20);
  return local_61;
}

