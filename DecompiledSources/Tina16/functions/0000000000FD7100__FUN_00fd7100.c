/* Ghidra address: 00fd7100 */
/* Ghidra symbol: FUN_00fd7100 */


void FUN_00fd7100(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  
  local_30 = auStack_d8;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_38 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_38);
  uVar3 = FUN_0043fc00(local_38);
  *(undefined4 *)(param_1 + 0x708) = uVar3;
  if ((*(int *)(param_1 + 0x708) < 0) || (7 < *(int *)(param_1 + 0x708))) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f0),&local_48);
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_58,PTR_PTR_02004000);
    FUN_00b8e650(uVar4,&local_50,L"HDLStrings.Msg_FC_InvValue",local_58);
    local_b8 = local_50;
    FUN_00416cd0(&local_40,3,local_48,&DAT_00fd754c);
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_40);
    FUN_004134c0(uVar4);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_60);
  cVar1 = FUN_00f60aa0(local_60);
  if (cVar1 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_78);
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_88,PTR_PTR_02002020);
    FUN_00b8e650(uVar4,&local_80,L"HDLStrings.Msg_FC_InvIdentifier",local_88);
    local_b8 = local_80;
    FUN_00416cd0(&local_70,3,local_78,&DAT_00fd754c);
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_70);
    FUN_004134c0(uVar4);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_68);
    FUN_00414ad0(param_1 + 0x700,local_68);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  *(undefined1 *)(param_1 + 0x70c) = uVar2;
  FUN_00414560(&local_a8,2);
  FUN_00414560(&local_98,2);
  FUN_00414560(&local_88,2);
  FUN_00414560(&local_78,4);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_48,3);
  return;
}

