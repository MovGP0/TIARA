/* Ghidra address: 00527460 */
/* Ghidra symbol: FUN_00527460 */


ulonglong FUN_00527460(byte param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_0040a0c0();
  uVar2 = (ulonglong)uVar1 & 0xfffffffffffffcff;
  FUN_0040a0b0(CONCAT62((int6)(uVar2 >> 0x10),(ushort)uVar2 | (ushort)param_1 << 8));
  return ((ulonglong)uVar1 & 0xffff) >> 8 & 0xffff03;
}

