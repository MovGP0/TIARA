/* Ghidra address: 009ef750 */
/* Ghidra symbol: FUN_009ef750 */


ulonglong FUN_009ef750(undefined8 param_1,uint param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (((byte)((char)param_2 - 0x21U) < 9) || ((byte)((char)param_2 - 0x30U) < 0x48)) {
    if ((byte)((char)(param_3 & 0xffffffff) - 0x21U) < 0x5e) {
      iVar1 = ((param_2 & 0xff) - 0x21) * 0x5e + ((uint)param_3 & 0xff);
      uVar2 = iVar1 - 0x21;
      if (uVar2 < 0x33f) {
        uVar3 = (ulonglong)*(ushort *)(PTR_DAT_02001cd0 + (longlong)(int)uVar2 * 2);
      }
      else if (iVar1 - 0x5a3U < 0x1a70) {
        uVar3 = (ulonglong)*(ushort *)(PTR_DAT_02001f50 + (longlong)(iVar1 + -0x5a3) * 2);
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

