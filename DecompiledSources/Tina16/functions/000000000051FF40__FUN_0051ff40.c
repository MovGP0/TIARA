/* Ghidra address: 0051ff40 */
/* Ghidra symbol: FUN_0051ff40 */


undefined8 FUN_0051ff40(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00520b40(&PTR_FUN_00522090,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

