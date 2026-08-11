/* Ghidra address: 017b4ef0 */
/* Ghidra symbol: FUN_017b4ef0 */


void FUN_017b4ef0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x50),(longlong)(*(int *)(param_1 + 0x60) * 8));
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

