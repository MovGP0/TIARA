/* Ghidra address: 009f0e20 */
/* Ghidra symbol: FUN_009f0e20 */


ulonglong FUN_009f0e20(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00a01900(param_1);
  if ((ushort)((short)uVar1 - 0xa0U) < 0x60) {
    uVar1 = (ulonglong)*(ushort *)(param_1 + -0x120 + (uVar1 & 0xffff) * 2);
  }
  return uVar1;
}

