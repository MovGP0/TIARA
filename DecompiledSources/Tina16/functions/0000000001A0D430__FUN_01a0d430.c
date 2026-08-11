/* Ghidra address: 01a0d430 */
/* Ghidra symbol: FUN_01a0d430 */


bool FUN_01a0d430(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool local_69;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(plVar5,1);
  FUN_004b67b0(plVar6,1);
  FUN_01a0d1b0(param_1,param_2,*(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 8),plVar5);
  FUN_01a0d1b0(param_1,param_3,*(undefined8 *)(*(longlong *)(param_3 + 0x1a8) + 8),plVar6);
  iVar1 = (**(code **)(*plVar5 + 0x28))(plVar5);
  iVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
  local_69 = iVar1 == iVar2;
  iVar1 = 0;
  do {
    iVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
    if ((local_69 & iVar1 < iVar2) == 0) {
      iVar1 = (**(code **)(*plVar5 + 0x28))();
      iVar2 = 0;
      if (-1 < iVar1 + -1) {
        do {
          uVar9 = (**(code **)(*plVar5 + 0x30))(plVar5,iVar2);
          FUN_00410f20(uVar9);
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_00410f20(plVar5);
      iVar1 = (**(code **)(*plVar6 + 0x28))();
      iVar2 = 0;
      if (-1 < iVar1 + -1) {
        do {
          uVar9 = (**(code **)(*plVar6 + 0x30))(plVar6,iVar2);
          FUN_00410f20(uVar9);
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_00410f20(plVar6);
      FUN_00414560(&local_48,2);
      return local_69;
    }
    plVar7 = (longlong *)(**(code **)(*plVar5 + 0x30))(plVar5,iVar1);
    plVar8 = (longlong *)(**(code **)(*plVar6 + 0x30))(plVar6,iVar1);
    if ((plVar7 == (longlong *)0x0) || (plVar8 == (longlong *)0x0)) {
LAB_01a0d549:
      local_69 = false;
    }
    else {
      iVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
      iVar3 = (**(code **)(*plVar8 + 0x28))(plVar8);
      if (iVar2 != iVar3) goto LAB_01a0d549;
      local_69 = true;
    }
    for (iVar2 = 0; iVar3 = (**(code **)(*plVar7 + 0x28))(plVar7), (local_69 & iVar2 < iVar3) != 0;
        iVar2 = iVar2 + 1) {
      (**(code **)(*plVar7 + 0x18))(plVar7,local_40,iVar2);
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_48,iVar2);
      iVar3 = FUN_00416db0(local_40[0],local_48);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*plVar7 + 0x30))(plVar7,iVar2);
        iVar4 = (**(code **)(*plVar8 + 0x30))(plVar8,iVar2);
        if (iVar3 != iVar4) goto LAB_01a0d5aa;
        local_69 = true;
      }
      else {
LAB_01a0d5aa:
        local_69 = false;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

