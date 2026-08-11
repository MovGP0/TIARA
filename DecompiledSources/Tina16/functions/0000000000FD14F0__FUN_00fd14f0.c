/* Ghidra address: 00fd14f0 */
/* Ghidra symbol: FUN_00fd14f0 */


void FUN_00fd14f0(longlong param_1)

{
  if (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4a8) == 0) {
    *(undefined1 *)(param_1 + 0x7f0) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x7f0) = 0;
  }
  return;
}

