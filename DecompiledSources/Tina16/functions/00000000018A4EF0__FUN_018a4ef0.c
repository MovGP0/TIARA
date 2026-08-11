/* Ghidra address: 018a4ef0 */
/* Ghidra symbol: FUN_018a4ef0 */


void FUN_018a4ef0(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar6 = 10;
  iVar4 = 0;
  while (iVar2 = FUN_004b2060(param_1), iVar4 < iVar2) {
    iVar5 = 0;
    iVar7 = 0;
    iVar2 = iVar4;
    while ((iVar1 = FUN_004b2060(param_1), iVar2 < iVar1 &&
           ((lVar3 = FUN_018a4e90(param_1,iVar2), iVar5 < 1 ||
            (iVar5 + *(int *)(lVar3 + 0x1c) <= param_2))))) {
      *(int *)(lVar3 + 0x20) = iVar5;
      *(int *)(lVar3 + 0x24) = iVar6;
      iVar5 = iVar5 + *(int *)(lVar3 + 0x1c) + 10;
      if (iVar7 < *(int *)(lVar3 + 0x18)) {
        iVar7 = *(int *)(lVar3 + 0x18);
      }
      iVar2 = iVar2 + 1;
    }
    if (*(int *)(param_1 + 0x28) < iVar5) {
      *(int *)(param_1 + 0x28) = iVar5;
    }
    iVar5 = ((param_2 - iVar5) + 10) / 2;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    for (; iVar4 < iVar2; iVar4 = iVar4 + 1) {
      lVar3 = FUN_018a4e90(param_1,iVar4);
      *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + iVar5 + 10;
    }
    iVar6 = iVar6 + iVar7 + 10;
  }
  return;
}

