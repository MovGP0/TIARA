/* Ghidra address: 0184faa0 */
/* Ghidra symbol: FUN_0184faa0 */


void FUN_0184faa0(longlong param_1)

{
  int iVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_0184f250(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x138) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),&local_30);
    iVar1 = FUN_004644a0(&local_30);
    if (iVar1 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30));
    }
    else {
      FUN_0184f110(param_1);
    }
  }
  FUN_00460ba0(&local_30);
  return;
}

