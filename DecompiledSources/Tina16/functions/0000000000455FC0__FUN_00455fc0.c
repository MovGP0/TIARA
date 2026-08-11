/* Ghidra address: 00455fc0 */
/* Ghidra symbol: FUN_00455fc0 */


void FUN_00455fc0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 8) + -2;
  *param_1 = lVar1;
  param_1[1] = lVar1 + (longlong)*(int *)(param_2 + 0x10) * 2;
  return;
}

