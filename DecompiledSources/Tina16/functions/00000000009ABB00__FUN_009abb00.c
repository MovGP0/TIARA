/* Ghidra address: 009abb00 */
/* Ghidra symbol: FUN_009abb00 */


undefined8 FUN_009abb00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_009abb40(&PTR_FUN_0098fcf0,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

