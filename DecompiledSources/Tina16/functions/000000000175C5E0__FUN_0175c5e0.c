/* Ghidra address: 0175c5e0 */
/* Ghidra symbol: FUN_0175c5e0 */


undefined8 FUN_0175c5e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_0175c8e0(&PTR_FUN_0175f048,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

