/* Ghidra address: 00d98c90 */
/* Ghidra symbol: FUN_00d98c90 */


void FUN_00d98c90(longlong *param_1,longlong *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  ulonglong uStack_b8;
  undefined1 *local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined1 local_78 [12];
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_b0 = auStack_f8;
  local_88 = FUN_0065b870(param_2);
  local_68 = thunk_FUN_04118143(local_88,0xffffffec);
  local_90 = FUN_0065b870(param_2);
  local_6c = thunk_FUN_04118143(local_90,0xfffffff0);
  if (((local_68 & 0x200) == 0) && ((local_6c & 0x800000) == 0)) {
    if (param_3 != '\0') {
      local_a0 = FUN_0065b870(param_2);
      local_64 = thunk_FUN_04118143(local_a0,0xfffffff0);
      if (((local_64 & 0x100000) != 0) && ((local_64 & 0x200000) != 0)) {
        uVar3 = FUN_0065b870(param_2);
        thunk_FUN_03e49910(uVar3,&local_58);
        FUN_00423b50(&local_58,-local_58,-local_54);
        uVar3 = FUN_0065b870(param_2);
        local_38 = thunk_FUN_0411fe47(uVar3);
        local_48._0_4_ = local_58;
        local_40 = CONCAT44(local_4c,local_50);
        local_60 = (**(code **)(*param_2 + 0x1a0))(param_2,2);
        local_5c = (**(code **)(*param_2 + 0x1a0))(param_2,3);
        cVar1 = FUN_0064e970(param_2);
        if (cVar1 == '\0') {
          local_d8 = CONCAT44(local_d8._4_4_,local_40._4_4_);
          FUN_004238d0(&local_c0,(int)local_40 - local_60,local_40._4_4_ - local_5c,
                       local_40 & 0xffffffff);
          local_48 = local_c0;
          local_40 = uStack_b8;
        }
        else {
          local_d8 = CONCAT44(local_d8._4_4_,local_40._4_4_);
          FUN_004238d0(&local_c0,(uint)local_48,local_40._4_4_ - local_5c,(uint)local_48 + local_60)
          ;
          local_48 = local_c0;
          local_40 = uStack_b8;
        }
        local_30 = FUN_0060f770(&DAT_005faf70,1,local_38,6);
        local_80 = *(longlong **)(local_30 + 8);
        uVar2 = FUN_007793c0(param_1,0xff00000f);
        FUN_005fdab0(local_80[0x10],uVar2);
        (**(code **)(*local_80 + 0xa8))(local_80,&local_48);
        FUN_00410f20(local_30);
        uVar3 = FUN_0065b870(param_2);
        thunk_FUN_041a9b5c(uVar3,local_38);
      }
    }
  }
  else {
    uVar3 = FUN_0065b870(param_2);
    thunk_FUN_03e49910(uVar3,&local_58);
    FUN_00423b50(&local_58,-local_58,-local_54);
    uVar3 = FUN_0065b870(param_2);
    local_38 = thunk_FUN_0411fe47(uVar3);
    local_48 = CONCAT44(local_54,local_58);
    local_40 = CONCAT44(local_4c,local_50);
    if (param_3 != '\0') {
      local_98 = FUN_0065b870(param_2);
      local_64 = thunk_FUN_04118143(local_98,0xfffffff0);
      if (((local_64 & 0x100000) != 0) && ((local_64 & 0x200000) != 0)) {
        local_60 = (**(code **)(*param_2 + 0x1a0))(param_2,2);
        local_5c = (**(code **)(*param_2 + 0x1a0))(param_2,3);
        if ((local_68 & 0x200) == 0) {
          FUN_00423b10(&local_48,0xffffffff,0xffffffff);
        }
        else {
          FUN_00423b10(&local_48,0xfffffffe,0xfffffffe);
        }
        cVar1 = FUN_0064e970(param_2);
        if (cVar1 == '\0') {
          local_d8 = CONCAT44(local_d8._4_4_,local_40._4_4_);
          FUN_004238d0(&local_c0,(int)local_40 - local_60,local_40._4_4_ - local_5c,
                       local_40 & 0xffffffff);
          local_48 = local_c0;
          local_40 = uStack_b8;
        }
        else {
          local_d8 = CONCAT44(local_d8._4_4_,local_40._4_4_);
          FUN_004238d0(&local_c0,(uint)local_48,local_40._4_4_ - local_5c,(uint)local_48 + local_60)
          ;
          local_48 = local_c0;
          local_40 = uStack_b8;
        }
        local_30 = FUN_0060f770(&DAT_005faf70,1,local_38,6);
        local_80 = *(longlong **)(local_30 + 8);
        uVar2 = FUN_007793c0(param_1,0xff00000f);
        FUN_005fdab0(local_80[0x10],uVar2);
        (**(code **)(*local_80 + 0xa8))(local_80,&local_48);
        FUN_00410f20(local_30);
      }
    }
    if ((local_68 & 0x200) == 0) {
      local_30 = FUN_0060f770(&DAT_005faf70,1,local_38,6);
      local_80 = *(longlong **)(local_30 + 8);
      FUN_005fdcb0(local_80[0x10],0);
      uVar2 = FUN_007793c0(param_1,0xff000006);
      FUN_005fdab0(local_80[0x10],uVar2);
      uVar3 = FUN_005ffa40(local_80);
      local_d8 = CONCAT44(local_d8._4_4_,local_4c + -1);
      thunk_FUN_041a27b3(uVar3,local_58 + 1,local_54 + 1,local_50 + -1);
      (**(code **)(*local_80 + 0xa8))(local_80,&local_58);
      FUN_00410f20(local_30);
    }
    else {
      local_d8 = CONCAT44(local_d8._4_4_,local_4c + -2);
      thunk_FUN_041a27b3(local_38,local_58 + 2,local_54 + 2,local_50 + -2);
      (**(code **)(*param_1 + 0x118))(param_1,local_78,2);
      local_d8 = 0;
      local_d0 = 0;
      FUN_00778dc0(param_1,local_38,local_78,&local_58);
    }
    uVar3 = FUN_0065b870(param_2);
    thunk_FUN_041a9b5c(uVar3,local_38);
  }
  return;
}

