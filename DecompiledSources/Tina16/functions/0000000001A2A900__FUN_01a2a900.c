/* Ghidra address: 01a2a900 */
/* Ghidra symbol: FUN_01a2a900 */


void FUN_01a2a900(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4d8);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

