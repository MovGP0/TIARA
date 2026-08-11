/* Ghidra address: 0059b3c0 */
/* Ghidra symbol: FUN_0059b3c0 */


void FUN_0059b3c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = *(int *)(param_1 + 8) + -1;
  if (0 < iVar2) {
    do {
      FUN_005959c0(param_1,iVar1,iVar2);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar1 < iVar2);
  }
  return;
}

