/* Ghidra address: 0106f2b0 */
/* Ghidra symbol: FUN_0106f2b0 */


void FUN_0106f2b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4f0);
  (**(code **)(*plVar1 + 0x60))(plVar1,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

