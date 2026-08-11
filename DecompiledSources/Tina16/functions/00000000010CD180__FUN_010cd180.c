/* Ghidra address: 010cd180 */
/* Ghidra symbol: FUN_010cd180 */


void FUN_010cd180(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))(*(longlong **)(param_1 + 0x180));
  if (*(int *)(param_1 + 0x15c) < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))
              (*(longlong **)(param_1 + 0x180),local_20,*(undefined4 *)(param_1 + 0x15c));
    FUN_00414ad0(param_2,local_20[0]);
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
  }
  else {
    FUN_00414480(param_2);
  }
  FUN_00414480(local_20);
  return;
}

