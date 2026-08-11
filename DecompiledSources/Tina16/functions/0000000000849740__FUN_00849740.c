/* Ghidra address: 00849740 */
/* Ghidra symbol: FUN_00849740 */


void FUN_00849740(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0xa2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x150))(plVar1,param_2);
  }
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  FUN_00849640(param_1);
  return;
}

