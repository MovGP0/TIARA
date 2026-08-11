/* Ghidra address: 00703ba0 */
/* Ghidra symbol: FUN_00703ba0 */


void FUN_00703ba0(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x38) == -1) || (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x30))) {
    *(undefined4 *)(param_1 + 0x38) = param_2;
  }
  FUN_006a3360(param_1);
  uVar1 = FUN_004b1870(param_1);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8),uVar1);
  return;
}

