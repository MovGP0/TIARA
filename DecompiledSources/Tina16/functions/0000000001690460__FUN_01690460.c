/* Ghidra address: 01690460 */
/* Ghidra symbol: FUN_01690460 */


void FUN_01690460(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_016ebc30(param_1,1);
  if (cVar1 == '\x01') {
    FUN_0168fa80(param_1,param_2,1);
  }
  else if (cVar1 == '\x02') {
    FUN_0168fe50(param_1,param_2,1);
  }
  else if (cVar1 == '\x03') {
    FUN_01690110(param_1,param_2,1);
  }
  else if (cVar1 == '\x04') {
    FUN_01686330(param_1,1);
  }
  return;
}

