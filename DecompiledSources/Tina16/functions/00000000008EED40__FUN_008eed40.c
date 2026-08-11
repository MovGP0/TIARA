/* Ghidra address: 008eed40 */
/* Ghidra symbol: FUN_008eed40 */


ulonglong FUN_008eed40(undefined8 param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  ulonglong uVar3;
  
  bVar2 = (byte)param_2;
  uVar1 = (ushort)((uint)param_2 >> 0x10);
  if (bVar2 < 0x80) {
    uVar3 = (ulonglong)CONCAT22(uVar1,(ushort)bVar2);
  }
  else if (bVar2 == 0x80) {
    uVar3 = CONCAT62((uint6)uVar1,0xa2);
  }
  else if (bVar2 == 0xfd) {
    uVar3 = CONCAT62((uint6)uVar1,0xac);
  }
  else if (bVar2 == 0xfe) {
    uVar3 = CONCAT62((uint6)uVar1,0xa6);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

