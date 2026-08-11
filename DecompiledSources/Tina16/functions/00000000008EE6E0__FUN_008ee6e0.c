/* Ghidra address: 008ee6e0 */
/* Ghidra symbol: FUN_008ee6e0 */


ulonglong FUN_008ee6e0(undefined8 param_1,uint param_2)

{
  ushort uVar1;
  uint6 uVar3;
  ulonglong uVar2;
  byte bVar4;
  
  bVar4 = (byte)param_2;
  uVar1 = (ushort)(param_2 >> 0x10);
  uVar3 = (uint6)uVar1;
  if (bVar4 < 0x80) {
    uVar2 = (ulonglong)CONCAT22(uVar1,(ushort)bVar4);
  }
  else if (bVar4 == 0x87) {
    uVar2 = CONCAT62(uVar3,0x87);
  }
  else if (bVar4 == 0x93) {
    uVar2 = CONCAT62(uVar3,0x93);
  }
  else if (bVar4 == 0x94) {
    uVar2 = CONCAT62(uVar3,0x94);
  }
  else {
    uVar2 = (ulonglong)*(ushort *)(&DAT_01e2c0a2 + ((ulonglong)param_2 & 0xff) * 2);
  }
  return uVar2;
}

