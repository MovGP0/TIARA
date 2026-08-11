/* Ghidra address: 00520750 */
/* Ghidra symbol: FUN_00520750 */


undefined8 FUN_00520750(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00521680(&PTR_FUN_005245d0,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

