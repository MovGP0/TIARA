/* Ghidra address: 00f06b50 */
/* Ghidra symbol: FUN_00f06b50 */


undefined4 FUN_00f06b50(undefined8 param_1,undefined4 param_2)

{
  undefined8 local_res8;
  undefined4 local_res10;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined8 local_28;
  undefined1 *local_20;
  undefined4 local_14;
  longlong *local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  local_38 = L"TINA.INI";
  FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_02005010,&DAT_00f06c54);
  local_10 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_28);
  local_14 = (**(code **)(*local_10 + 0x20))(local_10,L"Diagram Page Setup",local_res8,local_res10);
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  FUN_00414480(&local_res8);
  return local_14;
}

