/* Ghidra address: 008ee080 */
/* Ghidra symbol: FUN_008ee080 */


ulonglong FUN_008ee080(undefined8 param_1,uint param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  byte bVar3;
  
  bVar3 = (byte)param_2;
  uVar1 = (ushort)(param_2 >> 0x10);
  if (bVar3 < 0x80) {
    uVar2 = (ulonglong)CONCAT22(uVar1,(ushort)bVar3);
  }
  else if (bVar3 == 0xd5) {
    uVar2 = CONCAT62((uint6)uVar1,0x20ac);
  }
  else {
    uVar2 = (ulonglong)*(ushort *)(&DAT_01e2b1ec + ((ulonglong)param_2 & 0xff) * 2);
  }
  return uVar2;
}

