/* Ghidra address: 0111d0d0 */
/* Ghidra symbol: FUN_0111d0d0 */


void FUN_0111d0d0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x163) = 5;
  if (*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)(*(int *)(param_1 + 0x150) + 1) * 2) ==
      10) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 2;
  }
  else {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
  }
  return;
}

