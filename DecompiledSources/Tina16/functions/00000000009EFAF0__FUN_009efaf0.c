/* Ghidra address: 009efaf0 */
/* Ghidra symbol: FUN_009efaf0 */


ulonglong FUN_009efaf0(undefined8 param_1,uint param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (((byte)((char)param_2 - 0x21U) < 7) || ((byte)((char)param_2 - 0x30U) < 0x44)) {
    if ((byte)((char)(param_3 & 0xffffffff) - 0x21U) < 0x5e) {
      iVar1 = ((param_2 & 0xff) - 0x21) * 0x5e + ((uint)param_3 & 0xff);
      uVar2 = iVar1 - 0x21;
      if (uVar2 < 0x2b2) {
        uVar3 = (ulonglong)*(ushort *)(PTR_DAT_02003388 + (longlong)(int)uVar2 * 2);
      }
      else if (iVar1 - 0x5a3U < 0x18fe) {
        uVar3 = (ulonglong)*(ushort *)(PTR_DAT_02003640 + (longlong)(iVar1 + -0x5a3) * 2);
      }
      else {
        uVar3 = CONCAT62((uint6)(ushort)(uVar2 >> 0x10),0xfffd);
      }
    }
    else {
      uVar3 = CONCAT62((int6)((param_3 & 0xffffffff) >> 0x10),0xfffd);
    }
  }
  else {
    uVar3 = CONCAT62((uint6)(ushort)(param_2 >> 0x10),0xfffd);
  }
  return uVar3;
}

