/* Ghidra address: 01ce34b0 */
/* Ghidra symbol: FUN_01ce34b0 */


void FUN_01ce34b0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  iVar3 = (**(code **)(*plVar1 + 0x28))();
  iVar8 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar8);
      lVar6 = FUN_004113f0(uVar5,&PTR_FUN_01d282a8);
      *(undefined1 *)(lVar6 + 0x11) = 0;
      iVar8 = iVar8 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x94);
  iVar8 = 0;
  while( true ) {
    iVar4 = FUN_01ce3400(param_1);
    if (*(int *)(param_1 + 0x98) <= iVar4) {
      iVar4 = *(int *)(param_1 + 0x98);
    }
    if ((iVar4 <= iVar8) || (iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1), iVar4 <= iVar3)) break;
    plVar7 = (longlong *)(**(code **)(*plVar1 + 0x30))(plVar1,iVar3);
    cVar2 = (**(code **)(*plVar7 + 0x60))(plVar7);
    if (cVar2 != '\0') {
      lVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar3);
      *(undefined1 *)(lVar6 + 0x11) = 1;
      iVar8 = iVar8 + 1;
    }
    iVar3 = iVar3 + 1;
  }
  return;
}

