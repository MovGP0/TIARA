/* Ghidra address: 00daea50 */
/* Ghidra symbol: FUN_00daea50 */


int FUN_00daea50(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = FUN_01d347d0(param_1,0);
  iVar3 = *(int *)(lVar1 + 8);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_01d347d0(param_1,iVar2);
      if (iVar3 < *(int *)(lVar1 + 8)) {
        lVar1 = FUN_01d347d0(param_1,iVar2);
        iVar3 = *(int *)(lVar1 + 8);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar3;
}

