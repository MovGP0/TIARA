/* Ghidra address: 009efb80 */
/* Ghidra symbol: FUN_009efb80 */


ulonglong FUN_009efb80(undefined8 param_1,uint param_2,ulonglong param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  
  cVar1 = (char)param_2;
  if ((((cVar1 == '\"') || ((byte)(cVar1 - 0x26U) < 2)) || ((byte)(cVar1 - 0x29U) < 3)) ||
     ((byte)(cVar1 - 0x30U) < 0x3e)) {
    if ((byte)((char)(param_3 & 0xffffffff) - 0x21U) < 0x5e) {
      iVar2 = ((param_2 & 0xff) - 0x21) * 0x5e + ((uint)param_3 & 0xff);
      if (iVar2 - 0x21U < 0xaf) {
        uVar3 = (ulonglong)*(ushort *)(PTR_DAT_02004d58 + (longlong)(iVar2 + -0x7f) * 2);
      }
      else if (iVar2 - 0x1f7U < 0xbc) {
        uVar3 = (ulonglong)*(ushort *)(PTR_DAT_02005080 + (longlong)(iVar2 + -0x1f7) * 2);
      }
      else if (iVar2 - 0x311U < 0x113) {
        uVar3 = (ulonglong)*(ushort *)(PTR_DAT_02003808 + (longlong)(iVar2 + -0x311) * 2);
      }
      else if (iVar2 - 0x5a3U < 0x16a9) {
        uVar3 = (ulonglong)*(ushort *)(PTR_DAT_020024e0 + (longlong)(iVar2 + -0x5a3) * 2);
      }
      else {
        uVar3 = CONCAT62((uint6)(ushort)(iVar2 - 0x21U >> 0x10),0xfffd);
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

