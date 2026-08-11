/* Ghidra address: 010f0ca0 */
/* Ghidra symbol: FUN_010f0ca0 */


void FUN_010f0ca0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  *(double *)(param_1 + 0x60) =
       (double)(*(int *)(param_1 + 0x80) - *(int *)(lVar1 + 0x14)) /
       (double)(*(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14));
  *(double *)(param_1 + 0x68) =
       (double)(*(int *)(param_1 + 0x84) - *(int *)(lVar1 + 0x18)) /
       (double)(*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18));
  *(double *)(param_1 + 0x70) =
       (double)(*(int *)(param_1 + 0x88) - *(int *)(lVar1 + 0x14)) /
       (double)(*(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14));
  *(double *)(param_1 + 0x78) =
       (double)(*(int *)(param_1 + 0x8c) - *(int *)(lVar1 + 0x18)) /
       (double)(*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18));
  return;
}

