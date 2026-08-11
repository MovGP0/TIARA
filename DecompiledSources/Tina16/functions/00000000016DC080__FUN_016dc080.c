/* Ghidra address: 016dc080 */
/* Ghidra symbol: FUN_016dc080 */


double FUN_016dc080(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  double dVar1;
  
  if (param_2 == '\x06') {
    dVar1 = (double)FUN_01d0e4e0(param_1 + 0x5d8);
    dVar1 = dVar1 / (double)*(int *)(param_4 + 8);
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}

