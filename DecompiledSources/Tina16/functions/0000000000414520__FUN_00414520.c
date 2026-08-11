/* Ghidra address: 00414520 */
/* Ghidra symbol: FUN_00414520 */


longlong * FUN_00414520(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *param_1 = 0;
    thunk_FUN_041b9bbd(lVar1);
  }
  return param_1;
}

