/* Ghidra address: 0160e0c0 */
/* Ghidra symbol: FUN_0160e0c0 */


void FUN_0160e0c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x90))(*(longlong **)(param_1 + 0xf0));
  (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x78))(*(longlong **)(param_1 + 0xf0),local_res10);
  (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x78))(*(longlong **)(param_1 + 0xf0),local_res18);
  FUN_00414560(&local_res10,2);
  return;
}

