/* Ghidra address: 00af75c0 */
/* Ghidra symbol: FUN_00af75c0 */


void FUN_00af75c0(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                 int param_6,undefined4 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  int local_d8;
  int local_d0;
  int local_c8;
  longlong *local_c0;
  int *local_b8;
  int *local_b0;
  int *local_a8;
  int *local_a0;
  undefined1 *local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_90 = auStack_f8;
  local_d8 = param_4 + param_6;
  FUN_004238d0(local_40,param_3,param_4,param_3 + param_5);
  local_48 = *(longlong **)(*(longlong *)(param_1 + 0x8b0) + 0x188);
  if ((*(char *)(*(longlong *)(param_1 + 0x8b0) + 0x91) == '\0') || (local_48 == (longlong *)0x0)) {
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = (longlong *)0x0;
    local_b8 = (int *)CONCAT44(local_b8._4_4_,param_7);
    FUN_00af72b0(auStack_f8,param_2,local_40,0);
  }
  else {
    local_64 = (**(code **)(*local_48 + 0x18))(local_48);
    local_68 = (**(code **)(*local_48 + 0x10))(local_48);
    lVar2 = *(longlong *)(param_1 + 0x8b0);
    local_60 = *(undefined8 *)(lVar2 + 400);
    uStack_58 = *(undefined8 *)(lVar2 + 0x198);
    uStack_50 = *(undefined8 *)(lVar2 + 0x1a0);
    local_84 = -param_3;
    local_88 = -param_4;
    local_7c = param_5;
    local_80 = param_6;
    local_d8 = param_5;
    local_d0 = param_6;
    local_c8 = local_64;
    local_c0 = (longlong *)CONCAT44(local_c0._4_4_,local_68);
    local_b8 = &local_6c;
    local_b0 = &local_70;
    local_a8 = &local_74;
    local_a0 = &local_78;
    FUN_00a2c580(&local_60,local_40,local_84,local_88);
    if ((local_64 == 1) || (local_68 == 1)) {
      local_28 = 0;
      uVar1 = (**(code **)*local_48)(local_48);
      local_30 = FUN_00a46150(uVar1,local_74 - local_6c,local_78 - local_70);
      lVar2 = (**(code **)(*local_48 + 0x20))(local_48);
      if (lVar2 == 0) {
        local_28 = 0;
      }
      else {
        uVar1 = (**(code **)(*local_48 + 0x20))(local_48);
        local_28 = FUN_00a46150(uVar1,local_74 - local_6c,local_78 - local_70);
      }
      local_d8 = CONCAT31(local_d8._1_3_,2);
      local_d0 = CONCAT31(local_d0._1_3_,1);
      local_c8 = CONCAT31(local_c8._1_3_,1);
      local_c0 = (longlong *)FUN_00a47ee0(&PTR_FUN_00a432a0,1,local_30,local_28);
      local_30 = 0;
      local_28 = 0;
      local_d8 = local_70;
      local_d0 = local_74;
      local_c8 = local_78;
      local_b8 = (int *)CONCAT44(local_b8._4_4_,param_7);
      local_20 = local_c0;
      FUN_00af72b0(auStack_f8,param_2,local_40,local_6c);
      FUN_00410f20(local_20);
      FUN_00410f20(local_28);
      FUN_00410f20(local_30);
    }
    else {
      local_d8 = local_70;
      local_d0 = local_74;
      local_c8 = local_78;
      local_c0 = local_48;
      local_b8 = (int *)CONCAT44(local_b8._4_4_,param_7);
      FUN_00af72b0(auStack_f8,param_2,local_40,local_6c);
    }
  }
  return;
}

