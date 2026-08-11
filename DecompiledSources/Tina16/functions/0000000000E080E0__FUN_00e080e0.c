/* Ghidra address: 00e080e0 */
/* Ghidra symbol: FUN_00e080e0 */


void FUN_00e080e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  FUN_00e08090();
  (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),local_res10);
  FUN_00414560(&local_res10,2);
  return;
}

