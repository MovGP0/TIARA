/* Ghidra address: 00bf4e90 */
/* Ghidra symbol: FUN_00bf4e90 */


void FUN_00bf4e90(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_90;
  int local_88;
  int local_84;
  undefined1 *local_80;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_80 = auStack_b8;
  (**(code **)(*(longlong *)param_1[0x92] + 0x20))((longlong *)param_1[0x92],&local_38);
  local_58 = *(int *)((longlong)param_1 + 0x50c);
  iVar1 = (int)param_1[0x122];
  local_88 = local_38;
  local_54 = local_58;
  if (iVar1 + 2 < local_38) {
    local_54 = local_58 + ((local_38 - iVar1) + -2) / *(int *)((longlong)param_1 + 0x4d4);
  }
  local_84 = local_30;
  local_58 = local_58 +
             ((local_30 - iVar1) + *(int *)((longlong)param_1 + 0x4d4) + -3) /
             *(int *)((longlong)param_1 + 0x4d4);
  iVar1 = *(int *)((longlong)param_1 + 0x534);
  iVar2 = *(int *)((longlong)param_1 + 0x52c);
  local_5c = iVar1 + local_34 / iVar2;
  local_64 = iVar1;
  if (iVar1 < local_5c) {
    local_64 = local_5c;
  }
  local_4c = local_64;
  local_60 = iVar1;
  uVar3 = FUN_00c10fb0(param_1,(longlong)local_34 % (longlong)iVar2 & 0xffffffff);
  local_50 = FUN_00bcbe50(iVar1 + (local_2c + iVar2 + -1) / iVar2,1,uVar3);
  FUN_00bf3710(param_1);
  if (local_88 < (int)param_1[0x122]) {
    local_48 = CONCAT44(local_34,local_38);
    local_40 = CONCAT44(local_2c,(int)param_1[0x122]);
    (**(code **)(*param_1 + 0x298))(param_1,&local_48,local_4c,local_50);
  }
  iVar1 = (int)param_1[0x122];
  if (iVar1 < local_84) {
    local_40 = CONCAT44(local_2c,local_30);
    local_6c = iVar1;
    if (iVar1 < local_38) {
      local_6c = local_38;
    }
    local_48 = CONCAT44(local_34,local_6c);
    local_98 = local_54;
    local_90 = local_58;
    local_68 = iVar1;
    (**(code **)(*param_1 + 0x2a0))(param_1,&local_48,local_4c,local_50);
  }
  if (*(int *)((longlong)param_1 + 0x514) == 0) {
    local_98 = local_50;
    FUN_00c0f230(param_1,param_1[0x92],&local_38,local_4c);
  }
  if (*(int *)((longlong)param_1 + 0x514) == 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1);
  }
  if (*(int *)((longlong)param_1 + 0x514) == 0) {
    (**(code **)(*param_1 + 0x2f8))(param_1,1);
  }
  FUN_00bfd020(param_1);
  return;
}

