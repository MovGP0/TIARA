/* Ghidra address: 01ca7640 */
/* Ghidra symbol: FUN_01ca7640 */


void FUN_01ca7640(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x10)) {
    FUN_0059b5b0(param_1 + 8,param_2);
  }
  FUN_0059b400(param_1 + 8,(longlong)param_2);
  return;
}

