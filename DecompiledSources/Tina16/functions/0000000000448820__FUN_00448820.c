/* Ghidra address: 00448820 */
/* Ghidra symbol: FUN_00448820 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00448820(double param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_0040c770(param_1 * (double)_DAT_01dc0594);
  lVar2 = lVar1 / (longlong)DAT_01dc0598;
  if (lVar1 < 0) {
    lVar1 = -lVar1;
  }
  return CONCAT44((int)lVar2 + 0xa955a,(int)(lVar1 % (longlong)DAT_01dc0598));
}

