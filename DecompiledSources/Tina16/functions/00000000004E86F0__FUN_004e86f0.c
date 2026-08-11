/* Ghidra address: 004e86f0 */
/* Ghidra symbol: FUN_004e86f0 */


void FUN_004e86f0(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x10)) {
    FUN_0059b550(param_1 + 8,param_2);
  }
  FUN_0059b400(param_1 + 8,(longlong)param_2);
  return;
}

