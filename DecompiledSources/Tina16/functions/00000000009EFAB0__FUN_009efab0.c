/* Ghidra address: 009efab0 */
/* Ghidra symbol: FUN_009efab0 */


ulonglong FUN_009efab0(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  ulonglong uVar3;
  
  bVar2 = (byte)param_2;
  uVar1 = (ushort)((uint)param_2 >> 0x10);
  if (bVar2 == 0x5c) {
    uVar3 = CONCAT62((uint6)uVar1,0xa5);
  }
  else if (bVar2 == 0x7e) {
    uVar3 = CONCAT62((uint6)uVar1,0x203e);
  }
  else if ((byte)(bVar2 + 0x5f) < 0x3f) {
    uVar3 = (ulonglong)CONCAT22(uVar1,bVar2 - 0x140);
  }
  else {
    uVar3 = CONCAT62((uint6)uVar1,0xfffd);
  }
  return uVar3;
}

