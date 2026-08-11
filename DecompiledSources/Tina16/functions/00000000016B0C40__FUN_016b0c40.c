/* Ghidra address: 016b0c40 */
/* Ghidra symbol: FUN_016b0c40 */


void FUN_016b0c40(longlong param_1,longlong param_2)

{
  if (*(int *)(param_2 + 0x84) == 1) {
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  }
  return;
}

