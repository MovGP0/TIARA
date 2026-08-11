/* Ghidra address: 0110cd90 */
/* Ghidra symbol: FUN_0110cd90 */


void FUN_0110cd90(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_1c;
  
  local_1c = 1;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
  if ((0 < iVar1) && (-1 < *(int *)(param_1 + 0x1c))) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    if (*(int *)(param_1 + 0x1c) <= iVar1 + -1) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),*(undefined4 *)(param_1 + 0x1c));
      FUN_004113f0(uVar2,&PTR_FUN_01105d80);
      FUN_00e18a60(&local_1c);
      *param_2 = (undefined1)local_1c;
    }
  }
  return;
}

