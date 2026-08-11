/* Ghidra address: 00ab99f0 */
/* Ghidra symbol: FUN_00ab99f0 */


void FUN_00ab99f0(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_2 < *(int *)(*(longlong *)(param_1 + 0x70) + 0x94)) {
    *(int *)(*(longlong *)(param_1 + 0x70) + 0x94) = param_2;
  }
  if (param_3 < *(int *)(*(longlong *)(param_1 + 0x70) + 0x90)) {
    *(int *)(*(longlong *)(param_1 + 0x70) + 0x90) = param_3;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x98) < param_3 + param_4) {
    *(int *)(*(longlong *)(param_1 + 0x70) + 0x98) = param_3 + param_4;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x9c) < param_2 + param_5) {
    *(int *)(*(longlong *)(param_1 + 0x70) + 0x9c) = param_2 + param_5;
  }
  return;
}

