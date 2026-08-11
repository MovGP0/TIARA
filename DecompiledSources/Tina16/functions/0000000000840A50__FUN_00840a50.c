/* Ghidra address: 00840a50 */
/* Ghidra symbol: FUN_00840a50 */


void FUN_00840a50(longlong param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_178 [32];
  int local_158;
  int *local_150;
  int local_148;
  int local_140;
  int local_138;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined4 local_f8 [4];
  undefined1 local_e8 [16];
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  undefined1 local_c0 [16];
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined8 local_40;
  int local_34;
  undefined8 local_30;
  
  pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
  cVar1 = (*pcVar3)(param_1);
  if (cVar1 != '\0') {
    FUN_00842410(param_1,1);
  }
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 200);
  plVar4 = (longlong *)FUN_00781840();
  if (*(char *)(param_1 + 0x55c) == '\x01') {
    (**(code **)(*plVar4 + 0x130))(plVar4,local_118,2);
    FUN_007790b0(plVar4,local_118,0,&local_d0);
    if ((*(byte *)(param_1 + 0x2c8) & 2) != 0) {
      (**(code **)(*plVar4 + 0x130))(plVar4,local_118,2);
      FUN_007790b0(plVar4,local_118,1,param_1 + 0x558);
    }
    (**(code **)(*plVar4 + 0x130))(plVar4,local_118,7);
    FUN_007790b0(plVar4,local_118,0,&local_d8);
    (**(code **)(*plVar4 + 0x130))(plVar4,local_118,7);
    FUN_007790b0(plVar4,local_118,1,&local_d4);
  }
  else if (*(char *)(param_1 + 0x55c) == '\x02') {
    local_d0 = 0xf0f0f0;
    local_d4 = *(int *)(param_1 + 200);
    iVar6 = FUN_005fbf20(0xf0f0f0);
    iVar2 = FUN_005fbf20(*(undefined4 *)(param_1 + 200));
    if (iVar6 == iVar2) {
      local_d0 = FUN_00635930(local_d0,0xffffffd3);
    }
    local_d8 = FUN_00635930(&PTR_PTR_00f0f0f0,0xffffffd3);
    cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
    if (cVar1 != '\0') {
      (**(code **)(*plVar4 + 0x130))(plVar4,local_118,10);
      cVar1 = FUN_007790b0(plVar4,local_118,0,&local_cc);
      if ((cVar1 != '\0') && (local_cc != 0x1fffffff)) {
        local_d0 = local_cc;
      }
      (**(code **)(*plVar4 + 0x130))(plVar4,local_118,10);
      cVar1 = FUN_007790b0(plVar4,local_118,1,&local_cc);
      if ((cVar1 != '\0') && (local_cc != 0x1fffffff)) {
        *(int *)(param_1 + 0x558) = local_cc;
      }
      (**(code **)(*plVar4 + 0x130))(plVar4,local_118,0xf);
      cVar1 = FUN_007790b0(plVar4,local_118,0,&local_cc);
      if ((cVar1 != '\0') && (local_cc != 0x1fffffff)) {
        local_d8 = local_cc;
      }
      (**(code **)(*plVar4 + 0x130))(plVar4,local_118,0xf);
      cVar1 = FUN_007790b0(plVar4,local_118,1,&local_cc);
      if ((cVar1 != '\0') && (local_cc != 0x1fffffff)) {
        local_d4 = local_cc;
      }
    }
  }
  else {
    local_d0 = 0xc0c0c0;
    local_d4 = *(int *)(param_1 + 0x4c4);
    iVar6 = FUN_005fbf20(0xc0c0c0);
    iVar2 = FUN_005fbf20(*(undefined4 *)(param_1 + 200));
    if (iVar6 == iVar2) {
      local_d0 = FUN_00635930(local_d0,0xffffffd3);
    }
    local_d8 = 0;
    cVar1 = (**(code **)(*plVar4 + 0x98))(plVar4);
    if (cVar1 != '\0') {
      (**(code **)(*plVar4 + 0x130))(plVar4,local_118,0x12);
      cVar1 = FUN_007790b0(plVar4,local_118,0,&local_cc);
      if ((cVar1 != '\0') && (local_cc != 0x1fffffff)) {
        local_d0 = local_cc;
      }
      (**(code **)(*plVar4 + 0x130))(plVar4,local_118,0x12);
      cVar1 = FUN_007790b0(plVar4,local_118,1,&local_cc);
      if ((cVar1 != '\0') && (local_cc != 0x1fffffff)) {
        *(int *)(param_1 + 0x558) = local_cc;
      }
      (**(code **)(*plVar4 + 0x130))(plVar4,local_118,0x17);
      cVar1 = FUN_007790b0(plVar4,local_118,0,&local_cc);
      if ((cVar1 != '\0') && (local_cc != 0x1fffffff)) {
        local_d8 = local_cc;
      }
      (**(code **)(*plVar4 + 0x130))(plVar4,local_118,0x17);
      cVar1 = FUN_007790b0(plVar4,local_118,1,&local_cc);
      if ((cVar1 != '\0') && (local_cc != 0x1fffffff)) {
        local_d4 = local_cc;
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x490) + 0x20))(*(longlong **)(param_1 + 0x490),local_e8);
  FUN_00841d10(param_1,&local_b0);
  if ((0 < local_b0) || (0 < local_78)) {
    local_34 = (local_a0 - *(int *)(param_1 + 0x4e8)) + *(int *)(param_1 + 0x4bc);
    iVar6 = (local_68 - *(int *)(param_1 + 0x4ec)) + *(int *)(param_1 + 0x4c0);
    if (local_34 <= iVar6) {
      local_34 = iVar6;
    }
    local_34 = local_34 + 3;
    local_30 = FUN_0083ff70(local_34 * 0x10);
    local_40 = FUN_0083ff70(local_34 * 4);
    FUN_0083ff40(local_40,local_34,2);
    iVar6 = FUN_005fbf20(*(undefined4 *)(param_1 + 0x558));
    if (iVar6 == 0xc0c0c0) {
      local_d0 = 0x808080;
    }
    local_128 = 0;
    local_124 = 0;
    local_120 = local_ac;
    local_11c = local_74;
    local_158 = 0;
    local_150 = &local_128;
    local_148 = 3;
    local_140 = local_d8;
    local_138 = local_d4;
    FUN_00840290(auStack_178,(*(uint *)(param_1 + 0x4d4) & 2) != 0,
                 (*(uint *)(param_1 + 0x4d4) & 1) != 0,0);
    local_128 = local_ac;
    local_124 = 0;
    local_120 = local_a8;
    local_11c = local_74;
    local_158 = 0;
    local_150 = &local_128;
    local_148 = 3;
    local_140 = local_d8;
    local_138 = local_d4;
    FUN_00840290(auStack_178,(*(uint *)(param_1 + 0x4d4) & 2) != 0,
                 (*(uint *)(param_1 + 0x4d4) & 1) != 0,*(undefined4 *)(param_1 + 0x4e8));
    local_128 = 0;
    local_124 = local_74;
    local_120 = local_ac;
    local_11c = local_70;
    local_158 = *(undefined4 *)(param_1 + 0x4ec);
    local_150 = &local_128;
    local_148 = 3;
    local_140 = local_d8;
    local_138 = local_d4;
    FUN_00840290(auStack_178,(*(uint *)(param_1 + 0x4d4) & 2) != 0,
                 (*(uint *)(param_1 + 0x4d4) & 1) != 0,0);
    local_128 = local_ac;
    local_124 = local_74;
    local_120 = local_a8;
    local_11c = local_70;
    local_158 = *(undefined4 *)(param_1 + 0x4ec);
    local_150 = &local_128;
    local_148 = 3;
    local_140 = local_d0;
    local_138 = *(undefined4 *)(param_1 + 0x558);
    FUN_00840290(auStack_178,(*(uint *)(param_1 + 0x4d4) & 8) != 0,
                 (*(uint *)(param_1 + 0x4d4) & 4) != 0,*(undefined4 *)(param_1 + 0x4e8));
    FUN_0083ff90(local_40);
    FUN_0083ff90(local_30);
  }
  FUN_008482c0(param_1,local_c0);
  local_c4 = 0;
  bVar7 = (*(uint *)(param_1 + 0x4d4) & 1) != 0;
  if (bVar7) {
    local_c4 = 4;
  }
  local_c8 = (uint)bVar7;
  if ((*(uint *)(param_1 + 0x4d4) & 2) != 0) {
    local_c4 = local_c4 | 8;
    local_c8 = local_c8 | 2;
  }
  local_158 = 0;
  local_148 = local_74;
  local_140 = local_d4;
  local_138._0_1_ = 4;
  FUN_008403a0(auStack_178,0,0,0);
  local_158 = 0;
  local_148 = local_74;
  local_140 = local_d4;
  local_138._0_1_ = 4;
  FUN_008403a0(auStack_178,*(undefined4 *)(param_1 + 0x4e8),0,local_ac - *(int *)(param_1 + 0x520));
  local_158 = local_74;
  local_148 = local_70;
  local_140 = local_d4;
  local_138._0_1_ = 4;
  FUN_008403a0(auStack_178,0,*(undefined4 *)(param_1 + 0x4ec),0);
  local_158 = local_74;
  local_150 = (int *)CONCAT44(local_150._4_4_,local_a8);
  local_148 = local_70;
  local_140 = *(undefined4 *)(param_1 + 0x558);
  local_138 = (uint)local_138._1_3_ << 8;
  FUN_008403a0(auStack_178,*(undefined4 *)(param_1 + 0x4e8),*(undefined4 *)(param_1 + 0x4ec),
               local_ac - *(int *)(param_1 + 0x520));
  if ((((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && ((*(uint *)(param_1 + 0x4d4) & 0x1000) != 0))
     && (*(char *)(param_1 + 0x524) != '\0')) {
    pcVar3 = (code *)FUN_00411550(param_1,0xffb0);
    cVar1 = (*pcVar3)(param_1);
    if (cVar1 != '\0') {
      FUN_008482c0(param_1,&local_128);
      FUN_00844000(param_1,&local_128,local_108,0);
      FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),0);
      if (*(char *)(param_1 + 0x55c) == '\x01') {
        iVar6 = FUN_0044f080();
        if (5 < iVar6) {
          cVar1 = FUN_00781870();
          if (cVar1 == '\0') {
            FUN_00423b10(local_108,0xffffffff,0xffffffff);
          }
        }
      }
      cVar1 = FUN_00781870();
      if ((cVar1 == '\0') || (*(char *)(param_1 + 0x478) == '\0')) {
        pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
        cVar1 = (*pcVar3)(param_1);
        if (cVar1 == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x490) + 0x98))
                    (*(longlong **)(param_1 + 0x490),local_f8);
        }
        else {
          uVar5 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
          thunk_FUN_03b3ef59(uVar5,local_f8);
        }
      }
      else {
        uVar5 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x490));
        FUN_00778530(uVar5,local_f8);
      }
    }
  }
  if ((*(byte *)(param_1 + 0x2c8) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 200);
  }
  if (local_a8 < local_a4) {
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),
                 *(undefined4 *)(param_1 + 0x558));
    local_158 = local_70;
    FUN_004238d0(&local_128,local_a8,0,local_a4);
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0xa8))
              (*(longlong **)(param_1 + 0x490),&local_128);
  }
  if (local_70 < local_6c) {
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x490) + 0x80),
                 *(undefined4 *)(param_1 + 0x558));
    local_158 = local_6c;
    FUN_004238d0(&local_128,0,local_70,local_a4);
    (**(code **)(**(longlong **)(param_1 + 0x490) + 0xa8))
              (*(longlong **)(param_1 + 0x490),&local_128);
  }
  pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
  cVar1 = (*pcVar3)(param_1);
  if (cVar1 != '\0') {
    FUN_00842410(param_1,0);
  }
  return;
}

