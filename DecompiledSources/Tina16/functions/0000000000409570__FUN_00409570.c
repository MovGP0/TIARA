/* Ghidra address: 00409570 */
/* Ghidra symbol: FUN_00409570 */


longlong FUN_00409570(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = (*(code *)PTR_FUN_01db9c98)();
    if (lVar1 == 0) {
      FUN_004098e0(1);
    }
  }
  return lVar1;
}

