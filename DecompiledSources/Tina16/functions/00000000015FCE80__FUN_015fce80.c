/* Ghidra address: 015fce80 */
/* Ghidra symbol: FUN_015fce80 */


void FUN_015fce80(undefined8 param_1)

{
  undefined8 local_res8 [4];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_015fcd70(&local_10,local_res8[0]);
  FUN_015fcdf0(&local_18,local_res8[0]);
  FUN_00b96df0(local_10);
  FUN_00b96df0(local_18);
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res8);
  return;
}

