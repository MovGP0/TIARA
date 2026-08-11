/* Ghidra address: 0109d6b0 */
/* Ghidra symbol: FUN_0109d6b0 */


void FUN_0109d6b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x9e8 + (longlong)param_2 * 8);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return;
}

