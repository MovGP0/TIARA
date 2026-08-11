/* Ghidra address: 01c07100 */
/* Ghidra symbol: FUN_01c07100 */


void FUN_01c07100(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 800);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x78))(plVar1);
  }
  return;
}

