/* Ghidra address: 0068ff40 */
/* Ghidra symbol: FUN_0068ff40 */


void FUN_0068ff40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x188))(plVar1);
  }
  return;
}

