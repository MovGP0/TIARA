/* Ghidra address: 0074d450 */
/* Ghidra symbol: FUN_0074d450 */


void FUN_0074d450(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_0065f000(param_1,param_2);
  plVar1 = *(longlong **)(param_1 + 0x4d8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x130))(plVar1,param_2);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x4d8),1);
  }
  return;
}

