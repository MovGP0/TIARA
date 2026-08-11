/* Ghidra address: 01b68200 */
/* Ghidra symbol: FUN_01b68200 */


void FUN_01b68200(longlong param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  uVar5 = (**(code **)**(undefined8 **)(param_1 + 0xda0))(*(undefined8 **)(param_1 + 0xda0));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,uVar5);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
  uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  *(undefined1 *)(param_1 + 0xd6d) = uVar2;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar3 == 0) {
    uVar5 = FUN_01107790(&PTR_FUN_011061a0,1);
    *(undefined8 *)(param_1 + 0x870) = uVar5;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,0,uVar5);
    (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x268))(*(longlong **)(param_1 + 0x7d8),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x58))(*(longlong **)(param_1 + 0xda0),1);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
    uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,1);
    lVar6 = FUN_004113f0(uVar5,&PTR_FUN_011061a0);
    *(longlong *)(param_1 + 0x870) = lVar6;
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0xa8))
              (*(longlong **)(param_1 + 0xda0),*(undefined1 *)(lVar6 + 0x2a));
    *(undefined1 *)(*(longlong *)(param_1 + 0x870) + 0x11) = 1;
    (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x268))(*(longlong **)(param_1 + 0x7d8),0);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
    uVar5 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
    uVar5 = FUN_004113f0(uVar5,&PTR_FUN_011061a0);
    *(undefined8 *)(param_1 + 0x870) = uVar5;
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x260))(*(longlong **)(param_1 + 0x7d8))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x58))(*(longlong **)(param_1 + 0xda0),uVar4);
    *(undefined1 *)(*(longlong *)(param_1 + 0x870) + 0x11) = 1;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xcb0) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0xda0) + 0x70))(*(longlong **)(param_1 + 0xda0));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xcb0) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,uVar5);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xcb0) + 0x4f0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar3 == 0) {
    uVar5 = FUN_01107790(&PTR_FUN_011061a0,1);
    *(undefined8 *)(param_1 + 0xda8) = uVar5;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xcb0) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,0,*(undefined8 *)(param_1 + 0x870));
    (**(code **)(**(longlong **)(param_1 + 0xcb0) + 0x268))(*(longlong **)(param_1 + 0xcb0),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xcb0) + 0x268))(*(longlong **)(param_1 + 0xcb0),0);
    *(undefined8 *)(param_1 + 0xda8) = 0;
    FUN_01b68830(param_1,param_1);
  }
  return;
}

