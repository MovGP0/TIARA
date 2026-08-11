/* Ghidra address: 0040c5c0 */
/* Ghidra symbol: FUN_0040c5c0 */


double FUN_0040c5c0(double param_1)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    if (param_1 < (double)(&DAT_01dbac40)[iVar1] || param_1 == (double)(&DAT_01dbac40)[iVar1])
    break;
  }
  if (iVar1 == 0) {
    dVar3 = (double)FUN_0040c540();
  }
  else {
    lVar2 = (longlong)(iVar1 + -1);
    dVar3 = (double)FUN_0040c540((param_1 - *(double *)(&DAT_01dbac60 + lVar2 * 8)) /
                                 (param_1 * *(double *)(&DAT_01dbac60 + lVar2 * 8) + 1.0));
    dVar3 = dVar3 + *(double *)(&DAT_01dbac80 + lVar2 * 0x10) +
            *(double *)(&DAT_01dbac78 + lVar2 * 0x10);
  }
  return dVar3;
}

