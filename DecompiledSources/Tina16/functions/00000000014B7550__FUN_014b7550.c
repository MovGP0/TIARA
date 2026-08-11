/* Ghidra address: 014b7550 */
/* Ghidra symbol: FUN_014b7550 */


void FUN_014b7550(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4a0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4a0);
      lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
      if (lVar3 != 0) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4a0);
        uVar4 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar5);
        FUN_00410f20(uVar4);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4a0);
        (**(code **)(*plVar1 + 0x48))(plVar1,iVar5,0);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4a0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
  FUN_0064cc50(*(longlong *)(param_1 + 0x6b8),
               (*(int *)(*(longlong *)(param_1 + 0x6d0) + 0x94) -
               *(int *)(*(longlong *)(param_1 + 0x6b8) + 0x94)) + -6);
  return;
}

