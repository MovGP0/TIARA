/* Ghidra address: 019dcf90 */
/* Ghidra symbol: FUN_019dcf90 */


undefined8 FUN_019dcf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 local_res20;
  undefined1 auStack_f8 [32];
  undefined *local_d8;
  wchar_t *local_d0;
  undefined *local_c8;
  wchar_t *local_c0;
  undefined *local_b8;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined4 local_8c;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  int local_6c;
  undefined1 local_68 [48];
  undefined1 local_38 [40];
  undefined8 local_10;
  
  local_a0 = auStack_f8;
  local_a8 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00417580(local_38,&DAT_00ea5f80);
  FUN_00417580(local_68,&DAT_00ea5ae8);
  FUN_00414480(param_1);
  local_d8 = &DAT_019dd2b8;
  local_d0 = L"{.+?}";
  local_c8 = &DAT_019dd2e0;
  local_c0 = L"[-+]?[0-9]*\\.?[0-9]+([eE][-+]?[0-9]+)?(MIL|MEG|F|P|N|U|M|K|G|T)?";
  local_b8 = &DAT_019dd380;
  FUN_00416cd0(&local_a8,7,local_res18,L"\\ *=\\ *");
  FUN_00ea7a10(local_38,local_a8,2);
  FUN_00ea8460(local_38,local_68,local_res10,local_res20);
  cVar1 = FUN_00ea74f0(local_68);
  if (cVar1 != '\0') {
    FUN_00ea7500(local_68,&local_78);
    local_6c = FUN_004170c0(&LAB_019dd394,local_78,1);
    FUN_00414480(&local_10);
    FUN_00ea7500(local_68,&local_80);
    local_8c = 0;
    if (local_80 != 0) {
      local_8c = *(undefined4 *)(local_80 + -4);
    }
    FUN_00416dc0(&local_10,local_80,local_6c + 1,local_8c);
    FUN_00414b50(&local_88,local_10);
    FUN_00457870(&local_88,param_1);
    FUN_00414480(&local_10);
  }
  FUN_00414480(&local_a8);
  FUN_00414560(&local_88,3);
  FUN_00417740(local_68,&DAT_00ea5ae8);
  FUN_00417740(local_38,&DAT_00ea5f80);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return param_1;
}

