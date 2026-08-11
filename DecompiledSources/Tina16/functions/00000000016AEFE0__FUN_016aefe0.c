/* Ghidra address: 016aefe0 */
/* Ghidra symbol: FUN_016aefe0 */


void FUN_016aefe0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x1c) * 4) = param_2;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (*(int *)(param_1 + 0x24) + -1 < *(int *)(param_1 + 0x1c)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}

