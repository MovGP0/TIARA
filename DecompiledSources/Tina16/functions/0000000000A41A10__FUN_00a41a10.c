/* Ghidra address: 00a41a10 */
/* Ghidra symbol: FUN_00a41a10 */


longlong * FUN_00a41a10(longlong *param_1,char param_2,char param_3)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  longlong local_c0;
  undefined2 *local_b8;
  undefined1 *local_a0;
  int local_8c;
  int local_88;
  undefined2 local_83;
  undefined1 local_81;
  undefined1 *local_80;
  longlong local_78;
  undefined2 *local_70;
  longlong local_68;
  int local_5c;
  undefined8 *local_58;
  undefined8 *local_50;
  longlong *local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_a0 = auStack_e8;
  local_30 = (longlong *)FUN_009ec850(&PTR_FUN_009eb620,1,0);
  if (param_2 == '\0') {
    (**(code **)(*local_30 + 0x10))(local_30,param_1);
    FUN_00a3dd80(local_30,6);
    return local_30;
  }
  uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
  (**(code **)(*local_30 + 0x88))(local_30,uVar4);
  uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*local_30 + 0x70))(local_30,uVar4);
  FUN_00a3dd90(local_30,3);
  (**(code **)(*local_30 + 0x78))(local_30,0);
  local_40 = 0;
  local_48 = (longlong *)0x0;
  local_50 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  local_38 = 0;
  local_58 = (undefined8 *)FUN_00a3e5c0(&PTR_FUN_00a3e160,1,param_1,6);
  if (param_2 == '\x01') {
    local_38 = thunk_FUN_041715dd(0xf);
  }
  else if (param_2 == '\x03') {
    local_38 = FUN_00a3d8e0();
  }
  else if (param_2 == '\x04') {
    local_38 = FUN_00608880(*(undefined8 *)PTR_DAT_020036e8);
  }
  else {
    if (param_2 != '\x05') goto LAB_00a41ec6;
    local_38 = FUN_00a41980(param_1,0x100,8,1);
  }
  (**(code **)(*local_30 + 0x78))(local_30,local_38);
  if (param_2 == '\x03') {
    local_40 = FUN_00a3f9e0(&PTR_FUN_00a3f458,1,local_38);
  }
  else {
    local_40 = FUN_00a3f660(&PTR_FUN_00a3f1a8,1,local_38);
  }
  if (*(int *)(local_40 + 8) == 0) {
LAB_00a41ec6:
    FUN_00a41f20(0,local_a0);
    return local_30;
  }
  if (param_3 == '\0') {
    uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
    local_48 = (longlong *)FUN_00a40350(&PTR_FUN_00a3fbf8,1,uVar4,local_40);
  }
  else {
    if (param_3 != '\x01') goto LAB_00a41ec6;
    uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
    local_48 = (longlong *)FUN_00a40490(&PTR_FUN_00a3ffa8,1,uVar4,local_40);
  }
  local_50 = (undefined8 *)FUN_00a3e6e0(&PTR_FUN_00a3e338,1,local_30,3);
  local_5c = 0;
  while (iVar5 = (**(code **)(*param_1 + 0x48))(param_1), local_5c < iVar5) {
    local_68 = (**(code **)*local_58)(local_58,local_5c);
    local_78 = (**(code **)*local_50)(local_50,local_5c);
    local_8c = *(int *)((longlong)local_48 + 0xc);
    local_88 = local_8c * 3;
    local_70 = (undefined2 *)(local_68 + local_88);
    local_80 = (undefined1 *)(local_78 + local_8c);
    while ((*(int *)((longlong)local_48 + 0xc) < (int)local_48[3] &&
           (-1 < *(int *)((longlong)local_48 + 0xc)))) {
      uVar1 = *local_70;
      local_81 = *(undefined1 *)(local_70 + 1);
      local_83._1_1_ = (undefined1)((ushort)uVar1 >> 8);
      uVar3 = local_83._1_1_;
      local_83._0_1_ = (undefined1)uVar1;
      local_c8 = &local_81;
      local_c0 = (longlong)&local_83 + 1;
      local_b8 = &local_83;
      uVar2 = (undefined1)local_83;
      local_83 = uVar1;
      uVar3 = (**(code **)(*local_48 + 8))(local_48,local_81,uVar3,uVar2);
      *local_80 = uVar3;
      local_70 = (undefined2 *)((longlong)local_70 + (longlong)(int)local_48[1] * 3);
      local_80 = local_80 + (int)local_48[1];
    }
    local_5c = local_5c + 1;
    (**(code **)(*local_48 + 0x10))(local_48);
  }
  if (local_40 != 0) {
    FUN_00410f20(local_40);
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00410f20(local_48);
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_00410f20(local_50);
  }
  if (local_58 == (undefined8 *)0x0) {
    return local_30;
  }
  FUN_00410f20(local_58);
  return local_30;
}

