/* Ghidra address: 00bd11e0 */
/* Ghidra symbol: FUN_00bd11e0 */


ulonglong FUN_00bd11e0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 0x10) == 0) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),0x14);
  }
  else {
    lVar1 = FUN_004aeac0(lVar1,*(int *)(lVar1 + 0x10) + -1);
    uVar2 = (ulonglong)*(byte *)(lVar1 + 8);
  }
  return uVar2;
}

