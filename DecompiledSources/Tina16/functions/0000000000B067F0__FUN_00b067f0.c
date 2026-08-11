/* Ghidra address: 00b067f0 */
/* Ghidra symbol: FUN_00b067f0 */


void FUN_00b067f0(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x49c)) {
    *(int *)(param_1 + 0x49c) = param_2;
    FUN_00655b90();
  }
  return;
}

