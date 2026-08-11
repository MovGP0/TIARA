/* Ghidra address: 004d9500 */
/* Ghidra symbol: FUN_004d9500 */


void FUN_004d9500(longlong param_1,float param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  FUN_00414480(&local_10);
  FUN_00448450(&local_10,(double)param_2,PTR_DAT_02004830);
  FUN_00416ba0(&local_30,local_10,*(undefined8 *)(param_1 + 0x18));
  FUN_00459ca0(*(undefined8 *)(param_1 + 0x10),&local_28,local_30);
  FUN_004d8330(param_1,local_28);
  FUN_00414480(&local_10);
  FUN_00414480(&local_30);
  FUN_00419430(&local_28,&DAT_00406578);
  FUN_00414480(&local_10);
  return;
}

