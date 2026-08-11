/* Ghidra address: 013cdba0 */
/* Ghidra symbol: FUN_013cdba0 */


void FUN_013cdba0(longlong param_1)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  FUN_00414b50(&local_28,*(undefined8 *)(PTR_PTR_02003a20 + (longlong)(iVar1 + 1) * 0x18 + -0x18));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  if (5 < iVar1 + 1) {
    FUN_00416ad0(&local_28,&LAB_013cdcb8);
  }
  FUN_013cd080(param_1,*(undefined8 *)(param_1 + 0x950),local_28);
  if (*(int *)(param_1 + 0x938) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x950) + 600))(*(longlong **)(param_1 + 0x950));
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x950) + 600))(*(longlong **)(param_1 + 0x950));
  }
  FUN_00414560(&local_28,2);
  return;
}

