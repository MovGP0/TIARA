/* Ghidra address: 019da120 */
/* Ghidra symbol: FUN_019da120 */


undefined8 FUN_019da120(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00450070(&local_10,local_res10[0],&DAT_019da1d4,&DAT_019da1e8,1);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

