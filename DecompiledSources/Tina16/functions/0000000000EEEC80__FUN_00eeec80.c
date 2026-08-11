/* Ghidra address: 00eeec80 */
/* Ghidra symbol: FUN_00eeec80 */


undefined8 FUN_00eeec80(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00eef1d0(&PTR_FUN_00ef3b88,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

