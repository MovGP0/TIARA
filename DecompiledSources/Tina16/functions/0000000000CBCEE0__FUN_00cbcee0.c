/* Ghidra address: 00cbcee0 */
/* Ghidra symbol: FUN_00cbcee0 */


void FUN_00cbcee0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x100);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x108))(plVar1);
  }
  return;
}

