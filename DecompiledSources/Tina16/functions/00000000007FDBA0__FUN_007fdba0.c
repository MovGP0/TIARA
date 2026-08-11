/* Ghidra address: 007fdba0 */
/* Ghidra symbol: FUN_007fdba0 */


void FUN_007fdba0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x4b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1);
  }
  return;
}

