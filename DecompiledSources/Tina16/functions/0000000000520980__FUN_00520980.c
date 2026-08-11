/* Ghidra address: 00520980 */
/* Ghidra symbol: FUN_00520980 */


undefined8 FUN_00520980(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00521a40(&PTR_FUN_00525290,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

