/* Ghidra address: 004095c0 */
/* Ghidra symbol: FUN_004095c0 */


longlong FUN_004095c0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = (*(code *)PTR_FUN_01db9c80)();
    if (lVar1 == 0) {
      FUN_004098e0(1);
    }
  }
  return lVar1;
}

