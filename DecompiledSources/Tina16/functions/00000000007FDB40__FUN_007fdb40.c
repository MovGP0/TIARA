/* Ghidra address: 007fdb40 */
/* Ghidra symbol: FUN_007fdb40 */


void FUN_007fdb40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x4b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x98))(plVar1);
  }
  return;
}

