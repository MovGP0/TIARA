/* Ghidra address: 0159c0a0 */
/* Ghidra symbol: FUN_0159c0a0 */


void FUN_0159c0a0(longlong param_1,undefined4 param_2)

{
  *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) =
       (char)((uint)param_2 >> 8);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(char *)(*(longlong *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x20)) = (char)param_2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}

