/* Ghidra address: 01a7fc90 */
/* Ghidra symbol: FUN_01a7fc90 */


void FUN_01a7fc90(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  bool bVar11;
  longlong local_28;
  undefined8 local_20;
  
  FUN_007e2da0(*(undefined8 *)(param_1 + 2000),*(char *)(param_1 + 0x1088) == '\x01');
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x8a8),*(char *)(param_1 + 0x1088) == '\x01');
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x800),1);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x7f8),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x7f0),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0xa10),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x948),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x910),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x7e0),0);
  }
  else {
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x7f8),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x7f0),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0xa10),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x948),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x910),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x7e0),1);
  }
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x7d8),1);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x8c0),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x8b8),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x8b0),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x940),0);
  }
  else {
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x8c0),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x8b8),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x8b0),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x940),1);
  }
  FUN_007e2da0(*(undefined8 *)(param_1 + 0x808),1);
  if (*(longlong *)(param_1 + 0x798) == 0) {
LAB_01a7fe60:
    uVar5 = 0;
  }
  else {
    iVar3 = FUN_006d5120(*(undefined8 *)(param_1 + 0xa68));
    plVar6 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0xa68));
    iVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
    if ((iVar3 != iVar4 + -1) || (*(char *)(param_1 + 0x1088) != '\x01')) goto LAB_01a7fe60;
    uVar5 = (undefined4)CONCAT71((uint7)(uint3)((uint)(iVar4 + -1) >> 8),1);
  }
  FUN_007e2da0(*(undefined8 *)(param_1 + 0xbc0),uVar5);
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x920),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x928),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x9e8),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x968),0);
  }
  else {
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x920),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x928),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x9e8),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x968),1);
  }
  if ((*(longlong *)(param_1 + 0x798) == 0) ||
     (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8),
     iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6), iVar3 < 1)) {
LAB_01a7ff53:
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x888),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0xa58),0);
  }
  else {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
    uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,0);
    cVar2 = FUN_01ce33d0(uVar7);
    if (cVar2 != '\0') goto LAB_01a7ff53;
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x888),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0xa58),1);
  }
  if ((*(longlong *)(param_1 + 0x798) == 0) ||
     (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8),
     iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6), iVar3 < 1)) {
LAB_01a7ffc5:
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x918),0);
  }
  else {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
    uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,0);
    cVar2 = FUN_01ce33d0(uVar7);
    if (cVar2 != '\x01') goto LAB_01a7ffc5;
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x918),1);
  }
  iVar3 = FUN_006d5120(*(undefined8 *)(param_1 + 0xa68));
  if (iVar3 == -1) {
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x880),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x890),0);
  }
  else {
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x880),1);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x890),*(char *)(param_1 + 0x1088) == '\x01');
  }
  uVar5 = FUN_00f06890(L"QuickDraw",0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xa38),uVar5);
  (**(code **)(**(longlong **)(param_1 + 0x870) + 0x128))
            (*(longlong **)(param_1 + 0x870),*(char *)(param_1 + 0x1088) == '\x01');
  if (*(longlong *)(param_1 + 0x798) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x878) + 0x128))(*(longlong **)(param_1 + 0x878),0);
    (**(code **)(**(longlong **)(param_1 + 0xa80) + 0x128))(*(longlong **)(param_1 + 0xa80),0);
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x128))(*(longlong **)(param_1 + 0xa88),0);
    (**(code **)(**(longlong **)(param_1 + 0xa90) + 0x128))(*(longlong **)(param_1 + 0xa90),0);
    (**(code **)(**(longlong **)(param_1 + 0xa98) + 0x128))(*(longlong **)(param_1 + 0xa98),0);
    (**(code **)(**(longlong **)(param_1 + 0xbe8) + 0x128))(*(longlong **)(param_1 + 0xbe8),0);
    (**(code **)(**(longlong **)(param_1 + 0xaa0) + 0x128))(*(longlong **)(param_1 + 0xaa0),0);
    (**(code **)(**(longlong **)(param_1 + 0xaa8) + 0x128))(*(longlong **)(param_1 + 0xaa8),0);
    (**(code **)(**(longlong **)(param_1 + 0xab0) + 0x128))(*(longlong **)(param_1 + 0xab0),0);
    (**(code **)(**(longlong **)(param_1 + 0xab8) + 0x128))(*(longlong **)(param_1 + 0xab8),0);
    (**(code **)(**(longlong **)(param_1 + 0xac0) + 0x128))(*(longlong **)(param_1 + 0xac0),0);
    (**(code **)(**(longlong **)(param_1 + 0xac8) + 0x128))(*(longlong **)(param_1 + 0xac8),0);
    (**(code **)(**(longlong **)(param_1 + 0xad0) + 0x128))(*(longlong **)(param_1 + 0xad0),0);
    (**(code **)(**(longlong **)(param_1 + 0xad8) + 0x128))(*(longlong **)(param_1 + 0xad8),0);
    (**(code **)(**(longlong **)(param_1 + 0xc00) + 0x128))(*(longlong **)(param_1 + 0xc00),0);
    (**(code **)(**(longlong **)(param_1 + 0xaf0) + 0x128))(*(longlong **)(param_1 + 0xaf0),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x878) + 0x128))
              (*(longlong **)(param_1 + 0x878),*(char *)(param_1 + 0x1088) == '\x01');
    (**(code **)(**(longlong **)(param_1 + 0xa80) + 0x128))
              (*(longlong **)(param_1 + 0xa80),*(char *)(param_1 + 0x1088) == '\x01');
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x128))
              (*(longlong **)(param_1 + 0xa88),*(char *)(param_1 + 0x1088) == '\x01');
    (**(code **)(**(longlong **)(param_1 + 0xa90) + 0x128))(*(longlong **)(param_1 + 0xa90),1);
    (**(code **)(**(longlong **)(param_1 + 0xa98) + 0x128))(*(longlong **)(param_1 + 0xa98),1);
    (**(code **)(**(longlong **)(param_1 + 0xbe8) + 0x128))(*(longlong **)(param_1 + 0xbe8),1);
    (**(code **)(**(longlong **)(param_1 + 0xaa0) + 0x128))(*(longlong **)(param_1 + 0xaa0),1);
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
    iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
    if (0 < iVar3) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
      uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,0);
      cVar2 = FUN_01ce33d0(uVar7);
      if (cVar2 != '\0') goto LAB_01a801ba;
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
      lVar8 = (**(code **)(*plVar6 + 0x30))(plVar6,0);
      iVar3 = (**(code **)(**(longlong **)(lVar8 + 0x70) + 0x28))(*(longlong **)(lVar8 + 0x70));
      if (iVar3 < 2) {
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
        lVar8 = (**(code **)(*plVar6 + 0x30))(plVar6,0);
        iVar3 = (**(code **)(**(longlong **)(lVar8 + 0x78) + 0x28))(*(longlong **)(lVar8 + 0x78));
        if (iVar3 < 2) goto LAB_01a801ba;
      }
      goto LAB_01a8025e;
    }
