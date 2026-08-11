/* Ghidra address: 00aa06a0 */
/* Ghidra symbol: FUN_00aa06a0 */


void FUN_00aa06a0(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,int param_5,
                 int param_6,undefined4 param_7,int param_8)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong *local_150;
  int local_148;
  int local_140;
  char local_138;
  longlong local_120;
  longlong lStack_118;
  undefined1 *local_110;
  uint local_fc;
  undefined1 local_f5;
  undefined4 local_f4;
  longlong local_f0;
  longlong *local_e8;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  char local_b9;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  char local_95;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  char local_82;
  char local_81;
  undefined8 local_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  longlong local_50 [6];
  
  local_110 = auStack_178;
  if ((*(char *)(param_1[3] + 0x92) != '\0') && (*(char *)(param_1[3] + 0xb1) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x51c) = 0;
  }
  local_64 = *(int *)(param_1[3] + 0x94);
  if ((byte)((char)param_1[0xc] - 5U) < 2) {
    param_5 = param_5 + *(int *)((longlong)param_1 + 100);
    local_70 = (param_5 - *(int *)((longlong)param_1 + 0x494)) - *(int *)((longlong)param_1 + 0x4a4)
    ;
    local_68 = param_5 + *(int *)((longlong)param_1 + 0x514) + *(int *)((longlong)param_1 + 0x48c) +
               *(int *)((longlong)param_1 + 0x49c);
    local_74 = (int)param_1[0xf];
    local_6c = (int)param_1[0x10] - (int)param_1[0x90];
  }
  else {
    local_70 = param_5 + *(int *)((longlong)param_1 + 0x484);
    param_5 = param_5 + *(int *)((longlong)param_1 + 100);
    local_68 = param_5 + *(int *)((longlong)param_1 + 0x514) + *(int *)((longlong)param_1 + 0x48c) +
               *(int *)((longlong)param_1 + 0x49c);
    local_74 = param_6 + (int)param_1[0xa3] + (int)param_1[0x8f];
    local_6c = (int)param_1[0x10] - (int)param_1[0x90];
    if (*(char *)((longlong)param_1 + 0x4c) == '\x01') {
      local_6c = local_6c + (int)param_1[0xa5];
    }
  }
  if (*(char *)((longlong)param_1 + 0x4c) == '\x03') {
    local_158 = (longlong *)CONCAT44(local_158._4_4_,local_6c);
    local_110 = auStack_178;
    FUN_004238d0(&local_120,local_70,local_74,local_68);
    param_1[0xa8] = local_120;
    param_1[0xa9] = lStack_118;
  }
  else {
    local_158 = (longlong *)CONCAT44(local_158._4_4_,local_6c - local_64);
    FUN_004238d0(&local_120,local_70,local_74 - local_64,local_68);
    param_1[0xa8] = local_120;
    param_1[0xa9] = lStack_118;
  }
  local_a8 = (int)param_1[0xa8] + *(int *)((longlong)param_1 + 0x4a4);
  local_c8 = *(int *)((longlong)param_1 + 0x544) + (int)param_1[0x93];
  local_a0 = (int)param_1[0xa9] - *(int *)((longlong)param_1 + 0x49c);
  local_d4 = *(int *)((longlong)param_1 + 0x54c) - (int)param_1[0x94];
  local_b8 = local_a8 + *(int *)((longlong)param_1 + 0x494);
  local_b4 = local_c8 + (int)param_1[0x91];
  local_b0 = local_a0 - *(int *)((longlong)param_1 + 0x48c);
  local_ac = local_d4 - (int)param_1[0x92];
  *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x544) + local_64;
  *(int *)(param_1 + 0x12) = (int)param_1[0xa8];
  *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x54c) + local_64;
  *(int *)(param_1 + 0x13) = (int)param_1[0xa9];
  local_cc = *(int *)(param_3 + 4) + -2;
  local_c0 = local_cc - local_c8;
  local_c4 = local_c0;
  if (local_c0 < 0) {
    local_c4 = 0;
  }
  local_88 = local_c4;
  local_d0 = local_cc;
  if (local_cc < local_c8) {
    local_d0 = local_c8;
  }
  local_90 = local_d0;
  local_d8 = *(int *)(param_3 + 0xc);
  local_dc = local_d8;
  if (local_d4 < local_d8) {
    local_dc = local_d4;
  }
  local_8c = local_dc - local_d0;
  local_94 = local_a0 - local_a8;
  if ((((*(int *)((longlong)param_1 + 0x484) < 0) || ((int)param_1[0x8f] < 0)) ||
      ((int)param_1[0x90] < 0)) || (*(int *)((longlong)param_1 + 0x47c) < 0)) {
    local_b9 = '\x01';
  }
  else {
    local_b9 = '\0';
  }
  local_60 = 0;
  if ((*(char *)((longlong)param_1 + 0x4c) == '\0' && local_b9 == '\0') ||
     (*(int *)(param_1[3] + 0x2d8) < 1)) {
    local_95 = '\0';
  }
  else {
    local_95 = '\x01';
  }
  local_a4 = local_c8;
  local_9c = local_d4;
  if (local_95 != '\0') {
    local_60 = thunk_FUN_03976db5(0,0,1,1);
    uVar3 = FUN_005ffa40(param_2);
    iVar2 = thunk_FUN_0411a732(uVar3,local_60);
    if (iVar2 + 1U < 2) {
      thunk_FUN_0416f828(local_60);
      local_60 = 0;
    }
    else {
      uVar3 = FUN_005ffa40(param_2);
      thunk_FUN_039bba01(uVar3,0);
    }
  }
  if ((*(int *)((longlong)param_1 + 0x544) <= *(int *)(param_3 + 0xc)) &&
     (*(int *)(param_3 + 4) <= *(int *)((longlong)param_1 + 0x54c))) {
    local_82 = (int)param_1[0x8a] != 0x1fffffff;
    if ((*(char *)((longlong)param_1 + 0x51c) != '\0') &&
       ((param_1[0x88] != 0 &&
        (*(longlong *)(param_1[0x88] + 0x198) != *(longlong *)PTR_DAT_02001ae8)))) {
      if (*(longlong *)(param_1[0x88] + 0x198) == *(longlong *)PTR_DAT_02003010) {
        local_e8 = param_1 + 0x88;
        local_f0 = *local_e8;
        *local_e8 = 0;
        FUN_00410f20(local_f0);
      }
      else {
        if (*(byte *)(param_1 + 0xc) < 8) {
          bVar5 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                   (*(byte *)(param_1 + 0xc) & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar5 = false;
        }
        if (bVar5) {
          local_78 = (*(int *)((longlong)param_1 + 0x84) - *(int *)((longlong)param_1 + 0x7c)) +
                     (int)param_1[0x91] + (int)param_1[0x92];
        }
        else {
          local_78 = (*(int *)((longlong)param_1 + 0x53c) - *(int *)((longlong)param_1 + 0x7c)) +
                     (int)param_1[0x91] + (int)param_1[0x92];
        }
        local_158 = param_1 + 0xa4;
        local_150 = param_1 + 0xa7;
        (**(code **)(**(longlong **)(param_1[0x88] + 0x198) + 0x50))
                  (*(longlong **)(param_1[0x88] + 0x198),param_1 + 0x9e,
                   *(int *)((longlong)param_1 + 0x494) + *(int *)((longlong)param_1 + 0x514) +
                   *(int *)((longlong)param_1 + 0x48c),local_78);
        cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
        if (cVar1 != '\0') {
          plVar4 = (longlong *)
                   (*(code *)**(undefined8 **)param_1[0xa4])((undefined8 *)param_1[0xa4]);
          (**(code **)(*plVar4 + 0xf8))(plVar4,0);
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x51c) = 0;
    }
    if (*(char *)(param_1[3] + 0x2bd) != '\0') {
      FUN_00aa16b0(0,local_110);
      return;
    }
    if ((((*(char *)((longlong)param_1 + 0x51c) == '\0') && (param_1[0x88] != 0)) &&
        (*(longlong *)(param_1[0x88] + 0x198) != *(longlong *)PTR_DAT_02001ae8)) &&
       ((param_1[0xa4] != 0 && (*(char *)(param_1[3] + 0x91) != '\0')))) {
      local_81 = '\x01';
    }
    else {
      local_81 = '\0';
    }
    if (local_82 == '\0') {
      FUN_005fdcb0(param_2[0x10],1);
    }
    else {
      FUN_005fdcb0(param_2[0x10],0);
      local_f4 = (undefined4)param_1[0x8a];
      local_f5 = (*(byte *)(param_1[3] + 0x90) & 2) != 0;
      if (((bool)local_f5) && (cVar1 = FUN_00781870(), cVar1 != '\0')) {
        uVar3 = FUN_00781840();
        local_fc = FUN_007793c0(uVar3,local_f4);
      }
      else {
        local_fc = local_f4;
      }
      local_fc = FUN_005fbf20(local_fc);
      FUN_005fdab0(param_2[0x10],local_fc | *(uint *)PTR_DAT_02005078);
    }
    if (local_81 == '\0') {
      if ((*(char *)(param_1[3] + 0x92) == '\0') || (*(char *)(param_1[3] + 0xb1) != '\0')) {
        local_158 = (longlong *)CONCAT44(local_158._4_4_,local_90 + local_8c);
        FUN_004238d0(&local_120,local_a8,local_90,local_a0);
        (**(code **)(*param_2 + 0xa8))(param_2,&local_120);
      }
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
      if (cVar1 == '\0') {
        local_158 = (longlong *)CONCAT44(local_158._4_4_,local_94);
        local_150 = (longlong *)CONCAT44(local_150._4_4_,local_8c);
        local_148 = 0;
        local_140 = local_88;
        local_138 = local_82;
        (**(code **)(*(longlong *)param_1[0xa4] + 0x78))
                  ((longlong *)param_1[0xa4],param_2,local_a8,local_90);
      }
      else {
        if ((local_82 == '\0') || (*(char *)(param_1[3] + 0xb1) == '\0')) {
          local_138 = '\0';
        }
        else {
          local_138 = '\x01';
        }
        local_158 = (longlong *)CONCAT44(local_158._4_4_,local_94);
        local_150 = (longlong *)CONCAT44(local_150._4_4_,local_8c);
        local_148 = 0;
        local_140 = local_88;
        (**(code **)(*(longlong *)param_1[0xa4] + 0x80))
                  ((longlong *)param_1[0xa4],param_2,local_a8,local_90);
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x50e) != '\0') {
    local_58 = 0;
    local_50[0] = 0;
    if ((char)param_1[0xc] == '\0') {
      local_158 = local_50;
      FUN_00a71a90(param_2,&local_b8,*(undefined1 *)(param_1[3] + 0x92),&local_58);
    }
    else {
      local_158 = local_50;
      FUN_00a71a90(param_2,&local_a8,*(undefined1 *)(param_1[3] + 0x92),&local_58);
    }
    uVar3 = FUN_005ffa40(param_2);
    thunk_FUN_039bba01(uVar3,local_58);
  }
  local_80 = *(undefined8 *)(param_4 + 0x28);
  *(longlong **)(param_4 + 0x28) = param_1;
  cVar1 = *(char *)((longlong)param_1 + 0x4c);
  if (cVar1 == '\x01') {
    local_158 = (longlong *)CONCAT44(local_158._4_4_,param_5);
    local_150 = (longlong *)
                CONCAT44(local_150._4_4_,
                         local_70 + *(int *)((longlong)param_1 + 0x4a4) +
                         *(int *)((longlong)param_1 + 0x494));
    local_148 = param_6 + (int)param_1[0x8f] + (int)param_1[0x93] + (int)param_1[0x91];
    FUN_00aa17f0(param_1,param_2,param_3,*(undefined4 *)((longlong)param_1 + 0x514));
  }
  else if (cVar1 == '\x02') {
    local_158 = (longlong *)CONCAT44(local_158._4_4_,param_5);
    local_150 = (longlong *)CONCAT44(local_150._4_4_,local_70 + *(int *)((longlong)param_1 + 0x4a4))
    ;
    local_148 = param_6 + (int)param_1[0x8f] + (int)param_1[0x93];
    FUN_00aa17f0(param_1,param_2,param_3,*(undefined4 *)((longlong)param_1 + 0x514));
  }
  else if (cVar1 == '\x03') {
    local_158 = (longlong *)CONCAT44(local_158._4_4_,param_5);
    local_150 = (longlong *)CONCAT44(local_150._4_4_,local_a8);
    local_148 = local_a4;
    FUN_00aa17f0(param_1,param_2,param_3,*(undefined4 *)((longlong)param_1 + 0x514));
  }
  else {
    local_158 = (longlong *)CONCAT44(local_158._4_4_,param_5);
    local_150 = (longlong *)CONCAT44(local_150._4_4_,param_7);
    local_148 = param_8;
    FUN_00aa17f0(param_1,param_2,param_3,*(undefined4 *)((longlong)param_1 + 0x514));
  }
  *(undefined8 *)(param_4 + 0x28) = local_80;
  if (*(char *)((longlong)param_1 + 0x50e) != '\0') {
    uVar3 = FUN_005ffa40(param_2);
    thunk_FUN_039bba01(uVar3,local_50[0]);
    thunk_FUN_0416f828(local_58);
    if (local_50[0] != 0) {
      thunk_FUN_0416f828(local_50[0]);
    }
  }
  (**(code **)(*param_1 + 0xd8))(param_1,param_2,param_1 + 0xa8,&local_a8);
  if (local_60 != 0) {
    uVar3 = FUN_005ffa40(param_2);
    thunk_FUN_039bba01(uVar3,local_60);
    thunk_FUN_0416f828(local_60);
  }
  return;
}

