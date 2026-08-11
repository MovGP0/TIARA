/* Ghidra address: 004d2030 */
/* Ghidra symbol: FUN_004d2030 */


void FUN_004d2030(undefined8 param_1,undefined4 param_2)

{
  undefined8 local_res8 [4];
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414630(param_1);
  FUN_00416880(&local_10,local_res8[0]);
  FUN_004d20c0(local_10,param_2);
  FUN_00414480(&local_10);
  FUN_004144d0(local_res8);
  return;
}

