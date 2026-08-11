/* Ghidra address: 017212c0 */
/* Ghidra symbol: FUN_017212c0 */


undefined8 FUN_017212c0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_01721a60(&PTR_FUN_01728410,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

