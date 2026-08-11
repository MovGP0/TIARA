/* Ghidra address: 00828a00 */
/* Ghidra symbol: FUN_00828a00 */


void FUN_00828a00(longlong param_1,undefined8 param_2,int *param_3,int *param_4,longlong param_5,
                 byte param_6,int param_7,int param_8,int *param_9,int *param_10,uint param_11)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 uStack_5c;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c;
  
  if ((param_11 & 2) == 2) {
    if (param_6 == 0) {
      param_6 = 1;
    }
    else if (param_6 == 1) {
      param_6 = 0;
    }
  }
  iVar6 = param_3[2] - *param_3;
  iStack_54 = param_3[3] - param_3[1];
  local_38 = CONCAT44(iStack_54,iVar6);
  plVar2 = *(longlong **)(param_1 + 8);
  local_58 = iVar6;
  if (plVar2 == (longlong *)0x0) {
    local_68 = 0;
    uStack_64 = 0;
    local_40 = 0;
  }
  else {
    iVar3 = (**(code **)(*plVar2 + 0x60))(plVar2);
    iVar8 = iVar3 / (int)(uint)*(byte *)(param_1 + 0x2c);
    uStack_5c = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))
                          (*(longlong **)(param_1 + 8),
                           (longlong)iVar3 % (longlong)(int)(uint)*(byte *)(param_1 + 0x2c) &
                           0xffffffff);
    local_40 = CONCAT44(uStack_5c,iVar8);
    local_60 = iVar8;
  }
  iVar3 = 0;
  if (param_5 != 0) {
    iVar3 = *(int *)(param_5 + -4);
  }
  if (iVar3 < 1) {
    FUN_004238d0(&local_a8,0,0,0,0);
    *(undefined8 *)param_10 = local_a8;
    *(undefined8 *)(param_10 + 2) = uStack_a0;
    local_78 = 0;
    uStack_74 = 0;
    local_48 = 0;
  }
  else {
    FUN_004238d0(&local_a8,0,0,iVar6,0);
    *(undefined8 *)param_10 = local_a8;
    *(undefined8 *)(param_10 + 2) = uStack_a0;
    uVar4 = FUN_005ffa40(param_2);
    uVar7 = 0;
    if (param_5 != 0) {
      uVar7 = *(undefined4 *)(param_5 + -4);
    }
    uVar5 = FUN_00416740(param_5);
    thunk_FUN_041a24be(uVar4,uVar5,uVar7,param_10,param_11 | 0x400);
    local_70 = param_10[2] - *param_10;
    iStack_6c = param_10[3] - param_10[1];
    local_48 = CONCAT44(iStack_6c,local_70);
  }
  if (param_6 < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)local_48 >> 8),1) << (param_6 & 0x1f) & 3U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    param_9[1] = ((local_38._4_4_ - local_40._4_4_) + 1) / 2;
    local_2c = ((local_38._4_4_ - local_48._4_4_) + 1) / 2;
  }
  else {
    *param_9 = (((int)local_38 - (int)local_40) + 1) / 2;
    local_30 = (((int)local_38 - (int)local_48) + 1) / 2;
  }
  if (((int)local_48 == 0) || ((int)local_40 == 0)) {
    param_8 = 0;
  }
  if (param_7 == -1) {
    if (param_8 < 0) {
      iStack_7c = local_40._4_4_ + local_48._4_4_;
      local_80 = (int)local_40 + (int)local_48;
      local_50 = CONCAT44(iStack_7c,local_80);
      if (param_6 < 8) {
        bVar9 = ((int)CONCAT71((int7)((ulonglong)local_50 >> 8),1) << (param_6 & 0x1f) & 3U) != 0;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        param_7 = (int)local_38 - local_80;
      }
      else {
        param_7 = local_38._4_4_ - iStack_7c;
      }
      param_7 = param_7 / 3;
      param_8 = param_7;
    }
    else {
      iStack_84 = local_40._4_4_ + param_8 + local_48._4_4_;
      local_88 = (int)local_40 + param_8 + (int)local_48;
      local_50 = CONCAT44(iStack_84,local_88);
      if (param_6 < 8) {
        bVar9 = ((int)CONCAT71((int7)((ulonglong)local_50 >> 8),1) << (param_6 & 0x1f) & 3U) != 0;
      }
      else {
        bVar9 = false;
      }
      if (bVar9) {
        param_7 = (((int)local_38 - local_88) + 1) / 2;
      }
      else {
        param_7 = ((local_38._4_4_ - iStack_84) + 1) / 2;
      }
    }
  }
  else if (param_8 < 0) {
    iStack_8c = local_38._4_4_ - (param_7 + local_40._4_4_);
    local_90 = (int)local_38 - (param_7 + (int)local_40);
    local_50 = CONCAT44(iStack_8c,local_90);
    if (param_6 < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)local_50 >> 8),1) << (param_6 & 0x1f) & 3U) != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      param_8 = (local_90 - (int)local_48) / 2;
    }
    else {
      param_8 = (iStack_8c - local_48._4_4_) / 2;
    }
  }
  if (param_6 == 0) {
    *param_9 = param_7;
    local_30 = *param_9 + (int)local_40 + param_8;
  }
  else if (param_6 == 1) {
    *param_9 = ((int)local_38 - param_7) - (int)local_40;
    local_30 = (*param_9 - param_8) - (int)local_48;
  }
  else if (param_6 == 2) {
    param_9[1] = param_7;
    local_2c = param_9[1] + local_40._4_4_ + param_8;
  }
  else if (param_6 == 3) {
    param_9[1] = (local_38._4_4_ - param_7) - local_40._4_4_;
    local_2c = (param_9[1] - param_8) - local_48._4_4_;
  }
  iVar6 = *param_3;
  iVar3 = *param_4;
  *param_9 = *param_9 + iVar6 + iVar3;
  iVar8 = param_3[1];
  iVar1 = param_4[1];
  param_9[1] = param_9[1] + iVar8 + iVar1;
  FUN_00423b50(param_10,local_30 + iVar6 + iVar3,local_2c + iVar8 + iVar1);
  return;
}

