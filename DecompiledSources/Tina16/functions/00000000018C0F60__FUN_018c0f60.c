/* Ghidra address: 018c0f60 */
/* Ghidra symbol: FUN_018c0f60 */


void FUN_018c0f60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x20) + 0x210);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
  return;
}

