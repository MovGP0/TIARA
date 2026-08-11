/* Ghidra address: 00d73310 */
/* Ghidra symbol: FUN_00d73310 */


void FUN_00d73310(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00d5ca10);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_00d73240(param_1);
    FUN_00414ad0(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78));
    FUN_00414ad0(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88));
    FUN_00414ad0(param_1 + 0x90,*(undefined8 *)(param_2 + 0x90));
    FUN_00414ad0(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98));
    FUN_00414ad0(param_1 + 0x80,*(undefined8 *)(param_2 + 0x80));
    *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0xa8);
    *(undefined1 *)(param_1 + 0xa9) = *(undefined1 *)(param_2 + 0xa9);
    FUN_00414ad0(param_1 + 0xb0,*(undefined8 *)(param_2 + 0xb0));
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))
              (*(longlong **)(param_1 + 0xa0),*(undefined8 *)(param_2 + 0xa0));
    FUN_004aef40(*(undefined8 *)(param_1 + 0xc0),
                 *(undefined4 *)(*(longlong *)(param_2 + 0xc0) + 0x10));
    iVar6 = *(int *)(*(longlong *)(param_2 + 0xc0) + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        plVar2 = (longlong *)FUN_00d58750(&PTR_FUN_00d55dd8,1);
        uVar3 = FUN_00d5a2a0(*(undefined8 *)(param_2 + 0xc0),iVar5);
        (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
        lVar4 = FUN_00d5a2a0(*(undefined8 *)(param_2 + 0xc0),iVar5);
        FUN_00414ad0(plVar2 + 0xe,*(undefined8 *)(lVar4 + 0x70));
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0xc0),plVar2);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_004aef40(*(undefined8 *)(param_1 + 0xb8),
                 *(undefined4 *)(*(longlong *)(param_2 + 0xb8) + 0x10));
    iVar6 = *(int *)(*(longlong *)(param_2 + 0xb8) + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar3 = FUN_00d74900(param_2,iVar5);
        plVar2 = (longlong *)FUN_00d75d50(uVar3,0);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0xb8),plVar2);
        FUN_00d77e50(plVar2,*(undefined8 *)(param_1 + 0xc0));
        (**(code **)(*plVar2 + 0xa0))(plVar2);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))
              (*(longlong **)(param_1 + 0xd8),*(undefined8 *)(param_2 + 0xd8));
    (**(code **)(**(longlong **)(param_1 + 200) + 0x10))
              (*(longlong **)(param_1 + 200),*(undefined8 *)(param_2 + 200));
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))
              (*(longlong **)(param_1 + 0xd0),*(undefined8 *)(param_2 + 0xd0));
  }
  return;
}

