/* Ghidra address: 01415600 */
/* Ghidra symbol: FUN_01415600 */


void FUN_01415600(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res10;
  undefined4 *local_res18;
  undefined4 *local_res20;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_b8;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_24 = FUN_01b216c0(*(undefined8 *)(param_1 + 0xf8),local_res10);
  if (local_24 == -1) {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_58,PTR_PTR_02004ca8);
    FUN_00b8e650(uVar2,&local_50,L"HDLStrings.Msg_Not_Found",local_58);
    local_98 = local_res10;
    FUN_00416cd0(&local_48,3,local_50,&DAT_01415908);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_48);
    FUN_004134c0(uVar2);
  }
  (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x18))
            (*(longlong **)(param_1 + 0xf8),&local_30,local_24);
  FUN_0043ea00(&local_60,local_30);
  FUN_00414b50(&local_30,local_60);
  FUN_01b21120(local_30,local_20,0x20);
  (**(code **)(*local_20 + 0x18))(local_20,&local_70,4);
  FUN_00416ba0(&local_68,&DAT_0141591c,local_70);
  uVar1 = FUN_0043fc00(local_68);
  *local_res18 = uVar1;
  (**(code **)(*local_20 + 0x18))(local_20,&local_80,6);
  FUN_00416ba0(&local_78,&DAT_0141591c,local_80);
  uVar1 = FUN_0043fc00(local_78);
  *local_res20 = uVar1;
  FUN_00410f20(local_20);
  FUN_00414560(&local_80,8);
  FUN_00414480(&local_30);
  FUN_00414480(&local_res10);
  return;
}

