/* Ghidra address: 017c06f0 */
/* Ghidra symbol: FUN_017c06f0 */


undefined8 FUN_017c06f0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined6 uVar5;
  bool bVar6;
  
  bVar1 = *(byte *)(param_2 + 0x78);
  if (bVar1 == 0) {
    uVar3 = 0x18;
  }
  else {
    if (bVar1 < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0x30U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      uVar3 = 0x17;
    }
    else {
      if (bVar1 < 8) {
        uVar2 = 1 << (bVar1 & 0x1f);
        bVar6 = (uVar2 & 0xc) != 0;
        uVar4 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar6);
      }
      else {
        uVar4 = 0;
        bVar6 = false;
      }
      uVar5 = (undefined6)(uVar4 >> 0x10);
      if (bVar6) {
        uVar3 = CONCAT62(uVar5,0x16);
      }
      else {
        uVar3 = CONCAT62(uVar5,0x15);
      }
    }
  }
  return uVar3;
}

