/* Ghidra address: 00fa91b0 */
/* Ghidra symbol: FUN_00fa91b0 */


void FUN_00fa91b0(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_188 [32];
  undefined8 local_168;
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
  undefined1 *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  char local_49;
  
  local_60 = auStack_188;
  local_138 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_130 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_108 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_90 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_68 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x828),&local_68);
  local_49 = FUN_00f60f00(local_68);
  if (local_49 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x828),&local_78);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_88,PTR_PTR_02002978);
    FUN_00b8e650(uVar3,&local_80,L"HDLStrings.Msg_FC_NotValidInt",local_88);
    local_168 = local_80;
    FUN_00416cd0(&local_70,3,local_78,&DAT_00faa5e0);
    FUN_00fa9140(param_1,local_70);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x828),&local_90);
    local_50 = FUN_00f60f70(local_90);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x830),&local_b8);
  local_49 = FUN_00f60f00(local_b8);
  if (local_49 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x830),&local_c8);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_d8,PTR_PTR_02002978);
    FUN_00b8e650(uVar3,&local_d0,L"HDLStrings.Msg_FC_NotValidInt",local_d8);
    local_168 = local_d0;
    FUN_00416cd0(&local_c0,3,local_c8,&DAT_00faa5e0);
    FUN_00fa9140(param_1,local_c0);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x830),&local_e0);
    local_54 = FUN_00f60f70(local_e0);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a8),&local_108);
  local_49 = FUN_00f60f00(local_108);
  if (local_49 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a8),&local_118);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_128,PTR_PTR_02002978);
    FUN_00b8e650(uVar3,&local_120,L"HDLStrings.Msg_FC_NotValidInt",local_128);
    local_168 = local_120;
    FUN_00416cd0(&local_110,3,local_118,&DAT_00faa5e0);
    FUN_00fa9140(param_1,local_110);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7a8),&local_130);
    local_58 = FUN_00f60f70(local_130);
  }
  if (*(char *)(param_1 + 0x8b1) == '\x03') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    *(undefined4 *)(param_1 + 0x934) = uVar2;
    *(undefined4 *)(param_1 + 0x938) = local_50;
    *(undefined4 *)(param_1 + 0x93c) = local_54;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0))
    ;
    *(undefined4 *)(param_1 + 0x940) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    *(undefined4 *)(param_1 + 0x944) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    *(undefined4 *)(param_1 + 0x948) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8))
    ;
    *(undefined4 *)(param_1 + 0x94c) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728))
    ;
    *(undefined4 *)(param_1 + 0x950) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738))
    ;
    *(undefined4 *)(param_1 + 0x954) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    *(undefined4 *)(param_1 + 0x958) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    *(undefined4 *)(param_1 + 0x95c) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x260))(*(longlong **)(param_1 + 0x768))
    ;
    *(undefined4 *)(param_1 + 0x960) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778))
    ;
    *(undefined1 *)(param_1 + 0x964) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0x260))(*(longlong **)(param_1 + 0x780))
    ;
    *(undefined1 *)(param_1 + 0x965) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))(*(longlong **)(param_1 + 0x788))
    ;
    *(undefined1 *)(param_1 + 0x966) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x260))(*(longlong **)(param_1 + 0x790))
    ;
    *(undefined1 *)(param_1 + 0x967) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))(*(longlong **)(param_1 + 0x798))
    ;
    *(undefined1 *)(param_1 + 0x968) = uVar1;
    *(undefined4 *)(param_1 + 0x96c) = local_58;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x260))(*(longlong **)(param_1 + 0x7b0))
    ;
    *(undefined1 *)(param_1 + 0x969) = uVar1;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0))
    ;
    *(undefined4 *)(param_1 + 0x970) = uVar2;
  }
  if (*(char *)(param_1 + 0x8b1) == '\x0f') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    *(undefined4 *)(param_1 + 0x974) = uVar2;
    *(undefined4 *)(param_1 + 0x978) = local_50;
    *(undefined4 *)(param_1 + 0x9c0) = local_54;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0))
    ;
    *(undefined4 *)(param_1 + 0x990) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    *(undefined4 *)(param_1 + 0x994) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    *(undefined4 *)(param_1 + 0x998) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8))
    ;
    *(undefined4 *)(param_1 + 0x9a4) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728))
    ;
    *(undefined4 *)(param_1 + 0x9ac) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738))
    ;
    *(undefined4 *)(param_1 + 0x9c4) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    *(undefined4 *)(param_1 + 0x9c8) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    *(undefined4 *)(param_1 + 0x9cc) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x260))(*(longlong **)(param_1 + 0x768))
    ;
    *(undefined4 *)(param_1 + 0x9d0) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778))
    ;
    *(undefined1 *)(param_1 + 0x9d4) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0x260))(*(longlong **)(param_1 + 0x780))
    ;
    *(undefined1 *)(param_1 + 0x9d5) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))(*(longlong **)(param_1 + 0x788))
    ;
    *(undefined1 *)(param_1 + 0x9d6) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x260))(*(longlong **)(param_1 + 0x790))
    ;
    *(undefined1 *)(param_1 + 0x9d7) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))(*(longlong **)(param_1 + 0x798))
    ;
    *(undefined1 *)(param_1 + 0x9d8) = uVar1;
    *(undefined4 *)(param_1 + 0x9dc) = local_58;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x260))(*(longlong **)(param_1 + 0x7b0))
    ;
    *(undefined1 *)(param_1 + 0x9d9) = uVar1;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0))
    ;
    *(undefined4 *)(param_1 + 0x9e0) = uVar2;
  }
  if (*(char *)(param_1 + 0x8b1) == '\x10') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    *(undefined4 *)(param_1 + 0x9ec) = uVar2;
    *(undefined4 *)(param_1 + 0x9f0) = local_50;
    *(undefined4 *)(param_1 + 0xa38) = local_54;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0))
    ;
    *(undefined4 *)(param_1 + 0xa08) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    *(undefined4 *)(param_1 + 0xa0c) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    *(undefined4 *)(param_1 + 0xa10) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8))
    ;
    *(undefined4 *)(param_1 + 0xa1c) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728))
    ;
    *(undefined4 *)(param_1 + 0xa24) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738))
    ;
    *(undefined4 *)(param_1 + 0xa3c) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    *(undefined4 *)(param_1 + 0xa40) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    *(undefined4 *)(param_1 + 0xa44) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x260))(*(longlong **)(param_1 + 0x768))
    ;
    *(undefined4 *)(param_1 + 0xa48) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778))
    ;
    *(undefined1 *)(param_1 + 0xa4c) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0x260))(*(longlong **)(param_1 + 0x780))
    ;
    *(undefined1 *)(param_1 + 0xa4d) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))(*(longlong **)(param_1 + 0x788))
    ;
    *(undefined1 *)(param_1 + 0xa4e) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x260))(*(longlong **)(param_1 + 0x790))
    ;
    *(undefined1 *)(param_1 + 0xa4f) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))(*(longlong **)(param_1 + 0x798))
    ;
    *(undefined1 *)(param_1 + 0xa50) = uVar1;
    *(undefined4 *)(param_1 + 0xa54) = local_58;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x260))(*(longlong **)(param_1 + 0x7b0))
    ;
    *(undefined1 *)(param_1 + 0xa51) = uVar1;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0))
    ;
    *(undefined4 *)(param_1 + 0xa58) = uVar2;
  }
  if (*(char *)(param_1 + 0x8b1) == '\x11') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    *(undefined4 *)(param_1 + 0xa64) = uVar2;
    *(undefined4 *)(param_1 + 0xa68) = local_50;
    *(undefined4 *)(param_1 + 0xab0) = local_54;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0))
    ;
    *(undefined4 *)(param_1 + 0xa80) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    *(undefined4 *)(param_1 + 0xa84) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    *(undefined4 *)(param_1 + 0xa88) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8))
    ;
    *(undefined4 *)(param_1 + 0xa94) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728))
    ;
    *(undefined4 *)(param_1 + 0xa9c) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))(*(longlong **)(param_1 + 0x738))
    ;
    *(undefined4 *)(param_1 + 0xab4) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x748) + 0x260))(*(longlong **)(param_1 + 0x748))
    ;
    *(undefined4 *)(param_1 + 0xab8) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x758) + 0x260))(*(longlong **)(param_1 + 0x758))
    ;
    *(undefined4 *)(param_1 + 0xabc) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x260))(*(longlong **)(param_1 + 0x768))
    ;
    *(undefined4 *)(param_1 + 0xac0) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778))
    ;
    *(undefined1 *)(param_1 + 0xac4) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0x260))(*(longlong **)(param_1 + 0x780))
    ;
    *(undefined1 *)(param_1 + 0xac5) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x788) + 0x260))(*(longlong **)(param_1 + 0x788))
    ;
    *(undefined1 *)(param_1 + 0xac6) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x260))(*(longlong **)(param_1 + 0x790))
    ;
    *(undefined1 *)(param_1 + 0xac7) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))(*(longlong **)(param_1 + 0x798))
    ;
    *(undefined1 *)(param_1 + 0xac8) = uVar1;
    *(undefined4 *)(param_1 + 0xacc) = local_58;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7b0) + 0x260))(*(longlong **)(param_1 + 0x7b0))
    ;
    *(undefined1 *)(param_1 + 0xac9) = uVar1;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))(*(longlong **)(param_1 + 0x7c0))
    ;
    *(undefined4 *)(param_1 + 0xad0) = uVar2;
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8a8));
  FUN_00414560(&local_150,2);
  FUN_00414560(&local_140,3);
  FUN_00414560(&local_128,2);
  FUN_00414560(&local_118,3);
  FUN_00414560(&local_100,2);
  FUN_00414560(&local_f0,3);
  FUN_00414560(&local_d8,2);
  FUN_00414560(&local_c8,3);
  FUN_00414560(&local_b0,2);
  FUN_00414560(&local_a0,3);
  FUN_00414560(&local_88,2);
  FUN_00414560(&local_78,3);
  return;
}

