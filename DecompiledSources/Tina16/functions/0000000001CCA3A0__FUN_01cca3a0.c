/* Ghidra address: 01cca3a0 */
/* Ghidra symbol: FUN_01cca3a0 */


longlong FUN_01cca3a0(longlong param_1)

{
  *(int *)(param_1 + 0x2c) = (*(int *)(param_1 + 0x50) * 3 + 1) * 8;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x4c) * 0x18;
  *(int *)(param_1 + 0x34) = ((*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c)) * 3 + -1) * 8;
  return (longlong)(*(int *)(param_1 + 0x28) * (*(int *)(param_1 + 0x50) * 3 + 1) * 8);
}

