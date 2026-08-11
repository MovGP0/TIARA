/* Ghidra address: 01853280 */
/* Ghidra symbol: FUN_01853280 */


int FUN_01853280(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = iVar3;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar1 = FUN_00418c90();
    iVar2 = 0;
    iVar4 = 0;
    if (-1 < iVar1) {
      iVar1 = iVar1 + 1;
      do {
        iVar3 = iVar3 + *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 4);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
        iVar4 = iVar3;
      } while (iVar1 != 0);
    }
  }
  return iVar4;
}

