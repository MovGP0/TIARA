/* Ghidra address: 017bce00 */
/* Ghidra symbol: FUN_017bce00 */


undefined8 FUN_017bce00(longlong param_1,longlong param_2)

{
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined8 uVar1;
  bool bVar3;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  if (*(short *)(param_1 + 0x2d8) < 0) {
    if (*(byte *)(param_2 + 0x78) < 8) {
      bVar3 = ((int)CONCAT71(uVar2,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar1 = 0x12;
    }
    else {
      uVar1 = 0x11;
    }
  }
  else {
    if (*(byte *)(param_2 + 0x78) < 8) {
      bVar3 = ((int)CONCAT71(uVar2,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar1 = 0x11;
    }
    else {
      uVar1 = 0x10;
    }
  }
  return uVar1;
}

