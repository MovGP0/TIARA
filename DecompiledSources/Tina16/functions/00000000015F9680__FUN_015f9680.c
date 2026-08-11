/* Ghidra address: 015f9680 */
/* Ghidra symbol: FUN_015f9680 */


void FUN_015f9680(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  uVar2 = FUN_007fc180(&PTR_FUN_015e60f8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02003c68 = uVar2;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if (*(int *)(param_1 + 0x34) == 0x100) {
      iVar1 = *(int *)(param_1 + 0x5c);
      *(int *)(*(longlong *)PTR_DAT_02003c68 + 0x750) = iVar1;
      if (iVar1 < 1) {
        *(undefined4 *)(*(longlong *)PTR_DAT_02003c68 + 0x750) = 1;
      }
      FUN_00441920(&local_68,*(undefined8 *)(param_1 + 0x48));
      FUN_00415dd0(&local_70,local_68,0);
      FUN_015f8ff0(&local_30,local_70);
      FUN_015e7440(*(undefined8 *)PTR_DAT_02003c68,local_30);
      FUN_00441920(&local_78,*(undefined8 *)(param_1 + 0x48));
      FUN_0043f750(&local_80,*(undefined4 *)(param_1 + 0x5c));
      FUN_00416cd0(local_20,7,&DAT_015f9c3c,local_78,&DAT_015f9c3c,&DAT_015f9c4c,local_80,
                   &LAB_015f9c5c,*(undefined8 *)(param_1 + 8));
      FUN_015e6e10(*(undefined8 *)PTR_DAT_02003c68,local_20[0]);
      FUN_015e6db0(*(undefined8 *)PTR_DAT_02003c68,*(undefined8 *)(param_1 + 0x48));
    }
    else {
      iVar1 = *(int *)(param_1 + 0x5c);
      *(int *)(*(longlong *)PTR_DAT_02003c68 + 0x750) = iVar1;
      if (iVar1 < 1) {
        *(undefined4 *)(*(longlong *)PTR_DAT_02003c68 + 0x750) = 1;
      }
      FUN_015f9410(local_20,*(undefined4 *)(param_1 + 0x58));
      FUN_0043f750(&local_88,*(undefined4 *)(param_1 + 0x5c));
      FUN_00416cd0(local_20,7,&DAT_015f9c3c,*(undefined8 *)(param_1 + 0x50),&DAT_015f9c3c,
                   &DAT_015f9c4c,local_88,&LAB_015f9c5c,local_20[0]);
      FUN_015e6e10(*(undefined8 *)PTR_DAT_02003c68,local_20[0]);
      FUN_00414b50(local_20,*(undefined8 *)(param_1 + 0x48));
      FUN_015e6db0(*(undefined8 *)PTR_DAT_02003c68,local_20[0]);
    }
  }
  else {
    iVar1 = _get_error_line(*(longlong *)(param_1 + 0x38));
    *(int *)(*(longlong *)PTR_DAT_02003c68 + 0x750) = iVar1;
    if (iVar1 < 1) {
      *(undefined4 *)(*(longlong *)PTR_DAT_02003c68 + 0x750) = 1;
    }
    uVar2 = _get_error_str(*(undefined8 *)(param_1 + 0x38));
    FUN_00415430(local_40,uVar2,0);
    FUN_00416880(local_20,local_40[0]);
    FUN_00415dd0(&local_48,local_20[0],0);
    FUN_015f8ff0(&local_30,local_48);
    FUN_015e7440(*(undefined8 *)PTR_DAT_02003c68,local_30);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_015fe380(local_20,*(undefined8 *)(param_1 + 0x40));
    }
    FUN_015e6e10(*(undefined8 *)PTR_DAT_02003c68,local_20[0]);
    uVar2 = _get_error_file_name(*(undefined8 *)(param_1 + 0x38));
    FUN_004167d0(local_20,uVar2);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      uVar2 = FUN_00b89270();
      FUN_0041ddd0(&local_60,PTR_PTR_02002bf0);
      FUN_00b8e650(uVar2,&local_58,L"HDLStrings.Msg_FileName",local_60);
      FUN_00416cd0(&local_50,3,local_58,&DAT_015f9c28,local_20[0]);
      FUN_015e6e10(*(undefined8 *)PTR_DAT_02003c68,local_50);
    }
    FUN_015e6db0(*(undefined8 *)PTR_DAT_02003c68,local_20[0]);
  }
  (**(code **)(**(longlong **)PTR_DAT_02003c68 + 0x2d0))(*(longlong **)PTR_DAT_02003c68);
  FUN_00410f20(*(undefined8 *)PTR_DAT_02003c68);
  FUN_00414560(&local_88,3);
  FUN_004144d0(&local_70);
  FUN_00414560(&local_68,4);
  FUN_00414590(&local_48,2);
  FUN_00414560(&local_30,3);
  return;
}

