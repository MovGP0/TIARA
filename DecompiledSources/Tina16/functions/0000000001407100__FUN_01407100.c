/* Ghidra address: 01407100 */
/* Ghidra symbol: FUN_01407100 */


void FUN_01407100(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  lVar2 = *(longlong *)(param_1 + 0x7a8);
  if (1 < *(int *)(lVar2 + 0x10)) {
    FUN_008483b0(lVar1,0);
    FUN_00848a30(lVar1,1);
    FUN_00b0adf0(lVar1);
    FUN_00b0adf0(lVar1);
    FUN_00b0adf0(lVar1);
    FUN_01d3c270(lVar2);
    lVar3 = *(longlong *)(param_1 + 0x6d8);
    if (*(int *)(param_1 + 0x7c0) < *(int *)(lVar3 + 0x4e0)) {
      FUN_00848a70(lVar3,(ulonglong)*(uint *)(lVar2 + 0x10) * 3);
    }
    else {
      FUN_00848a70(lVar3,*(int *)(param_1 + 0x7c0));
    }
    FUN_00b0ae40(lVar1);
    FUN_01404f30(param_1);
    FUN_01405a00(param_1);
    iVar4 = *(int *)(lVar2 + 0x10) * 3;
    iVar5 = *(int *)(lVar1 + 0x4e0) + -1;
    if (iVar4 <= iVar5) {
      iVar5 = iVar5 + *(int *)(lVar2 + 0x10) * -3 + 1;
      do {
        FUN_0084e3e0(lVar1,0,iVar4,&LAB_01407210);
        FUN_0084e3e0(lVar1,1,iVar4,&LAB_01407210);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

