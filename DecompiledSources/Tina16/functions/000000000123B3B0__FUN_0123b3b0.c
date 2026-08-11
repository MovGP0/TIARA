/* Ghidra address: 0123b3b0 */
/* Ghidra symbol: FUN_0123b3b0 */


ulonglong FUN_0123b3b0(void)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = FUN_0040c840();
  uVar2 = (longlong)iVar1 / 0x14 & 0xffffffff;
  if (iVar1 % 0x14 != 0) {
    uVar2 = (ulonglong)((iVar1 / 0x14) * 0x14 - 0x14);
  }
  return uVar2;
}

