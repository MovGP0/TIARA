/* Ghidra address: 01d51bf0 */
/* Ghidra symbol: FUN_01d51bf0 */


void FUN_01d51bf0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_016ebc30(param_1,2);
  if (cVar1 == '\x01') {
    FUN_01d51850(param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    FUN_01d51a50(param_1);
  }
  return;
}

