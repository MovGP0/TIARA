/* Ghidra address: 014b7810 */
/* Ghidra symbol: FUN_014b7810 */


void FUN_014b7810(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4a0);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}

