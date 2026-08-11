/* Ghidra address: 01d50760 */
/* Ghidra symbol: FUN_01d50760 */


void FUN_01d50760(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_016ebc30(param_1,4);
  if (cVar1 == '\x01') {
    FUN_01d4ff10(param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    FUN_01d50370(param_1);
  }
  return;
}

