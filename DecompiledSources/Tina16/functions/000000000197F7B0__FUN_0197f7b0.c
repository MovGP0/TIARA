/* Ghidra address: 0197f7b0 */
/* Ghidra symbol: FUN_0197f7b0 */


void FUN_0197f7b0(longlong param_1)

{
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

