/* Ghidra address: 0114c7f0 */
/* Ghidra symbol: FUN_0114c7f0 */


void FUN_0114c7f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  puVar6 = (undefined8 *)(PTR_DAT_02004010 + 1000);
  puVar7 = (undefined8 *)(param_1 + 0x7c8);
  for (lVar4 = 5; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined4 *)puVar7 = *(undefined4 *)puVar6;
  *(undefined1 *)((longlong)puVar7 + 4) = *(undefined1 *)((longlong)puVar6 + 4);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(param_1 + 0x7c9));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x700),*(undefined8 *)(param_1 + 0x7d1));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x708),*(undefined8 *)(param_1 + 0x7d9));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x7e1));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x788),*(undefined8 *)(param_1 + 0x7e9));
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x268))
            (*(longlong **)(param_1 + 0x718),*(byte *)(param_1 + 0x7c8) - 7);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))
            (*(longlong **)(param_1 + 0x720),PTR_DAT_02004010[0x819]);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x758),(ulonglong)((byte)PTR_DAT_02004010[0x82c] + 2) % 3);
  (**(code **)(**(longlong **)(param_1 + 0x760) + 0x268))
            (*(longlong **)(param_1 + 0x760),*(undefined1 *)(param_1 + 0x7f2));
  FUN_0074b490(*(undefined8 *)(param_1 + 0x768),*(undefined1 *)(param_1 + 0x7f3));
  (**(code **)(**(longlong **)(param_1 + 0x790) + 0x268))
            (*(longlong **)(param_1 + 0x790),*(undefined1 *)(param_1 + 0x7f4));
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))
            (*(longlong **)(param_1 + 0x730),(PTR_DAT_02004010[0x415] & 1) != 0);
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))
            (*(longlong **)(param_1 + 0x738),(PTR_DAT_02004010[0x415] & 2) != 0);
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x268))
            (*(longlong **)(param_1 + 0x740),(PTR_DAT_02004010[0x415] & 4) != 0);
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))
            (*(longlong **)(param_1 + 0x748),(PTR_DAT_02004010[0x415] & 8) != 0);
  (**(code **)(**(longlong **)(param_1 + 0x750) + 0x268))
            (*(longlong **)(param_1 + 0x750),(PTR_DAT_02004010[0x415] & 0x10) != 0);
  (**(code **)(**(longlong **)(param_1 + 0x778) + 0x268))
            (*(longlong **)(param_1 + 0x778),(PTR_DAT_02004010[0x415] & 0x20) != 0);
  if (*(char *)(param_1 + 0x100811) == '\0') {
    FUN_01cc0ae0(*(undefined8 *)(param_1 + 0x7b0),local_30);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4f0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_30[0]);
    (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x268))(*(longlong **)(param_1 + 0x7a8),0);
    (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x128))(*(longlong **)(param_1 + 0x7a8),0);
    (**(code **)(**(longlong **)(param_1 + 0x758) + 0x128))(*(longlong **)(param_1 + 0x758),0);
  }
  else {
    uVar3 = FUN_019a4600();
    FUN_017c7cd0(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x7a8) + 0x4f0),local_30,0xffffffff);
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_38,0x825);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4f0);
    (**(code **)(*plVar1 + 200))(plVar1,0,local_38);
    iVar5 = 1;
    while( true ) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4f0);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (iVar2 <= iVar5) break;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4f0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,iVar5);
      iVar2 = FUN_0043e650(local_40,*(undefined8 *)(PTR_DAT_02004010 + 0x823));
      if (iVar2 == 0) break;
      iVar5 = iVar5 + 1;
    }
    if (*(longlong *)(PTR_DAT_02004010 + 0x823) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4f0);
      iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
      if (iVar5 < iVar2) {
        (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x268))
                  (*(longlong **)(param_1 + 0x7a8),iVar5);
        goto LAB_0114cc34;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x268))(*(longlong **)(param_1 + 0x7a8),0);
  }
LAB_0114cc34:
  FUN_0064cf60(param_1,0x47a);
  FUN_00414560(&local_40,3);
  return;
}

