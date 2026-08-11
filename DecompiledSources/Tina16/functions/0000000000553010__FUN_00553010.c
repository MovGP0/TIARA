/* Ghidra address: 00553010 */
/* Ghidra symbol: FUN_00553010 */


undefined8 FUN_00553010(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((byte)uVar2 < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << ((byte)uVar2 & 0x1f);
    bVar4 = (uVar1 & 3) != 0;
    uVar3 = (ulonglong)CONCAT31((int3)(uVar1 >> 8),bVar4);
  }
  else {
    uVar3 = 0;
    bVar4 = false;
  }
  return CONCAT71((int7)(uVar3 >> 8),!bVar4);
}

