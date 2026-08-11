/* Ghidra address: 01cc83a0 */
/* Ghidra symbol: FUN_01cc83a0 */


longlong FUN_01cc83a0(longlong param_1)

{
  *(int *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x50) + 1) * 8;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x4c) * 8;
  *(int *)(param_1 + 0x34) = ((*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c)) + -1) * 8;
  return (longlong)(*(int *)(param_1 + 0x28) * (*(int *)(param_1 + 0x50) + 1) * 8);
}

