/* Ghidra address: 00f03220 */
/* Ghidra symbol: FUN_00f03220 */


ulonglong FUN_00f03220(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(ushort *)(param_1 + 0x4f) & 2) == 0) {
    uVar1 = FUN_00f02fb0();
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x1c);
  }
  return uVar1;
}

