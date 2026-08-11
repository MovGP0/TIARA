/* Ghidra address: 006df500 */
/* Ghidra symbol: FUN_006df500 */


longlong FUN_006df500(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (param_2 < 0) {
    FUN_0041ddd0(local_20,PTR_PTR_020057d8);
    FUN_006dc500(local_20[0]);
  }
  if ((*(longlong *)(param_1 + 0x18) == 0) ||
     (uVar2 = *(int *)(param_1 + 0x20) - param_2, uVar3 = (int)uVar2 >> 0x1f,
     1 < (int)((uVar2 ^ uVar3) - uVar3))) {
    local_30 = FUN_006df4b0(param_1);
    iVar4 = param_2;
    while ((iVar4 != 0 && (local_30 != 0))) {
      local_30 = FUN_006dd600(local_30);
      iVar4 = iVar4 + -1;
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x18);
    if (param_2 == *(int *)(param_1 + 0x20)) {
      local_30 = *plVar1;
    }
    else if (param_2 < *(int *)(param_1 + 0x20)) {
      local_30 = FUN_006dd6a0(*plVar1);
    }
    else {
      local_30 = FUN_006dd600(*plVar1);
    }
  }
  if (local_30 == 0) {
    FUN_0041ddd0(&local_28,PTR_PTR_020057d8);
    FUN_006dc500(local_28);
  }
  *(longlong *)(param_1 + 0x18) = local_30;
  *(int *)(param_1 + 0x20) = param_2;
  FUN_00414560(&local_28,2);
  return local_30;
}

