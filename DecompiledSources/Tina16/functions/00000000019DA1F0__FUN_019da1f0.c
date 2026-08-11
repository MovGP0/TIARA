/* Ghidra address: 019da1f0 */
/* Ghidra symbol: FUN_019da1f0 */


void FUN_019da1f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4d8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  return;
}

