/* Ghidra address: 00e78320 */
/* Ghidra symbol: FUN_00e78320 */


void FUN_00e78320(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_016ebc30(param_1,1);
  if (cVar1 == '\x01') {
    FUN_00e77f40(param_1,param_2,1);
  }
  else if (cVar1 == '\x02') {
    FUN_00e78140(param_1,param_2,1);
  }
  else if (cVar1 == '\x03') {
    FUN_00e77ef0(param_1,1);
  }
  return;
}

