/* Ghidra address: 00548da0 */
/* Ghidra symbol: FUN_00548da0 */


undefined8
FUN_00548da0(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,int param_5)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 *local_110;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  char local_c1;
  longlong *local_c0;
  longlong local_b8;
  int local_b0;
  int local_ac;
  longlong local_a8;
  longlong local_a0;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_110 = auStack_1d8;
  local_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_88 = *param_3;
  uStack_80 = param_3[1];
  uStack_78 = param_3[2];
  uStack_70 = param_3[3];
  FUN_004179d0(&local_88,&DAT_00527bf8);
  (**(code **)(*param_1 + 0x70))(param_1,&local_a8);
  local_d0 = local_a8;
  if (local_a8 != 0) {
    local_d0 = *(longlong *)(local_a8 + -8);
  }
  local_94 = param_5 + 1;
  if (local_94 != local_d0) {
    uVar4 = FUN_0044d710(&PTR_FUN_005277c0,1,PTR_PTR_02001778);
    local_94 = FUN_004134c0(uVar4);
  }
  cVar1 = FUN_00557bb0(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00557be0(param_1);
    if (cVar1 == '\0') goto LAB_00548ef4;
  }
  local_94 = local_94 + 1;
LAB_00548ef4:
  cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (cVar1 == '\0') {
    local_94 = local_94 + 1;
  }
  FUN_00419260(&local_a0,&DAT_00492e48,1,(longlong)local_94);
  local_b0 = 0;
  local_b8 = 0;
  local_c1 = '\x01';
  local_c0 = (longlong *)0x0;
  cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00557bb0(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_00557be0(param_1);
      if (cVar1 == '\0') {
        cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
        if (cVar1 == '\0') {
          local_f0 = (longlong *)FUN_00536e10(&local_88);
          local_f8 = *local_f0;
          local_b8 = local_f8;
          (**(code **)(*param_1 + 0x28))(param_1);
          FUN_00417c40(local_a0 + (longlong)local_b0 * 0x20,&local_88,&DAT_00527bf8);
          local_b0 = local_b0 + 1;
        }
        else {
          local_b8 = FUN_00537470(&local_88);
          (**(code **)(*param_1 + 0x28))(param_1);
          FUN_00417c40(local_a0 + (longlong)local_b0 * 0x20,&local_88,&DAT_00527bf8);
          local_b0 = local_b0 + 1;
        }
      }
      else {
        local_e0 = (longlong *)FUN_00536e10(&local_88);
        local_e8 = *local_e0;
        local_b8 = local_e8;
        (**(code **)(*param_1 + 0x28))(param_1);
        FUN_00417c40(local_a0 + (longlong)local_b0 * 0x20,&local_88,&DAT_00527bf8);
        local_b0 = local_b0 + 1;
        FUN_005366f0(&local_150,1);
        FUN_00417c40(local_a0 + (longlong)local_b0 * 0x20,&local_150,&DAT_00527bf8);
        local_b0 = local_b0 + 1;
      }
    }
    else {
      local_c1 = FUN_005660f0(&local_88,&local_b8,1);
      if (local_c1 == '\0') {
        local_c0 = (longlong *)FUN_00536e10(&local_88);
        if (local_c0 == (longlong *)0x0) {
          local_b8 = 0;
        }
        else {
          local_d8 = *local_c0;
          local_b8 = local_d8;
        }
      }
      else {
        local_c0 = (longlong *)0x0;
      }
      if (local_c1 == '\0') {
        local_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        (**(code **)(*param_1 + 0x28))(param_1);
        FUN_00536640(&local_68,local_c0);
        FUN_00417c40(local_a0 + (longlong)local_b0 * 0x20,&local_68,&DAT_00527bf8);
        local_b0 = local_b0 + 1;
        FUN_00417740(&local_68,&DAT_00527bf8);
      }
      else {
        local_48 = 0;
        uStack_40 = 0;
        uStack_38 = 0;
        uStack_30 = 0;
        (**(code **)(*param_1 + 0x28))(param_1);
        FUN_005366b0(&local_48,local_b8);
        FUN_00417c40(local_a0 + (longlong)local_b0 * 0x20,&local_48,&DAT_00527bf8);
        local_b0 = local_b0 + 1;
        FUN_00417740(&local_48,&DAT_00527bf8);
      }
      FUN_005366f0(&local_130,local_c1);
      FUN_00417c40(local_a0 + (longlong)local_b0 * 0x20,&local_130,&DAT_00527bf8);
      local_b0 = local_b0 + 1;
    }
    if (local_b8 != 0) {
      uVar4 = FUN_005586e0(param_1);
      uVar4 = FUN_0054a100(uVar4);
      cVar1 = FUN_00411580(local_b8,uVar4);
      if (cVar1 == '\0') {
        uVar4 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
        FUN_004134c0(uVar4);
      }
    }
  }
  local_ac = 0;
  if (-1 < param_5) {
    param_5 = param_5 + 1;
    local_100 = param_4;
    do {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      FUN_00535440(*(undefined8 *)(local_a8 + (longlong)local_ac * 8),local_100,
                   local_a0 + (longlong)local_b0 * 0x20,uVar3);
      local_b0 = local_b0 + 1;
      local_ac = local_ac + 1;
      local_100 = local_100 + 0x20;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x38))(param_1);
    if (cVar1 == '\x01') {
      sVar2 = (**(code **)(*param_1 + 0x48))(param_1);
      local_90 = *(undefined8 *)(local_b8 + (longlong)sVar2 * 8);
    }
    else if (cVar1 == '\x02') {
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
      local_90 = FUN_004114d0(local_b8,uVar3);
    }
    else {
      local_90 = (**(code **)(*param_1 + 0x50))(param_1);
    }
  }
  else {
    local_90 = (**(code **)(*param_1 + 0x50))(param_1);
  }
  FUN_00534b80(local_90);
  cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00557bb0(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    else if (local_c1 == '\0') {
      (**(code **)(*param_1 + 0x28))(param_1);
      FUN_00536640(&local_190,local_c0);
    }
    else {
      (**(code **)(*param_1 + 0x28))(param_1);
      FUN_005366b0(&local_170,local_b8);
    }
  }
  lVar5 = (**(code **)(*param_1 + 0x30))(param_1);
  if (lVar5 == 0) {
    cVar1 = FUN_00557bb0(param_1);
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      local_1b8 = 0;
      local_1b0 = 0;
      local_1a8 = 0;
      FUN_00557210(param_2,local_90,local_a0,uVar3);
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      local_1b0 = (**(code **)(*param_1 + 0x60))(param_1);
      local_1b8 = *(undefined8 *)(local_b8 + -0xa8);
      local_1a8 = 1;
      FUN_00557210(param_2,local_90,local_a0,uVar3);
    }
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    uVar4 = (**(code **)(*param_1 + 0x30))(param_1);
    uVar4 = FUN_005466a0(uVar4);
    local_1b0 = (**(code **)(*param_1 + 0x60))(param_1);
    local_1a8 = 0;
    local_1b8 = uVar4;
    FUN_00557210(param_2,local_90,local_a0,uVar3);
  }
  FUN_00417840(&local_190,&DAT_00527bf8,4);
  FUN_00419430(&local_a8,&DAT_00531510);
  FUN_00419430(&local_a0,&DAT_00492e48);
  FUN_00417740(&local_88,&DAT_00527bf8);
  return param_2;
}

