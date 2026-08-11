/* Ghidra address: 00cb6460 */
/* Ghidra symbol: FUN_00cb6460 */


undefined4 FUN_00cb6460(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  
  if (*(byte *)(param_1 + 0x119) < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_1 + 0x119) & 0x1f);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0xe) != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

