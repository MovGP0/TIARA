/* Ghidra address: 016d1530 */
/* Ghidra symbol: FUN_016d1530 */


undefined8 FUN_016d1530(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_016d1750(&PTR_FUN_016d22e8,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

