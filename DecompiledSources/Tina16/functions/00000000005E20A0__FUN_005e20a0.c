/* Ghidra address: 005e20a0 */
/* Ghidra symbol: FUN_005e20a0 */


undefined8 FUN_005e20a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_005e38b0(&PTR_FUN_005e6638,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

