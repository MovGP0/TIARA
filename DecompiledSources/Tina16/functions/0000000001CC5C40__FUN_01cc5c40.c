/* Ghidra address: 01cc5c40 */
/* Ghidra symbol: FUN_01cc5c40 */


void FUN_01cc5c40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x438);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

