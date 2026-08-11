/* Ghidra address: 0145b600 */
/* Ghidra symbol: FUN_0145b600 */


void FUN_0145b600(double param_1,longlong param_2)

{
  *(uint *)(param_2 + 0x48) = (uint)*(byte *)(param_2 + 0x45);
  *(uint *)(param_2 + 0x4c) = (uint)*(byte *)(param_2 + 0x44);
  *(double *)(param_2 + 0xa0) = *(double *)(param_2 + 0xa0) * param_1;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  *(undefined8 *)(param_2 + 0xd8 + (longlong)*(int *)(param_2 + 0x4c) * 8) = 0;
  *(double *)(param_2 + 0x220 + (longlong)*(int *)(param_2 + 0x4c) * 8) = param_1;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  *(undefined8 *)(param_2 + 0xd8 + (longlong)*(int *)(param_2 + 0x4c) * 8) = 0;
  *(double *)(param_2 + 0x220 + (longlong)*(int *)(param_2 + 0x4c) * 8) = -param_1;
  *(double *)(param_2 + 0x368) = (double)*(int *)(param_2 + 0x48);
  *(double *)(param_2 + 0xd8) = (double)*(int *)(param_2 + 0x4c);
  return;
}

