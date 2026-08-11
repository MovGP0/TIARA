/* Ghidra address: 01a55680 */
/* Ghidra symbol: FUN_01a55680 */


undefined8 FUN_01a55680(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong *local_20;
  
  local_60 = auStack_a8;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01a55c00(param_1,&local_50);
  FUN_00414b50(&local_38,*(undefined8 *)(param_1 + 0x830));
  FUN_00416ba0(&local_68,local_38,local_res18[0]);
  (**(code **)(*local_20 + 0xd8))(local_20,local_68);
  (**(code **)(*local_20 + 0x38))(local_20,local_30);
  local_88 = 1;
  FUN_00450070(&local_70,local_30[0],L"%TSC_LIST%",local_50);
  FUN_00414b50(local_30,local_70);
  local_88 = 1;
  FUN_00450070(&local_78,local_30[0],&DAT_01a558cc,&LAB_01a558dc);
  FUN_00414b50(local_30,local_78);
  FUN_00414ad0(param_2,local_30[0]);
  FUN_00410f20(local_20);
  FUN_00414560(&local_78,3);
  FUN_00414560(&local_50,5);
  FUN_00414480(local_res18);
  return param_2;
}

