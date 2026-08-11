/* Ghidra address: 012bf0d0 */
/* Ghidra symbol: FUN_012bf0d0 */


longlong FUN_012bf0d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x10) < 2) {
    lVar2 = 0;
  }
  else {
    iVar1 = FUN_00409e80(*(int *)(param_1 + 0x10) + -1);
    lVar2 = FUN_004aeac0(param_1,iVar1 + 1);
    lVar2 = (longlong)*(short *)(lVar2 + 8);
  }
  return lVar2;
}

