/* Ghidra address: 005c8140 */
/* Ghidra symbol: FUN_005c8140 */


undefined8 FUN_005c8140(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_005c8a00(&PTR_FUN_005cf9e8,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

