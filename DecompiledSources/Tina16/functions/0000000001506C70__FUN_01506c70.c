/* Ghidra address: 01506c70 */
/* Ghidra symbol: FUN_01506c70 */


void FUN_01506c70(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
      lVar4 = FUN_004113f0(uVar3,&PTR_FUN_01106728);
      *(int *)(lVar4 + 0x94) = iVar6;
      if (*(char *)(lVar4 + 0x11) != '\0') {
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

