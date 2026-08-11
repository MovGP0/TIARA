/* Ghidra address: 005bbb10 */
/* Ghidra symbol: FUN_005bbb10 */


longlong FUN_005bbb10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_005bbab0();
  lVar2 = FUN_005bbab0(param_2);
  lVar1 = lVar1 - lVar2;
  if (lVar1 < 0) {
    lVar1 = -lVar1;
  }
  return lVar1 / 86400000;
}

