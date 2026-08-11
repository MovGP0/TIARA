/* Ghidra address: 01c250b0 */
/* Ghidra symbol: FUN_01c250b0 */


void FUN_01c250b0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = auStack_78;
  local_58 = 0;
  if (param_2[1] == 0) {
    plVar5 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x36);
    if (cVar1 == '\0') {
      local_40 = *(ulonglong *)(param_1 + 0x4ec);
      local_38 = *(ulonglong *)(param_1 + 0x4f4);
      local_50 = auStack_78;
    }
    else if (cVar1 == '\x01') {
      local_40 = *(ulonglong *)(param_1 + 0x4fc);
      local_38 = *(ulonglong *)(param_1 + 0x504);
      local_50 = auStack_78;
    }
    else if (cVar1 == '\x02') {
      local_40 = *(ulonglong *)(param_1 + 0x50c);
      local_38 = *(ulonglong *)(param_1 + 0x514);
      local_50 = auStack_78;
    }
    else {
      local_50 = auStack_78;
      if (cVar1 == '\x03') {
        local_40 = *(ulonglong *)(param_1 + 0x51c);
        local_38 = *(ulonglong *)(param_1 + 0x524);
        local_50 = auStack_78;
      }
    }
  }
  FUN_00423b10(&local_40,0xfffffffe,0xfffffffe);
  local_30 = thunk_FUN_03976db5(local_40 & 0xffffffff,local_40._4_4_,local_38 & 0xffffffff,
                                local_38._4_4_);
  uVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  uVar3 = FUN_005ffa40(uVar3);
  thunk_FUN_039bba01(uVar3,local_30);
  lVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  FUN_005fd4e0(*(undefined8 *)(lVar4 + 0x78),0);
  lVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  FUN_005fd670(*(undefined8 *)(lVar4 + 0x78),0);
  lVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  FUN_005fdab0(*(undefined8 *)(lVar4 + 0x80),0xffffff);
  local_40 = param_2[4];
  local_38 = param_2[5];
  FUN_00423b10(&local_40,0xffffffff,0xffffffff);
  plVar5 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  (**(code **)(*plVar5 + 0xa8))(plVar5,&local_40);
  if ((param_2[2] == 0) || (param_2[1] != 0)) {
    if (((param_2[1] == 0) && (param_2 != *(undefined8 **)(param_1 + 0x540))) &&
       (*(int *)(param_1 + 0x4a8) == 0)) {
      lVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      FUN_005fdab0(*(undefined8 *)(lVar4 + 0x80),0xff);
    }
    else {
      lVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
      FUN_005fdab0(*(undefined8 *)(lVar4 + 0x80),0);
    }
  }
  else {
    lVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_005fdab0(*(undefined8 *)(lVar4 + 0x80),0xff);
  }
  lVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  FUN_005fdcb0(*(undefined8 *)(lVar4 + 0x80),0);
  plVar5 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  (**(code **)(*plVar5 + 0xb8))(plVar5,&local_40);
  lVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  FUN_005fce70(*(undefined8 *)(lVar4 + 0x70),1);
  lVar4 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  FUN_005fdcb0(*(undefined8 *)(lVar4 + 0x80),1);
  uVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  uVar3 = FUN_005ffa40(uVar3);
  thunk_FUN_0412a071(uVar3,0xff0000);
  plVar5 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  (**(code **)(*plVar5 + 0x120))(plVar5,(int)local_40 + 5,local_40._4_4_ + 3,*param_2);
  if (param_2[1] != 0) {
    uVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    local_44 = FUN_005fdff0(uVar3,*param_2);
    local_40 = CONCAT44(*(int *)((longlong)param_2 + 0x24) + 5,*(int *)(param_2 + 4) + local_44 + 10
                       );
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x60))(*(longlong **)(param_1 + 0x4c0));
    local_38 = CONCAT44(local_38._4_4_,(int)local_40 + iVar2);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x48))(*(longlong **)(param_1 + 0x4c0));
    local_38 = CONCAT44(local_40._4_4_ + iVar2,(int)local_38);
    uVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_010b5040(*(undefined8 *)(param_1 + 0x4c0),uVar3,&local_40,0);
    uVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    uVar3 = FUN_005ffa40(uVar3);
    thunk_FUN_0412a071(uVar3,0x80);
    plVar5 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
    FUN_004169a0(&local_58,param_2[1] + 8);
    (**(code **)(*plVar5 + 0x120))
              (plVar5,(int)local_38 + 5,*(int *)((longlong)param_2 + 0x24) + 3,local_58);
  }
  uVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 0x4d0));
  uVar3 = FUN_005ffa40(uVar3);
  thunk_FUN_039bba01(uVar3,0);
  thunk_FUN_0416f828(local_30);
  FUN_00414480(&local_58);
  return;
}

