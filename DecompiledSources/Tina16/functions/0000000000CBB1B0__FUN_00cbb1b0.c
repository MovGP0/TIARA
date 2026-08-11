/* Ghidra address: 00cbb1b0 */
/* Ghidra symbol: FUN_00cbb1b0 */


void FUN_00cbb1b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  }
  return;
}

