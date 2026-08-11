/* Ghidra address: 013e8130 */
/* Ghidra symbol: FUN_013e8130 */


void FUN_013e8130(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (1 < *(int *)(*(longlong *)(param_1 + 0x788) + 0x10)) {
    uVar1 = *(undefined8 *)(param_1 + 0x6d0);
    FUN_008483b0(uVar1,0);
    FUN_00848a30(uVar1,1);
    FUN_00b0adf0(*(undefined8 *)(param_1 + 0x6d0));
    FUN_00b0adf0(*(undefined8 *)(param_1 + 0x6d0));
    FUN_004ae870(*(longlong *)(param_1 + 0x788),*(int *)(*(longlong *)(param_1 + 0x788) + 0x10) + -1
                );
    lVar2 = *(longlong *)(param_1 + 0x6d0);
    if (*(int *)(param_1 + 0x778) < *(int *)(lVar2 + 0x4e0)) {
      FUN_00848a70(lVar2,*(int *)(*(longlong *)(param_1 + 0x788) + 0x10) * 2);
    }
    else {
      FUN_00848a70(lVar2,*(int *)(param_1 + 0x778));
    }
    FUN_00b0ae40(*(undefined8 *)(param_1 + 0x6d0));
    FUN_013e72b0(param_1);
    FUN_013e7620(param_1);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10);
    iVar3 = iVar5 * 2;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4e0) + -1;
    if (iVar3 <= iVar4) {
      iVar5 = iVar4 + iVar5 * -2 + 1;
      do {
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),0,iVar3,&LAB_013e8260);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d0),1,iVar3,&LAB_013e8260);
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}

