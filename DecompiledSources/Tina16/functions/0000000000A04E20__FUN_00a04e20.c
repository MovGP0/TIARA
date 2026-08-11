/* Ghidra address: 00a04e20 */
/* Ghidra symbol: FUN_00a04e20 */


byte FUN_00a04e20(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_00a07450(param_1,iVar3);
      if (lVar1 != 0) {
        bVar2 = bVar2 | *(byte *)(lVar1 + 9);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return bVar2;
}

