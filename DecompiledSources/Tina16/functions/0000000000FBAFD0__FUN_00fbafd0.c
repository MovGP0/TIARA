/* Ghidra address: 00fbafd0 */
/* Ghidra symbol: FUN_00fbafd0 */


void FUN_00fbafd0(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
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
  undefined1 *local_70;
  char local_59;
  
  local_70 = auStack_1e8;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_190 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_168 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_140 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_118 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_f0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_c8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_78 = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0));
  *(undefined4 *)(param_1 + 0xb70) = uVar2;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738));
  *(undefined4 *)(param_1 + 0xb74) = uVar2;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_78);
  local_59 = FUN_00f60f00(local_78);
  if (local_59 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_88);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_98,PTR_PTR_02002978);
    FUN_00b8e650(uVar3,&local_90,L"HDLStrings.Msg_FC_NotValidInt",local_98);
    local_1c8 = local_90;
    FUN_00416cd0(&local_80,3,local_88,&DAT_00fbbe24);
    FUN_00fbaf60(param_1,local_80);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_a0);
    uVar2 = FUN_00f60f70(local_a0);
    *(undefined4 *)(param_1 + 0xb7c) = uVar2;
  }
  if (*(char *)(param_1 + 0x8a1) == '\x06') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0))
    ;
    *(undefined4 *)(param_1 + 0xb8c) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x800) + 0x260))(*(longlong **)(param_1 + 0x800))
    ;
    *(undefined4 *)(param_1 + 0xb94) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x260))(*(longlong **)(param_1 + 0x808))
    ;
    *(undefined4 *)(param_1 + 0xb98) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740))
    ;
    *(undefined1 *)(param_1 + 0xba0) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    *(undefined1 *)(param_1 + 0xba1) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750))
    ;
    *(undefined1 *)(param_1 + 0xba2) = uVar1;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_c8);
    local_59 = FUN_00f60f00(local_c8);
    if (local_59 == '\0') {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_d8);
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_e8,PTR_PTR_02002978);
      FUN_00b8e650(uVar3,&local_e0,L"HDLStrings.Msg_FC_NotValidInt",local_e8);
      local_1c8 = local_e0;
      FUN_00416cd0(&local_d0,3,local_d8,&DAT_00fbbe24);
      FUN_00fbaf60(param_1,local_d0);
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_f0);
      uVar2 = FUN_00f60f70(local_f0);
      *(undefined4 *)(param_1 + 0xb80) = uVar2;
    }
  }
  if (*(char *)(param_1 + 0x8a1) == '\a') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8))
    ;
    *(undefined4 *)(param_1 + 0xb90) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x800) + 0x260))(*(longlong **)(param_1 + 0x800))
    ;
    *(undefined4 *)(param_1 + 0xb94) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x810) + 0x260))(*(longlong **)(param_1 + 0x810))
    ;
    *(undefined4 *)(param_1 + 0xb9c) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740))
    ;
    *(undefined1 *)(param_1 + 0xba0) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    *(undefined1 *)(param_1 + 0xba1) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750))
    ;
    *(undefined1 *)(param_1 + 0xba2) = uVar1;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),&local_118);
    local_59 = FUN_00f60f00(local_118);
    if (local_59 == '\0') {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),&local_128);
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_138,PTR_PTR_02002978);
      FUN_00b8e650(uVar3,&local_130,L"HDLStrings.Msg_FC_NotValidInt",local_138);
      local_1c8 = local_130;
      FUN_00416cd0(&local_120,3,local_128,&DAT_00fbbe24);
      FUN_00fbaf60(param_1,local_120);
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),&local_140);
      uVar2 = FUN_00f60f70(local_140);
      *(undefined4 *)(param_1 + 0xb84) = uVar2;
    }
  }
  if (*(char *)(param_1 + 0x8a1) == '\x05') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740))
    ;
    *(undefined1 *)(param_1 + 0xba0) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    *(undefined1 *)(param_1 + 0xba1) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750))
    ;
    *(undefined1 *)(param_1 + 0xba2) = uVar1;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_168);
    local_59 = FUN_00f60f00(local_168);
    if (local_59 == '\0') {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_178);
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_188,PTR_PTR_02002978);
      FUN_00b8e650(uVar3,&local_180,L"HDLStrings.Msg_FC_NotValidInt",local_188);
      local_1c8 = local_180;
      FUN_00416cd0(&local_170,3,local_178,&DAT_00fbbe24);
      FUN_00fbaf60(param_1,local_170);
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_190);
      uVar2 = FUN_00f60f70(local_190);
      *(undefined4 *)(param_1 + 0xb88) = uVar2;
    }
  }
  FUN_00414560(&local_1b0,2);
  FUN_00414560(&local_1a0,3);
  FUN_00414560(&local_188,2);
  FUN_00414560(&local_178,3);
  FUN_00414560(&local_160,2);
  FUN_00414560(&local_150,3);
  FUN_00414560(&local_138,2);
  FUN_00414560(&local_128,3);
  FUN_00414560(&local_110,2);
  FUN_00414560(&local_100,3);
  FUN_00414560(&local_e8,2);
  FUN_00414560(&local_d8,3);
  FUN_00414560(&local_c0,2);
  FUN_00414560(&local_b0,3);
  FUN_00414560(&local_98,2);
  FUN_00414560(&local_88,3);
  return;
}

