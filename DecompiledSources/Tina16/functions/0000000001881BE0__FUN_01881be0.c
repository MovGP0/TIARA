/* Ghidra address: 01881be0 */
/* Ghidra symbol: FUN_01881be0 */


void FUN_01881be0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_018803a0(param_1);
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x3c8))(plVar1);
  }
  return;
}

