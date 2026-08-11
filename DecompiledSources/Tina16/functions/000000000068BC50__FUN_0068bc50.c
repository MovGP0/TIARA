/* Ghidra address: 0068bc50 */
/* Ghidra symbol: FUN_0068bc50 */


void FUN_0068bc50(longlong param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*(int *)(param_1 + 0x4d0) != param_2) {
    *(int *)(param_1 + 0x4d0) = param_2;
    FUN_00655b90();
  }
  return;
}

