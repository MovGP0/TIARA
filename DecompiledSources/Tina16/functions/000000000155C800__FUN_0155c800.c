/* Ghidra address: 0155c800 */
/* Ghidra symbol: FUN_0155c800 */


void FUN_0155c800(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416cd0(&local_10,3,*(undefined8 *)(param_1 + 0x790),&LAB_0155c908,local_res10[0]);
  (**(code **)(**(longlong **)(param_1 + 0x918) + 0x78))(*(longlong **)(param_1 + 0x918),local_10);
  FUN_00416cd0(&local_18,3,*(undefined8 *)(param_1 + 0x7a8),&LAB_0155c908,local_res10[0]);
  (**(code **)(**(longlong **)(param_1 + 0x918) + 0x78))(*(longlong **)(param_1 + 0x918),local_18);
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res10);
  return;
}

