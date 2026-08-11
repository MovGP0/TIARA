/* Ghidra address: 00fa28e0 */
/* Ghidra symbol: FUN_00fa28e0 */


void FUN_00fa28e0(longlong param_1)

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
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_68);
  local_49 = FUN_00f60f00(local_68);
  if (local_49 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_78);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_88,PTR_PTR_02002978);
    FUN_00b8e650(uVar3,&local_80,L"HDLStrings.Msg_FC_NotValidInt",local_88);
    local_168 = local_80;
    FUN_00416cd0(&local_70,3,local_78,&DAT_00fa3ab0);
    FUN_00fa2870(param_1,local_70);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_90);
    local_50 = FUN_00f60f70(local_90);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7d8),&local_b8);
  local_49 = FUN_00f60f00(local_b8);
  if (local_49 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7d8),&local_c8);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_d8,PTR_PTR_02002978);
    FUN_00b8e650(uVar3,&local_d0,L"HDLStrings.Msg_FC_NotValidInt",local_d8);
    local_168 = local_d0;
    FUN_00416cd0(&local_c0,3,local_c8,&DAT_00fa3ab0);
    FUN_00fa2870(param_1,local_c0);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7d8),&local_e0);
    local_54 = FUN_00f60f70(local_e0);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x7e8),&local_108);
  local_49 = FUN_00f60f00(local_108);
  if (local_49 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7e8),&local_118);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_128,PTR_PTR_02002978);
    FUN_00b8e650(uVar3,&local_120,L"HDLStrings.Msg_FC_NotValidInt",local_128);
    local_168 = local_120;
    FUN_00416cd0(&local_110,3,local_118,&DAT_00fa3ab0);
    FUN_00fa2870(param_1,local_110);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x7e8),&local_130);
    local_58 = FUN_00f60f70(local_130);
  }
  if (*(char *)(param_1 + 0x8f1) == '\x02') {
    *(undefined4 *)(param_1 + 0x948) = local_50;
    *(undefined4 *)(param_1 + 0x94c) = local_54;
    *(undefined4 *)(param_1 + 0x950) = local_58;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    *(undefined4 *)(param_1 + 0x944) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x260))(*(longlong **)(param_1 + 0x7f8))
    ;
    *(undefined4 *)(param_1 + 0x954) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x260))(*(longlong **)(param_1 + 0x808))
    ;
    *(undefined4 *)(param_1 + 0x958) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x818) + 0x260))(*(longlong **)(param_1 + 0x818))
    ;
    *(undefined4 *)(param_1 + 0x95c) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x260))(*(longlong **)(param_1 + 0x830))
    ;
    *(undefined4 *)(param_1 + 0x960) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))(*(longlong **)(param_1 + 0x838))
    ;
    *(undefined4 *)(param_1 + 0x964) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0))
    ;
    *(undefined1 *)(param_1 + 0x968) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8))
    ;
    *(undefined1 *)(param_1 + 0x969) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700))
    ;
    *(undefined1 *)(param_1 + 0x96a) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8))
    ;
    *(undefined1 *)(param_1 + 0x96b) = uVar1;
    if (*(int *)(param_1 + 0x870) == 1) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
      *(undefined1 *)(param_1 + 0x96c) = uVar1;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                        (*(longlong **)(param_1 + 0x7c0));
      *(undefined1 *)(param_1 + 0x96c) = uVar1;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710))
    ;
    *(undefined1 *)(param_1 + 0x96d) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    *(undefined1 *)(param_1 + 0x96e) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720))
    ;
    *(undefined1 *)(param_1 + 0x96f) = uVar1;
    *(undefined1 *)(param_1 + 0x970) = *(undefined1 *)(param_1 + 0x890);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760))
    ;
    *(undefined4 *)(param_1 + 0xba8) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x770) + 0x260))(*(longlong **)(param_1 + 0x770))
    ;
    *(undefined1 *)(param_1 + 0xbac) = uVar1;
    *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_1 + 0x894);
  }
  if (*(char *)(param_1 + 0x8f1) == '\x0f') {
    *(undefined4 *)(param_1 + 0x9b8) = local_50;
    *(undefined4 *)(param_1 + 0x9bc) = local_54;
    *(undefined4 *)(param_1 + 0x9c0) = local_58;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    *(undefined4 *)(param_1 + 0x9b4) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x260))(*(longlong **)(param_1 + 0x7f8))
    ;
    *(undefined4 *)(param_1 + 0x9d0) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x260))(*(longlong **)(param_1 + 0x808))
    ;
    *(undefined4 *)(param_1 + 0x9d4) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x818) + 0x260))(*(longlong **)(param_1 + 0x818))
    ;
    *(undefined4 *)(param_1 + 0x9d8) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x260))(*(longlong **)(param_1 + 0x830))
    ;
    *(undefined4 *)(param_1 + 0x9e4) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))(*(longlong **)(param_1 + 0x838))
    ;
    *(undefined4 *)(param_1 + 0x9ec) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0))
    ;
    *(undefined1 *)(param_1 + 0xa24) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8))
    ;
    *(undefined1 *)(param_1 + 0x9f4) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700))
    ;
    *(undefined1 *)(param_1 + 0x9f5) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8))
    ;
    *(undefined1 *)(param_1 + 0x9f9) = uVar1;
    if (*(int *)(param_1 + 0x870) == 1) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
      *(undefined1 *)(param_1 + 0x9fa) = uVar1;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                        (*(longlong **)(param_1 + 0x7c0));
      *(undefined1 *)(param_1 + 0x9fa) = uVar1;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710))
    ;
    *(undefined1 *)(param_1 + 0x9fb) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    *(undefined1 *)(param_1 + 0x9fc) = uVar1;
    *(undefined1 *)(param_1 + 0x9fd) = *(undefined1 *)(param_1 + 0x890);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760))
    ;
    *(undefined4 *)(param_1 + 0xba8) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x770) + 0x260))(*(longlong **)(param_1 + 0x770))
    ;
    *(undefined1 *)(param_1 + 0xbac) = uVar1;
    *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_1 + 0x894);
  }
  if (*(char *)(param_1 + 0x8f1) == '\x10') {
    *(undefined4 *)(param_1 + 0xa30) = local_50;
    *(undefined4 *)(param_1 + 0xa34) = local_54;
    *(undefined4 *)(param_1 + 0xa38) = local_58;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0))
    ;
    *(undefined4 *)(param_1 + 0xa2c) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x260))(*(longlong **)(param_1 + 0x7f8))
    ;
    *(undefined4 *)(param_1 + 0xa48) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x808) + 0x260))(*(longlong **)(param_1 + 0x808))
    ;
    *(undefined4 *)(param_1 + 0xa4c) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x818) + 0x260))(*(longlong **)(param_1 + 0x818))
    ;
    *(undefined4 *)(param_1 + 0xa50) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x830) + 0x260))(*(longlong **)(param_1 + 0x830))
    ;
    *(undefined4 *)(param_1 + 0xa5c) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x838) + 0x260))(*(longlong **)(param_1 + 0x838))
    ;
    *(undefined4 *)(param_1 + 0xa64) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0))
    ;
    *(undefined1 *)(param_1 + 0xa9c) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8))
    ;
    *(undefined1 *)(param_1 + 0xa6c) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700))
    ;
    *(undefined1 *)(param_1 + 0xa6d) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8))
    ;
    *(undefined1 *)(param_1 + 0xa71) = uVar1;
    if (*(int *)(param_1 + 0x870) == 1) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
      *(undefined1 *)(param_1 + 0xa72) = uVar1;
    }
    else {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x7c0) + 0x260))
                        (*(longlong **)(param_1 + 0x7c0));
      *(undefined1 *)(param_1 + 0xa72) = uVar1;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710))
    ;
    *(undefined1 *)(param_1 + 0xa73) = uVar1;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718))
    ;
    *(undefined1 *)(param_1 + 0xa74) = uVar1;
    *(undefined1 *)(param_1 + 0xa76) = *(undefined1 *)(param_1 + 0x890);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x760) + 0x260))(*(longlong **)(param_1 + 0x760))
    ;
    *(undefined4 *)(param_1 + 0xba8) = uVar2;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x770) + 0x260))(*(longlong **)(param_1 + 0x770))
    ;
    *(undefined1 *)(param_1 + 0xbac) = uVar1;
    *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_1 + 0x894);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8e8));
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

