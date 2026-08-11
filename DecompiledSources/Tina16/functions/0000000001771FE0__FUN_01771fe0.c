/* Ghidra address: 01771fe0 */
/* Ghidra symbol: FUN_01771fe0 */


undefined8 FUN_01771fe0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar1 = *(byte *)(param_2 + 0x78);
  if (bVar1 == 0) {
    uVar2 = 0x3f;
  }
  else {
    if (bVar1 < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0x30U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = 0x3e;
    }
    else if (bVar1 == 3) {
      uVar2 = 0x3c;
    }
    else if (bVar1 == 2) {
      uVar2 = 0x34;
    }
    else {
      uVar2 = 0x2d;
    }
  }
  return uVar2;
}

