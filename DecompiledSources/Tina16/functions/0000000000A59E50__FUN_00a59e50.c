/* Ghidra address: 00a59e50 */
/* Ghidra symbol: FUN_00a59e50 */


void FUN_00a59e50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                 undefined *param_5,undefined *param_6,undefined8 param_7,longlong param_8)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined1 auStack_1a8 [32];
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ushort *local_38;
  ushort *local_30;
  
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x90) + 0x30) == '\0') {
LAB_00a5a058:
    local_30 = (ushort *)(*(longlong *)(param_1 + 0x90) + 0x90);
    if (*local_30 < 0x20) {
      bVar3 = (1 << ((byte)*local_30 & 0x1f) & 0x1f007cU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_004688e0(&local_50,0);
      cVar1 = FUN_0046f3b0(*(longlong *)(param_1 + 0x90) + 0x90,&local_50);
      if (cVar1 != '\0') {
        uVar4 = FUN_00464c60(*(longlong *)(param_1 + 0x90) + 0x90);
        goto LAB_00a5a10b;
      }
    }
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8);
  }
  else {
    iVar2 = FUN_00416db0(param_3,&PTR_DAT_00a5acfc);
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(param_3,&DAT_00a5ad10);
      if (iVar2 != 0) goto LAB_00a5a058;
    }
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8);
  }
LAB_00a5a10b:
  if (param_6 == (undefined *)0x0) {
LAB_00a5a147:
    bVar3 = true;
  }
  else {
    iVar2 = FUN_00416db0(param_6,L"hover");
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(param_6,L"visited");
      if (iVar2 != 0) goto LAB_00a5a147;
    }
    bVar3 = false;
  }
  iVar2 = FUN_00416db0(param_3,&DAT_00a5ad5c);
  if (iVar2 == 0) {
    iVar2 = FUN_00416db0(param_6,L"link");
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(param_6,L"visited");
      if (iVar2 != 0) goto LAB_00a5a1ba;
    }
    FUN_00416ba0(&local_58,&DAT_00a5ad84,param_6);
    FUN_00a59b40(auStack_1a8,local_58,0);
  }
