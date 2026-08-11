/* Ghidra address: 00b5be50 */
/* Ghidra symbol: FUN_00b5be50 */


void FUN_00b5be50(longlong param_1,uint param_2)

{
  longlong *plVar1;
  
  FUN_00411a80(param_1,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x80) + -0x20))(*(longlong **)(param_1 + 0x80),1);
  (**(code **)(**(longlong **)(param_1 + 0x90) + -0x20))(*(longlong **)(param_1 + 0x90),1);
  (**(code **)(**(longlong **)(param_1 + 0xa0) + -0x20))(*(longlong **)(param_1 + 0xa0),1);
  plVar1 = *(longlong **)(param_1 + 0x88);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + -0x20))(plVar1,1);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

