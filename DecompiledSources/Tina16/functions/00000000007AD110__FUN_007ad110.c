/* Ghidra address: 007ad110 */
/* Ghidra symbol: FUN_007ad110 */


undefined8 FUN_007ad110(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_007afe10(&PTR_FUN_007d15e0,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

