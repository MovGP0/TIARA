/* Ghidra address: 005bbc00 */
/* Ghidra symbol: FUN_005bbc00 */


longlong FUN_005bbc00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_005bbab0();
  lVar2 = FUN_005bbab0(param_2);
  lVar1 = lVar1 - lVar2;
  if (lVar1 < 0) {
    lVar1 = -lVar1;
  }
  return lVar1 / 1000;
}

