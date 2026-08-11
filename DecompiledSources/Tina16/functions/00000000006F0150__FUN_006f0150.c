/* Ghidra address: 006f0150 */
/* Ghidra symbol: FUN_006f0150 */


void FUN_006f0150(longlong param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_006efe80(param_1,0);
  }
  return;
}

