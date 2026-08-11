/* Ghidra address: 00d2a9b0 */
/* Ghidra symbol: FUN_00d2a9b0 */


void FUN_00d2a9b0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x90) = param_2;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x28) = param_2;
  }
  return;
}

