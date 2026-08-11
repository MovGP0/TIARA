/* Ghidra address: 0111d160 */
/* Ghidra symbol: FUN_0111d160 */


void FUN_0111d160(longlong param_1)

{
  if (*(short *)(*(longlong *)(param_1 + 0x120) + (longlong)(*(int *)(param_1 + 0x150) + 1) * 2) ==
      0x3d) {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 2;
    *(undefined1 *)(param_1 + 0x163) = 7;
  }
  else {
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
    *(undefined1 *)(param_1 + 0x163) = 7;
  }
  return;
}

