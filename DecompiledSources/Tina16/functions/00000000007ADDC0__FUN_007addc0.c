/* Ghidra address: 007addc0 */
/* Ghidra symbol: FUN_007addc0 */


undefined8 FUN_007addc0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_007b0d30(&PTR_FUN_007d23b0,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

