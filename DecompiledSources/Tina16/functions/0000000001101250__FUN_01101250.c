/* Ghidra address: 01101250 */
/* Ghidra symbol: FUN_01101250 */


void FUN_01101250(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *(undefined8 *)(param_1 + 0x128) = param_2;
  lVar2 = *(longlong *)(param_1 + 0x148);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x158);
    iVar1 = *(int *)(param_1 + 0x94);
    iVar4 = FUN_0040c770((double)*(int *)(param_1 + 0xe8) -
                         ((*(double *)(param_1 + 0x128) - *(double *)(param_1 + 0xb8)) /
                         (*(double *)(param_1 + 0xc0) - *(double *)(param_1 + 0xb8))) *
                         (double)(*(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0xec)));
    FUN_01d2dc30(lVar2,*(int *)(lVar3 + 0xe8) - iVar1,(iVar4 - iVar1) + -2,
                 *(int *)(lVar3 + 0xec) + 1,iVar4 + iVar1 + 2,0xffffff);
  }
  return;
}

