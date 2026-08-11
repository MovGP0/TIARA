/* Ghidra address: 00f140e0 */
/* Ghidra symbol: FUN_00f140e0 */


void FUN_00f140e0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int extraout_var;
  int iVar5;
  int iVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  uVar2 = *param_3;
  local_40._0_4_ = **(int **)(param_1 + 0x50);
  local_48._4_4_ = (*(int **)(param_1 + 0x50))[1];
  iVar3 = 2;
  local_48._0_4_ = (int)local_40;
  local_40._4_4_ = local_48._4_4_;
  if (1 < *(int *)(param_1 + 0x48)) {
    iVar6 = *(int *)(param_1 + 0x48) + -1;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar3 * 8);
      iVar5 = iVar1;
      if ((int)local_48 < iVar1) {
        iVar5 = (int)local_48;
      }
      if ((int)local_40 <= iVar1) {
        local_40._0_4_ = iVar1;
      }
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar3 * 8);
      if (iVar1 <= local_48._4_4_) {
        local_48._4_4_ = iVar1;
      }
      if (local_40._4_4_ <= iVar1) {
        local_40._4_4_ = iVar1;
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + -1;
      local_48._0_4_ = iVar5;
    } while (iVar6 != 0);
  }
  local_30._0_4_ = (int)uVar2;
  local_30._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_40 = CONCAT44((local_40._4_4_ - local_48._4_4_) + local_30._4_4_,
                      ((int)local_40 - (int)local_48) + (int)local_30);
  local_48 = uVar2;
  local_30 = uVar2;
  lVar4 = FUN_00f13040(param_1);
  if (lVar4 != 0) {
    iVar3 = *(int *)(param_1 + 0x98);
    FUN_00498350(&local_58,(int)local_48 - iVar3,local_48._4_4_ - iVar3,(int)local_40 + iVar3,
                 local_40._4_4_ + iVar3);
    local_48 = local_58;
    local_40 = uStack_50;
  }
  FUN_01a8dcd0(param_2,&local_48,*(longlong *)(param_1 + 0x78) + 0x98);
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0xd0))(*(longlong **)(param_1 + 0xf0));
    iVar6 = *(int *)(param_1 + 200) + *(int *)(param_1 + 0xd0);
    local_38 = *(int *)(param_1 + 200);
    if (iVar6 <= *(int *)(param_1 + 200)) {
      local_38 = iVar6;
    }
    local_38 = (iVar3 + (int)local_30) - local_38;
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0xd0))(*(longlong **)(param_1 + 0xf0));
    iVar3 = *(int *)(param_1 + 0xcc) + *(int *)(param_1 + 0xd4);
    local_34 = *(int *)(param_1 + 0xcc);
    if (iVar3 <= *(int *)(param_1 + 0xcc)) {
      local_34 = iVar3;
    }
    local_34 = (extraout_var + local_30._4_4_) - local_34;
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0xd8))
              (*(longlong **)(param_1 + 0xf0),param_2,&local_38,param_4);
  }
  return;
}

