/* Ghidra address: 01575d30 */
/* Ghidra symbol: FUN_01575d30 */


int FUN_01575d30(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = -1;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(param_1,iVar2);
      if (iVar3 < *(int *)(lVar1 + 8)) {
        iVar3 = *(int *)(lVar1 + 8);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar3;
}

