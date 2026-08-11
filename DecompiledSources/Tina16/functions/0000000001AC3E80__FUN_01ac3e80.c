/* Ghidra address: 01ac3e80 */
/* Ghidra symbol: FUN_01ac3e80 */


void FUN_01ac3e80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  int extraout_var_02;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (((*PTR_DAT_02001b68 == '\0') && (*PTR_DAT_02002df8 == '\0')) && (*PTR_DAT_02002478 == '\0')) {
    FUN_01ac1cf0(param_1,param_3,1);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      if (*(longlong *)(param_1 + 0x50) != 0) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
        lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
        iVar2 = FUN_004230d0(&local_38);
        local_38 = (*(int *)(lVar3 + 0xe8) - iVar2 / 2) + 5;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x78);
        lVar3 = (**(code **)(*plVar1 + 0x30))
                          (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x94));
        FUN_004230d0(&local_38);
        FUN_004230d0(&local_38);
        local_34 = (*(int *)(lVar3 + 0xec) - extraout_var_01) - extraout_var_02 / 2;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
        lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
        iVar2 = FUN_004230d0(&local_38);
        local_30 = *(int *)(lVar3 + 0xec) + iVar2 / 2;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x78);
        lVar3 = (**(code **)(*plVar1 + 0x30))
                          (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x94));
        local_2c = *(int *)(lVar3 + 0xec) + -6;
      }
    }
    else {
      lVar3 = FUN_01abd500(*(longlong *)(param_1 + 0x58));
      iVar2 = FUN_004230d0(&local_38);
      local_38 = (*(int *)(lVar3 + 0xe8) - iVar2 / 2) + 5;
      lVar3 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58),(longlong)iVar2 % 2 & 0xffffffff);
      FUN_004230d0(&local_38);
      FUN_004230d0(&local_38);
      local_34 = (*(int *)(lVar3 + 0xec) - extraout_var) - extraout_var_00 / 2;
      lVar3 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58),extraout_var_00 % 2);
      iVar2 = FUN_004230d0(&local_38);
      local_30 = *(int *)(lVar3 + 0xec) + iVar2 / 2;
      lVar3 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58),(longlong)iVar2 % 2 & 0xffffffff);
      local_2c = *(int *)(lVar3 + 0xec) + -6;
    }
    FUN_01a8dcd0(param_2,&local_38,*(longlong *)(param_1 + 0x98) + 0x98);
  }
  return;
}

