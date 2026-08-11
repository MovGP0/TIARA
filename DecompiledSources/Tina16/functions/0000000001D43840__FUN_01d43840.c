/* Ghidra address: 01d43840 */
/* Ghidra symbol: FUN_01d43840 */


undefined8 FUN_01d43840(ulonglong param_1)

{
  undefined8 uVar1;
  undefined7 uVar2;
  ushort uVar3;
  bool bVar4;
  
  uVar3 = (short)param_1 - 0x50;
  if (uVar3 < 0x40) {
    bVar4 = (1L << ((byte)uVar3 & 0x3f) & 0x8000000080U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    uVar1 = CONCAT71((int7)((param_1 & 0xffffffff) >> 8),1);
  }
  else {
    uVar3 = (short)(param_1 & 0xffffffff) - 0x40;
    if (uVar3 < 0x40) {
      bVar4 = (1L << ((byte)uVar3 & 0x3f) & 0x2000000020U) != 0;
      uVar2 = 0x20000000;
    }
    else {
      bVar4 = false;
      uVar2 = 0;
    }
    if (bVar4) {
      uVar1 = CONCAT71(uVar2,2);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

