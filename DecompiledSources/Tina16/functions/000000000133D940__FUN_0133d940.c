/* Ghidra address: 0133d940 */
/* Ghidra symbol: FUN_0133d940 */


void FUN_0133d940(longlong param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = 0.0;
  iVar1 = 0;
  do {
    dVar2 = dVar2 + *(double *)(param_1 + 4000 + (longlong)iVar1 * 8);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x4d);
  *(double *)(param_1 + 0xf50) = dVar2;
  return;
}

