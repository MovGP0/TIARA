/* Ghidra address: 01cc40d0 */
/* Ghidra symbol: FUN_01cc40d0 */


void FUN_01cc40d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_01d33380(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(*(longlong **)(param_1 + 8),param_2);
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
  }
  return;
}

