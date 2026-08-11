/* Ghidra address: 00604940 */
/* Ghidra symbol: FUN_00604940 */


void FUN_00604940(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xd8))(plVar1);
  }
  return;
}

