/* Ghidra address: 01474870 */
/* Ghidra symbol: FUN_01474870 */


int FUN_01474870(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined7 uVar3;
  bool bVar4;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (*(char *)(param_2 + 0x78) == '\0') {
    iVar1 = FUN_01d322a0(*(undefined8 *)(param_1 + 0x18));
    iVar2 = FUN_01d322a0(*(undefined8 *)(param_1 + 8));
    iVar1 = iVar1 + iVar2;
  }
  else {
    iVar1 = FUN_01d31f80(*(undefined8 *)(param_1 + 0x18));
    iVar2 = FUN_01d31f80(*(undefined8 *)(param_1 + 8));
    iVar1 = iVar1 + iVar2;
  }
  uVar3 = (undefined7)((ulonglong)param_2 >> 8);
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar4 = ((int)CONCAT71(uVar3,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_004168e0(local_20,*(undefined8 *)(param_1 + 0x20));
    iVar2 = FUN_01d31290(local_20[0]);
  }
  else {
    iVar2 = FUN_01d31350(*(undefined8 *)(param_1 + 0x20));
  }
  iVar1 = iVar1 + iVar2 + 1;
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar4 = ((int)CONCAT71(uVar3,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    iVar2 = FUN_01d322a0(*(undefined8 *)(param_1 + 0x10));
    iVar1 = iVar1 + iVar2;
  }
  if (*(char *)(param_2 + 0x78) == '\0') {
    FUN_004168e0(&local_28,*(undefined8 *)(param_1 + 0x50));
    iVar2 = FUN_01d31290(local_28);
    iVar1 = iVar1 + iVar2;
  }
  FUN_004145c0(&local_28,2);
  return iVar1;
}

