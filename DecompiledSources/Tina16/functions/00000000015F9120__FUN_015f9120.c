/* Ghidra address: 015f9120 */
/* Ghidra symbol: FUN_015f9120 */


void FUN_015f9120(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong local_res10 [3];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar2 = FUN_007fc180(&PTR_FUN_015e60f8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02003c68 = uVar2;
  if (param_1 != 0) {
    iVar1 = _get_error_line(param_1);
    *(int *)(*(longlong *)PTR_DAT_02003c68 + 0x750) = iVar1;
    if (iVar1 < 1) {
      *(undefined4 *)(*(longlong *)PTR_DAT_02003c68 + 0x750) = 1;
    }
    uVar2 = _get_error_str(param_1);
    FUN_00415430(local_40,uVar2,0);
    FUN_00416880(local_20,local_40[0]);
    FUN_00415dd0(&local_48,local_20[0],0);
    FUN_015f8ff0(&local_30,local_48);
    FUN_015e7440(*(undefined8 *)PTR_DAT_02003c68,local_30);
    if (local_res10[0] != 0) {
      FUN_015fe380(local_20,local_res10[0]);
    }
    FUN_015e6e10(*(undefined8 *)PTR_DAT_02003c68,local_20[0]);
    uVar2 = _get_error_file_name(param_1);
    FUN_004167d0(local_20,uVar2);
    if (local_res10[0] == 0) {
      uVar2 = FUN_00b89270();
      FUN_0041ddd0(&local_60,PTR_PTR_02002bf0);
      FUN_00b8e650(uVar2,&local_58,L"HDLStrings.Msg_FileName",local_60);
      FUN_00416cd0(&local_50,3,local_58,&LAB_015f9404,local_20[0]);
      FUN_015e6e10(*(undefined8 *)PTR_DAT_02003c68,local_50);
    }
    FUN_015e6db0(*(undefined8 *)PTR_DAT_02003c68,local_20[0]);
  }
  (**(code **)(**(longlong **)PTR_DAT_02003c68 + 0x2d0))(*(longlong **)PTR_DAT_02003c68);
  FUN_00410f20(*(undefined8 *)PTR_DAT_02003c68);
  FUN_00414560(&local_60,3);
  FUN_00414590(&local_48,2);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res10);
  return;
}

