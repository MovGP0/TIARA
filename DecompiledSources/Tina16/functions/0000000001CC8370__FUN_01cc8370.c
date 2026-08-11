/* Ghidra address: 01cc8370 */
/* Ghidra symbol: FUN_01cc8370 */


void FUN_01cc8370(longlong param_1)

{
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1;
  if (*(int *)(param_1 + 0x54) == 0) {
    FUN_00410f20();
  }
  return;
}

