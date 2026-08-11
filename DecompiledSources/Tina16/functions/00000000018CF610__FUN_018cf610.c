/* Ghidra address: 018cf610 */
/* Ghidra symbol: FUN_018cf610 */


void FUN_018cf610(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18);
  (**(code **)(*plVar1 + 0x40))(plVar1);
  return;
}

