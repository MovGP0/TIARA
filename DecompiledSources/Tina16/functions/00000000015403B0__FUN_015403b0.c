/* Ghidra address: 015403b0 */
/* Ghidra symbol: FUN_015403b0 */


undefined8 FUN_015403b0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_01d347d0(param_1,iVar2);
      if (*(int *)(lVar1 + 8) == param_2) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

