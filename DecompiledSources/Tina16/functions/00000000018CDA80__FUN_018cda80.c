/* Ghidra address: 018cda80 */
/* Ghidra symbol: FUN_018cda80 */


void FUN_018cda80(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int local_4c;
  
  lVar8 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x38);
  uVar2 = *(undefined4 *)(lVar3 + 0xc);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x90);
  *(undefined1 *)(lVar3 + 8) = 0;
  iVar5 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x148) + 0x80)
                      + 0x30))();
  local_4c = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x148) + 0x80);
      uVar9 = (**(code **)(*plVar4 + 0x20))(plVar4,local_4c);
      FUN_004ae7e0(lVar8,uVar9);
      local_4c = local_4c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x150) + 0x10);
  local_4c = 0;
  if (-1 < iVar5 + -2) {
    iVar5 = iVar5 + -1;
    do {
      plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x148) + 0x80);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      iVar6 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x150),local_4c);
      iVar7 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x150),local_4c + 1);
      if (iVar6 <= iVar7 + -1) {
        iVar7 = ((iVar7 + -1) - iVar6) + 1;
        do {
          uVar9 = FUN_004aeac0(lVar8,iVar6);
          FUN_004ae7e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x148) + 0x80),
                       uVar9);
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x38);
      (**(code **)(*plVar4 + 0x38))(plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x148));
      if (local_4c == *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x150) + 0x10) + -2) {
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x30))(*(longlong **)(param_1 + 0xa0));
      }
      else {
        *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0xb8) = 1;
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x48))(*(longlong **)(param_1 + 0xa0));
        *(undefined1 *)(*(longlong *)(param_1 + 0xa0) + 0xb8) = 0;
      }
      local_4c = local_4c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  plVar4 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x148) + 0x80);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  iVar5 = *(int *)(lVar8 + 0x10);
  local_4c = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar9 = FUN_004aeac0(lVar8,local_4c);
      FUN_004ae7e0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x148) + 0x80),
                   uVar9);
      local_4c = local_4c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00410f20(lVar8);
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x38) + 0xc) = uVar2;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x90) = uVar1;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x88) = *(undefined8 *)(param_1 + 0x58);
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x38) + 8) = 1;
  return;
}

