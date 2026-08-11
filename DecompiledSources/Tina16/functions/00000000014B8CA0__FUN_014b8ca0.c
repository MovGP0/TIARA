/* Ghidra address: 014b8ca0 */
/* Ghidra symbol: FUN_014b8ca0 */


void FUN_014b8ca0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4d8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  return;
}

