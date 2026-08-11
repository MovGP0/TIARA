/* Ghidra address: 00520150 */
/* Ghidra symbol: FUN_00520150 */


undefined8 FUN_00520150(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00520d80(&PTR_FUN_005227c0,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

