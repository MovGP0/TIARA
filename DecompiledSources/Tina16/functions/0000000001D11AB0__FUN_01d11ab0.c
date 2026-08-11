/* Ghidra address: 01d11ab0 */
/* Ghidra symbol: FUN_01d11ab0 */


longlong FUN_01d11ab0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_004429e0(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = 0xffffffff;
  }
  else {
    lVar1 = FUN_004429e0(param_2,param_1);
    lVar1 = (lVar1 - param_2) / 2;
  }
  return lVar1;
}

