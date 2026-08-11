/* Ghidra address: 00cddcd0 */
/* Ghidra symbol: FUN_00cddcd0 */


undefined8 FUN_00cddcd0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_78;
  local_28 = 0;
  local_30 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_10 = FUN_00882920(&PTR_FUN_00cdc838,1);
  FUN_00cddbf0(param_1,&local_38);
  FUN_00cddba0(param_1,&local_40);
  local_58 = local_40;
  FUN_00416cd0(&local_30,3,local_38,&LAB_00cdde54);
  FUN_008b05c0(&local_48,*(undefined8 *)(param_1 + 0x20));
  FUN_00cdadd0(local_10,&local_28,local_30,local_48);
  FUN_00416ba0(param_2,L"Basic ",local_28);
  FUN_00410f20(local_10);
  FUN_0041b800(&local_48);
  FUN_00414560(&local_40,4);
  return param_2;
}

