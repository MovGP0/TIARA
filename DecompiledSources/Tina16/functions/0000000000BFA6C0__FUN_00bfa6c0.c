/* Ghidra address: 00bfa6c0 */
/* Ghidra symbol: FUN_00bfa6c0 */


void FUN_00bfa6c0(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = *param_2;
  FUN_00c086e0(param_1,*(undefined1 *)(param_1 + 0x5f4));
  uVar6 = FUN_00c09df0(param_1);
  if ((uVar6 & 0x2000) != 0) goto code_r0x00bfa912;
  uVar6 = FUN_00c09df0(param_1);
  if ((uVar6 & 0x40000) == 0) {
LAB_00bfa745:
    iVar3 = (int)local_20;
    if ((int)local_20 < 2) {
      iVar3 = 1;
    }
    local_20._0_4_ = iVar3;
  }
  else {
    cVar2 = FUN_00c10e70(param_1);
    if (cVar2 != '\0') goto LAB_00bfa745;
    iVar3 = FUN_00bcbe50(local_20 & 0xffffffff,1,*(int *)(param_1 + 0x510) + 1);
    local_20._0_4_ = iVar3;
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
  iVar3 = FUN_00bcbe50(local_20._4_4_,1,uVar4);
  local_20 = CONCAT44(iVar3,(int)local_20);
  if (*(char *)(param_1 + 0x5f5) == '\0') {
    if (0 < iVar3) {
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8));
      if (iVar3 <= iVar5) {
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                  (*(longlong **)(param_1 + 0x4e8),local_30,local_20._4_4_ + -1);
        iVar3 = 0;
        if (local_30[0] != 0) {
          iVar3 = *(int *)(local_30[0] + -4);
        }
        iVar5 = (int)local_20;
        if (iVar3 + 1 <= (int)local_20) {
          iVar5 = iVar3 + 1;
        }
        local_20 = CONCAT44(local_20._4_4_,iVar5);
        goto LAB_00bfa7ef;
      }
    }
    local_20 = CONCAT44(local_20._4_4_,1);
  }
LAB_00bfa7ef:
  if ((((int)local_20 != *(int *)(param_1 + 0x4bc)) || (local_20._4_4_ != *(int *)(param_1 + 0x4c0))
      ) && (((int)local_20 != *(int *)(param_1 + 0x4bc) ||
            (local_20._4_4_ != *(int *)(param_1 + 0x4c0))))) {
    if ((*(char *)(param_1 + 0x5f5) == '\x02') && ((int)local_20 != *(int *)(param_1 + 0x4bc))) {
      iVar3 = *(int *)(param_1 + 0x4c0);
      iVar5 = iVar3;
      if (local_20._4_4_ <= iVar3) {
        iVar5 = local_20._4_4_;
      }
      iVar1 = *(int *)(param_1 + 0x4b8);
      if (iVar1 < iVar5) {
        iVar5 = iVar1;
      }
      if (iVar3 <= local_20._4_4_) {
        iVar3 = local_20._4_4_;
      }
      if (iVar3 < iVar1) {
        iVar3 = iVar1;
      }
      FUN_00bf3990(param_1,iVar5,iVar3);
      *(ulonglong *)(param_1 + 0x4bc) = local_20;
    }
    else {
      *(ulonglong *)(param_1 + 0x4bc) = local_20;
      if ((*(char *)(param_1 + 0x5f5) != '\x02') ||
         (*(int *)(param_1 + 0x4b4) != *(int *)(param_1 + 0x4bc))) {
        FUN_00bf3990(param_1,*(undefined4 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4c0));
      }
    }
    FUN_00c0a950(param_1,0x80);
  }
code_r0x00bfa912:
  FUN_00414480(local_30);
  return;
}

