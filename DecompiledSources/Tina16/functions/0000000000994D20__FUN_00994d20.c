/* Ghidra address: 00994d20 */
/* Ghidra symbol: FUN_00994d20 */


undefined8 FUN_00994d20(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 == (longlong *)0x0) {
    FUN_00414520(param_2);
  }
  else {
    (**(code **)(*plVar1 + 0x108))(plVar1,param_2);
  }
  return param_2;
}

