/* Ghidra address: 00e295f0 */
/* Ghidra symbol: FUN_00e295f0 */


undefined8 FUN_00e295f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00e29de0(&PTR_FUN_00e2c1b8,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

