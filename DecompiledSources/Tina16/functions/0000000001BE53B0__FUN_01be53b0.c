/* Ghidra address: 01be53b0 */
/* Ghidra symbol: FUN_01be53b0 */


void FUN_01be53b0(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0xba];
  if ((plVar1 == (longlong *)0x0) || (param_1 == plVar1)) {
    FUN_01c03f30();
  }
  else {
    (**(code **)(*plVar1 + 0x360))(plVar1);
  }
  return;
}