LAB_01a801ba:
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
    iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
    if (iVar3 < 2) {
LAB_01a80275:
      (**(code **)(**(longlong **)(param_1 + 0xaa8) + 0x128))(*(longlong **)(param_1 + 0xaa8),0);
    }
    else {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
      uVar7 = (**(code **)(*plVar6 + 0x30))(plVar6,1);
      cVar2 = FUN_01ce33d0(uVar7);
      if (cVar2 != '\0') goto LAB_01a80275;
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
      lVar8 = (**(code **)(*plVar6 + 0x30))(plVar6,1);
      iVar3 = (**(code **)(**(longlong **)(lVar8 + 0x70) + 0x28))(*(longlong **)(lVar8 + 0x70));
      if (iVar3 < 2) {
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
        lVar8 = (**(code **)(*plVar6 + 0x30))(plVar6,1);
        iVar3 = (**(code **)(**(longlong **)(lVar8 + 0x78) + 0x28))(*(longlong **)(lVar8 + 0x78));
        if (iVar3 < 2) goto LAB_01a80275;
      }
LAB_01a8025e:
      (**(code **)(**(longlong **)(param_1 + 0xaa8) + 0x128))(*(longlong **)(param_1 + 0xaa8),1);
    }
    (**(code **)(**(longlong **)(param_1 + 0xab0) + 0x128))(*(longlong **)(param_1 + 0xab0),1);
    (**(code **)(**(longlong **)(param_1 + 0xab8) + 0x128))(*(longlong **)(param_1 + 0xab8),1);
    (**(code **)(**(longlong **)(param_1 + 0xac0) + 0x128))(*(longlong **)(param_1 + 0xac0),1);
    (**(code **)(**(longlong **)(param_1 + 0xac8) + 0x128))(*(longlong **)(param_1 + 0xac8),1);
    (**(code **)(**(longlong **)(param_1 + 0xad0) + 0x128))(*(longlong **)(param_1 + 0xad0),1);
    (**(code **)(**(longlong **)(param_1 + 0xad8) + 0x128))(*(longlong **)(param_1 + 0xad8),1);
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0xc00) + 0x128))
                      (*(longlong **)(param_1 + 0xc00),1);
    if ((*(char *)(param_1 + 0x1050) == '\0') || (*(char *)(param_1 + 0x1088) != '\x01')) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
    (**(code **)(**(longlong **)(param_1 + 0xaf0) + 0x128))(*(longlong **)(param_1 + 0xaf0),uVar5);
  }
  if (((*(longlong *)(param_1 + 0x798) == 0) ||
      (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8),
      iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6), iVar3 < 1)) ||
     (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8),
     lVar8 = (**(code **)(*plVar6 + 0x30))(plVar6,0), *(char *)(lVar8 + 0x58) == '\a')) {
    (**(code **)(**(longlong **)(param_1 + 0xb10) + 0x128))(*(longlong **)(param_1 + 0xb10),0);
    (**(code **)(**(longlong **)(param_1 + 0xb08) + 0x128))(*(longlong **)(param_1 + 0xb08),0);
    (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x128))(*(longlong **)(param_1 + 0xb20),0);
    (**(code **)(**(longlong **)(param_1 + 0xb18) + 0x128))(*(longlong **)(param_1 + 0xb18),0);
    (**(code **)(**(longlong **)(param_1 + 0xb28) + 0x128))(*(longlong **)(param_1 + 0xb28),0);
    (**(code **)(**(longlong **)(param_1 + 0xb30) + 0x128))(*(longlong **)(param_1 + 0xb30),0);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xb10) + 0x128))(*(longlong **)(param_1 + 0xb10),1);
    (**(code **)(**(longlong **)(param_1 + 0xb08) + 0x128))(*(longlong **)(param_1 + 0xb08),1);
    (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x128))(*(longlong **)(param_1 + 0xb20),1);
    (**(code **)(**(longlong **)(param_1 + 0xb18) + 0x128))(*(longlong **)(param_1 + 0xb18),1);
    (**(code **)(**(longlong **)(param_1 + 0xb28) + 0x128))(*(longlong **)(param_1 + 0xb28),1);
    (**(code **)(**(longlong **)(param_1 + 0xb30) + 0x128))(*(longlong **)(param_1 + 0xb30),1);
  }
  if ((*(longlong *)(param_1 + 0x798) != 0) &&
     (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8),
     iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6), 0 < iVar3)) {
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
    lVar8 = (**(code **)(*plVar6 + 0x30))(plVar6,0);
    iVar3 = (**(code **)(**(longlong **)(lVar8 + 0x80) + 0x28))(*(longlong **)(lVar8 + 0x80));
    if (0 < iVar3) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0xd8);
      lVar8 = (**(code **)(*plVar6 + 0x30))(plVar6,0);
      uVar7 = (**(code **)(**(longlong **)(lVar8 + 0x80) + 0x30))(*(longlong **)(lVar8 + 0x80),0);
      cVar2 = FUN_004113d0(uVar7,&PTR_FUN_01ab0e08);
      if (((cVar2 == '\0') && (cVar2 = FUN_004113d0(uVar7,&PTR_FUN_01ab19e8), cVar2 == '\0')) &&
         ((cVar2 = FUN_004113d0(uVar7,&PTR_FUN_01ab13d0), cVar2 == '\0' &&
          (cVar2 = FUN_004113d0(uVar7,&DAT_01ab2000), cVar2 == '\0')))) {
        (**(code **)(**(longlong **)(param_1 + 0xae0) + 0x128))(*(longlong **)(param_1 + 0xae0),1);
        (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x128))(*(longlong **)(param_1 + 0xae8),1);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0xae0) + 0x128))(*(longlong **)(param_1 + 0xae0),0);
        (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x128))(*(longlong **)(param_1 + 0xae8),0);
      }
      goto LAB_01a80740;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0xae0) + 0x128))(*(longlong **)(param_1 + 0xae0),0);
  (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x128))(*(longlong **)(param_1 + 0xae8),0);
