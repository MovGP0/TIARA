/* Ghidra address: 009f0020 */
/* Ghidra symbol: FUN_009f0020 */


ulonglong FUN_009f0020(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  ulonglong uVar3;
  
  bVar2 = (byte)param_2;
  uVar1 = (ushort)((uint)param_2 >> 0x10);
  if (bVar2 < 0xa1) {
    uVar3 = (ulonglong)CONCAT22(uVar1,(ushort)bVar2);
  }
  else if (((byte)(bVar2 + 0x5f) < 0x3a) || ((byte)(bVar2 + 0x21) < 0x1d)) {
    uVar3 = (ulonglong)CONCAT22(uVar1,bVar2 + 0xd60);
  }
  else {
    uVar3 = CONCAT62((uint6)uVar1,0xfffd);
  }
  return uVar3;
}

