/* Ghidra address: 0064e750 */
/* Ghidra symbol: FUN_0064e750 */


void FUN_0064e750(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1);
  }
  return;
}

