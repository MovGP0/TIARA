/* Ghidra address: 006611a0 */
/* Ghidra symbol: FUN_006611a0 */


void FUN_006611a0(longlong param_1)

{
  *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
  if (*(int *)(param_1 + 0x9c) < 1) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
    FUN_00663c60();
  }
  return;
}

