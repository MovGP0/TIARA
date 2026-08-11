/* Ghidra address: 009f1b10 */
/* Ghidra symbol: FUN_009f1b10 */


ulonglong FUN_009f1b10(undefined8 param_1,uint param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((ushort)((short)param_2 - 0x21U) < 0x52) {
    if ((ushort)((short)(param_3 & 0xffffffff) - 0x21U) < 0x5e) {
      iVar1 = ((param_2 & 0xffff) - 0x21) * 0x5e + ((uint)param_3 & 0xffff) + -0x21;
      if (iVar1 < 0x1de2) {
        uVar2 = (ulonglong)*(ushort *)(PTR_DAT_02005c40 + (longlong)iVar1 * 2);
      }
      else {
        uVar2 = CONCAT62((uint6)(ushort)((uint)iVar1 >> 0x10),0xfffd);
      }
    }
    else {
      uVar2 = CONCAT62((int6)((param_3 & 0xffffffff) >> 0x10),0xfffd);
    }
  }
  else {
    uVar2 = CONCAT62((uint6)(ushort)(param_2 >> 0x10),0xfffd);
  }
  return uVar2;
}

