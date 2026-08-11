/* Ghidra address: 01bfbe40 */
/* Ghidra symbol: FUN_01bfbe40 */


int FUN_01bfbe40(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_01bfb960(param_1,iVar3);
      if (*(char *)(lVar1 + 0x58) != '\0') {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar2;
}

