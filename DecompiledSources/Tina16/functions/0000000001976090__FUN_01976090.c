/* Ghidra address: 01976090 */
/* Ghidra symbol: FUN_01976090 */


void FUN_01976090(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x210);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x310))(plVar1);
  }
  return;
}

