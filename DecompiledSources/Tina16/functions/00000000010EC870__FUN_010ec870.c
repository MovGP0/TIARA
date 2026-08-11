/* Ghidra address: 010ec870 */
/* Ghidra symbol: FUN_010ec870 */


void FUN_010ec870(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = FUN_010e7720(param_1);
  if (lVar2 != 0) {
    uVar3 = FUN_004113f0(lVar2,&PTR_FUN_010fe770);
    FUN_01102e90(uVar3,param_3);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50);
    iVar1 = (**(code **)(**(longlong **)(lVar2 + 0xd8) + 0x28))(*(longlong **)(lVar2 + 0xd8));
    if (0 < iVar1) {
      iVar1 = (**(code **)(**(longlong **)(lVar2 + 0xd8) + 0x28))();
      iVar5 = 0;
      if (-1 < iVar1 + -1) {
        do {
          lVar4 = (**(code **)(**(longlong **)(lVar2 + 0xd8) + 0x30))
                            (*(longlong **)(lVar2 + 0xd8),iVar5);
          uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x78) + 0x30))
                            (*(longlong **)(lVar4 + 0x78),0);
          uVar3 = FUN_004113f0(uVar3,&PTR_FUN_010fdfc0);
          if (param_4 != '\0') {
            FUN_010fff30(uVar3,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x10));
          }
          if (param_5 != '\0') {
            FUN_01aceb90(lVar2,1);
          }
          iVar5 = iVar5 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  return;
}

