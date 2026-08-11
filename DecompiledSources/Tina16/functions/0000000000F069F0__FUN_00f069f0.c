/* Ghidra address: 00f069f0 */
/* Ghidra symbol: FUN_00f069f0 */


void FUN_00f069f0(undefined8 param_1,undefined4 param_2)

{
  undefined8 local_res8;
  undefined4 local_res10;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  local_48 = L"TINA.INI";
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02005010,&DAT_00f06af4);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  (**(code **)(*local_20 + 0x28))(local_20,L"Diagram Page Setup",local_res8,local_res10);
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  FUN_00414480(&local_res8);
  return;
}

