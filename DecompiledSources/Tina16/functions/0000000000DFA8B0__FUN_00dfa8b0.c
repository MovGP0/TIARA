/* Ghidra address: 00dfa8b0 */
/* Ghidra symbol: FUN_00dfa8b0 */


void FUN_00dfa8b0(longlong param_1)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x528) != '\0') {
    iVar3 = *(int *)(param_1 + 0x308) + -1;
    iVar2 = 1;
    if (0 < iVar3) {
      do {
        pdVar1 = *(double **)(*(longlong *)(param_1 + 0x530) + -8 + (longlong)iVar2 * 8);
        *pdVar1 = *pdVar1 + *(double *)(param_1 + 0x450);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

