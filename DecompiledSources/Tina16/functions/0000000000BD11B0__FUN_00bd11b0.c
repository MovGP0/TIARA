/* Ghidra address: 00bd11b0 */
/* Ghidra symbol: FUN_00bd11b0 */


void FUN_00bd11b0(longlong param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (param_2 != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = param_2;
    FUN_00bd1070();
  }
  return;
}

