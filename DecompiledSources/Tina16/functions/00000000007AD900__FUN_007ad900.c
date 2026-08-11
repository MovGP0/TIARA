/* Ghidra address: 007ad900 */
/* Ghidra symbol: FUN_007ad900 */


undefined8 FUN_007ad900(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_007b0780(&PTR_FUN_007d1e70,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

