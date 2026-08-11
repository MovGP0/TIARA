/* Ghidra address: 00bbc5f0 */
/* Ghidra symbol: FUN_00bbc5f0 */


int FUN_00bbc5f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_02019ad8 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(DAT_02019ad8,iVar2);
      if (*(longlong *)(lVar1 + 0x18) == *(longlong *)(*(longlong *)(param_1 + 0x40) + 8)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return -1;
}

