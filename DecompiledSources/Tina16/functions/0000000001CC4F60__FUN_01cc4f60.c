/* Ghidra address: 01cc4f60 */
/* Ghidra symbol: FUN_01cc4f60 */


void FUN_01cc4f60(longlong param_1,double param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  double local_res10 [3];
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_res10[0] = param_2;
  FUN_01cc4120(param_1,local_res10,8);
  iVar4 = *(int *)(lVar1 + 0x44c);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_01d347d0(lVar1,*(int *)(lVar1 + 0x450) + iVar3);
      FUN_01cc0a60(lVar2,local_res10[0]);
      if (*(int *)(lVar2 + 0x2c) == 0) {
        *(double *)(lVar2 + 0x168) = local_res10[0];
      }
      else {
        FUN_01cc1510(lVar2,4,local_res10[0]);
        *(double *)(lVar2 + 0x170) = local_res10[0] - *(double *)(lVar2 + 0x168);
        *(double *)(lVar2 + 0x168) = local_res10[0];
      }
      *(int *)(lVar2 + 0x2c) = *(int *)(lVar2 + 0x2c) + 1;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

