/* Ghidra address: 019ddbf0 */
/* Ghidra symbol: FUN_019ddbf0 */


undefined8 FUN_019ddbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  wchar_t *local_b0;
  undefined *local_a8;
  wchar_t *local_a0;
  undefined *local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  int local_44;
  undefined1 local_40 [48];
  undefined8 local_10;
  
  local_70 = auStack_d8;
  local_80 = 0;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  FUN_00417580(local_40,&DAT_00ea5ae8);
  FUN_00414480(param_1);
  local_b8 = &DAT_019ddef8;
  local_b0 = L"{.+?}";
  local_a8 = &DAT_019ddf20;
  local_a0 = L"[-+]?[0-9]*\\.?[0-9]+([eE][-+]?[0-9]+)?(MIL|MEG|F|P|N|U|M|K|G|T)?";
  local_98 = &DAT_019ddfc0;
  FUN_00416cd0(&local_78,7,local_res18,L"\\ *=\\ *");
  FUN_00ea81b0(local_40,local_res10,local_78,2);
  cVar1 = FUN_00ea74f0(local_40);
  if (cVar1 != '\0') {
    FUN_00ea7500(local_40,&local_50);
    local_44 = FUN_004170c0(&LAB_019ddfd4,local_50,1);
    FUN_00414480(&local_10);
    FUN_00ea7500(local_40,&local_58);
    local_64 = 0;
    if (local_58 != 0) {
      local_64 = *(undefined4 *)(local_58 + -4);
    }
    FUN_00416dc0(&local_10,local_58,local_44 + 1,local_64);
    FUN_00414b50(&local_60,local_10);
    FUN_00457870(&local_60,&local_80);
    FUN_00416ba0(param_1,local_res20,local_80);
    FUN_00414480(&local_10);
  }
  FUN_00414560(&local_80,2);
  FUN_00414560(&local_60,3);
  FUN_00417740(local_40,&DAT_00ea5ae8);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,3);
  return param_1;
}

