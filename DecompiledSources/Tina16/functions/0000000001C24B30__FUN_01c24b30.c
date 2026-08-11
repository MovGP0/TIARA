/* Ghidra address: 01c24b30 */
/* Ghidra symbol: FUN_01c24b30 */


void FUN_01c24b30(longlong param_1,longlong param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  int local_9c;
  int iStack_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int iStack_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  int local_4c;
  undefined4 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_b0 = auStack_d8;
  local_5c = *(ulonglong *)(param_1 + 0x52c);
  local_54 = *(ulonglong *)(param_1 + 0x534);
  FUN_00423b10(&local_5c,2,2);
  local_30 = thunk_FUN_03976db5(local_5c & 0xffffffff,local_5c._4_4_,local_54 & 0xffffffff,
                                local_54._4_4_);
  uVar7 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  uVar7 = FUN_005ffa40(uVar7);
  thunk_FUN_039bba01(uVar7,local_30);
  local_48 = *(undefined4 **)(param_2 + 8);
  lVar8 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  FUN_005fd4e0(*(undefined8 *)(lVar8 + 0x78),0);
  lVar8 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  FUN_005fd670(*(undefined8 *)(lVar8 + 0x78),0);
  cVar1 = *(char *)((longlong)local_48 + 0x36);
  if ((cVar1 == '\0') || (cVar1 == '\x02')) {
    if (cVar1 == '\0') {
      local_4c = 1;
    }
    else {
      local_4c = -1;
    }
    local_6c = *local_48;
    local_68 = local_48[1];
    local_64 = local_68;
    local_60 = local_6c;
    uVar7 = FUN_01c26830(param_1,&local_6c);
    local_38._0_4_ = (int)uVar7;
    local_7c = (int)local_38 + *(int *)(param_1 + 0x52c);
    local_38._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
    iStack_78 = local_38._4_4_ + *(int *)(param_1 + 0x530);
    local_38 = CONCAT44(iStack_78,local_7c);
    local_74 = iStack_78;
    local_70 = local_7c;
    uVar7 = FUN_00423ba0(param_2 + 0x20);
    local_40._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
    local_40._0_4_ = (int)uVar7;
    local_40 = CONCAT44(local_40._4_4_ + local_4c * 9,(int)local_40);
    plVar9 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    uVar4 = local_38;
    iVar6 = (int)local_38;
    (**(code **)(*plVar9 + 200))(plVar9,local_38 & 0xffffffff,local_38._4_4_);
    uVar3 = local_40;
    if (iVar6 == (int)local_40) {
      plVar9 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      (**(code **)(*plVar9 + 0xc0))(plVar9,uVar3 & 0xffffffff,local_40._4_4_);
    }
    else {
      *param_3 = *param_3 + param_4;
      plVar9 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      iVar6 = local_40._4_4_;
      (**(code **)(*plVar9 + 0xc0))(plVar9,uVar4 & 0xffffffff,local_40._4_4_ + local_4c * *param_3);
      plVar9 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      (**(code **)(*plVar9 + 0xc0))(plVar9,uVar3 & 0xffffffff,iVar6 + local_4c * *param_3);
      plVar9 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      (**(code **)(*plVar9 + 0xc0))(plVar9,uVar3 & 0xffffffff,iVar6);
    }
  }
  else {
    cVar1 = *(char *)((longlong)local_48 + 0x36);
    if ((cVar1 == '\x03') || (cVar1 == '\x01')) {
      if (cVar1 == '\x03') {
        local_4c = 1;
      }
      else {
        local_4c = -1;
      }
      local_8c = *local_48;
      local_88 = local_48[1];
      local_84 = local_88;
      local_80 = local_8c;
      uVar7 = FUN_01c26830(param_1,&local_8c);
      local_38._0_4_ = (int)uVar7;
      local_9c = (int)local_38 + *(int *)(param_1 + 0x52c);
      local_38._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
      iStack_98 = local_38._4_4_ + *(int *)(param_1 + 0x530);
      local_38 = CONCAT44(iStack_98,local_9c);
      local_94 = iStack_98;
      local_90 = local_9c;
      uVar7 = FUN_00423ba0(param_2 + 0x20);
      iVar6 = *(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x20);
      local_40._0_4_ = (int)uVar7;
      local_40._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
      local_40 = CONCAT44(local_40._4_4_,(int)local_40 + local_4c * (iVar6 / 2 + -1));
      plVar9 = (longlong *)
               FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0),(longlong)iVar6 % 2 & 0xffffffff);
      iVar5 = local_38._4_4_;
      (**(code **)(*plVar9 + 200))(plVar9,local_38 & 0xffffffff,local_38._4_4_);
      iVar6 = local_40._4_4_;
      if (iVar5 == local_40._4_4_) {
        plVar9 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
        (**(code **)(*plVar9 + 0xc0))(plVar9,local_40 & 0xffffffff,iVar6);
      }
      else {
        *param_3 = *param_3 + param_4;
        plVar9 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
        uVar3 = local_40;
        iVar2 = (int)local_40;
        (**(code **)(*plVar9 + 0xc0))(plVar9,(int)local_40 + local_4c * *param_3,iVar5);
        plVar9 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
        (**(code **)(*plVar9 + 0xc0))(plVar9,iVar2 + local_4c * *param_3,iVar6);
        plVar9 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
        (**(code **)(*plVar9 + 0xc0))(plVar9,uVar3 & 0xffffffff,iVar6);
      }
    }
  }
  uVar7 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  uVar7 = FUN_005ffa40(uVar7);
  thunk_FUN_039bba01(uVar7,0);
  thunk_FUN_0416f828(local_30);
  return;
}

