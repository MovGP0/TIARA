/* Ghidra address: 00dae9e0 */
/* Ghidra symbol: FUN_00dae9e0 */


int FUN_00dae9e0(longlong param_1)

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
      if (*(int *)(lVar1 + 8) < iVar3) {
        lVar1 = FUN_01d347d0(param_1,iVar2);
        iVar3 = *(int *)(lVar1 + 8);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar3;
}

