/* Ghidra address: 01b6dfd0 */
/* Ghidra symbol: FUN_01b6dfd0 */


void FUN_01b6dfd0(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_20;
  
  local_20 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  if (param_2 == '\0') {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x4f0);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x9d8) + 8));
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(param_1 + 0x9d8))(*(undefined8 **)(param_1 + 0x9d8));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x4f0);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar4);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x60))(*(longlong **)(param_1 + 0x9d8));
  (**(code **)(**(longlong **)(param_1 + 0x910) + 0x268))(*(longlong **)(param_1 + 0x910),uVar2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x910) + 0x4f0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar3 < 1) {
    *(undefined8 *)(param_1 + 0x9e0) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x910) + 0x268))(*(longlong **)(param_1 + 0x910),0);
    (**(code **)(**(longlong **)(param_1 + 0x918) + 0x268))(*(longlong **)(param_1 + 0x918),0);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x910);
    uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_20,uVar2);
    iVar3 = FUN_00416db0(local_20,&LAB_01b6e334);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0x260))
                        (*(longlong **)(param_1 + 0x910));
      if (0 < iVar3) {
        plVar1 = *(longlong **)(param_1 + 0x910);
        iVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
        (**(code **)(*plVar1 + 0x268))(plVar1,iVar3 + -1);
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x910);
    uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar4 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar2);
    lVar5 = FUN_004113f0(uVar4,&PTR_FUN_011057c0);
    *(longlong *)(param_1 + 0x9e0) = lVar5;
    *(undefined1 *)(lVar5 + 0x11) = 1;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x910) + 0x260))(*(longlong **)(param_1 + 0x910));
  (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x58))(*(longlong **)(param_1 + 0x9d8),uVar2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x918) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x918) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x9d8) + 0x60));
  if (*(longlong *)(param_1 + 0x9e0) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x918);
    uVar2 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xc0))
                      ((longlong *)plVar1[0x9e],*(longlong *)(param_1 + 0x9e0));
    (**(code **)(*plVar1 + 0x268))(plVar1,uVar2);
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x260))(*(longlong **)(param_1 + 0x918))
    ;
    if (iVar3 == -1) {
      plVar1 = *(longlong **)(param_1 + 0x918);
      uVar2 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xb0))
                        ((longlong *)plVar1[0x9e],
                         *(undefined8 *)(*(longlong *)(param_1 + 0x9e0) + 0x118));
      (**(code **)(*plVar1 + 0x268))(plVar1,uVar2);
    }
  }
  FUN_00414480(&local_20);
  return;
}

