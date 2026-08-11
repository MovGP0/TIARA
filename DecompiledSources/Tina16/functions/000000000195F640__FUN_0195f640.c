/* Ghidra address: 0195f640 */
/* Ghidra symbol: FUN_0195f640 */


undefined8 FUN_0195f640(longlong param_1)

{
  uint uVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  bool bVar3;
  
  if (*(byte *)(param_1 + 0x340) < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_1 + 0x340) & 0x1f);
    bVar3 = (uVar1 & 1) != 0;
    uVar2 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar3);
  }
  else {
    uVar2 = 0;
    bVar3 = false;
  }
  return CONCAT71((int7)(uVar2 >> 8),!bVar3);
}

