/* Ghidra address: 00fb1580 */
/* Ghidra symbol: FUN_00fb1580 */


void FUN_00fb1580(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
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
  undefined1 *local_40;
  char local_29;
  
  local_40 = auStack_c8;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_70 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_48 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  *(undefined4 *)(param_1 + 0xa40) = uVar1;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_48);
  local_29 = FUN_00f60f00(local_48);
  if (local_29 == '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_58);
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_68,PTR_PTR_02002978);
    FUN_00b8e650(uVar2,&local_60,L"HDLStrings.Msg_FC_NotValidInt",local_68);
    local_a8 = local_60;
    FUN_00416cd0(&local_50,3,local_58,&DAT_00fb1878);
    FUN_00fb1510(param_1,local_50);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_70);
    uVar1 = FUN_00f60f70(local_70);
    *(undefined4 *)(param_1 + 0xa44) = uVar1;
  }
  FUN_00414560(&local_90,2);
  FUN_00414560(&local_80,3);
  FUN_00414560(&local_68,2);
  FUN_00414560(&local_58,3);
  return;
}

