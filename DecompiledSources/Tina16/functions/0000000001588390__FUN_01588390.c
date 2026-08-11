/* Ghidra address: 01588390 */
/* Ghidra symbol: FUN_01588390 */


void FUN_01588390(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x10)) {
    FUN_0059b430(param_1 + 8,param_2);
  }
  FUN_0059b400(param_1 + 8,(longlong)param_2);
  return;
}

