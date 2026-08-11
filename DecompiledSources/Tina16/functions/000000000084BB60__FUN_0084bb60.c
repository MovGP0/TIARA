/* Ghidra address: 0084bb60 */
/* Ghidra symbol: FUN_0084bb60 */


void FUN_0084bb60(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  FUN_00411a80(param_1,param_2);
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + -0x20))(plVar1,1);
  }
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

