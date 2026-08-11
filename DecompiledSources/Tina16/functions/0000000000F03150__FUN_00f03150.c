/* Ghidra address: 00f03150 */
/* Ghidra symbol: FUN_00f03150 */


ulonglong FUN_00f03150(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(ushort *)(param_1 + 0x4f) & 0x200) == 0) {
    uVar1 = FUN_00f02f30();
  }
  else {
    uVar1 = (ulonglong)*(byte *)(param_1 + 0x30);
  }
  return uVar1;
}

