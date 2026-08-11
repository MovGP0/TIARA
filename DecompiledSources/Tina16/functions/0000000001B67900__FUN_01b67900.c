/* Ghidra address: 01b67900 */
/* Ghidra symbol: FUN_01b67900 */


void FUN_01b67900(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar2 = FUN_004113f0(*(undefined8 *)(param_1 + 0x870),&PTR_FUN_011061a0);
  uVar3 = FUN_004113f0(*(undefined8 *)(param_1 + 0x9b0),&PTR_FUN_010e62f0);
  iVar1 = (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x28))(*(longlong **)(lVar2 + 0x48));
  if (iVar1 < 1) {
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_010ec870(uVar3,*(longlong *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x150),1,1);
    }
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar4 = (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x30))
                          (*(longlong **)(lVar2 + 0x48),iVar5);
        uVar4 = FUN_004113f0(uVar4,&PTR_FUN_01cb30c8);
        FUN_010ec870(uVar3,uVar4,*(undefined8 *)(lVar2 + 0x150),1,1);
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),0);
  return;
}

