/* Ghidra address: 009f1a10 */
/* Ghidra symbol: FUN_009f1a10 */


ulonglong FUN_009f1a10(undefined8 param_1,uint param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  sVar1 = (short)param_2;
  if ((((ushort)(sVar1 - 0x21U) < 7) || (sVar1 == 0x42)) || ((ushort)(sVar1 - 0x44U) < 0x3a)) {
    if ((ushort)((short)param_3 - 0x21U) < 0x5e) {
      iVar2 = ((param_2 & 0xffff) - 0x21) * 0x5e + (param_3 & 0xffff);
      uVar3 = iVar2 - 0x21;
      if ((int)uVar3 < 0x248) {
        if (uVar3 == 0x247) {
          return 0x52f9;
        }
        if (uVar3 < 500) {
          return (ulonglong)*(ushort *)(PTR_DAT_02005b38 + (longlong)(int)uVar3 * 2);
        }
        if (iVar2 == 0x25c) {
          return 0x4ea0;
        }
        if (iVar2 == 0x263) {
          return 0x51ab;
        }
      }
      else {
        if (iVar2 - 0xc3fU < 0x21) {
          return (ulonglong)*(ushort *)(PTR_DAT_020011e8 + (longlong)(iVar2 + -0xc3f) * 2);
        }
        if (iVar2 - 0xcfbU < 0x1519) {
          return (ulonglong)*(ushort *)(PTR_DAT_02004488 + (longlong)(iVar2 + -0xcfb) * 2);
        }
      }
      uVar4 = CONCAT62((uint6)(ushort)(uVar3 >> 0x10),0xfffd);
    }
    else {
      uVar4 = CONCAT62((uint6)(ushort)(param_3 >> 0x10),0xfffd);
    }
  }
  else {
    uVar4 = CONCAT62((uint6)(ushort)(param_2 >> 0x10),0xfffd);
  }
  return uVar4;
}

