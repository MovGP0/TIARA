/* Ghidra address: 00448910 */
/* Ghidra symbol: FUN_00448910 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00448910(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_00448880(param_1);
  lVar1 = ((longlong)param_1[1] + -0xa955a) * (longlong)DAT_01dc0598;
  if (lVar1 < 0) {
    lVar2 = -(longlong)*param_1;
  }
  else {
    lVar2 = (longlong)*param_1;
  }
  return (double)(lVar1 + lVar2) / (double)_DAT_01dc0594;
}

