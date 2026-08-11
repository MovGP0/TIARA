/* Ghidra address: 00bfac30 */
/* Ghidra symbol: FUN_00bfac30 */


void FUN_00bfac30(longlong *param_1,char param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  int local_34;
  longlong local_30;
  char local_25;
  int local_24;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_20 = *param_3;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  local_25 = FUN_0065be20(param_1);
  if (local_25 != '\0') {
    (**(code **)(*param_1 + 0x2f8))(param_1,0);
  }
  cVar1 = FUN_00c10e70(param_1);
  if (cVar1 == '\0') {
    local_24 = (int)param_1[0xa2] + 1;
  }
  else {
    local_24 = 0x7fffffff;
  }
  iVar2 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
  if (iVar2 < local_20._4_4_) {
    uVar3 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
    local_20 = CONCAT44(uVar3,(int)local_20);
  }
  if (local_20._4_4_ < 1) {
    local_20 = CONCAT44(1,(int)local_20);
    if ((*(uint *)((longlong)param_1 + 0x63a) & 0x40000) == 0) {
      local_24 = 1;
    }
  }
  else if ((*(uint *)((longlong)param_1 + 0x63a) & 0x40000) == 0) {
    (**(code **)(*(longlong *)param_1[0x9d] + 0x18))
              ((longlong *)param_1[0x9d],&local_48,local_20._4_4_ + -1);
    local_30 = local_48;
    local_34 = 0;
    if (local_48 != 0) {
      local_34 = *(int *)(local_48 + -4);
    }
    local_24 = local_34 + 1;
  }
  if (local_24 < (int)local_20) {
    uVar4 = FUN_00c09df0(param_1);
    if ((uVar4 & 0x40000) != 0) {
      uVar4 = FUN_00c09df0(param_1);
      if ((uVar4 & 4) != 0) goto LAB_00bfad91;
    }
    local_20 = CONCAT44(local_20._4_4_,local_24);
  }
LAB_00bfad91:
  if ((int)local_20 < 1) {
    local_20 = CONCAT44(local_20._4_4_,1);
  }
  if (((int)local_20 == *(int *)((longlong)param_1 + 0x4c4)) &&
     (local_20._4_4_ == *(int *)((longlong)param_1 + 0x4cc))) {
    FUN_00bfac10(param_1);
  }
  else {
    FUN_00bf3750(param_1);
    if (*(int *)((longlong)param_1 + 0x4c4) != (int)local_20) {
      *(int *)((longlong)param_1 + 0x4c4) = (int)local_20;
      *(ushort *)((longlong)param_1 + 0x63e) = *(ushort *)((longlong)param_1 + 0x63e) | 2;
    }
    if (*(int *)((longlong)param_1 + 0x4cc) != local_20._4_4_) {
      if ((int)param_1[0xa9] != 0x1fffffff) {
        FUN_00c0dc30(param_1,local_20._4_4_);
        FUN_00c0dc30(param_1,*(undefined4 *)((longlong)param_1 + 0x4cc));
      }
      *(int *)((longlong)param_1 + 0x4cc) = local_20._4_4_;
      *(ushort *)((longlong)param_1 + 0x63e) = *(ushort *)((longlong)param_1 + 0x63e) | 4;
      FUN_00c00c30(param_1,*(undefined4 *)((longlong)param_1 + 0x4cc));
    }
    FUN_00bfac10(param_1);
    if (param_2 != '\0') {
      FUN_00c03710(param_1);
    }
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 1;
    FUN_00bf28a0(param_1);
  }
  if (local_25 != '\0') {
    (**(code **)(*param_1 + 0x2f8))(param_1,1);
  }
  FUN_00414480(&local_48);
  return;
}

