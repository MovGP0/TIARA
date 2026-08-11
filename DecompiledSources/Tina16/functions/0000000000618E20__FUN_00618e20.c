/* Ghidra address: 00618e20 */
/* Ghidra symbol: FUN_00618e20 */


longlong * FUN_00618e20(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  if ((plVar1 == (longlong *)0x0) || ((longlong *)*plVar1 == plVar1)) {
    *param_2 = 0;
  }
  else {
    plVar1 = *(longlong **)*param_2;
    *(longlong *)*param_2 = *plVar1;
  }
  return plVar1;
}

