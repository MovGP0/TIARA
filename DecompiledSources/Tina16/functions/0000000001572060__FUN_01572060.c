/* Ghidra address: 01572060 */
/* Ghidra symbol: FUN_01572060 */


longlong FUN_01572060(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_01571ee0(param_1,iVar2);
      if (*(int *)(lVar1 + 0x54) == 2) {
        return lVar1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

