/* Ghidra address: 00f04050 */
/* Ghidra symbol: FUN_00f04050 */


ulonglong FUN_00f04050(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(ushort *)(*(longlong *)(param_1 + 8) + 0x4f) & 0x80) == 0) {
    uVar1 = FUN_00f03fb0();
  }
  else {
    uVar1 = (ulonglong)*(byte *)(param_1 + 0x24);
  }
  return uVar1;
}

