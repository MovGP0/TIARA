/* Ghidra address: 009b2f50 */
/* Ghidra symbol: FUN_009b2f50 */


void FUN_009b2f50(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x10)) {
    FUN_0059b430(param_1 + 8,param_2);
  }
  FUN_0059b400(param_1 + 8,(longlong)param_2);
  return;
}

