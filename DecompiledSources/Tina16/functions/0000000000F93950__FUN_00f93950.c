/* Ghidra address: 00f93950 */
/* Ghidra symbol: FUN_00f93950 */


void FUN_00f93950(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0072d440(local_res10[0],1,4,0);
  *(undefined1 *)(param_1 + 0x6f8) = 1;
  FUN_00414480(local_res10);
  return;
}

