/* Ghidra address: 01ae7390 */
/* Ghidra symbol: FUN_01ae7390 */


void FUN_01ae7390(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_30 = auStack_68;
  local_38 = 0;
  local_20[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_48 = *(undefined8 *)(param_1 + 0x58);
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01ae74fc);
  local_28 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  FUN_00414480(local_20);
  FUN_00448450(local_20,local_res18,PTR_DAT_02004830);
  (**(code **)(*local_28 + 0x18))(local_28,L"Diagram Page Setup",local_res10,local_20[0]);
  FUN_00414480(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  FUN_00414480(&local_res10);
  return;
}

