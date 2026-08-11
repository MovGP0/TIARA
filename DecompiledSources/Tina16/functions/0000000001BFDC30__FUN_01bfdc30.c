/* Ghidra address: 01bfdc30 */
/* Ghidra symbol: FUN_01bfdc30 */


void FUN_01bfdc30(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return;
}

