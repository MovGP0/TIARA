/* Ghidra address: 0096e990 */
/* Ghidra symbol: FUN_0096e990 */


undefined8 FUN_0096e990(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar1 = *(byte *)(param_1 + 0x50);
  if (bVar1 < 0xa0) {
    bVar3 = ((byte)(&DAT_01e32918)[(longlong)(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    uVar2 = 2;
  }
  else {
    if (bVar1 < 0xa0) {
      bVar3 = ((byte)(&DAT_01e32904)[(longlong)(int)(uint)bVar1 >> 3] >> (bVar1 & 7) & 1) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

