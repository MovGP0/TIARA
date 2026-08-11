/* Ghidra address: 01ca9fa0 */
/* Ghidra symbol: FUN_01ca9fa0 */


undefined8 FUN_01ca9fa0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_01caa430(&PTR_FUN_01cae8d8,1);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(param_2,lVar1);
  return param_2;
}

