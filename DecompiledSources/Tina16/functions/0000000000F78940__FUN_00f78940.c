/* Ghidra address: 00f78940 */
/* Ghidra symbol: FUN_00f78940 */


void FUN_00f78940(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  if (param_2 != 0) {
    FUN_00416ba0(&local_10,*(undefined8 *)(param_3 + 0xf8),&DAT_00f78a48);
    FUN_015f4420(local_20,local_10,0x1e);
    FUN_00f6f640(param_3,&local_28);
    FUN_00416cd0(&local_10,3,local_20[0],&LAB_00f78a58,local_28);
    FUN_00f788b0(param_1,param_2,local_10);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return;
}

