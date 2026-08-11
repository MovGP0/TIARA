/* Ghidra address: 01638350 */
/* Ghidra symbol: FUN_01638350 */


int FUN_01638350(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x154);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      cVar1 = FUN_016382c0(param_1,iVar2);
      if ((cVar1 != '\0') && (cVar1 = FUN_01638230(param_1,iVar2), cVar1 != '\0')) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar3;
}

