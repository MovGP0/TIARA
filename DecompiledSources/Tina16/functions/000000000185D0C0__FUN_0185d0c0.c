/* Ghidra address: 0185d0c0 */
/* Ghidra symbol: FUN_0185d0c0 */


byte FUN_0185d0c0(longlong param_1)

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
      lVar1 = FUN_01860480(param_1,iVar3);
      if (lVar1 != 0) {
        bVar2 = bVar2 | *(byte *)(lVar1 + 9);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return bVar2;
}

