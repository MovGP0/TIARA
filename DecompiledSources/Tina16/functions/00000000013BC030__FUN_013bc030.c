/* Ghidra address: 013bc030 */
/* Ghidra symbol: FUN_013bc030 */


undefined8
FUN_013bc030(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong param_5)

{
  undefined8 local_res18;
  int local_res20;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_80 = auStack_d8;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_20[0] = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(param_5);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_013ba3f0(param_1,0);
  FUN_013ba2b0(param_1,param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x98);
  FUN_013bb2b0(param_1,*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x98),local_30);
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    FUN_0044d490(&PTR_FUN_004334c0,1,L"PrepareProgram: py_dat_path is empty");
  }
  local_b8 = L"symbols_in.dat";
  FUN_00416cd0(&local_88,3,*(undefined8 *)(param_1 + 0xe8),&DAT_013bc6b0);
  FUN_004b9df0(local_30,local_88);
  (**(code **)(*local_28 + 0x60))(local_28,local_res18);
  FUN_00416ba0(&local_60,*(undefined8 *)(param_1 + 0x108),&DAT_013bc6b0);
  if (*(int *)(param_1 + 0x4c) == 0) {
    if (param_5 == 0) {
      FUN_00416ba0(&local_58,local_60,L"temp.py");
    }
    else {
      FUN_00416ba0(&local_58,local_60,param_5);
    }
    (**(code **)(*local_28 + 0x100))(local_28,local_58);
    local_b8 = L"\"";
    FUN_00416cd0(&local_58,3,&DAT_013bc708,local_58);
    FUN_00414480(local_20);
    FUN_013bc860(param_1,&local_68);
    FUN_013bbf50(auStack_d8,L"ignore::DeprecationWarning");
    FUN_013bbec0(auStack_d8,&PTR_DAT_013bc75c);
    if (local_res20 == 2) {
      FUN_013bbd20(auStack_d8,L"shared_mem_id",local_68,0);
    }
    local_b8 = (wchar_t *)local_20[0];
    local_b0 = &DAT_013bc7a8;
    FUN_00416cd0(&local_40,4,*(undefined8 *)(param_1 + 0xf8),&DAT_013bc798);
    local_a0 = local_58;
    local_98 = 0x11;
    FUN_00442f70(&local_90,local_40,&local_a0,0);
    FUN_00414b50(&local_40,local_90);
    local_b8 = (wchar_t *)local_58;
    FUN_00416cd0(param_1 + 0x100,3,local_20[0],&DAT_013bc798);
  }
  else {
    FUN_00416ba0(&local_58,local_60,L"temp.csv");
    (**(code **)(*local_28 + 0x100))(local_28,local_58);
    local_b8 = L"\"";
    FUN_00416cd0(&local_58,3,&DAT_013bc708,local_58);
    FUN_00414480(local_20);
    if (*(int *)(param_1 + 0x4c) == 1) {
      FUN_00414b50(&local_70,L"nodal-solver.exe");
    }
    else {
      FUN_00414b50(&local_70,L"nodal-resistance.exe");
    }
    local_b8 = (wchar_t *)local_70;
    FUN_00416cd0(param_1 + 0xf8,3,*(undefined8 *)(param_1 + 0xd8),L"\\Scripts\\");
    local_b8 = (wchar_t *)local_20[0];
    local_b0 = &DAT_013bc7a8;
    FUN_00416cd0(&local_40,4,*(undefined8 *)(param_1 + 0xf8),&DAT_013bc798);
    local_a0 = local_58;
    local_98 = 0x11;
    FUN_00442f70(&local_a8,local_40,&local_a0,0);
    FUN_00414b50(&local_40,local_a8);
  }
  FUN_00414ad0(param_2,local_40);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00414480(&local_a8);
  FUN_00414560(&local_90,2);
  FUN_00414560(&local_70,8);
  FUN_00414480(local_20);
  FUN_00414480(&local_res18);
  FUN_00414480(&param_5);
  return param_2;
}

