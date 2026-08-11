/* Ghidra address: 00564850 */
/* Ghidra symbol: FUN_00564850 */


undefined8 FUN_00564850(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00572250(&PTR_FUN_0057e390,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

