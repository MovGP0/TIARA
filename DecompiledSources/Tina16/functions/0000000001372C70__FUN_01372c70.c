/* Ghidra address: 01372c70 */
/* Ghidra symbol: FUN_01372c70 */


void FUN_01372c70(longlong param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x380) + 0xa0) + 0x468) +
                  0x10);
  if (0 < iVar4) {
    pdVar1 = (double *)(param_1 + 0x290);
    pdVar3 = (double *)(param_1 + 0x240);
    pdVar2 = (double *)(param_1 + 0x1f0);
    do {
      *pdVar2 = *pdVar1 * 2.0 - *pdVar3;
      pdVar2 = pdVar2 + 1;
      pdVar3 = pdVar3 + 1;
      pdVar1 = pdVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

