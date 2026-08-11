/* Ghidra address: 007abf80 */
/* Ghidra symbol: FUN_007abf80 */


undefined8 FUN_007abf80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_007aecd0(&PTR_FUN_007d06e0,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

