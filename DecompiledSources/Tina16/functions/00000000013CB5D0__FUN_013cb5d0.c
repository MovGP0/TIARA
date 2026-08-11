/* Ghidra address: 013cb5d0 */
/* Ghidra symbol: FUN_013cb5d0 */


void FUN_013cb5d0(longlong param_1)

{
  char cVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00416ba0(local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\postp_ipr.template");
  cVar1 = FUN_00440a20(local_30[0],1);
  if (cVar1 != '\0') {
    FUN_00416ba0(&local_38,*(undefined8 *)PTR_DAT_020049a0,L"\\postp_ipr.template");
    (**(code **)(**(longlong **)(param_1 + 0x8c8) + 0xd8))(*(longlong **)(param_1 + 0x8c8),local_38)
    ;
  }
  if (*(char *)(param_1 + 0x93c) == '\x03') {
    FUN_00414b50(local_20,L"postp_py_tr.template");
  }
  else {
    FUN_00414b50(local_20,L"postp_py_ac.template");
  }
  FUN_00416cd0(&local_40,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_013cb80c,local_20[0]);
  cVar1 = FUN_00440a20(local_40,1);
  if (cVar1 != '\0') {
    FUN_00416cd0(&local_48,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_013cb80c,local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0x8d0) + 0xd8))(*(longlong **)(param_1 + 0x8d0),local_48)
    ;
  }
  FUN_00414560(&local_48,4);
  FUN_00414480(local_20);
  return;
}