LAB_00a5a1ba:
  if (bVar3) {
    FUN_00a59b40(auStack_1a8,param_3,0);
  }
  FUN_00a57dd0(auStack_1a8,*(undefined8 *)(param_1 + 0xd8));
  if (param_6 != (undefined *)0x0) {
    FUN_00416ba0(&local_60,&DAT_00a5ad98,param_6);
    FUN_00a59b40(auStack_1a8,local_60,0);
  }
  if ((bool)(bVar3 & param_4 != (undefined *)0x0)) {
    FUN_00416ba0(&local_68,&DAT_00a5ada8,param_4);
    FUN_00a59b40(auStack_1a8,local_68,0);
    local_188 = param_4;
    FUN_00416cd0(&local_70,3,param_3,&DAT_00a5ada8);
    FUN_00a59b40(auStack_1a8,local_70,0);
  }
  if (param_6 != (undefined *)0x0) {
    local_188 = param_6;
    FUN_00416cd0(&local_78,3,param_3,&DAT_00a5ad98);
    FUN_00a59b40(auStack_1a8,local_78,0);
    if (param_4 != (undefined *)0x0) {
      local_188 = &DAT_00a5ad98;
      local_180 = param_6;
      FUN_00416cd0(&local_80,4,&DAT_00a5ada8,param_4);
      FUN_00a59b40(auStack_1a8,local_80,0);
      local_180 = &DAT_00a5ad98;
      local_178 = param_6;
      local_188 = param_4;
      FUN_00416cd0(&local_88,5,param_3,&DAT_00a5ada8);
      FUN_00a59b40(auStack_1a8,local_88,0);
    }
  }
  if (param_5 != (undefined *)0x0) {
    FUN_00416ba0(&local_90,&DAT_00a5adb8,param_5);
    FUN_00a59b40(auStack_1a8,local_90,0);
    local_188 = param_5;
    FUN_00416cd0(&local_98,3,param_3,&DAT_00a5adb8);
    FUN_00a59b40(auStack_1a8,local_98,0);
    if (param_4 != (undefined *)0x0) {
      local_188 = &DAT_00a5adb8;
      local_180 = param_5;
      FUN_00416cd0(&local_a0,4,&DAT_00a5ada8,param_4);
      FUN_00a59b40(auStack_1a8,local_a0,0);
    }
    if (param_6 != (undefined *)0x0) {
      local_188 = &DAT_00a5ad98;
      local_180 = param_6;
      FUN_00416cd0(&local_a8,4,&DAT_00a5adb8,param_5);
      FUN_00a59b40(auStack_1a8,local_a8,0);
      local_188 = param_5;
      local_180 = &DAT_00a5ad98;
      local_178 = param_6;
      FUN_00416cd0(&local_b0,5,param_3,&DAT_00a5adb8);
      FUN_00a59b40(auStack_1a8,local_b0,0);
    }
    if (param_4 != (undefined *)0x0) {
      local_180 = &DAT_00a5adb8;
      local_178 = param_5;
      local_188 = param_4;
      FUN_00416cd0(&local_b8,5,param_3,&DAT_00a5ada8);
      FUN_00a59b40(auStack_1a8,local_b8,0);
      if (param_6 != (undefined *)0x0) {
        local_188 = &DAT_00a5adb8;
        local_180 = param_5;
        local_178 = &DAT_00a5ad98;
        local_170 = param_6;
        FUN_00416cd0(&local_c0,6,&DAT_00a5ada8,param_4);
        FUN_00a59b40(auStack_1a8,local_c0,0);
        local_180 = &DAT_00a5adb8;
        local_178 = param_5;
        local_170 = &DAT_00a5ad98;
        local_168 = param_6;
        local_188 = param_4;
        FUN_00416cd0(&local_c8,7,param_3,&DAT_00a5ada8);
        FUN_00a59b40(auStack_1a8,local_c8,0);
      }
    }
  }
  if (bVar3) {
    FUN_00416ba0(&local_d0,param_3,&DAT_00a5adc8);
    FUN_00a59d30(auStack_1a8,local_d0);
  }
  if (param_6 != (undefined *)0x0) {
    local_188 = &DAT_00a5adc8;
    FUN_00416cd0(&local_d8,3,&DAT_00a5ad98,param_6);
    FUN_00a59d30(auStack_1a8,local_d8);
  }
  if ((bool)(bVar3 & param_4 != (undefined *)0x0)) {
    local_188 = &DAT_00a5adc8;
    FUN_00416cd0(&local_e0,3,&DAT_00a5ada8,param_4);
    FUN_00a59d30(auStack_1a8,local_e0);
    local_180 = &DAT_00a5adc8;
    local_188 = param_4;
    FUN_00416cd0(&local_e8,4,param_3,&DAT_00a5ada8);
    FUN_00a59d30(auStack_1a8,local_e8);
  }
  if (param_6 != (undefined *)0x0) {
    local_188 = param_6;
    local_180 = &DAT_00a5adc8;
    FUN_00416cd0(&local_f0,4,param_3,&DAT_00a5ad98);
    FUN_00a59d30(auStack_1a8,local_f0);
    if (param_4 != (undefined *)0x0) {
      local_188 = &DAT_00a5ad98;
      local_180 = param_6;
      local_178 = &DAT_00a5adc8;
      FUN_00416cd0(&local_f8,5,&DAT_00a5ada8,param_4);
      FUN_00a59d30(auStack_1a8,local_f8);
      local_180 = &DAT_00a5ad98;
      local_178 = param_6;
      local_170 = &DAT_00a5adc8;
      local_188 = param_4;
      FUN_00416cd0(&local_100,6,param_3,&DAT_00a5ada8);
      FUN_00a59d30(auStack_1a8,local_100);
    }
  }
  if (param_5 != (undefined *)0x0) {
    local_188 = &DAT_00a5adc8;
    FUN_00416cd0(&local_108,3,&DAT_00a5adb8,param_5);
    FUN_00a59d30(auStack_1a8,local_108);
    local_188 = param_5;
    local_180 = &DAT_00a5adc8;
    FUN_00416cd0(&local_110,4,param_3,&DAT_00a5adb8);
    FUN_00a59d30(auStack_1a8,local_110);
    if (param_4 != (undefined *)0x0) {
      local_188 = &DAT_00a5adb8;
      local_180 = param_5;
      local_178 = &DAT_00a5adc8;
      FUN_00416cd0(&local_118,5,&DAT_00a5ada8,param_4);
      FUN_00a59d30(auStack_1a8,local_118);
    }
    if (param_6 != (undefined *)0x0) {
      local_188 = &DAT_00a5ad98;
      local_180 = param_6;
      local_178 = &DAT_00a5adc8;
      FUN_00416cd0(&local_120,5,&DAT_00a5adb8,param_5);
      FUN_00a59d30(auStack_1a8,local_120);
      local_188 = param_5;
      local_180 = &DAT_00a5ad98;
      local_178 = param_6;
      local_170 = &DAT_00a5adc8;
      FUN_00416cd0(&local_128,6,param_3,&DAT_00a5adb8);
      FUN_00a59d30(auStack_1a8,local_128);
    }
    if (param_4 != (undefined *)0x0) {
      local_180 = &DAT_00a5adb8;
      local_178 = param_5;
      local_170 = &DAT_00a5adc8;
      local_188 = param_4;
      FUN_00416cd0(&local_130,6,param_3,&DAT_00a5ada8);
      FUN_00a59d30(auStack_1a8,local_130);
      if (param_6 != (undefined *)0x0) {
        local_188 = &DAT_00a5adb8;
        local_180 = param_5;
        local_178 = &DAT_00a5ad98;
        local_170 = param_6;
        local_168 = &DAT_00a5adc8;
        FUN_00416cd0(&local_138,7,&DAT_00a5ada8,param_4);
        FUN_00a59d30(auStack_1a8,local_138);
        local_180 = &DAT_00a5adb8;
        local_178 = param_5;
        local_170 = &DAT_00a5ad98;
        local_168 = param_6;
        local_160 = &DAT_00a5adc8;
        local_188 = param_4;
        FUN_00416cd0(&local_140,8,param_3,&DAT_00a5ada8);
        FUN_00a59d30(auStack_1a8,local_140);
      }
    }
  }
  if (param_8 != 0) {
    FUN_00a580e0(auStack_1a8,param_8,0);
  }
  iVar2 = FUN_00416db0(param_3,&DAT_00a5ad5c);
  if (iVar2 == 0) {
    iVar2 = FUN_00416db0(param_6,L"hover");
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(param_6,L"active");
      if (iVar2 != 0) {
        FUN_00416ba0(&local_148,&DAT_00a5ad84,param_6);
        FUN_00a59b40(auStack_1a8,local_148,1);
      }
    }
  }
  local_38 = (ushort *)(*(longlong *)(param_1 + 0x90) + 0x90);
  if (*local_38 < 0x20) {
    bVar3 = (1 << ((byte)*local_38 & 0x1f) & 0x1f007cU) != 0;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    FUN_00467e90(&local_150,*(longlong *)(param_1 + 0x90) + 0x90);
    uVar4 = FUN_00a612b0(local_150,uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 8),
                         *(undefined1 *)(*(longlong *)(param_1 + 0x90) + 0x30));
    FUN_00468860(*(longlong *)(param_1 + 0x90) + 0x90,uVar4);
  }
  FUN_00414560(&local_150,0x20);
  FUN_00460ba0(&local_50);
  return;
}

