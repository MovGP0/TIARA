/* Ghidra address: 01771d30 */
/* Ghidra symbol: FUN_01771d30 */


bool FUN_01771d30(undefined8 param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (((param_2 == 0) && (param_3 == 1)) || ((param_2 == 1 && (param_3 == 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = param_2 == param_3;
  }
  return bVar1;
}

