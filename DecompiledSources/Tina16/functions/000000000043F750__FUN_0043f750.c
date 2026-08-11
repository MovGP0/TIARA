/* Ghidra address: 0043f750 */
/* Ghidra symbol: FUN_0043f750 */


undefined8 FUN_0043f750(undefined8 param_1,undefined8 param_2)

{
  if ((int)param_2 < 0) {
    FUN_0043f330(param_1,-(int)param_2,1);
  }
  else {
    FUN_0043f330(param_1,param_2,0);
  }
  return param_1;
}

