/* Ghidra address: 00f8fa10 */
/* Ghidra symbol: FUN_00f8fa10 */


void FUN_00f8fa10(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_006eae90(*(undefined8 *)(param_1 + 8),1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x510);
  (**(code **)(*plVar1 + 0x100))(plVar1,local_res10[0]);
  FUN_006eae90(*(undefined8 *)(param_1 + 8),0);
  FUN_00414480(local_res10);
  return;
}

