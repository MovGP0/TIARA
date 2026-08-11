/* Ghidra address: 0156a520 */
/* Ghidra symbol: FUN_0156a520 */


void FUN_0156a520(longlong param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00416ba0(&local_10,*(undefined8 *)(param_1 + 0x90),local_res10[0]);
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x78))(*(longlong **)(param_1 + 0x6f8),local_10);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return;
}

