/* Ghidra address: 01d4c1f0 */
/* Ghidra symbol: FUN_01d4c1f0 */


void FUN_01d4c1f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_016ebc30(param_1,3);
  if (cVar1 == '\x01') {
    FUN_01d4bda0(param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    FUN_01d4bff0(param_1,param_2);
  }
  return;
}

