/* Ghidra address: 00718080 */
/* Ghidra symbol: FUN_00718080 */


undefined8 FUN_00718080(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_007182a0(&PTR_FUN_00718ed8,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

