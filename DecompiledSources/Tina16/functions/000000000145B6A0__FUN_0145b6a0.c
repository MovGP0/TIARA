/* Ghidra address: 0145b6a0 */
/* Ghidra symbol: FUN_0145b6a0 */


void FUN_0145b6a0(ulonglong param_1,longlong param_2)

{
  *(uint *)(param_2 + 0x48) = (uint)*(byte *)(param_2 + 0x45);
  *(uint *)(param_2 + 0x4c) = (uint)*(byte *)(param_2 + 0x44);
  *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + 1;
  *(undefined8 *)(param_2 + 0x368 + (longlong)*(int *)(param_2 + 0x48) * 8) = 0;
  *(undefined8 *)(param_2 + 0x4b0 + (longlong)*(int *)(param_2 + 0x48) * 8) = 0;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  *(undefined8 *)(param_2 + 0xd8 + (longlong)*(int *)(param_2 + 0x4c) * 8) = 0;
  *(ulonglong *)(param_2 + 0x220 + (longlong)*(int *)(param_2 + 0x4c) * 8) = param_1;
  *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + 1;
  *(undefined8 *)(param_2 + 0xd8 + (longlong)*(int *)(param_2 + 0x4c) * 8) = 0;
  *(ulonglong *)(param_2 + 0x220 + (longlong)*(int *)(param_2 + 0x4c) * 8) =
       param_1 ^ 0x8000000000000000;
  *(double *)(param_2 + 0x368) = (double)*(int *)(param_2 + 0x48);
  *(double *)(param_2 + 0xd8) = (double)*(int *)(param_2 + 0x4c);
  return;
}

