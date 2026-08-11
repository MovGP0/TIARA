/* Ghidra address: 01ce2130 */
/* Ghidra symbol: FUN_01ce2130 */


void FUN_01ce2130(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  if (iVar1 < 1) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 < *param_2) {
      iVar1 = *param_2;
    }
    *param_2 = iVar1;
    iVar1 = *(int *)(param_1 + 0x1c);
    if (*param_2 < iVar1) {
      iVar1 = *param_2;
    }
    *param_2 = iVar1;
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 < *param_3) {
      iVar1 = *param_3;
    }
    *param_3 = iVar1;
    iVar1 = *(int *)(param_1 + 0x20);
    if (*param_3 < iVar1) {
      iVar1 = *param_3;
    }
    *param_3 = iVar1;
  }
  else {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))(*(longlong **)(param_1 + 0x80),0);
    local_48 = *(undefined8 *)(lVar4 + 0x14);
    local_40 = *(undefined8 *)(lVar4 + 0x1c);
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
    iVar5 = 2;
    if (1 < iVar1) {
      iVar1 = iVar1 + -1;
      do {
        iVar6 = iVar5 + -1;
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar6);
        iVar2 = *(int *)(lVar4 + 0x14);
        if ((int)local_48 < *(int *)(lVar4 + 0x14)) {
          iVar2 = (int)local_48;
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar6);
        iVar3 = *(int *)(lVar4 + 0x18);
        if (local_48._4_4_ < *(int *)(lVar4 + 0x18)) {
          iVar3 = local_48._4_4_;
        }
        local_48 = CONCAT44(iVar3,iVar2);
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar6);
        iVar2 = *(int *)(lVar4 + 0x1c);
        if (*(int *)(lVar4 + 0x1c) < (int)local_40) {
          iVar2 = (int)local_40;
        }
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar6);
        iVar6 = *(int *)(lVar4 + 0x20);
        if (*(int *)(lVar4 + 0x20) < local_40._4_4_) {
          iVar6 = local_40._4_4_;
        }
        local_40 = CONCAT44(iVar6,iVar2);
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = (int)local_48;
    if ((int)local_48 < *param_2) {
      iVar1 = *param_2;
    }
    *param_2 = iVar1;
    iVar1 = (int)local_40;
    if (*param_2 < (int)local_40) {
      iVar1 = *param_2;
    }
    *param_2 = iVar1;
    if (local_48._4_4_ < *param_3) {
      local_48._4_4_ = *param_3;
    }
    *param_3 = local_48._4_4_;
    if (*param_3 < local_40._4_4_) {
      local_40._4_4_ = *param_3;
    }
    *param_3 = local_40._4_4_;
  }
  return;
}

