/* Ghidra address: 016b9120 */
/* Ghidra symbol: FUN_016b9120 */


undefined8 FUN_016b9120(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00416880(&local_18,local_res10[0]);
  FUN_00450070(&local_10,local_18,&DAT_016b91e8,&DAT_016b91f8,1);
  FUN_00415dd0(param_1,local_10,0);
  FUN_00414560(&local_18,2);
  FUN_004144d0(local_res10);
  return param_1;
}

