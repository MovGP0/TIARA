/* Ghidra address: 00416ad0 */
/* Ghidra symbol: FUN_00416ad0 */


void FUN_00416ad0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    if (*param_1 == 0) {
      FUN_00414ad0(param_1,param_2);
    }
    else {
      iVar1 = *(int *)(*param_1 + -4);
      iVar2 = *(int *)(param_2 + -4);
      uVar5 = iVar1 + iVar2;
      if ((uVar5 & 0xc0000000) != 0) {
        FUN_00410ab0();
      }
      lVar3 = FUN_00414de0(param_1);
      FUN_004169f0(param_1,uVar5);
      lVar4 = FUN_00416740(param_2);
      if (lVar3 == lVar4) {
        lVar4 = FUN_00414de0(param_1);
      }
      lVar3 = FUN_00414de0(param_1);
      FUN_00409a70(lVar4,lVar3 + -2 + (ulonglong)(iVar1 + 1) * 2,iVar2 * 2);
    }
  }
  return;
}

