/* Ghidra address: 00604d40 */
/* Ghidra symbol: FUN_00604d40 */


void FUN_00604d40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 200))(plVar1);
  }
  return;
}

