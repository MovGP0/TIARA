/* Ghidra address: 007fdb70 */
/* Ghidra symbol: FUN_007fdb70 */


void FUN_007fdb70(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x4b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x88))(plVar1);
  }
  return;
}

