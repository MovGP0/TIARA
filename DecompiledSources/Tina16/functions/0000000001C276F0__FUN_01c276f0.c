/* Ghidra address: 01c276f0 */
/* Ghidra symbol: FUN_01c276f0 */


undefined8 FUN_01c276f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043e1a0(&local_10,local_res10[0]);
  FUN_01c27510(param_1,&local_10);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

