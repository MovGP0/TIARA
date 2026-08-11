/* Ghidra address: 00cb79e0 */
/* Ghidra symbol: FUN_00cb79e0 */


void FUN_00cb79e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x120);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x120))(plVar1);
  }
  return;
}

