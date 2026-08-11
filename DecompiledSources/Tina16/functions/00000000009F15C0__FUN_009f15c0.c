/* Ghidra address: 009f15c0 */
/* Ghidra symbol: FUN_009f15c0 */


ulonglong FUN_009f15c0(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2 * 0x9d + param_3;
  if (uVar1 < 0x17e9) {
    uVar2 = (ulonglong)*(ushort *)(PTR_DAT_02001f08 + (longlong)(int)uVar1 * 2);
  }
  else if (uVar1 - 0x1888 < 0x1de4) {
    uVar2 = (ulonglong)*(ushort *)(PTR_DAT_020021f0 + (longlong)(int)(uVar1 - 0x1888) * 2);
  }
  else {
    uVar2 = CONCAT62((uint6)(ushort)(uVar1 >> 0x10),0xfffd);
  }
  return uVar2;
}

