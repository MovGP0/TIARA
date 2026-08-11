/* Ghidra address: 00447c50 */
/* Ghidra symbol: FUN_00447c50 */


void FUN_00447c50(longlong param_1)

{
  while (*(short *)(*(longlong *)(param_1 + 0xb0) + (longlong)*(int *)(param_1 + 0x8c) * 2) == 0x20)
  {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  }
  return;
}

