/* Ghidra address: 016b0c20 */
/* Ghidra symbol: FUN_016b0c20 */


void FUN_016b0c20(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x84) = 1;
  *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}

