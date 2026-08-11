/* Ghidra address: 00af5a90 */
/* Ghidra symbol: FUN_00af5a90 */


void FUN_00af5a90(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x780,local_res10[0]);
  FUN_00414ad0(param_1 + 0x788,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

