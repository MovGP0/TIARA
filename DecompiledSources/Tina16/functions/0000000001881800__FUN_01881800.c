/* Ghidra address: 01881800 */
/* Ghidra symbol: FUN_01881800 */


void FUN_01881800(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_018817b0(param_1,0,0,0,param_2);
  iVar1 = FUN_004b2060(param_1);
  *(int *)(param_1 + 0x28) = iVar1 + -1;
  return;
}

