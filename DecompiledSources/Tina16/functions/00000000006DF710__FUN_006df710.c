/* Ghidra address: 006df710 */
/* Ghidra symbol: FUN_006df710 */


void FUN_006df710(longlong param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_006df6c0(param_1,0);
  }
  return;
}

