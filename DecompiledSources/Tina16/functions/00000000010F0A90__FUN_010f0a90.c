/* Ghidra address: 010f0a90 */
/* Ghidra symbol: FUN_010f0a90 */


void FUN_010f0a90(longlong param_1,int param_2,int param_3)

{
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + param_2;
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + param_3;
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + param_2;
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + param_3;
  }
  return;
}

