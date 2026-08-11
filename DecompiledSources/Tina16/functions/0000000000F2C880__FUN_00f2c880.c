/* Ghidra address: 00f2c880 */
/* Ghidra symbol: FUN_00f2c880 */


longlong * FUN_00f2c880(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_00416740(param_2);
  *param_1 = lVar2;
  param_1[1] = lVar2;
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  param_1[2] = *param_1 + (longlong)iVar1 * 2;
  return param_1;
}

