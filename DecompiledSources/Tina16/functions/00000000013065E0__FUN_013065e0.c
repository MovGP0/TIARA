/* Ghidra address: 013065e0 */
/* Ghidra symbol: FUN_013065e0 */


undefined8 FUN_013065e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_18 = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_012e1210(*(undefined8 *)(param_1 + 0xac8),&local_18,local_res18);
  FUN_00414480(&local_10);
  FUN_00448450(&local_10,local_res18[0],PTR_DAT_02004830);
  FUN_00416ba0(&local_18,local_10,local_18);
  FUN_00414480(&local_10);
  FUN_00414ad0(param_2,local_18);
  FUN_00414560(&local_18,2);
  return param_2;
}

