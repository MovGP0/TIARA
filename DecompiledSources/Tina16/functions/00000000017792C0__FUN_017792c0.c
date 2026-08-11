/* Ghidra address: 017792c0 */
/* Ghidra symbol: FUN_017792c0 */


int FUN_017792c0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_004168e0(local_20,*(undefined8 *)(param_1 + 0x10));
  iVar1 = FUN_01d31290(local_20[0]);
  FUN_004168e0(&local_28,*(undefined8 *)(param_1 + 0x18));
  iVar2 = FUN_01d31290(local_28);
  FUN_004168e0(&local_30,*(undefined8 *)(param_1 + 0x20));
  iVar3 = FUN_01d31290(local_30);
  FUN_004145c0(&local_30,3);
  return iVar1 + iVar2 + iVar3 + 4;
}

