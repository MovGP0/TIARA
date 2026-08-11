/* Ghidra address: 01ce0a20 */
/* Ghidra symbol: FUN_01ce0a20 */


void FUN_01ce0a20(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  iVar1 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
  if (iVar1 < iVar6) {
    iVar1 = FUN_0040c770((double)iVar1 * 0.15);
  }
  else {
    iVar1 = FUN_0040c770((double)iVar6 * 0.15);
  }
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar7);
      plVar4 = (longlong *)FUN_004113f0(uVar3,&DAT_01ccbf00);
      uVar2 = FUN_0040c770((double)iVar1 * 0.2);
      *(undefined4 *)((longlong)plVar4 + 0x94) = uVar2;
      (**(code **)(*plVar4 + 0x130))(plVar4);
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar7);
      if (*(longlong *)(lVar5 + 0x118) != 0) {
        lVar5 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar7);
        plVar4 = *(longlong **)(lVar5 + 0x118);
        uVar2 = FUN_0040c770((double)iVar1 * 0.2);
        *(undefined4 *)((longlong)plVar4 + 0x94) = uVar2;
        (**(code **)(*plVar4 + 0x130))(plVar4);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))();
  iVar7 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),iVar7);
      plVar4 = (longlong *)FUN_004113f0(uVar3,&DAT_01ccbf00);
      uVar2 = FUN_0040c770((double)iVar1 * 0.2);
      *(undefined4 *)((longlong)plVar4 + 0x94) = uVar2;
      (**(code **)(*plVar4 + 0x130))(plVar4);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

