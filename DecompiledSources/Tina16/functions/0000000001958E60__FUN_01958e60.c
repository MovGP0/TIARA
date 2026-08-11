/* Ghidra address: 01958e60 */
/* Ghidra symbol: FUN_01958e60 */


void FUN_01958e60(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x3c) = param_2;
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x14) = param_2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x14) = param_2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x14) = param_2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x14) = param_2;
  return;
}

