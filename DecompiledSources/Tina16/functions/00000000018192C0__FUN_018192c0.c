/* Ghidra address: 018192c0 */
/* Ghidra symbol: FUN_018192c0 */


undefined8 FUN_018192c0(byte param_1)

{
  uint uVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  undefined7 uVar4;
  undefined8 uVar3;
  bool bVar5;
  
  if (param_1 < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_1 & 0x1f);
    bVar5 = (uVar1 & 0x18) != 0;
    uVar2 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar5);
  }
  else {
    uVar2 = 0;
    bVar5 = false;
  }
  uVar4 = (undefined7)(uVar2 >> 8);
  if (bVar5) {
    uVar3 = CONCAT71(uVar4,1);
  }
  else {
    uVar3 = CONCAT71(uVar4,3);
  }
  return uVar3;
}

