/* Ghidra address: 00a0a230 */
/* Ghidra symbol: FUN_00a0a230 */


void FUN_00a0a230(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_00a1bd80(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}

