/* Ghidra address: 005a8680 */
/* Ghidra symbol: FUN_005a8680 */


undefined8 FUN_005a8680(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_005a8bd0(&PTR_FUN_005ae3c8,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

