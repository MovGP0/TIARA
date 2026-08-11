/* Ghidra address: 01469cb0 */
/* Ghidra symbol: FUN_01469cb0 */


undefined4 FUN_01469cb0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res10;
  undefined4 local_res18;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 local_24;
  longlong *local_20;
  
  local_30 = auStack_78;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_58 = L"TINA.INI";
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01469e0c);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  FUN_0043f750(&local_48,local_res18);
  local_58 = (wchar_t *)local_48;
  (**(code **)(*local_20 + 0x10))(local_20,&local_40,L"Text Dialog Setup",local_res10);
  local_24 = FUN_0043fc00(local_40);
  FUN_00410f20(local_20);
  FUN_00414560(&local_48,3);
  FUN_00414480(&local_res10);
  return local_24;
}

