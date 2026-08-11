/* Ghidra address: 01ae7540 */
/* Ghidra symbol: FUN_01ae7540 */


undefined8 FUN_01ae7540(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_68 = *(undefined8 *)(param_1 + 0x58);
  FUN_00416cd0(&local_48,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01ae76f4);
  local_28 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_48);
  FUN_00414480(local_20);
  FUN_00448450(local_20,local_res18,PTR_DAT_02004830);
  local_68 = local_20[0];
  (**(code **)(*local_28 + 0x10))(local_28,&local_50,L"Diagram Page Setup",local_res10);
  local_30 = FUN_017ff760(local_50);
  FUN_00414480(local_20);
  FUN_00410f20(local_28);
  FUN_00414560(&local_50,2);
  FUN_00414480(local_20);
  FUN_00414480(&local_res10);
  return local_30;
}