LAB_01a80740:
  if (*(longlong *)(param_1 + 0x798) == 0) {
    FUN_007e2da0(*(undefined8 *)(param_1 + 0xa48),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0xa50),0);
    lVar8 = *(longlong *)(param_1 + 0x798);
    if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x60) == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
    }
    FUN_007e2da0(*(undefined8 *)(param_1 + 0x978),uVar5);
    (**(code **)(**(longlong **)(param_1 + 0xb00) + 0x128))(*(longlong **)(param_1 + 0xb00),0);
  }
  else {
    uVar5 = FUN_01ae9120(*(longlong *)(param_1 + 0x798));
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x9e8),uVar5);
    local_20 = 0;
    puVar9 = &local_20;
    cVar2 = FUN_01acff30(*(undefined8 *)(param_1 + 0x798),puVar9);
    if (cVar2 != '\0') {
      puVar9 = (undefined8 *)FUN_004aeac0(local_20,0);
      FUN_01ad1090(*(undefined8 *)(param_1 + 0x798),puVar9,&local_28);
    }
    if (cVar2 == '\x02') {
      bVar1 = *(byte *)(local_28 + 0x58);
      if (bVar1 < 8) {
        bVar11 = ((int)CONCAT71((int7)((ulonglong)puVar9 >> 8),1) << (bVar1 & 0x1f) & 1U) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        iVar3 = (**(code **)(**(longlong **)(local_28 + 0x70) + 0x28))
                          (*(longlong **)(local_28 + 0x70));
        if ((iVar3 < 3) &&
           (lVar8 = FUN_004aeac0(local_20,0),
           1 < *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0xf8) + 0xf8) + 0x10))) {
          FUN_007e2da0(*(undefined8 *)(param_1 + 0xa48),1);
        }
        else {
          FUN_007e2da0(*(undefined8 *)(param_1 + 0xa48),0);
        }
        iVar3 = (**(code **)(**(longlong **)(local_28 + 0x78) + 0x28))
                          (*(longlong **)(local_28 + 0x78));
        if ((iVar3 < 3) &&
           (lVar8 = FUN_004aeac0(local_20,0),
           1 < *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0x100) + 0xf8) + 0x10))) {
          FUN_007e2da0(*(undefined8 *)(param_1 + 0xa50),1);
        }
        else {
          FUN_007e2da0(*(undefined8 *)(param_1 + 0xa50),0);
        }
      }
      else if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 0x60U) != 0) {
        FUN_007e2da0(*(undefined8 *)(param_1 + 0xa48),0);
        FUN_007e2da0(*(undefined8 *)(param_1 + 0xa50),0);
      }
      else {
        iVar3 = (**(code **)(**(longlong **)(local_28 + 0x70) + 0x28))
                          (*(longlong **)(local_28 + 0x70));
        if ((iVar3 < 3) &&
           (lVar8 = FUN_004aeac0(local_20,0),
           1 < *(int *)(*(longlong *)(*(longlong *)(lVar8 + 0xe8) + 0xf8) + 0x10))) {
          FUN_007e2da0(*(undefined8 *)(param_1 + 0xa48),1);
        }
        else {
          FUN_007e2da0(*(undefined8 *)(param_1 + 0xa48),0);
        }
        FUN_007e2da0(*(undefined8 *)(param_1 + 0xa50),0);
      }
      if (*(byte *)(local_28 + 0x58) < 8) {
        bVar11 = ((int)CONCAT71((int7)((ulonglong)local_28 >> 8),1) <<
                  (*(byte *)(local_28 + 0x58) & 0x1f) & 1U) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        FUN_007e2da0(*(undefined8 *)(param_1 + 0x978),*(char *)(param_1 + 0x1088) == '\x01');
        (**(code **)(**(longlong **)(param_1 + 0xb00) + 0x128))
                  (*(longlong **)(param_1 + 0xb00),*(char *)(param_1 + 0x1088) == '\x01');
        lVar8 = FUN_004aeac0(local_20,0);
        if (*(char *)(*(longlong *)(*(longlong *)(lVar8 + 0xd0) + 8) + 0x434) == '\x03') {
          FUN_007e2da0(*(undefined8 *)(param_1 + 0x990),1);
          FUN_007e2da0(*(undefined8 *)(param_1 + 0x988),1);
          FUN_007e2da0(*(undefined8 *)(param_1 + 0xb78),0);
          FUN_007e2da0(*(undefined8 *)(param_1 + 0xb70),0);
          FUN_007e2da0(*(undefined8 *)(param_1 + 0xb68),0);
        }
        else {
          lVar8 = FUN_004aeac0(local_20,0);
          if (*(char *)(*(longlong *)(*(longlong *)(lVar8 + 0xd0) + 8) + 0x434) == '\x04') {
            FUN_007e2da0(*(undefined8 *)(param_1 + 0x990),0);
            FUN_007e2da0(*(undefined8 *)(param_1 + 0x988),0);
            FUN_007e2da0(*(undefined8 *)(param_1 + 0xb78),1);
            FUN_007e2da0(*(undefined8 *)(param_1 + 0xb70),1);
            FUN_007e2da0(*(undefined8 *)(param_1 + 0xb68),1);
          }
          else {
            FUN_007e2da0(*(undefined8 *)(param_1 + 0x990),0);
            FUN_007e2da0(*(undefined8 *)(param_1 + 0x988),0);
            FUN_007e2da0(*(undefined8 *)(param_1 + 0xb78),0);
            FUN_007e2da0(*(undefined8 *)(param_1 + 0xb70),0);
            FUN_007e2da0(*(undefined8 *)(param_1 + 0xb68),0);
          }
        }
        FUN_007e2da0(*(undefined8 *)(param_1 + 0x980),1);
      }
      else {
        lVar8 = *(longlong *)(param_1 + 0x798);
        if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x60) == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (undefined4)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
        }
        FUN_007e2da0(*(undefined8 *)(param_1 + 0x978),uVar5);
        FUN_007e2da0(*(undefined8 *)(DAT_01fcab48 + 0x960),0);
        FUN_007e2da0(*(undefined8 *)(param_1 + 0x990),0);
        FUN_007e2da0(*(undefined8 *)(param_1 + 0x988),0);
        FUN_007e2da0(*(undefined8 *)(param_1 + 0xb70),0);
        FUN_007e2da0(*(undefined8 *)(param_1 + 0xb68),0);
        (**(code **)(**(longlong **)(param_1 + 0xb00) + 0x128))(*(longlong **)(param_1 + 0xb00),0);
      }
    }
    else {
      FUN_007e2da0(*(undefined8 *)(param_1 + 0xa48),0);
      FUN_007e2da0(*(undefined8 *)(param_1 + 0xa50),0);
      lVar8 = *(longlong *)(param_1 + 0x798);
      if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x60) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (undefined4)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
      }
      FUN_007e2da0(*(undefined8 *)(param_1 + 0x978),uVar5);
      (**(code **)(**(longlong **)(param_1 + 0xb00) + 0x128))(*(longlong **)(param_1 + 0xb00),0);
    }
    FUN_00410f20(local_20);
  }
  if ((*(longlong *)(param_1 + 0x798) == 0) ||
     (((puVar10 = PTR_DAT_020027c0, *(longlong *)PTR_DAT_020027c0 != 0 &&
       (puVar10 = PTR_DAT_020037b0, *(longlong *)PTR_DAT_020037b0 == 0)) &&
      (puVar10 = PTR_DAT_020017c0, *PTR_DAT_020017c0 != '\0')))) {
    (**(code **)(**(longlong **)(param_1 + 0xaf0) + 0x128))(*(longlong **)(param_1 + 0xaf0),0);
    FUN_007e2da0(*(undefined8 *)(param_1 + 0xa10),0);
    (**(code **)(**(longlong **)(param_1 + 0xaf8) + 0x128))(*(longlong **)(param_1 + 0xaf8),0);
  }
  else {
    if ((*(char *)(param_1 + 0x1050) == '\0') || (*(char *)(param_1 + 0x1088) != '\x01')) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
    }
    (**(code **)(**(longlong **)(param_1 + 0xaf0) + 0x128))(*(longlong **)(param_1 + 0xaf0),uVar5);
    uVar7 = FUN_007e2da0(*(undefined8 *)(param_1 + 0xa10),*(undefined1 *)(param_1 + 0x1050));
    if ((*(char *)(param_1 + 0x1050) == '\0') || (*(char *)(param_1 + 0x1088) != '\x01')) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
    }
    (**(code **)(**(longlong **)(param_1 + 0xaf8) + 0x128))(*(longlong **)(param_1 + 0xaf8),uVar5);
  }
  if (*PTR_DAT_020052b8 != '\0') {
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x978),0);
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x960),0);
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x8e0),0);
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x8f8),0);
    FUN_007e2f80(*(undefined8 *)(param_1 + 0x998),0);
  }
  uVar7 = FUN_00b89270();
  FUN_00b897e0(uVar7,*(undefined8 *)(param_1 + 0x7c8));
  return;
}

