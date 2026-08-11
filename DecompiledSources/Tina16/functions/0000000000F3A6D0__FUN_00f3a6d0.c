/* Ghidra address: 00f3a6d0 */
/* Ghidra symbol: FUN_00f3a6d0 */


undefined8 FUN_00f3a6d0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00f3ae70(&PTR_FUN_00f3ec38,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

