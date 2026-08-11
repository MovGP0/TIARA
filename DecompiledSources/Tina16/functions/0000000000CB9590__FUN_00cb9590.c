/* Ghidra address: 00cb9590 */
/* Ghidra symbol: FUN_00cb9590 */


void FUN_00cb9590(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1);
  }
  FUN_00cac180(param_1);
  return;
}

