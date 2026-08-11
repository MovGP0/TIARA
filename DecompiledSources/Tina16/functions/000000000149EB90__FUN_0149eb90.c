/* Ghidra address: 0149eb90 */
/* Ghidra symbol: FUN_0149eb90 */


void FUN_0149eb90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x90) + 0xa0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x90) + 0xa0);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

