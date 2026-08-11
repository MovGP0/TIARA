/* Ghidra address: 01051510 */
/* Ghidra symbol: FUN_01051510 */


void FUN_01051510(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00f60ce0(&local_10,local_res10[0]);
  FUN_00414ad0(param_1 + 0x8d0,local_10);
  FUN_01051360(param_1);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

