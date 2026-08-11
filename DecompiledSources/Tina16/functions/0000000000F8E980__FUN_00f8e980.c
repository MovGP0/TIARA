/* Ghidra address: 00f8e980 */
/* Ghidra symbol: FUN_00f8e980 */


void FUN_00f8e980(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xa38);
  (**(code **)(*plVar1 + 0x28))(plVar1);
  return;
}

