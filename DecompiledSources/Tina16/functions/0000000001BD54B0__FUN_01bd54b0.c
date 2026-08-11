/* Ghidra address: 01bd54b0 */
/* Ghidra symbol: FUN_01bd54b0 */


void FUN_01bd54b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x360);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x130))(plVar1,param_2);
  }
  FUN_0064db10(param_1,param_2);
  return;
}

