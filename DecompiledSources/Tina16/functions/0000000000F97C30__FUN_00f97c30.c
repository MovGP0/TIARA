/* Ghidra address: 00f97c30 */
/* Ghidra symbol: FUN_00f97c30 */


void FUN_00f97c30(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
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
  
  local_30 = auStack_a8;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_38 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  *(bool *)(param_1 + 0x6e8) = iVar1 == 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_38);
  iVar1 = FUN_0043fc00(local_38);
  *(int *)(param_1 + 0x6e4) = iVar1;
  if (iVar1 < 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_48);
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_58,PTR_PTR_02004000);
    FUN_00b8e650(uVar2,&local_50,L"HDLStrings.Msg_FC_InvValue",local_58);
    local_88 = local_50;
    FUN_00416cd0(&local_40,3,local_48,&DAT_00f97ef8);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_40);
    FUN_004134c0(uVar2);
  }
  FUN_00414560(&local_78,2);
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_48,3);
  return;
}

