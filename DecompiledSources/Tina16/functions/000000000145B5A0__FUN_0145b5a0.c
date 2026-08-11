/* Ghidra address: 0145b5a0 */
/* Ghidra symbol: FUN_0145b5a0 */


void FUN_0145b5a0(longlong param_1)

{
  *(uint *)(param_1 + 0x48) = (uint)*(byte *)(param_1 + 0x45);
  *(uint *)(param_1 + 0x4c) = (uint)*(byte *)(param_1 + 0x44);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  *(undefined8 *)(param_1 + 0xd8 + (longlong)*(int *)(param_1 + 0x4c) * 8) = 0;
  *(undefined8 *)(param_1 + 0x220 + (longlong)*(int *)(param_1 + 0x4c) * 8) = 0;
  *(double *)(param_1 + 0x368) = (double)*(int *)(param_1 + 0x48);
  *(double *)(param_1 + 0xd8) = (double)*(int *)(param_1 + 0x4c);
  return;
}

