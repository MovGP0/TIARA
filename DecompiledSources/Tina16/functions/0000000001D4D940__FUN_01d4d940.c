/* Ghidra address: 01d4d940 */
/* Ghidra symbol: FUN_01d4d940 */


void FUN_01d4d940(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_016ebc30(param_1,5);
  if (cVar1 == '\x01') {
    FUN_01d4d430(param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    FUN_01d4d6f0(param_1);
  }
  return;
}

