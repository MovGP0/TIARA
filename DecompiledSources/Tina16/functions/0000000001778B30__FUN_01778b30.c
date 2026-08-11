/* Ghidra address: 01778b30 */
/* Ghidra symbol: FUN_01778b30 */


int FUN_01778b30(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_004168e0(local_20,*(undefined8 *)(param_1 + 0x10));
  iVar1 = FUN_01d31290(local_20[0]);
  FUN_004168e0(&local_28,*(undefined8 *)(param_1 + 0x18));
  iVar2 = FUN_01d31290(local_28);
  FUN_004168e0(&local_30,*(undefined8 *)(param_1 + 0x20));
  iVar3 = FUN_01d31290(local_30);
  FUN_004168e0(&local_38,*(undefined8 *)(param_1 + 0x28));
  iVar4 = FUN_01d31290(local_38);
  iVar1 = iVar1 + iVar2 + iVar3 + iVar4 + 4;
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f)
            & 0x21U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    iVar2 = FUN_01d321c0(*(undefined8 *)(param_1 + 0x30));
    iVar3 = FUN_01d321c0(*(undefined8 *)(param_1 + 0x38));
    iVar4 = FUN_01d321c0(*(undefined8 *)(param_1 + 0x40));
    iVar5 = FUN_01d321c0(*(undefined8 *)(param_1 + 0x48));
    iVar1 = iVar1 + iVar2 + iVar3 + iVar4 + iVar5;
  }
  FUN_004145c0(&local_38,4);
  return iVar1;
}

