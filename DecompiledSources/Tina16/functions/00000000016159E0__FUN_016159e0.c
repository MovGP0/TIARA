/* Ghidra address: 016159e0 */
/* Ghidra symbol: FUN_016159e0 */


undefined8 FUN_016159e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_01615910(local_res10[0],&local_18,&local_20,&LAB_01615aa8);
  local_c = FUN_0043fc00(local_18);
  local_10 = FUN_0043fc00(local_20);
  FUN_01615860(param_1,&local_10);
  FUN_00414560(&local_20,2);
  FUN_00414480(local_res10);
  return param_1;
}

