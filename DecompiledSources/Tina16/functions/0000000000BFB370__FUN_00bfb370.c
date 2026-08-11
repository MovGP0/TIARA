/* Ghidra address: 00bfb370 */
/* Ghidra symbol: FUN_00bfb370 */


void FUN_00bfb370(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (0 < *(int *)(param_1 + 0x4cc)) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    if (*(int *)(param_1 + 0x4cc) <= iVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x40))
                (*(longlong **)(param_1 + 0x4e8),*(int *)(param_1 + 0x4cc) + -1,local_res10[0]);
    }
  }
  FUN_00414480(local_res10);
  return;
}

