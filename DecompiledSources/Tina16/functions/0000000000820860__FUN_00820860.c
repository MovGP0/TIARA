/* Ghidra address: 00820860 */
/* Ghidra symbol: FUN_00820860 */


void FUN_00820860(longlong *param_1,int param_2,undefined8 *param_3,undefined2 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  int local_84;
  int local_80;
  undefined1 local_7c [12];
  longlong *local_70;
  int local_64;
  byte local_5d;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong lStack_30;
  
  local_90 = auStack_b8;
  local_48 = *param_3;
  local_40 = param_3[1];
  local_5c = FUN_00820730(param_1);
  iVar2 = (**(code **)(*(longlong *)param_1[0x94] + 0x28))((longlong *)param_1[0x94]);
  if (iVar2 <= param_2) goto LAB_00820b9a;
  local_58 = local_48;
  local_50 = local_40;
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 == '\0') {
LAB_00820901:
    local_5d = 0;
  }
  else {
    cVar1 = FUN_00821960(param_1,param_2);
    if (cVar1 == '\0') goto LAB_00820901;
    local_5d = 1;
  }
  local_70 = (longlong *)FUN_00781840();
  cVar1 = FUN_008222b0(param_1,param_2);
  if (cVar1 == '\0') {
    pcVar5 = (code *)FUN_00411550(param_1,0xffc5);
    cVar1 = (*pcVar5)(param_1);
    if (cVar1 == '\0') {
      iVar2 = (int)local_48 - local_5c;
      iVar3 = (int)local_48;
    }
    else {
      iVar3 = (int)local_40 + local_5c;
      iVar2 = (int)local_40;
    }
    local_50 = CONCAT44(local_50._4_4_,iVar3);
    local_58 = CONCAT44(local_58._4_4_,iVar2);
    uVar4 = FUN_008219a0(param_1,param_2);
    FUN_00820d20(param_1,&local_58,uVar4,local_5d);
    cVar1 = FUN_008206b0(param_1);
    if (cVar1 == '\0') {
      if (local_5d == 0) {
        FUN_005fc860(*(undefined8 *)(param_1[0x97] + 0x70),0xff000011);
      }
    }
    else {
      (**(code **)(*local_70 + 0xe0))(local_70,local_7c,(&DAT_01e1739e)[local_5d]);
      if (local_5d == 0) {
        cVar1 = FUN_00781870();
        if (cVar1 == '\0') {
          FUN_005fc860(*(undefined8 *)(param_1[0x97] + 0x70),0xff000011);
        }
        else {
          uVar6 = FUN_00781840();
          uVar4 = FUN_007793a0(uVar6,0x18);
          FUN_005fc860(*(undefined8 *)(param_1[0x97] + 0x70),uVar4);
        }
      }
      else if ((*(byte *)(param_1 + 0x59) & 1) != 0) {
        cVar1 = FUN_007790b0(local_70,local_7c,2,&local_64);
        if ((cVar1 != '\0') && (local_64 != 0x1fffffff)) {
          FUN_005fc860(*(undefined8 *)(param_1[0x97] + 0x70),local_64);
        }
      }
    }
  }
  else {
    if (local_5d == 0) {
      local_80 = -0xffffef;
    }
    else {
      local_80 = (int)param_1[0xad];
    }
    local_84 = *(int *)((longlong)param_1 + 0x56c);
    cVar1 = FUN_008206b0(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*local_70 + 0xe0))(local_70,local_7c,(&DAT_01e1739c)[local_5d]);
      cVar1 = FUN_007790b0(local_70,local_7c,2,&local_64);
      if ((cVar1 != '\0') && (local_64 != 0x1fffffff)) {
        local_80 = local_64;
      }
      cVar1 = FUN_007790b0(local_70,local_7c,1,&local_64);
      if ((cVar1 != '\0') && (local_64 != 0x1fffffff)) {
        local_84 = local_64;
      }
    }
    FUN_005fc860(*(undefined8 *)(param_1[0x97] + 0x70),local_80);
    FUN_005fdab0(*(undefined8 *)(param_1[0x97] + 0x80),local_84);
  }
LAB_00820b9a:
  if ((*(char *)((longlong)param_1 + 0x4cc) == '\0') && (param_1[0x9f] != 0)) {
    local_38 = param_1[0x9f];
    lStack_30 = param_1[0xa0];
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
    FUN_0068d2a0(param_1,param_2,&local_48,param_4);
    param_1[0x9f] = local_38;
    param_1[0xa0] = lStack_30;
  }
  else {
    FUN_0068d2a0(param_1,param_2,&local_48,param_4);
  }
  return;
}

