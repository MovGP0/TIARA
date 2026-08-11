/* Ghidra address: 00aa6880 */
/* Ghidra symbol: FUN_00aa6880 */


void FUN_00aa6880(longlong param_1)

{
  longlong *plVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x238) + 0x10))(*(longlong **)(param_1 + 0x238));
  plVar1 = *(longlong **)(param_1 + 0x230);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

