/* Ghidra address: 00b64200 */
/* Ghidra symbol: FUN_00b64200 */


void FUN_00b64200(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + -0x20))(plVar1,1);
  }
  return;
}

