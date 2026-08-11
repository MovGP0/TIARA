/* Ghidra address: 006efe50 */
/* Ghidra symbol: FUN_006efe50 */


void FUN_006efe50(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_006efe80(param_1,1);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

