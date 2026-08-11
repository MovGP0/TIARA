/* Ghidra address: 016b0590 */
/* Ghidra symbol: FUN_016b0590 */


void FUN_016b0590(longlong param_1,longlong *param_2)

{
  if ((-1 < *param_2) && (*(int *)(param_1 + 0x20) < 0x20)) {
    *(longlong *)(param_1 + 0x24 + (longlong)*(int *)(param_1 + 0x20) * 8) = *param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return;
}

