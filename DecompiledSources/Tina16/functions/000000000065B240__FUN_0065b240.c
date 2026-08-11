/* Ghidra address: 0065b240 */
/* Ghidra symbol: FUN_0065b240 */


void FUN_0065b240(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x240))(plVar1,param_1);
  }
  return;
}

