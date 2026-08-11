/* Ghidra address: 00f031f0 */
/* Ghidra symbol: FUN_00f031f0 */


ulonglong FUN_00f031f0(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(ushort *)(param_1 + 0x4f) & 0x10) == 0) {
    uVar1 = FUN_00f02fa0();
  }
  else {
    uVar1 = (ulonglong)*(byte *)(param_1 + 0x4e);
  }
  return uVar1;
}

