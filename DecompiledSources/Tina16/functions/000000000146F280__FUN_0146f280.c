/* Ghidra address: 0146f280 */
/* Ghidra symbol: FUN_0146f280 */


void FUN_0146f280(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4e8);
  (**(code **)(*plVar1 + 0x100))(plVar1,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

