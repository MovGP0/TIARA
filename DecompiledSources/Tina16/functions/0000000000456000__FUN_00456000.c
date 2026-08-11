/* Ghidra address: 00456000 */
/* Ghidra symbol: FUN_00456000 */


longlong * FUN_00456000(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8) + -2;
  *param_2 = lVar1;
  param_2[1] = lVar1 + (longlong)*(int *)(param_1 + 0x10) * 2;
  return param_2;
}

