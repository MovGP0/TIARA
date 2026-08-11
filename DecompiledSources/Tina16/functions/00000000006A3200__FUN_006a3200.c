/* Ghidra address: 006a3200 */
/* Ghidra symbol: FUN_006a3200 */


void FUN_006a3200(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  }
  return;
}

