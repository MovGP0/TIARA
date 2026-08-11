/* Ghidra address: 01ae7c00 */
/* Ghidra symbol: FUN_01ae7c00 */


undefined4 FUN_01ae7c00(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 local_res10;
  undefined4 local_res18;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_28;
  undefined1 *local_20;
  undefined4 local_14;
  longlong *local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_38 = *(undefined8 *)(param_1 + 0x58);
  FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01ae7d14);
  local_10 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_28);
  local_14 = (**(code **)(*local_10 + 0x20))(local_10,L"Diagram Page Setup",local_res10,local_res18)
  ;
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  FUN_00414480(&local_res10);
  return local_14;
}

