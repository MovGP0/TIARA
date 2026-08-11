/* Ghidra address: 009ac570 */
/* Ghidra symbol: FUN_009ac570 */


undefined8 FUN_009ac570(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_009b4b40(&PTR_FUN_009c6408,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

