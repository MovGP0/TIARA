/* Ghidra address: 0151e2a0 */
/* Ghidra symbol: FUN_0151e2a0 */


void FUN_0151e2a0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  byte local_49;
  ulonglong local_48;
  undefined8 local_40 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  bVar2 = true;
  if ((*(longlong *)PTR_DAT_020027c0 != 0) &&
     (local_49 = 0, *(char *)(*(longlong *)(*(longlong *)PTR_DAT_020027c0 + 8) + 0x434) == '\n')) {
    FUN_01cc6020(*(undefined8 *)PTR_DAT_020027c0);
    plVar4 = (longlong *)FUN_01cc9f30(&PTR_FUN_01cbae98,1,*(undefined8 *)PTR_DAT_020027c0);
    if (*(longlong *)(param_1 + 0x9a8) != 0) {
      FUN_01cc6030(*(longlong *)(param_1 + 0x9a8));
    }
    *(undefined8 *)(param_1 + 0x9a8) = *(undefined8 *)PTR_DAT_020027c0;
    while( true ) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
      if (iVar3 <= (int)(uint)*(byte *)(param_1 + 0xc0a)) break;
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
      uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,iVar3 + -1);
      uVar7 = FUN_004113f0(uVar7,&PTR_FUN_01106728);
      FUN_00410f20(uVar7);
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
      (**(code **)(*plVar6 + 0x98))(plVar6,iVar3 + -1);
    }
    FUN_01cc5c60(*(undefined8 *)PTR_DAT_020027c0);
    do {
      lVar5 = FUN_01cc5cc0(*(undefined8 *)PTR_DAT_020027c0);
      if ((lVar5 != 0) && (*(char *)(lVar5 + 0x18) != '\0')) {
        plVar6 = (longlong *)FUN_01107b90(&PTR_FUN_01106728,1);
        if (bVar2) {
          uVar7 = (**(code **)(*plVar4 + 0x58))(plVar4,lVar5);
          *(undefined8 *)(param_1 + 0xc50) = uVar7;
          uVar7 = (**(code **)(*plVar4 + 0x60))(plVar4,lVar5);
          *(undefined8 *)(param_1 + 0xc58) = uVar7;
          bVar2 = false;
        }
        else {
          uVar7 = (**(code **)(*plVar4 + 0x58))(plVar4,lVar5);
          uVar7 = FUN_00b90650(*(undefined8 *)(param_1 + 0xc50),uVar7);
          *(undefined8 *)(param_1 + 0xc50) = uVar7;
          uVar7 = (**(code **)(*plVar4 + 0x60))(plVar4,lVar5);
          uVar7 = FUN_00b90620(*(undefined8 *)(param_1 + 0xc58),uVar7);
          *(undefined8 *)(param_1 + 0xc58) = uVar7;
        }
        *(undefined1 *)(plVar6 + 2) = 0;
        *(undefined1 *)((longlong)plVar6 + 0x11) = 1;
        FUN_01cc0ae0(lVar5,local_40);
        FUN_00416ba0(plVar6 + 1,local_40[0],&LAB_0151e5f8);
        (**(code **)(*plVar6 + 0x10))(plVar6,lVar5,*(undefined8 *)PTR_DAT_020027c0);
        *(uint *)(plVar6 + 0x10) = (local_49 + 1) % 0xf;
        plVar6[0x28] = 0;
        local_49 = local_49 + 1;
        FUN_01cc0ae0(lVar5,&local_48);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
        (**(code **)(*plVar1 + 0x80))(plVar1,local_48,plVar6);
      }
    } while (lVar5 != 0);
    FUN_01506c40(param_1);
    FUN_01506c70(param_1);
    FUN_010f6920(param_1,1);
    FUN_00410f20(plVar4);
  }
  FUN_00414560(&local_48,2);
  return;
}

