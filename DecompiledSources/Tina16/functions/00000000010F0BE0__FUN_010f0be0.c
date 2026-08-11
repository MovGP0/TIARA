/* Ghidra address: 010f0be0 */
/* Ghidra symbol: FUN_010f0be0 */


void FUN_010f0be0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  uVar2 = FUN_0040c770((double)*(int *)(lVar1 + 0x14) +
                       *(double *)(param_1 + 0x60) *
                       (double)(*(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14)));
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  uVar2 = FUN_0040c770((double)*(int *)(lVar1 + 0x18) +
                       *(double *)(param_1 + 0x68) *
                       (double)(*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18)));
  *(undefined4 *)(param_1 + 0x84) = uVar2;
  uVar2 = FUN_0040c770((double)*(int *)(lVar1 + 0x14) +
                       *(double *)(param_1 + 0x70) *
                       (double)(*(int *)(lVar1 + 0x1c) - *(int *)(lVar1 + 0x14)));
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  uVar2 = FUN_0040c770((double)*(int *)(lVar1 + 0x18) +
                       *(double *)(param_1 + 0x78) *
                       (double)(*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x18)));
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  return;
}

