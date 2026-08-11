/* Ghidra address: 0197f7d0 */
/* Ghidra symbol: FUN_0197f7d0 */


void FUN_0197f7d0(longlong param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  if (*(int *)(param_1 + 0x20) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

