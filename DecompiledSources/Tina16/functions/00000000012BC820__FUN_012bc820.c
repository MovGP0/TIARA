/* Ghidra address: 012bc820 */
/* Ghidra symbol: FUN_012bc820 */


void FUN_012bc820(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  (**(code **)(*plVar1 + 0x100))(plVar1,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

