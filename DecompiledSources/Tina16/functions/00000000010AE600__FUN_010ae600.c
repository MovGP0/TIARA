/* Ghidra address: 010ae600 */
/* Ghidra symbol: FUN_010ae600 */


undefined8 FUN_010ae600(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_88;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0043f750(&local_38,*(undefined4 *)(param_1 + 8));
  FUN_0043f750(&local_40,*(undefined4 *)(param_1 + 0xc));
  FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0x10));
  local_68 = local_40;
  local_60 = &LAB_010ae7b8;
  local_58 = local_48;
  local_50 = &LAB_010ae7b8;
  FUN_00416cd0(&local_10,6,local_38,&LAB_010ae7b8);
  FUN_00414480(&local_18);
  local_20 = *(undefined8 *)(param_1 + 0x18);
  FUN_00448450(&local_18,local_20,PTR_DAT_02004830);
  FUN_00416ba0(param_2,local_10,local_18);
  FUN_00414480(&local_10);
  FUN_00414480(&local_18);
  FUN_00414560(&local_48,3);
  FUN_00414480(&local_18);
  return param_2;
}

