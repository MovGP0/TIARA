/* Ghidra address: 00652120 */
/* Ghidra symbol: FUN_00652120 */


void FUN_00652120(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1);
  }
  return;
}

