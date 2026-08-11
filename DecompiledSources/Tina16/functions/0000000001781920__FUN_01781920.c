/* Ghidra address: 01781920 */
/* Ghidra symbol: FUN_01781920 */


void FUN_01781920(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  if (iVar2 < 1) {
LAB_017819ad:
    uVar3 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x6d0);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    lVar5 = (**(code **)(*(longlong *)plVar1[0x94] + 0x30))((longlong *)plVar1[0x94],uVar3);
    if ((*(byte *)(lVar5 + 0x145) & 4) != 0) {
      plVar1 = *(longlong **)(param_1 + 0x6d0);
      iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
      lVar5 = (**(code **)(*(longlong *)plVar1[0x94] + 0x30))((longlong *)plVar1[0x94],iVar2 + -1);
      if ((*(byte *)(lVar5 + 0x145) & 4) == 0) goto LAB_017819ad;
    }
    uVar3 = 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),uVar3);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4a0);
  iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar2 < iVar4 + -1) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0))
    ;
    if (iVar2 != -1) {
      plVar1 = *(longlong **)(param_1 + 0x6d0);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      lVar5 = (**(code **)(*(longlong *)plVar1[0x94] + 0x30))((longlong *)plVar1[0x94],uVar3);
      if ((*(byte *)(lVar5 + 0x145) & 4) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x6d0);
        iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
        lVar5 = (**(code **)(*(longlong *)plVar1[0x94] + 0x30))((longlong *)plVar1[0x94],iVar2 + 1);
        if ((*(byte *)(lVar5 + 0x145) & 4) != 0) goto LAB_01781a87;
      }
      uVar3 = 1;
      goto LAB_01781a8d;
    }
  }
LAB_01781a87:
  uVar3 = 0;
LAB_01781a8d:
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),uVar3);
  return;
}

