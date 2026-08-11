/* Ghidra address: 01ac3650 */
/* Ghidra symbol: FUN_01ac3650 */


void FUN_01ac3650(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,int *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 local_58 [8];
  undefined8 local_50 [5];
  
  FUN_01ac1cf0(param_1,param_2,1);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar5 = FUN_01abda80(*(longlong *)(param_1 + 0x58));
    cVar1 = FUN_004113d0(uVar5,&PTR_FUN_01cb9c30);
    if (cVar1 != '\0') {
      lVar6 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
      plVar7 = (longlong *)FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
      iVar2 = *(int *)(lVar6 + 0xe8);
      if (*(int *)(lVar6 + 0xe8) < param_3 + *param_5) {
        iVar2 = param_3 + *param_5;
      }
      iVar3 = *(int *)(lVar6 + 0xec);
      if (iVar2 < *(int *)(lVar6 + 0xec)) {
        iVar3 = iVar2;
      }
      *(int *)(param_1 + 0x60) = iVar3;
      uVar5 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
      cVar1 = FUN_004113d0(uVar5,&PTR_FUN_01cba328);
      if (cVar1 == '\0') {
        uVar5 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        FUN_01cc92d0(plVar7,uVar5);
        dVar10 = (double)FUN_00c43d10();
        iVar2 = *(int *)(lVar6 + 0xe8);
        uVar5 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        (**(code **)(*plVar7 + 0xa0))(plVar7,uVar5);
        dVar11 = (double)FUN_00c43d10();
        uVar5 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        FUN_01cc92d0(plVar7,uVar5);
        dVar12 = (double)FUN_00c43d10();
        *(double *)(param_1 + 0x70) =
             dVar10 + ((double)(iVar3 - iVar2) / (double)(*(int *)(lVar6 + 0xec) - iVar2)) *
                      (dVar11 - dVar12);
        uVar5 = FUN_00c43d20(*(undefined8 *)(param_1 + 0x70));
        *(undefined8 *)(param_1 + 0x70) = uVar5;
      }
      else {
        uVar5 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        dVar10 = (double)FUN_01cc92d0(plVar7,uVar5);
        iVar2 = *(int *)(lVar6 + 0xe8);
        uVar5 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        dVar11 = (double)(**(code **)(*plVar7 + 0xa0))(plVar7,uVar5);
        uVar5 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        dVar12 = (double)FUN_01cc92d0(plVar7,uVar5);
        *(double *)(param_1 + 0x70) =
             dVar10 + ((double)(iVar3 - iVar2) / (double)(*(int *)(lVar6 + 0xec) - iVar2)) *
                      (dVar11 - dVar12);
      }
      lVar8 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
      if (*(longlong *)PTR_DAT_02005620 == lVar8) {
        lVar8 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
        if (*(longlong *)PTR_DAT_020041f8 != lVar8) goto LAB_01ac38a3;
      }
      else {
LAB_01ac38a3:
        plVar9 = (longlong *)FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
        uVar5 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        (**(code **)(*plVar9 + 0x10))(plVar9,uVar5,1);
        uVar5 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
        *(undefined8 *)PTR_DAT_02005620 = uVar5;
        uVar5 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
        *(undefined8 *)PTR_DAT_020041f8 = uVar5;
      }
      (**(code **)(*plVar7 + 0x90))
                (plVar7,*(undefined8 *)(param_1 + 0x70),param_1 + 0x78,param_1 + 0x80);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf0))
                (*(longlong **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x78),
                 *(undefined8 *)(param_1 + 0x80),param_1 + 100,param_1 + 0x68);
      if (param_3 < *(int *)(lVar6 + 0xe8)) {
        *param_5 = param_3 - *(int *)(lVar6 + 0xe8);
      }
      else if (*(int *)(lVar6 + 0xec) < param_3) {
        *param_5 = param_3 - *(int *)(lVar6 + 0xec);
      }
      else {
        *param_5 = 0;
      }
      goto LAB_01ac3d05;
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x58);
  if (plVar7 == (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
      uVar5 = (**(code **)(*plVar7 + 0x30))(plVar7,0);
      local_50[0] = FUN_01cd62b0(uVar5,param_3 + *param_5);
    }
  }
  else {
    (**(code **)(*plVar7 + 0xf8))(plVar7,param_3 + *param_5,param_4,local_50,local_58);
  }
  *(undefined8 *)(param_1 + 0x78) = local_50[0];
  if (*(longlong *)(param_1 + 0x58) == 0) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
      lVar6 = (**(code **)(*plVar7 + 0x30))(plVar7,0);
      uVar5 = FUN_00b90620(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(lVar6 + 0xb8));
      *(undefined8 *)(param_1 + 0x78) = uVar5;
      uVar5 = FUN_00b90650(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(lVar6 + 0xc0));
      *(undefined8 *)(param_1 + 0x78) = uVar5;
      *(undefined8 *)(param_1 + 0x80) = 0;
      uVar4 = FUN_01cd60f0(lVar6,*(undefined8 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 100) = uVar4;
      if (param_3 < *(int *)(lVar6 + 0xe8)) {
        *param_5 = param_3 - *(int *)(lVar6 + 0xe8);
      }
      else if (*(int *)(lVar6 + 0xec) < param_3) {
        *param_5 = param_3 - *(int *)(lVar6 + 0xec);
      }
      else {
        *param_5 = 0;
      }
    }
  }
  else {
    lVar6 = FUN_01abd500(*(longlong *)(param_1 + 0x58));
    uVar5 = FUN_00b90620(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(lVar6 + 0xb8));
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    uVar5 = FUN_00b90650(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(lVar6 + 0xc0));
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    uVar5 = FUN_01abdb70(*(undefined8 *)(param_1 + 0x58));
    uVar5 = FUN_00b90620(*(undefined8 *)(param_1 + 0x78),uVar5);
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    uVar5 = FUN_01abdbd0(*(undefined8 *)(param_1 + 0x58));
    uVar5 = FUN_00b90650(*(undefined8 *)(param_1 + 0x78),uVar5);
    *(undefined8 *)(param_1 + 0x78) = uVar5;
    lVar8 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
    if (*(longlong *)PTR_DAT_02005620 == lVar8) {
      lVar8 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
      if (*(longlong *)PTR_DAT_020041f8 != lVar8) goto LAB_01ac3b19;
    }
    else {
LAB_01ac3b19:
      plVar7 = (longlong *)FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
      uVar5 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*plVar7 + 0x10))(plVar7,uVar5,1);
      uVar5 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
      *(undefined8 *)PTR_DAT_02005620 = uVar5;
      uVar5 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
      *(undefined8 *)PTR_DAT_020041f8 = uVar5;
    }
    plVar7 = (longlong *)FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
    uVar5 = (**(code **)(*plVar7 + 0x48))(plVar7,*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x80) = uVar5;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf0))
              (*(longlong **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x78),
               *(undefined8 *)(param_1 + 0x80),param_1 + 100,param_1 + 0x68);
    if (param_3 < *(int *)(lVar6 + 0xe8)) {
      *param_5 = param_3 - *(int *)(lVar6 + 0xe8);
    }
    else if (*(int *)(lVar6 + 0xec) < param_3) {
      *param_5 = param_3 - *(int *)(lVar6 + 0xec);
    }
    else {
      *param_5 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 100);
LAB_01ac3d05:
  FUN_01ac1cf0(param_1,param_2,0);
  return;
}

