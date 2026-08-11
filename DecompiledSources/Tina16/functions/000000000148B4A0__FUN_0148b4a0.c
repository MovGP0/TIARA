/* Ghidra address: 0148b4a0 */
/* Ghidra symbol: FUN_0148b4a0 */


undefined8 FUN_0148b4a0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_0148bc90(&PTR_FUN_01490498,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

