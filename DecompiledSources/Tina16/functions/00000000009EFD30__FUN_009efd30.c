/* Ghidra address: 009efd30 */
/* Ghidra symbol: FUN_009efd30 */


ulonglong FUN_009efd30(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  byte bVar3;
  ulonglong uVar4;
  
  bVar3 = (byte)param_2;
  uVar1 = param_2;
  if ((bVar3 < 0xa1) ||
     (uVar1 = CONCAT31((int3)((uint)param_2 >> 8),bVar3 + 0x53), (byte)(bVar3 + 0x53) == '\0')) {
    uVar4 = (ulonglong)CONCAT22((short)((uint)uVar1 >> 0x10),(ushort)bVar3);
  }
  else {
    uVar2 = (ushort)((uint)param_2 >> 0x10);
    if (bVar3 == 0xf0) {
      uVar4 = CONCAT62((uint6)uVar2,0x2116);
    }
    else if (bVar3 == 0xfd) {
      uVar4 = CONCAT62((uint6)uVar2,0xa7);
    }
    else {
      uVar4 = (ulonglong)CONCAT22(uVar2,bVar3 + 0x360);
    }
  }
  return uVar4;
}

