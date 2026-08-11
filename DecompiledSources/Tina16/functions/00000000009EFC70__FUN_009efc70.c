/* Ghidra address: 009efc70 */
/* Ghidra symbol: FUN_009efc70 */


ulonglong FUN_009efc70(undefined8 param_1,uint param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  cVar1 = (char)param_2;
  if ((((byte)(cVar1 - 0x21U) < 0xc) || ((byte)(cVar1 - 0x30U) < 0x19)) ||
     ((byte)(cVar1 + 0xb6U) < 0x34)) {
    if ((byte)((char)(param_3 & 0xffffffff) - 0x21U) < 0x5e) {
      iVar2 = ((param_2 & 0xff) - 0x21) * 0x5e + ((uint)param_3 & 0xff);
      uVar3 = iVar2 - 0x21;
      if (uVar3 < 0x45b) {
        uVar4 = (ulonglong)*(ushort *)(PTR_DAT_02002ca8 + (longlong)(int)uVar3 * 2);
      }
      else if (iVar2 - 0x5a3U < 0x92e) {
        uVar4 = (ulonglong)*(ushort *)(PTR_DAT_02002f80 + (longlong)(iVar2 + -0x5a3) * 2);
      }
      else if (iVar2 - 0xf2fU < 0x1318) {
        uVar4 = (ulonglong)*(ushort *)(PTR_DAT_02001608 + (longlong)(iVar2 + -0xf2f) * 2);
      }
      else {
        uVar4 = CONCAT62((uint6)(ushort)(uVar3 >> 0x10),0xfffd);
      }
    }
    else {
      uVar4 = CONCAT62((int6)((param_3 & 0xffffffff) >> 0x10),0xfffd);
    }
  }
  else {
    uVar4 = CONCAT62((uint6)(ushort)(param_2 >> 0x10),0xfffd);
  }
  return uVar4;
}

