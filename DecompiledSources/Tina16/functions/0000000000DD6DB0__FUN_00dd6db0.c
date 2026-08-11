/* Ghidra address: 00dd6db0 */
/* Ghidra symbol: FUN_00dd6db0 */


void FUN_00dd6db0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x98))(plVar1);
  }
  return;
}

