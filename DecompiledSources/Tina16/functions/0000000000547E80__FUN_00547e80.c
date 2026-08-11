/* Ghidra address: 00547e80 */
/* Ghidra symbol: FUN_00547e80 */


undefined8
FUN_00547e80(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,int param_5)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_148;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined8 *local_c8;
  longlong local_b8;
  int local_b0;
  int local_ac;
  undefined8 *local_a8;
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
  
  local_f0 = auStack_178;
  local_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_a0 = 0;
  local_a8 = (undefined8 *)0x0;
  local_88 = *param_3;
  uStack_80 = param_3[1];
  uStack_78 = param_3[2];
  uStack_70 = param_3[3];
  FUN_004179d0(&local_88,&DAT_00527bf8);
  (**(code **)(*param_1 + 0x70))(param_1,&local_a8);
  local_94 = param_5 + 1;
  local_c8 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    local_c8 = (undefined8 *)local_a8[-1];
  }
  if ((undefined8 *)(longlong)local_94 != local_c8) {
    uVar4 = FUN_0044d710(&PTR_FUN_005277c0,1,PTR_PTR_02001778);
    FUN_004134c0(uVar4);
  }
  cVar1 = FUN_00557bb0(param_1);
  if (cVar1 != '\0') {
    local_94 = local_94 + 1;
  }
  cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (cVar1 == '\0') {
    local_94 = local_94 + 1;
  }
  FUN_00419260(&local_a0,&DAT_00492e48,1,(longlong)local_94);
  local_b0 = 0;
  local_b8 = 0;
  cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if (cVar1 == '\0') {
      local_d0 = (longlong *)FUN_00536e10(&local_88);
      local_d8 = *local_d0;
      local_68 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      local_b8 = local_d8;
      (**(code **)(*param_1 + 0x28))(param_1);
      uVar4 = FUN_00536e10(&local_88);
      FUN_00536640(&local_68,uVar4);
      FUN_00417c40(local_a0 + (longlong)local_b0 * 0x20,&local_68,&DAT_00527bf8);
      local_b0 = local_b0 + 1;
      FUN_00417740(&local_68,&DAT_00527bf8);
    }
    else {
      local_b8 = FUN_00537470(&local_88);
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
  }
  local_ac = 0;
  if (-1 < param_5) {
    param_5 = param_5 + 1;
    local_e0 = param_4;
    do {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      FUN_00535440(local_a8[local_ac],local_e0,local_a0 + (longlong)local_b0 * 0x20,uVar3);
      local_b0 = local_b0 + 1;
      local_ac = local_ac + 1;
      local_e0 = local_e0 + 0x20;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x58))(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x28))(param_1);
      uVar4 = FUN_00536e10(&local_88);
      FUN_00536640(&local_130,uVar4);
    }
    else {
      (**(code **)(*param_1 + 0x28))(param_1);
      FUN_005366b0(&local_110,local_b8);
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  if (cVar1 == '\x01') {
    sVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    local_90 = *(undefined8 *)(local_b8 + (longlong)sVar2 * 8);
  }
  else {
    local_90 = (**(code **)(*param_1 + 0x50))(param_1);
  }
  FUN_00534b80(local_90);
  lVar5 = (**(code **)(*param_1 + 0x30))(param_1);
  if (lVar5 == 0) {
    cVar1 = FUN_00557bb0(param_1);
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      local_158 = 0;
      local_150 = 0;
      local_148 = 0;
      FUN_00557210(param_2,local_90,local_a0,uVar3);
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      uVar4 = (**(code **)(*(longlong *)*local_a8 + 0x20))((longlong *)*local_a8);
      uVar4 = FUN_005466a0(uVar4);
      local_150 = (**(code **)(*param_1 + 0x60))(param_1);
      local_148 = 1;
      local_158 = uVar4;
      FUN_00557210(param_2,local_90,local_a0,uVar3);
    }
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    uVar4 = (**(code **)(*param_1 + 0x30))(param_1);
    uVar4 = FUN_005466a0(uVar4);
    local_150 = (**(code **)(*param_1 + 0x60))(param_1);
    local_148 = 0;
    local_158 = uVar4;
    FUN_00557210(param_2,local_90,local_a0,uVar3);
  }
  FUN_00417840(&local_130,&DAT_00527bf8,2);
  FUN_00419430(&local_a8,&DAT_00531510);
  FUN_00419430(&local_a0,&DAT_00492e48);
  FUN_00417740(&local_88,&DAT_00527bf8);
  return param_2;
}

