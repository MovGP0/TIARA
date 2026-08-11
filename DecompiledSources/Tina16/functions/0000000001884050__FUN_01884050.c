/* Ghidra address: 01884050 */
/* Ghidra symbol: FUN_01884050 */


void FUN_01884050(longlong param_1)

{
  undefined4 uVar1;
  double dVar2;
  
  dVar2 = (double)FUN_019508b0(param_1);
  uVar1 = FUN_0040c770((dVar2 - *(double *)PTR_DAT_02005968 / 2.0) * *(double *)(param_1 + 0x268) +
                       *(double *)(param_1 + 0x278));
  *(undefined4 *)(param_1 + 0x248) = uVar1;
  dVar2 = (double)FUN_01950860(param_1);
  uVar1 = FUN_0040c770((dVar2 - (double)*(int *)PTR_DAT_020052f0 / 2.0) *
                       *(double *)(param_1 + 0x270) + *(double *)(param_1 + 0x280));
  *(undefined4 *)(param_1 + 0x24c) = uVar1;
  dVar2 = (double)FUN_019508b0(param_1);
  uVar1 = FUN_0040c770((dVar2 + *(double *)(param_1 + 0xa8) + *(double *)PTR_DAT_02005968 / 2.0) *
                       *(double *)(param_1 + 0x268) + *(double *)(param_1 + 0x278));
  *(undefined4 *)(param_1 + 0x250) = uVar1;
  dVar2 = (double)FUN_01950860(param_1);
  uVar1 = FUN_0040c770((dVar2 + *(double *)(param_1 + 0xb0) + (double)*(int *)PTR_DAT_020052f0 / 2.0
                       ) * *(double *)(param_1 + 0x270) + *(double *)(param_1 + 0x280));
  *(undefined4 *)(param_1 + 0x254) = uVar1;
  FUN_0195ac20(param_1);
  return;
}

