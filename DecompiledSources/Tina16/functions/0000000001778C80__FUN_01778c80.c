/* Ghidra address: 01778c80 */
/* Ghidra symbol: FUN_01778c80 */


undefined8 FUN_01778c80(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  undefined6 uVar4;
  undefined8 uVar3;
  bool bVar5;
  
  if (*(byte *)(param_2 + 0x78) < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f);
    bVar5 = (uVar1 & 0x21) != 0;
    uVar2 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar5);
  }
  else {
    uVar2 = 0;
    bVar5 = false;
  }
  uVar4 = (undefined6)(uVar2 >> 0x10);
  if (bVar5) {
    uVar3 = CONCAT62(uVar4,0x11);
  }
  else {
    uVar3 = CONCAT62(uVar4,0x10);
  }
  return uVar3;
}

