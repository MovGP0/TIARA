/* Ghidra address: 01474820 */
/* Ghidra symbol: FUN_01474820 */


undefined8 FUN_01474820(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined6 uVar5;
  bool bVar6;
  
  bVar1 = *(byte *)(param_2 + 0x78);
  if (bVar1 == 0) {
    uVar3 = 0x15;
  }
  else if (bVar1 == 5) {
    uVar3 = 0x14;
  }
  else {
    if (bVar1 < 8) {
      uVar2 = 1 << (bVar1 & 0x1f);
      bVar6 = (uVar2 & 0x18) != 0;
      uVar4 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar6);
    }
    else {
      uVar4 = 0;
      bVar6 = false;
    }
    uVar5 = (undefined6)(uVar4 >> 0x10);
    if (bVar6) {
      uVar3 = CONCAT62(uVar5,0x13);
    }
    else {
      uVar3 = CONCAT62(uVar5,0x12);
    }
  }
  return uVar3;
}

