/* Ghidra address: 0158b2f0 */
/* Ghidra symbol: FUN_0158b2f0 */


undefined8 FUN_0158b2f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_0158c090(&PTR_FUN_01593d20,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

