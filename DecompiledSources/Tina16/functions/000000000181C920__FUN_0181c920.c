/* Ghidra address: 0181c920 */
/* Ghidra symbol: FUN_0181c920 */


void FUN_0181c920(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x6f8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x128))(plVar1,1);
  }
  return;
}

