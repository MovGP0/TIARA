/* Ghidra address: 00f03010 */
/* Ghidra symbol: FUN_00f03010 */


ulonglong FUN_00f03010(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(ushort *)(param_1 + 0x4f) & 8) == 0) {
    uVar1 = FUN_00f02ed0();
  }
  else {
    uVar1 = (ulonglong)*(byte *)(param_1 + 0x4d);
  }
  return uVar1;
}

