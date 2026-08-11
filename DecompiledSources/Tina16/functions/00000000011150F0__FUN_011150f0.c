/* Ghidra address: 011150f0 */
/* Ghidra symbol: FUN_011150f0 */


void FUN_011150f0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = FUN_00bf19b0(param_1,*(undefined2 *)(param_2 + 0x10),*(undefined2 *)(param_2 + 0x12)
                            );
  uVar2 = FUN_00c0ee50(param_1,local_30);
  local_20._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_20._0_4_ = (int)uVar2;
  local_20 = CONCAT44(local_20._4_4_ + -1,(int)local_20);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
  if (local_20._4_4_ < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
              (*(longlong **)(param_1 + 0x4e8),&local_38,local_20._4_4_);
    iVar1 = 0;
    if (local_38 != 0) {
      iVar1 = *(int *)(local_38 + -4);
    }
    if (iVar1 < (int)local_20) {
      (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                (*(longlong **)(param_1 + 0x4e8),&local_40,local_20._4_4_);
      iVar1 = 0;
      if (local_40 != 0) {
        iVar1 = *(int *)(local_40 + -4);
      }
      local_20 = CONCAT44(local_20._4_4_,iVar1 + 1);
    }
  }
  else {
    local_20 = CONCAT44(local_20._4_4_,1);
  }
  iVar1 = local_20._4_4_;
  uVar2 = local_20;
  while (local_20 = uVar2, 0 < iVar1) {
    iVar1 = iVar1 + -1;
    (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
              (*(longlong **)(param_1 + 0x4e8),&local_48,iVar1);
    iVar3 = 0;
    if (local_48 != 0) {
      iVar3 = *(int *)(local_48 + -4);
    }
    local_20 = CONCAT44(local_20._4_4_,(int)local_20 + iVar3 + 2);
    uVar2 = local_20;
  }
  local_20._4_2_ = (undefined2)((ulonglong)uVar2 >> 0x20);
  local_20._0_2_ = (undefined2)uVar2;
  *(ulonglong *)(param_2 + 0x18) = (ulonglong)CONCAT22(local_20._4_2_,(undefined2)local_20);
  FUN_00414560(&local_48,3);
  return;
}

