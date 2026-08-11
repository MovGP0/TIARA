/* Ghidra address: 01415920 */
/* Ghidra symbol: FUN_01415920 */


undefined4 FUN_01415920(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_01b216c0(*(undefined8 *)(param_1 + 0xf0),local_res10[0]);
  if (iVar1 == -1) {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_40,PTR_PTR_02004ca8);
    FUN_00b8e650(uVar2,&local_38,L"HDLStrings.Msg_Not_Found",local_40);
    FUN_00416cd0(local_30,3,local_38,&DAT_01415c38,local_res10[0]);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_30[0]);
    iVar1 = FUN_004134c0(uVar2);
  }
  (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))
            (*(longlong **)(param_1 + 0xf0),local_20,iVar1);
  FUN_0043ea00(&local_48,local_20[0]);
  FUN_00414b50(local_20,local_48);
  iVar1 = FUN_004170c0(&DAT_01415c4c,local_20[0],1);
  if (iVar1 == 0) {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_60,PTR_PTR_02004ca8);
    FUN_00b8e650(uVar2,&local_58,L"HDLStrings.Msg_Not_Found",local_60);
    FUN_00416cd0(&local_50,3,local_58,&DAT_01415c38,&DAT_01415c4c);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_50);
    iVar1 = FUN_004134c0(uVar2);
  }
  iVar3 = 0;
  if (local_20[0] != 0) {
    iVar3 = *(int *)(local_20[0] + -4);
  }
  FUN_00416dc0(local_20,local_20[0],iVar1 + 1,iVar3 - iVar1);
  iVar1 = FUN_004170c0(&PTR_DAT_01415c5c,local_20[0],1);
  if (iVar1 < 1) {
    FUN_00416ba0(&local_68,&LAB_01415c70,local_20[0]);
    local_6c = FUN_0043fc00(local_68);
  }
  else {
    local_6c = FUN_0043fc00(local_20[0]);
  }
  FUN_00414560(&local_68,8);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return local_6c;
}

