/* Ghidra address: 00842d00 */
/* Ghidra symbol: FUN_00842d00 */


void FUN_00842d00(longlong param_1,undefined8 *param_2,byte param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  byte local_res18;
  undefined1 local_71;
  undefined1 local_68 [16];
  undefined8 *local_58;
  undefined1 local_4c [12];
  uint local_40;
  uint local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  plVar4 = (longlong *)FUN_00781840();
  local_res18 = param_3;
  if ((*(uint *)(param_1 + 0x4d4) & 0x1000) != 0) {
    local_res18 = param_3 | 8;
  }
  local_38 = *param_2;
  local_30 = param_2[1];
  local_71 = (&DAT_01e195fc)[*(byte *)(param_1 + 0x55c)];
  cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
  if ((cVar1 != '\0') && ((local_res18 & 8) != 0)) {
    if ((param_4 < *(int *)(param_1 + 0x4bc) + 1) || (*(int *)(param_1 + 0x4a4) + -1 <= param_4)) {
      if (param_4 == *(int *)(param_1 + 0x4bc)) {
        local_71 = (&DAT_01e195ff)[*(byte *)(param_1 + 0x55c)];
        local_30 = CONCAT44(local_30._4_4_,(int)local_30 + 4);
      }
      else if (param_4 == *(int *)(param_1 + 0x4a4) + -1) {
        local_71 = (&DAT_01e19605)[*(byte *)(param_1 + 0x55c)];
        local_38 = CONCAT44(local_38._4_4_,(int)local_38 + -4);
      }
    }
    else {
      local_71 = (&DAT_01e19602)[*(byte *)(param_1 + 0x55c)];
      local_30 = CONCAT44(local_30._4_4_,(int)local_30 + 4);
      local_38 = CONCAT44(local_38._4_4_,(int)local_38 + -4);
    }
  }
  if (*(char *)(param_1 + 0x55c) == '\x01') {
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),0);
    cVar1 = FUN_00781870();
    if (cVar1 == '\0') {
      if (*(int *)PTR_DAT_02001bd8 < 6) {
        FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),0xff00000d);
      }
    }
    else {
      uVar2 = FUN_00779380(plVar4,0xe);
      FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),uVar2);
    }
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0xa8))(*(longlong **)(param_1 + 0x490),param_2);
    cVar1 = FUN_00781870();
    if (cVar1 != '\0') {
      pcVar5 = (code *)FUN_00411550(param_1,0xffc5);
      cVar1 = (*pcVar5)(param_1);
      if (cVar1 != '\0') {
        FUN_00423b50(&local_38,1,0);
      }
    }
    uVar6 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
    (**(code **)(*plVar4 + 0x130))(plVar4,local_4c,local_71);
    local_58 = param_2;
    FUN_00778dc0(plVar4,uVar6,local_4c,&local_38,param_2,0);
    (**(code **)(*plVar4 + 0x130))(plVar4,local_68,local_71);
    cVar1 = FUN_007790b0(plVar4,local_68,2,&local_3c);
    if ((cVar1 == '\0') || (local_3c == 0x1fffffff)) {
      local_3c = 0xff00000e;
    }
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x70),local_3c);
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),1);
  }
  else if (*(char *)(param_1 + 0x55c) == '\x02') {
    local_38 = *param_2;
    local_30 = param_2[1];
    uVar2 = FUN_007793c0(plVar4,0xff00000d);
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),uVar2);
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0xb8))
              (*(longlong **)(param_1 + 0x490),&local_38);
    if ((local_res18 & 8) == 0) {
      FUN_00423b10(&local_38,0xffffffff,0xffffffff);
    }
    else {
      FUN_00423b10(&local_38,0,0xffffffff);
      if (param_4 == *(int *)(param_1 + 0x4bc)) {
        local_38 = CONCAT44(local_38._4_4_,(int)local_38 + 1);
      }
      else if (param_4 == *(int *)(param_1 + 0x4a4) + -1) {
        local_30 = CONCAT44(local_30._4_4_,(int)local_30 + -1);
      }
    }
    local_3c = FUN_00635930(0xff00000d,0x2d);
    uVar3 = FUN_00635930(0xff00000d,10);
    uVar7 = 0xff00000e;
    cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
    if (cVar1 != '\0') {
      (**(code **)(*plVar4 + 0x130))(plVar4,local_68,local_71);
      cVar1 = FUN_007790b0(plVar4,local_68,9,&local_40);
      if ((cVar1 != '\0') && (local_40 != 0x1fffffff)) {
        local_3c = local_40;
      }
      (**(code **)(*plVar4 + 0x130))(plVar4,local_68,local_71);
      cVar1 = FUN_007790b0(plVar4,local_68,10,&local_40);
      if ((cVar1 != '\0') && (local_40 != 0x1fffffff)) {
        uVar3 = local_40;
      }
      (**(code **)(*plVar4 + 0x130))(plVar4,local_68,local_71);
      cVar1 = FUN_007790b0(plVar4,local_68,2,&local_40);
      if ((cVar1 != '\0') && (local_40 != 0x1fffffff)) {
        uVar7 = local_40;
      }
    }
    FUN_00636080(*(undefined8 *)(param_1 + 0x490),local_3c,uVar3,&local_38,1);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x70),uVar7);
    FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),1);
  }
  else {
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),0xff00000d);
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x70),0xff00000e);
    cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
    if (cVar1 != '\0') {
      (**(code **)(*plVar4 + 0x130))(plVar4,local_68,local_71);
      cVar1 = FUN_007790b0(plVar4,local_68,1,&local_3c);
      if ((cVar1 != '\0') && (local_3c != 0x1fffffff)) {
        FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),local_3c);
      }
      (**(code **)(*plVar4 + 0x130))(plVar4,local_68,local_71);
      cVar1 = FUN_007790b0(plVar4,local_68,2,&local_3c);
      if ((cVar1 != '\0') && (local_3c != 0x1fffffff)) {
        FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x70),local_3c);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0xa8))(*(longlong **)(param_1 + 0x490),param_2);
  }
  return;
}

