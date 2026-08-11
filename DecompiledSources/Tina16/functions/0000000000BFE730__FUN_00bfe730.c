/* Ghidra address: 00bfe730 */
/* Ghidra symbol: FUN_00bfe730 */


void FUN_00bfe730(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_d8 [2];
  undefined1 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined4 local_b8 [2];
  undefined1 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  int local_94 [3];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_5c;
  int local_50;
  int local_4c;
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_a0 = auStack_108;
  local_a8 = 0;
  local_28 = 0;
  local_20[0] = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  lVar3 = (longlong)*(short *)(param_2 + 8);
  if (lVar3 < 4) {
    if (lVar3 == 0) {
      local_a0 = auStack_108;
      FUN_00bfcc50(param_1,*(int *)((longlong)param_1 + 0x534) + -1);
    }
    else if (lVar3 == 1) {
      local_a0 = auStack_108;
      FUN_00bfcc50(param_1,*(int *)((longlong)param_1 + 0x534) + 1);
    }
    else if (lVar3 == 2) {
      local_a0 = auStack_108;
      FUN_00bfcc50(param_1,*(int *)((longlong)param_1 + 0x534) -
                           ((int)param_1[0xa1] -
                           (uint)((*(uint *)((longlong)param_1 + 0x63a) & 0x8000) != 0)));
    }
    else {
      local_a0 = auStack_108;
      if (lVar3 == 3) {
        local_a0 = auStack_108;
        FUN_00bfcc50(param_1,*(int *)((longlong)param_1 + 0x534) +
                             ((int)param_1[0xa1] -
                             (uint)((*(uint *)((longlong)param_1 + 0x63a) & 0x8000) != 0)));
      }
    }
  }
  else if (lVar3 - 4U < 2) {
    *(undefined1 *)(param_1 + 0xfd) = 1;
    iVar2 = FUN_00c10fb0(param_1);
    if (iVar2 < 0x8000) {
      FUN_00bfcc50(param_1,(longlong)*(short *)(param_2 + 10));
    }
    else {
      iVar2 = FUN_00c10fb0(param_1);
      uVar1 = thunk_FUN_03f3ed25((int)param_1[0xa1] + iVar2 + -1,(longlong)*(short *)(param_2 + 10),
                                 0x7fff);
      FUN_00bfcc50(param_1,uVar1);
    }
    if ((*(uint *)((longlong)param_1 + 0x63a) & 0x80000) != 0) {
      local_48 = (longlong *)FUN_00bfe6f0();
      FUN_0064e030(local_48,*(undefined4 *)((longlong)param_1 + 0x524));
      if ((char)param_1[0xa5] == '\0') {
        FUN_0041ddd0(&local_a8,PTR_PTR_02002fb8);
        local_b8[0] = FUN_00c11080(param_1,*(undefined4 *)((longlong)param_1 + 0x534));
        local_b0 = 0;
        FUN_00442f70(&local_28,local_a8,local_b8,0);
      }
      else {
        local_20[0] = 0;
        FUN_0041ddd0(local_20,PTR_PTR_020010a8);
        local_78 = FUN_00c11080(param_1,*(undefined4 *)((longlong)param_1 + 0x534));
        local_6c = (int)param_1[0xa1];
        local_70 = FUN_00c10fb0(param_1);
        local_70 = local_70 - *(int *)((longlong)param_1 + 0x534);
        local_74 = local_70;
        if (local_6c < local_70) {
          local_74 = local_6c;
        }
        local_d8[0] = local_78;
        local_d0 = 0;
        local_c8 = FUN_00c11080(param_1,*(int *)((longlong)param_1 + 0x534) + local_74);
        local_c0 = 0;
        FUN_00442f70(&local_28,local_20[0],local_d8,1);
        FUN_00414480(local_20);
      }
      local_e8 = 0;
      (**(code **)(*local_48 + 0x290))(local_48,local_38,200,local_28);
      if ((*(uint *)((longlong)param_1 + 0x63a) & 0x10000) == 0) {
        iVar2 = FUN_0064d0b0(param_1);
        local_94[0] = (iVar2 - local_30) + -4;
        local_94[1] = 10;
        local_94[2] = local_94[0];
        local_40 = FUN_0064d1f0(param_1,local_94);
      }
      else {
        local_4c = (**(code **)(*param_1 + 0x1a0))(param_1,0x14);
        FUN_0040d200(&local_68,0x1c,0);
        local_68 = 0x1c;
        local_64 = 0x17;
        uVar4 = FUN_0065b870(param_1);
        thunk_FUN_04083ff6(uVar4,1,&local_68);
        iVar2 = FUN_0064d0b0(param_1);
        local_7c = (iVar2 - local_30) + -4;
        iVar2 = FUN_0064d120(param_1);
        iVar2 = FUN_0040c770(((double)local_50 / (double)local_5c) * (double)(iVar2 + local_4c * -2)
                            );
        local_84 = ((uint)(local_2c - local_34) >> 1) + iVar2 + local_4c;
        local_88 = local_7c;
        local_80 = local_84;
        local_40 = FUN_0064d1f0(param_1,&local_88);
      }
      FUN_00423b50(local_38,local_40 & 0xffffffff,local_40._4_4_);
      (**(code **)(*local_48 + 0x270))(local_48,local_38,local_28);
      (**(code **)(*local_48 + 0x198))(local_48);
    }
  }
  else if (lVar3 == 6) {
    local_a0 = auStack_108;
    FUN_00bfcc50(param_1,1);
  }
  else if (lVar3 == 7) {
    local_a0 = auStack_108;
    uVar1 = FUN_00c10fb0(param_1);
    FUN_00bfcc50(param_1,uVar1);
  }
  else {
    local_a0 = auStack_108;
    if ((lVar3 == 8) &&
       (*(undefined1 *)(param_1 + 0xfd) = 0, local_a0 = auStack_108,
       (*(uint *)((longlong)param_1 + 0x63a) & 0x80000) != 0)) {
      local_a0 = auStack_108;
      uVar4 = FUN_00bfe6f0();
      uVar4 = FUN_0065b870(uVar4);
      thunk_FUN_03ab0e43(uVar4,0);
    }
  }
  (**(code **)(*param_1 + 0x198))(param_1);
  if (param_1[0xf0] != 0) {
    (*(code *)param_1[0xf0])(param_1[0xf1],param_1,1);
  }
  FUN_00414480(&local_a8);
  FUN_00414480(&local_28);
  return;
}

