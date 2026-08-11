/* Ghidra address: 005d2d40 */
/* Ghidra symbol: FUN_005d2d40 */


undefined4 FUN_005d2d40(byte param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  
  if (param_1 < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_1 & 0x1f);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 & 6) != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

