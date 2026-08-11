/* Ghidra address: 00fbe480 */
/* Ghidra symbol: FUN_00fbe480 */


void FUN_00fbe480(longlong param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
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
  undefined1 *local_50;
  char local_39;
  
  local_50 = auStack_128;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_a8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_58 = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))(*(longlong **)(param_1 + 0x700));
  *(undefined4 *)(param_1 + 0xad8) = uVar2;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_58);
  local_39 = FUN_00f60f00(local_58);
  if (local_39 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_68);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_78,PTR_PTR_02002978);
    FUN_00b8e650(uVar3,&local_70,L"HDLStrings.Msg_FC_NotValidInt",local_78);
    local_108 = local_70;
    FUN_00416cd0(&local_60,3,local_68,&DAT_00fbeb5c);
    FUN_00fbe410(param_1,local_60);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_80);
    uVar2 = FUN_00f60f70(local_80);
    *(undefined4 *)(param_1 + 0xadc) = uVar2;
  }
  if (*(char *)(param_1 + 0x7d1) == '\x03') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_a8);
    local_39 = FUN_00f60f00(local_a8);
    if (local_39 == '\0') {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_b8);
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_c8,PTR_PTR_02002978);
      FUN_00b8e650(uVar3,&local_c0,L"HDLStrings.Msg_FC_NotValidInt",local_c8);
      local_108 = local_c0;
      FUN_00416cd0(&local_b0,3,local_b8,&DAT_00fbeb5c);
      FUN_00fbe410(param_1,local_b0);
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_d0);
      uVar2 = FUN_00f60f70(local_d0);
      *(undefined4 *)(param_1 + 0xae0) = uVar2;
    }
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0))
    ;
    *(undefined4 *)(param_1 + 0xae4) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0))
    ;
    *(undefined4 *)(param_1 + 0xae8) = uVar2;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720))
    ;
    *(undefined4 *)(param_1 + 0xaec) = uVar2;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728));
  *(undefined1 *)(param_1 + 0xaf0) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  *(undefined1 *)(param_1 + 0xaf1) = uVar1;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x260))(*(longlong **)(param_1 + 0x778));
  *(undefined1 *)(param_1 + 0xaf2) = uVar1;
  FUN_00414560(&local_f0,2);
  FUN_00414560(&local_e0,3);
  FUN_00414560(&local_c8,2);
  FUN_00414560(&local_b8,3);
  FUN_00414560(&local_a0,2);
  FUN_00414560(&local_90,3);
  FUN_00414560(&local_78,2);
  FUN_00414560(&local_68,3);
  return;
}

