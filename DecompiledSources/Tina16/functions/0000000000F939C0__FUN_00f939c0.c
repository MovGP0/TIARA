/* Ghidra address: 00f939c0 */
/* Ghidra symbol: FUN_00f939c0 */


void FUN_00f939c0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
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
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  
  local_30 = auStack_f8;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_38);
  cVar1 = FUN_00f60aa0(local_38);
  if (cVar1 != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_40);
    cVar1 = FUN_00f60e10(local_40);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x714) = 0;
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_48);
      FUN_00414ad0(param_1 + 0x708,local_48);
      goto LAB_00f93c21;
    }
  }
  *(undefined1 *)(param_1 + 0x714) = 1;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_50);
  uVar3 = FUN_00f60f70(local_50);
  *(undefined4 *)(param_1 + 0x710) = uVar3;
  if ((*(int *)(param_1 + 0x710) < 0) || (0xff < *(int *)(param_1 + 0x710))) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_60);
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_70,PTR_PTR_02004000);
    FUN_00b8e650(uVar4,&local_68,L"HDLStrings.Msg_FC_InvValue",local_70);
    local_d8 = local_68;
    FUN_00416cd0(&local_58,3,local_60,&DAT_00f93eec);
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_58);
    FUN_004134c0(uVar4);
  }
LAB_00f93c21:
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_78);
  cVar1 = FUN_00f60aa0(local_78);
  if (cVar1 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_90);
    uVar4 = FUN_00b89270();
    FUN_0041ddd0(&local_a0,PTR_PTR_02002020);
    FUN_00b8e650(uVar4,&local_98,L"HDLStrings.Msg_FC_InvIdentifier",local_a0);
    local_d8 = local_98;
    FUN_00416cd0(&local_88,3,local_90,&DAT_00f93eec);
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_88);
    FUN_004134c0(uVar4);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_80);
    FUN_00414ad0(param_1 + 0x700,local_80);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0));
  *(undefined1 *)(param_1 + 0x715) = uVar2;
  FUN_00414560(&local_c0,2);
  FUN_00414560(&local_b0,2);
  FUN_00414560(&local_a0,2);
  FUN_00414560(&local_90,4);
  FUN_00414560(&local_70,2);
  FUN_00414560(&local_60,6);
  return;
}

