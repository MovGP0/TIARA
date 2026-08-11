/* Ghidra address: 01c7cf40 */
/* Ghidra symbol: FUN_01c7cf40 */


void FUN_01c7cf40(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  lVar4 = FUN_01c7d9d0(param_1);
  uVar1 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x28))(*(longlong **)(lVar4 + 0x10));
  FUN_00848a70(*(undefined8 *)(param_1 + 0x1468),uVar1);
  iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x28))(*(longlong **)(lVar4 + 0x10));
  if (iVar2 == 0) {
    plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x1468),0);
    (**(code **)(*plVar5 + 0x40))(plVar5,0,0);
    plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x1468),1);
    (**(code **)(*plVar5 + 0x40))(plVar5,0,0);
  }
  iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x30))
                        (*(longlong **)(lVar4 + 0x10),iVar6);
      if (iVar3 == 0) {
        plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x1468),0);
        (**(code **)(*plVar5 + 0x40))(plVar5,iVar6,0);
      }
      else {
        plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x1468),0);
        (**(code **)(*plVar5 + 0x40))(plVar5,iVar6,&LAB_01c7d0e4);
      }
      plVar5 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x1468),1);
      (**(code **)(**(longlong **)(lVar4 + 0x10) + 0x18))
                (*(longlong **)(lVar4 + 0x10),local_40,iVar6);
      (**(code **)(*plVar5 + 0x40))(plVar5,iVar6);
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_40);
  return;
}

