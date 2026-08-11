/* Ghidra address: 00604530 */
/* Ghidra symbol: FUN_00604530 */


void FUN_00604530(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xb0))(plVar1);
  }
  return;
}

