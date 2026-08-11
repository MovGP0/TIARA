/* Ghidra address: 00f03040 */
/* Ghidra symbol: FUN_00f03040 */


ulonglong FUN_00f03040(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(ushort *)(param_1 + 0x4f) & 1) == 0) {
    uVar1 = FUN_00f02ee0();
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x18);
  }
  return uVar1;
}

