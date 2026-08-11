/* Ghidra address: 01b6e970 */
/* Ghidra symbol: FUN_01b6e970 */


void FUN_01b6e970(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_20;
  
  local_20 = 0;
  plVar1 = *(longlong **)(param_1 + 0x918);
  iVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  if (iVar2 != -1) {
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    lVar5 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    if (lVar5 == 0) {
      iVar2 = 0;
      while( true ) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x4f0);
        iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
        if (iVar4 + -1 <= iVar2) break;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x4f0);
        uVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar2);
        lVar5 = FUN_004113f0(uVar6,&PTR_FUN_011057c0);
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x918),&local_20);
        iVar4 = FUN_00416db0(*(undefined8 *)(lVar5 + 0x118),local_20);
        if (iVar4 == 0) break;
        iVar2 = iVar2 + 1;
      }
      (**(code **)(**(longlong **)(param_1 + 0x910) + 0x268))(*(longlong **)(param_1 + 0x910),iVar2)
      ;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      uVar6 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
      lVar5 = FUN_004113f0(uVar6,&PTR_FUN_011057c0);
      *(longlong *)(param_1 + 0x9e0) = lVar5;
      *(undefined1 *)(lVar5 + 0x11) = 1;
      plVar1 = *(longlong **)(param_1 + 0x910);
      uVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xc0))((longlong *)plVar1[0x9e],lVar5);
      (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
    }
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0x260))(*(longlong **)(param_1 + 0x910))
    ;
    (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x58))(*(longlong **)(param_1 + 0x9d8),uVar3);
  }
  FUN_00414480(&local_20);
  return;
}

