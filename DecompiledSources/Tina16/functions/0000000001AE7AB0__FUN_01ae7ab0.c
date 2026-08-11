/* Ghidra address: 01ae7ab0 */
/* Ghidra symbol: FUN_01ae7ab0 */


void FUN_01ae7ab0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res10;
  undefined4 local_res18;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_48 = *(undefined8 *)(param_1 + 0x58);
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01ae7bc4);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  (**(code **)(*local_20 + 0x28))(local_20,L"Diagram Page Setup",local_res10,local_res18);
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  FUN_00414480(&local_res10);
  return;
}

