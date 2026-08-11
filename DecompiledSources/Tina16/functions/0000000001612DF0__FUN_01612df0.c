/* Ghidra address: 01612df0 */
/* Ghidra symbol: FUN_01612df0 */


void FUN_01612df0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  uVar1 = FUN_007fc180(&PTR_FUN_015e60f8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02003c68 = uVar1;
  *(int *)(*(longlong *)PTR_DAT_02003c68 + 0x750) = param_1;
  if (param_1 < 1) {
    *(undefined4 *)(*(longlong *)PTR_DAT_02003c68 + 0x750) = 1;
  }
  FUN_015e7440(*(undefined8 *)PTR_DAT_02003c68,&PTR_DAT_01613070);
  FUN_015e6e10(*(undefined8 *)PTR_DAT_02003c68,local_res18);
  uVar1 = FUN_00b89270();
  FUN_0041ddd0(&local_40,PTR_PTR_02002aa8);
  FUN_00b8e650(uVar1,&local_38,L"HDLStrings.Msg_Instance",local_40);
  FUN_00416cd0(&local_30,3,local_38,&DAT_016130c0,local_res10);
  FUN_015e6e10(*(undefined8 *)PTR_DAT_02003c68,local_30);
  uVar1 = FUN_00b89270();
  FUN_0041ddd0(&local_58,PTR_PTR_02002bf0);
  FUN_00b8e650(uVar1,&local_50,L"HDLStrings.Msg_FileName",local_58);
  FUN_00416cd0(&local_48,3,local_50,&DAT_016130c0,local_res20);
  FUN_015e6e10(*(undefined8 *)PTR_DAT_02003c68,local_48);
  FUN_015e6db0(*(undefined8 *)PTR_DAT_02003c68,local_res20);
  (**(code **)(**(longlong **)PTR_DAT_02003c68 + 0x2d0))(*(longlong **)PTR_DAT_02003c68);
  FUN_00410f20(*(undefined8 *)PTR_DAT_02003c68);
  FUN_00414560(&local_58,8);
  FUN_00414560(&local_res10,3);
  return;
}

