/* Ghidra address: 00d033b0 */
/* Ghidra symbol: FUN_00d033b0 */


void FUN_00d033b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x90) + 0xc0);
  (**(code **)(*plVar1 + 0xa0))(plVar1,0);
  return;
}

