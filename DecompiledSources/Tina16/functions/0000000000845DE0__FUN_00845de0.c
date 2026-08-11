/* Ghidra address: 00845de0 */
/* Ghidra symbol: FUN_00845de0 */


void FUN_00845de0(longlong param_1)

{
  FUN_00841d10(*(undefined8 *)(param_1 + 0x140),param_1 + 0xb0);
  *(int *)(param_1 + 0xac) =
       *(int *)(param_1 + 0xc0) - *(int *)(*(longlong *)(param_1 + 0x140) + 0x4e8);
  if (*(int *)(param_1 + 0xac) < 1) {
    *(undefined4 *)(param_1 + 0xac) = 1;
  }
  *(int *)(param_1 + 0xa8) =
       *(int *)(param_1 + 0xf8) - *(int *)(*(longlong *)(param_1 + 0x140) + 0x4ec);
  if (*(int *)(param_1 + 0xa8) < 1) {
    *(undefined4 *)(param_1 + 0xa8) = 1;
  }
  return;
}

