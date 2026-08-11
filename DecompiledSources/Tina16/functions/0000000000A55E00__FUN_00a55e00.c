/* Ghidra address: 00a55e00 */
/* Ghidra symbol: FUN_00a55e00 */


void FUN_00a55e00(undefined8 param_1,longlong param_2)

{
  if (-1 < *(int *)(param_2 + 0x78)) {
    *(int *)(param_2 + 0x78) =
         *(int *)(param_2 + 0x78) -
         (*(int *)(param_2 + 0x54) + *(int *)(param_2 + 0x44) + *(int *)(param_2 + 0x3c) +
         *(int *)(param_2 + 0x4c));
  }
  if (-1 < *(int *)(param_2 + 0x7c)) {
    *(int *)(param_2 + 0x7c) =
         *(int *)(param_2 + 0x7c) -
         (*(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x40) +
         *(int *)(param_2 + 0x50));
  }
  return;
}

