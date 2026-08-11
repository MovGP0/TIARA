/* Ghidra address: 00eed880 */
/* Ghidra symbol: FUN_00eed880 */


void FUN_00eed880(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x10)) {
    FUN_0059b610(param_1 + 8,param_2);
  }
  FUN_0059b400(param_1 + 8,(longlong)param_2);
  return;
}

