/* Ghidra address: 01635b60 */
/* Ghidra symbol: FUN_01635b60 */


void FUN_01635b60(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x20) + 0x50);
  FUN_0043f750(local_20,param_2);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_20[0]);
  FUN_00414480(local_20);
  return;
}

