/* Ghidra address: 010cbaa0 */
/* Ghidra symbol: FUN_010cbaa0 */


ulonglong FUN_010cbaa0(double *param_1)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  double dVar3;
  
  dVar3 = (double)FUN_0040af10(*param_1);
  dVar3 = (double)FUN_0040c850(*param_1 - dVar3);
  if ((dVar3 < 1e-10) || (1.0 - dVar3 < 1e-10)) {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  if (1.0 - dVar3 < 1e-10) {
    lVar1 = FUN_0040c770(*param_1);
    *param_1 = (double)lVar1;
  }
  return uVar2 & 0xffffffff;
}

