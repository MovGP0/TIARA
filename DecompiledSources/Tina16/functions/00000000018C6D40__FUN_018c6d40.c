/* Ghidra address: 018c6d40 */
/* Ghidra symbol: FUN_018c6d40 */


void FUN_018c6d40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  local_4c = 0;
LAB_018c6f26:
  for (; local_4c < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10); local_4c = local_4c + 1) {
    lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_4c);
    cVar1 = FUN_004113d0(lVar4,&PTR_FUN_019317f0);
    if (cVar1 != '\0') {
      FUN_004ae7e0(*(undefined8 *)(lVar4 + 0x208),lVar4);
      while (local_4c = local_4c + 1, local_4c < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10)) {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_4c);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_019317f0);
        if (cVar1 == '\0') break;
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_4c);
        FUN_004ae7e0(*(undefined8 *)(lVar4 + 0x208),uVar3);
      }
      do {
        if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x10) <= local_4c) goto LAB_018c6e71;
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_4c);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0192d4e8);
        if (cVar1 != '\0') goto LAB_018c6e71;
        local_4c = local_4c + 1;
      } while( true );
    }
  }
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10);
  local_4c = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_4c);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_019322b8);
      if ((cVar1 != '\0') && (iVar5 = local_4c + -1, -1 < iVar5)) {
        do {
          lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),iVar5);
          cVar1 = FUN_004113d0(lVar4,&PTR_FUN_019317f0);
          if (cVar1 != '\0') {
            *(undefined8 *)(lVar4 + 0x218) = uVar3;
            FUN_004aedb0(*(undefined8 *)(param_1 + 0xa8),local_4c,0);
            FUN_004aedb0(*(undefined8 *)(param_1 + 0xa8),iVar5);
            break;
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != -1);
      }
      local_4c = local_4c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10);
  local_4c = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_4c);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_019317f0);
      if (cVar1 != '\0') {
        FUN_004aedb0(*(undefined8 *)(param_1 + 0xa8),local_4c,0);
      }
      local_4c = local_4c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10);
  local_4c = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_4c);
      cVar1 = FUN_004113d0(lVar4,&PTR_FUN_019322b8);
      if (cVar1 != '\0') {
        uVar3 = FUN_0180bfb0();
        FUN_01809b60(uVar3,&local_48,L"enUnconnGFooter");
        FUN_00416cd0(&local_40,3,local_48,&DAT_018c71d0,*(undefined8 *)(lVar4 + 0x10));
        (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))
                  (*(longlong **)(param_1 + 0xe8),local_40);
        FUN_004aedb0(*(undefined8 *)(param_1 + 0xa8),local_4c,0);
      }
      local_4c = local_4c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_018c6850(param_1);
  FUN_00414560(&local_48,4);
  return;
LAB_018c6e71:
  if (local_4c != *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10)) {
    uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_4c);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0192d4e8);
    if (cVar1 != '\0') {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),local_4c);
      *(longlong *)(lVar2 + 0x220) = lVar4;
      goto LAB_018c6f26;
    }
  }
  uVar3 = FUN_0180bfb0();
  FUN_01809b60(uVar3,&local_38,L"enUnconnGroup");
  FUN_00416cd0(&local_30,3,local_38,&DAT_018c71d0,*(undefined8 *)(lVar4 + 0x10));
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x78))(*(longlong **)(param_1 + 0xe8),local_30);
  goto LAB_018c6f26;
}

