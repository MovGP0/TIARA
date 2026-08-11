/* Ghidra address: 01cc5c10 */
/* Ghidra symbol: FUN_01cc5c10 */


void FUN_01cc5c10(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x438);
  local_res10[0] = param_2;
  (**(code **)(*plVar1 + 0x20))(plVar1,local_res10,8);
  return;
}

