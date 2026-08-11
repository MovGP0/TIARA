/* Ghidra address: 01789450 */
/* Ghidra symbol: FUN_01789450 */


void FUN_01789450(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x10)) {
    FUN_0059b4f0(param_1 + 8,param_2);
  }
  FUN_0059b400(param_1 + 8,(longlong)param_2);
  return;
}

