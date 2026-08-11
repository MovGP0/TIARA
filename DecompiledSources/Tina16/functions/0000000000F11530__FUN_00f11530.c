/* Ghidra address: 00f11530 */
/* Ghidra symbol: FUN_00f11530 */


void FUN_00f11530(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  
  local_40 = *param_3;
  local_50 = **(int **)(param_1 + 0x50);
  local_4c = (*(int **)(param_1 + 0x50))[1];
  iVar1 = 2;
  local_48 = local_50;
  local_44 = local_4c;
  if (1 < *(int *)(param_1 + 0x48)) {
    iVar3 = *(int *)(param_1 + 0x48) + -1;
    do {
      lVar2 = (longlong)iVar1;
      local_50 = FUN_00b905f0(local_50,*(undefined4 *)
                                        (*(longlong *)(param_1 + 0x50) + -8 + lVar2 * 8));
      local_48 = FUN_00b905e0(local_48,*(undefined4 *)
                                        (*(longlong *)(param_1 + 0x50) + -8 + lVar2 * 8));
      local_4c = FUN_00b905f0(local_4c,*(undefined4 *)
                                        (*(longlong *)(param_1 + 0x50) + -4 + lVar2 * 8));
      local_44 = FUN_00b905e0(local_44,*(undefined4 *)
                                        (*(longlong *)(param_1 + 0x50) + -4 + lVar2 * 8));
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_48 = (local_48 - local_50) + (int)local_40;
  local_44 = (local_44 - local_4c) + local_40._4_4_;
  local_50 = (int)local_40;
  local_4c = local_40._4_4_;
  FUN_01a8dcd0(param_2,&local_50,*(longlong *)(param_1 + 0x78) + 0x98);
  return;
}

