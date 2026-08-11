/* Ghidra address: 017fe700 */
/* Ghidra symbol: FUN_017fe700 */


void FUN_017fe700(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x4d8);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  return;
}

