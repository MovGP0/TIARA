/* Ghidra address: 01bfdd00 */
/* Ghidra symbol: FUN_01bfdd00 */


void FUN_01bfdd00(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x260))(plVar1);
  }
  return;
}

