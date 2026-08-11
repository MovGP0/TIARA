/* Ghidra address: 00f8f570 */
/* Ghidra symbol: FUN_00f8f570 */


void FUN_00f8f570(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043e130(&local_10,local_res10[0]);
  FUN_00414ad0(param_1 + 0x3508,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

