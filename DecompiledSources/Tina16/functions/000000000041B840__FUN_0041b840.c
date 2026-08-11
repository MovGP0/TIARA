/* Ghidra address: 0041b840 */
/* Ghidra symbol: FUN_0041b840 */


void FUN_0041b840(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  *param_1 = (longlong)param_2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return;
}

