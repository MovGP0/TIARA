/* Ghidra address: 006fa860 */
/* Ghidra symbol: FUN_006fa860 */


undefined4 FUN_006fa860(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  
  if (*(byte *)(param_1 + 0x33a) < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_1 + 0x33a) & 0x1f);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0x18) != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

