/* Ghidra address: 01b251d0 */
/* Ghidra symbol: FUN_01b251d0 */


undefined1 FUN_01b251d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_11;
  longlong *local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  local_38 = L"TINA.INI";
  FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01b252e8);
  local_10 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_28);
  local_11 = (**(code **)(*local_10 + 0x30))(local_10,local_res8,local_res10,0);
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  FUN_00414560(&local_res8,2);
  return local_11;
}

