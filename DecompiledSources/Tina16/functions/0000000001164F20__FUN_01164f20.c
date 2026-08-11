/* Ghidra address: 01164f20 */
/* Ghidra symbol: FUN_01164f20 */


void FUN_01164f20(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_016ebc30(param_1,1);
  if (cVar1 == '\x01') {
    FUN_01164e80(param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    FUN_011640a0(param_1,param_2);
  }
  return;
}

