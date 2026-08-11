/* Ghidra address: 004145c0 */
/* Ghidra symbol: FUN_004145c0 */


void FUN_004145c0(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  for (; 0 < param_2; param_2 = param_2 + -1) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      *param_1 = 0;
      thunk_FUN_041b9bbd(lVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

