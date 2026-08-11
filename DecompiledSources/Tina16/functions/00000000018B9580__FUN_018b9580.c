/* Ghidra address: 018b9580 */
/* Ghidra symbol: FUN_018b9580 */


void FUN_018b9580(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_38 = param_2;
  local_20 = FUN_01803bf0(*(undefined8 *)(param_1[0x13] + 0x28),L"previewpages");
  param_1[0xf] = local_20;
  FUN_018b9460(auStack_58);
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  iVar1 = (**(code **)*param_1)(param_1);
  if ((iVar1 <= *(int *)((longlong)param_1 + 0xc)) || ((char)param_1[1] == '\x01')) {
    local_20 = FUN_01803a30(local_20);
    uVar2 = FUN_018b9500(auStack_58,local_38);
    FUN_0043f750(local_30,uVar2);
    FUN_00416ba0(local_20 + 0x20,L"page",local_30[0]);
    iVar1 = (**(code **)*param_1)(param_1);
    if (2 < iVar1) {
      *(undefined1 *)(local_20 + 0x38) = 1;
    }
    (**(code **)(*(longlong *)param_1[4] + 0x260))
              ((longlong *)param_1[4],0,*(int *)((longlong)param_1 + 0xc) + 1);
    *(undefined1 *)(param_1 + 1) = 0;
    iVar1 = (**(code **)*param_1)(param_1);
    *(int *)((longlong)param_1 + 0xc) = iVar1 + -1;
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  FUN_00414480(local_30);
  return;
}

