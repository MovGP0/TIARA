/* Ghidra address: 01bfd880 */
/* Ghidra symbol: FUN_01bfd880 */


void FUN_01bfd880(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x60) + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  return;
}

