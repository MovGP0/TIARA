/* Ghidra address: 0130b5a0 */
/* Ghidra symbol: FUN_0130b5a0 */


void FUN_0130b5a0(longlong param_1)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  dVar4 = **(double **)(param_1 + 0x1a8);
  iVar3 = *(int *)(param_1 + 0x1a4);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      pdVar1 = (double *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar2 * 0x10);
      if (*pdVar1 <= dVar4 && dVar4 != *pdVar1) {
        dVar4 = *(double *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar2 * 0x10);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

