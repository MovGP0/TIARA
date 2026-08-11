/* Ghidra address: 01d51460 */
/* Ghidra symbol: FUN_01d51460 */


void FUN_01d51460(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_016ebc30(param_1,4);
  if (cVar1 == '\x01') {
    FUN_01d50b60(param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    FUN_01d51020(param_1,param_2);
  }
  return;
}

