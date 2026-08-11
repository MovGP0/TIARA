/* Ghidra address: 0043f780 */
/* Ghidra symbol: FUN_0043f780 */


undefined8 FUN_0043f780(undefined8 param_1,longlong param_2)

{
  if (param_2 < 0) {
    FUN_0043f450(param_1,-param_2,1);
  }
  else {
    FUN_0043f450(param_1,param_2,0);
  }
  return param_1;
}

