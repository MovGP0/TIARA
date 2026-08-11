/* Ghidra address: 01a2a8d0 */
/* Ghidra symbol: FUN_01a2a8d0 */


void FUN_01a2a8d0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4d8);
  (**(code **)(*plVar1 + 0x88))(plVar1);
  return;
}

