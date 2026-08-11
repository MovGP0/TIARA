/* Ghidra address: 007ae4e0 */
/* Ghidra symbol: FUN_007ae4e0 */


undefined8 FUN_007ae4e0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_007b15a0(&PTR_FUN_007d2b60,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

