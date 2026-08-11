/* Ghidra address: 007a4f40 */
/* Ghidra symbol: FUN_007a4f40 */


void FUN_007a4f40(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x10)) {
    FUN_0059b550(param_1 + 8,param_2);
  }
  FUN_0059b400(param_1 + 8,(longlong)param_2);
  return;
}

