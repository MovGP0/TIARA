/* Ghidra address: 00db7730 */
/* Ghidra symbol: FUN_00db7730 */


void FUN_00db7730(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_016ebc30(param_1,1);
  if (cVar1 == '\x01') {
    FUN_00db72d0(param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    FUN_00db74e0(param_1,param_2);
  }
  return;
}

