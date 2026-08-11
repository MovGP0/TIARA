/* Ghidra address: 006dd6a0 */
/* Ghidra symbol: FUN_006dd6a0 */


longlong FUN_006dd6a0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_006dd430(param_1);
  if (lVar1 == 0) {
    lVar2 = FUN_006dd390(param_1);
  }
  else {
    do {
      lVar2 = lVar1;
      lVar1 = FUN_006dd5d0(lVar2);
    } while (lVar1 != 0);
  }
  return lVar2;
}

