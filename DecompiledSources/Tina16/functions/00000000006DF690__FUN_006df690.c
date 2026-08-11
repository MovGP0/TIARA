/* Ghidra address: 006df690 */
/* Ghidra symbol: FUN_006df690 */


void FUN_006df690(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_006df6c0(param_1,1);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

