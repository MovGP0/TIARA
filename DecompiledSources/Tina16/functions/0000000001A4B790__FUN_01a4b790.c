/* Ghidra address: 01a4b790 */
/* Ghidra symbol: FUN_01a4b790 */


void FUN_01a4b790(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_res10[0]);
  FUN_01a4b730(param_1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  *(undefined4 *)(param_1 + 0x92c) = uVar2;
  FUN_00414480(local_res10);
  return;
}

