/* Ghidra address: 01ac40e0 */
/* Ghidra symbol: FUN_01ac40e0 */


void FUN_01ac40e0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  int extraout_var_02;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  local_30 = *param_3;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
      iVar2 = FUN_004230d0(&local_40);
      iVar3 = FUN_004230d0(&local_40);
      local_40 = (*(int *)(lVar4 + 0xe8) - iVar2 / 2) + iVar3 * -3;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x78);
      lVar4 = (**(code **)(*plVar1 + 0x30))
                        (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x94));
      FUN_004230d0(&local_40);
      FUN_004230d0(&local_40);
      local_3c = (*(int *)(lVar4 + 0xec) - extraout_var_01) - extraout_var_02 / 2;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
      lVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
      iVar2 = FUN_004230d0(&local_40);
      iVar3 = FUN_004230d0(&local_40);
      local_38 = *(int *)(lVar4 + 0xec) + iVar2 / 2 + iVar3 * 3;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x78);
      lVar4 = (**(code **)(*plVar1 + 0x30))
                        (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x94));
      local_34 = *(undefined4 *)(lVar4 + 0xec);
    }
  }
  else {
    lVar4 = FUN_01abd500(*(longlong *)(param_1 + 0x58));
    iVar2 = FUN_004230d0(&local_40);
    iVar3 = FUN_004230d0(&local_40);
    local_40 = (*(int *)(lVar4 + 0xe8) - iVar2 / 2) + iVar3 * -3;
    lVar4 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
    FUN_004230d0(&local_40);
    FUN_004230d0(&local_40);
    local_3c = (*(int *)(lVar4 + 0xec) - extraout_var) - extraout_var_00 / 2;
    lVar4 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58),extraout_var_00 % 2);
    iVar2 = FUN_004230d0(&local_40);
    iVar3 = FUN_004230d0(&local_40);
    local_38 = *(int *)(lVar4 + 0xec) + iVar2 / 2 + iVar3 * 3;
    lVar4 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
    local_34 = *(undefined4 *)(lVar4 + 0xec);
  }
  FUN_01a8dcd0(param_2,&local_40,*(longlong *)(param_1 + 0x98) + 0x98);
  return;
}

