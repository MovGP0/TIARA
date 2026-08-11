/* Ghidra address: 0130b610 */
/* Ghidra symbol: FUN_0130b610 */


void FUN_0130b610(longlong param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = **(double **)(param_1 + 0x1a8);
  iVar2 = *(int *)(param_1 + 0x1a4);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (dVar3 < *(double *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar1 * 0x10)) {
        dVar3 = *(double *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar1 * 0x10);
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

