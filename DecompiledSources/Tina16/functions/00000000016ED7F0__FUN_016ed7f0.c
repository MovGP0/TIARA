/* Ghidra address: 016ed7f0 */
/* Ghidra symbol: FUN_016ed7f0 */


undefined8 FUN_016ed7f0(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  
  bVar1 = (char)param_2 - 8;
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar3 = *(undefined8 *)(param_1 + 0x3a0);
  }
  else {
    uVar3 = 0x3ff0000000000000;
  }
  return uVar3;
}

