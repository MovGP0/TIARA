/* Ghidra address: 009f2140 */
/* Ghidra symbol: FUN_009f2140 */


ulonglong FUN_009f2140(undefined8 param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  
  param_3 = param_2 * 0xbe + param_3;
  if (param_3 == 0x1920) {
    uVar1 = 0x20ac;
  }
  else if (param_3 == 0x1d70) {
    uVar1 = 0x1f9;
  }
  else if (param_3 - 0x1df8U < 0xd) {
    uVar1 = (ulonglong)*(ushort *)(PTR_DAT_02001838 + (longlong)(param_3 + -0x1df8) * 2);
  }
  else if (param_3 - 0x5cc6U < 0x5f) {
    uVar1 = (ulonglong)*(ushort *)(PTR_DAT_02001e30 + (longlong)(param_3 + -0x5cc6) * 2);
  }
  else {
    uVar1 = CONCAT62((uint6)(ushort)((uint)param_3 >> 0x10),0xfffd);
  }
  return uVar1;
}

