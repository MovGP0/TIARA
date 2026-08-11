/* Ghidra address: 01cc6510 */
/* Ghidra symbol: FUN_01cc6510 */


void FUN_01cc6510(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x438);
  (**(code **)(*plVar1 + 0x48))(plVar1,0,2);
  return;
}

