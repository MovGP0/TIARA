/* Ghidra address: 00f20140 */
/* Ghidra symbol: FUN_00f20140 */


int FUN_00f20140(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f)
            & 0x39U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_004168e0(local_20,*(undefined8 *)(param_1 + 8));
    iVar1 = FUN_01d31290(local_20[0]);
  }
  else {
    FUN_00415dd0(&local_28,*(undefined8 *)(param_1 + 8),0);
    iVar1 = FUN_01d31230(local_28);
  }
  iVar2 = FUN_01d31f80(*(undefined8 *)(param_1 + 0x18));
  iVar3 = FUN_01d31f80(*(undefined8 *)(param_1 + 0x20));
  FUN_004144d0(&local_28);
  FUN_00414520(local_20);
  return iVar1 + iVar2 + iVar3 + 4;
}

