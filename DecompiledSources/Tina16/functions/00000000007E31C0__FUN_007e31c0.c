/* Ghidra address: 007e31c0 */
/* Ghidra symbol: FUN_007e31c0 */


void FUN_007e31c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return;
}

