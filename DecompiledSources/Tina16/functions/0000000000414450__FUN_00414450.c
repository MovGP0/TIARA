/* Ghidra address: 00414450 */
/* Ghidra symbol: FUN_00414450 */


longlong FUN_00414450(int param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = thunk_FUN_041826a7(0,param_1);
    if (lVar1 == 0) {
      FUN_00414430();
    }
  }
  return lVar1;
}

