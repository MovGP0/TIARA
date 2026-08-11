/* Ghidra address: 018cf630 */
/* Ghidra symbol: FUN_018cf630 */


void FUN_018cf630(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x1c0) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x18);
    (**(code **)(*plVar1 + 0x48))(plVar1);
  }
  return;
}

