/* Ghidra address: 01498da0 */
/* Ghidra symbol: FUN_01498da0 */


void FUN_01498da0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8c0) + 0x4e8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_0149b8c0(param_1);
  return;
}

