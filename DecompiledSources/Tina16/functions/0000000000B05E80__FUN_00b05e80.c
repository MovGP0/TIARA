/* Ghidra address: 00b05e80 */
/* Ghidra symbol: FUN_00b05e80 */


void FUN_00b05e80(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_30 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x250) + 0x4a0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  local_40 = *(int *)(param_1 + 0x268);
  iVar5 = local_40 * 2;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 600) + 0x28))();
  iVar8 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 600) + 0x18))
                (*(longlong **)(param_1 + 600),&local_30,iVar8);
      iVar3 = FUN_005fdff0(*(undefined8 *)(*(longlong *)(param_1 + 0x250) + 0x4b8),local_30);
      (**(code **)(**(longlong **)(param_1 + 600) + 0x18))
                (*(longlong **)(param_1 + 600),&local_38,iVar8);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x250) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
      iVar4 = (**(code **)(**(longlong **)(param_1 + 600) + 0x28))(*(longlong **)(param_1 + 600));
      if (*(int *)(param_1 + 0x288) < iVar4) {
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x250) + 0x1a0))
                          (*(longlong **)(param_1 + 0x250),2);
        iVar3 = iVar3 + iVar4;
      }
      if ((local_40 < iVar3) && (iVar3 < iVar5)) {
        local_40 = iVar3;
      }
      iVar8 = iVar8 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x250) + 0x4a0);
  iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
  iVar2 = FUN_0068bbb0(*(undefined8 *)(param_1 + 0x250));
  iVar2 = iVar5 * iVar2 + 2;
  iVar5 = *(int *)(param_1 + 0x280);
  uVar6 = FUN_00807fe0(*(undefined8 *)PTR_DAT_02005950);
  *(undefined4 *)(param_1 + 0x22c) = uVar6;
  if (*(int *)(param_1 + 0x22c) < iVar5 + iVar2) {
    iVar5 = (*(int *)(param_1 + 0x278) - iVar2) + 1;
  }
  if (iVar5 < 0) {
    iVar5 = *(int *)(param_1 + 0x280);
  }
  iVar8 = *(int *)(param_1 + 0x270);
  uVar7 = FUN_0065b870(*(undefined8 *)(param_1 + 0x250));
  thunk_FUN_041cc6e2(uVar7,0,iVar8 - local_40,iVar5,local_40,iVar2,0x50);
  FUN_00414560(&local_38,2);
  return;
}

