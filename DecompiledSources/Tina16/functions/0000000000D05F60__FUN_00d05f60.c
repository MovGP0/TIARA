/* Ghidra address: 00d05f60 */
/* Ghidra symbol: FUN_00d05f60 */


void FUN_00d05f60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x210) + 0x10);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}

