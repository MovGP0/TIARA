/* Ghidra address: 00bb3560 */
/* Ghidra symbol: FUN_00bb3560 */


undefined8 FUN_00bb3560(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_00bb3530(param_1,param_3);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x60;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

