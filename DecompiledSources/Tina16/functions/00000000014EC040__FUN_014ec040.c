/* Ghidra address: 014ec040 */
/* Ghidra symbol: FUN_014ec040 */


void FUN_014ec040(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4d8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  return;
}

