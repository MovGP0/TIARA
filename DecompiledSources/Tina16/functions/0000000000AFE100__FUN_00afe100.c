/* Ghidra address: 00afe100 */
/* Ghidra symbol: FUN_00afe100 */


int FUN_00afe100(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  iVar2 = *(int *)(lVar1 + 0x9c);
  if (*(int *)(param_1 + 0x8e8) == iVar2) {
    iVar2 = *(int *)(lVar1 + 0xa0) - iVar2;
  }
  else {
    iVar2 = iVar2 - *(int *)(lVar1 + 0xa0);
  }
  return iVar2;
}

