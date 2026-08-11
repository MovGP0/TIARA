/* Ghidra address: 013f3e70 */
/* Ghidra symbol: FUN_013f3e70 */


void FUN_013f3e70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8));
  *(bool *)(param_1 + 0x8e2) = iVar1 != 0;
  FUN_013f3ec0(param_1,param_2);
  FUN_013f3480(param_1);
  return;
}

