/* Ghidra address: 016d6ca0 */
/* Ghidra symbol: FUN_016d6ca0 */


void FUN_016d6ca0(longlong param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar1 = FUN_0040c840(param_2 * (double)*(int *)(param_1 + 0x24));
  iVar2 = *(int *)(param_1 + 0x20) + 1;
  if (iVar2 <= iVar1) {
    iVar3 = (iVar1 - iVar2) + 1;
    do {
      dVar4 = (double)iVar2 / (double)*(int *)(param_1 + 0x24);
      if (1e-50 <= param_2 - *(double *)(param_1 + 8)) {
        FUN_016d6ae0(param_1,iVar2,
                     *(double *)(param_1 + 0x10) +
                     ((param_3 - *(double *)(param_1 + 0x10)) * (dVar4 - *(double *)(param_1 + 8)))
                     / (param_2 - *(double *)(param_1 + 8)),
                     *(double *)(param_1 + 0x18) +
                     ((param_4 - *(double *)(param_1 + 0x18)) *
                     (dVar4 - *(double *)(param_1 + 0x18))) /
                     (param_2 - *(double *)(param_1 + 0x18)));
      }
      else {
        FUN_016d6ae0(param_1,iVar2,param_3,param_4);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)(param_1 + 0x20) = iVar1;
  *(double *)(param_1 + 8) = param_2;
  *(double *)(param_1 + 0x10) = param_3;
  *(double *)(param_1 + 0x18) = param_4;
  return;
}

