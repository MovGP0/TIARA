/* Ghidra address: 009f07c0 */
/* Ghidra symbol: FUN_009f07c0 */


ulonglong FUN_009f07c0(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00a01900(param_1);
  if ((ushort)((short)uVar1 - 0x80U) < 0x80) {
    uVar1 = (ulonglong)*(ushort *)(param_1 + -0xe0 + (uVar1 & 0xffff) * 2);
  }
  return uVar1;
}

