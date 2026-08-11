/* Ghidra address: 00413b90 */
/* Ghidra symbol: FUN_00413b90 */


void FUN_00413b90(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      piVar1 = param_1 + (longlong)iVar2 * 6 + -4;
      **(longlong **)piVar1 = **(longlong **)(piVar1 + 2) + *(longlong *)(piVar1 + 4);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

