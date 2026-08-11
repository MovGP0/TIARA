/* Ghidra address: 0113cec0 */
/* Ghidra symbol: FUN_0113cec0 */


void FUN_0113cec0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  uVar6 = (**(code **)**(undefined8 **)(param_1 + 0xa18))(*(undefined8 **)(param_1 + 0xa18));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,uVar6);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0);
  iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (iVar3 == 0) {
    uVar6 = FUN_01107520(&PTR_FUN_01105d80,1);
    *(undefined8 *)(param_1 + 0xa10) = uVar6;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0);
    (**(code **)(*plVar1 + 0x80))(plVar1,0,uVar6);
    (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x268))(*(longlong **)(param_1 + 0x9d8),0);
    goto LAB_0113d0ba;
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x60))(*(longlong **)(param_1 + 0xa18));
  (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x268))(*(longlong **)(param_1 + 0x9d8),uVar4);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x260))(*(longlong **)(param_1 + 0x9d8));
  if (iVar3 < 0) {
LAB_0113cfcf:
    (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x268))(*(longlong **)(param_1 + 0x9d8),0);
  }
  else {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x260))(*(longlong **)(param_1 + 0x9d8))
    ;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0);
    iVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (iVar5 + -1 < iVar3) goto LAB_0113cfcf;
  }
  plVar1 = *(longlong **)(param_1 + 0x9d8);
  uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
  uVar6 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar4);
  uVar6 = FUN_004113f0(uVar6,&PTR_FUN_01105d80);
  *(undefined8 *)(param_1 + 0xa10) = uVar6;
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x260))(*(longlong **)(param_1 + 0x9d8));
  (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x58))(*(longlong **)(param_1 + 0xa18),uVar4);
LAB_0113d0ba:
  if (*(char *)(*(longlong *)(param_1 + 0xa18) + 0x20) != '\0') {
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0) + 0x28))();
    cVar8 = '\0';
    do {
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x58))(*(longlong **)(param_1 + 0xa18),cVar8);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9d8) + 0x4f0);
      uVar6 = (**(code **)(*plVar1 + 0x30))(plVar1,cVar8);
      lVar7 = FUN_004113f0(uVar6,&PTR_FUN_01105d80);
      plVar1 = *(longlong **)(param_1 + 0xa18);
      (**(code **)(*plVar1 + 0xc0))(plVar1,lVar7 + 0x120);
      (**(code **)(*plVar1 + 200))(plVar1,lVar7 + 0x128);
      (**(code **)(*plVar1 + 0xd0))(plVar1,lVar7 + 0x130);
      (**(code **)(*plVar1 + 0xb8))(plVar1,lVar7 + 0x118);
      (**(code **)(*plVar1 + 0x120))(plVar1,lVar7 + 0x110);
      (**(code **)(*plVar1 + 0xd8))(plVar1,lVar7 + 0x149);
      (**(code **)(*plVar1 + 0x168))(plVar1,lVar7 + 0x168);
      (**(code **)(*plVar1 + 0x170))(plVar1,lVar7 + 0x170);
      cVar8 = cVar8 + '\x01';
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x9d8) + 0x260))(*(longlong **)(param_1 + 0x9d8))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x58))(*(longlong **)(param_1 + 0xa18),uVar4);
    FUN_0113a180(param_1);
    FUN_0113a780(param_1);
    FUN_011390d0(param_1);
    FUN_0113a9b0(param_1);
    *(undefined1 *)(*(longlong *)(param_1 + 0xa18) + 0x20) = 0;
  }
  return;
}

