/* Ghidra address: 0188d450 */
/* Ghidra symbol: FUN_0188d450 */


void FUN_0188d450(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x20),param_3);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x100) + 0x10);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_res10[0]);
  FUN_00414480(local_res10);
  return;
}

