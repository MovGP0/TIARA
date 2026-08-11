/* Ghidra address: 00414650 */
/* Ghidra symbol: FUN_00414650 */


longlong FUN_00414650(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = thunk_FUN_041826a7(lVar1,(longlong)*(int *)(lVar1 + -4) / 2 & 0xffffffff);
    if (lVar2 == 0) {
      FUN_00414430();
    }
    *param_1 = lVar2;
  }
  return lVar2;
}

