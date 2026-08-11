/* Ghidra address: 0184f320 */
/* Ghidra symbol: FUN_0184f320 */


void FUN_0184f320(longlong param_1)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_0184f250(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x138) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),&local_30);
    (**(code **)(**(longlong **)(param_1 + 0x38) + 8))(*(longlong **)(param_1 + 0x38),&local_30);
  }
  FUN_00460ba0(&local_30);
  return;
}

