/* Ghidra address: 01ac1cf0 */
/* Ghidra symbol: FUN_01ac1cf0 */


void FUN_01ac1cf0(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int local_b4;
  longlong local_b0;
  
  uVar8 = FUN_005ffa40(param_2);
  thunk_FUN_03b994b9(uVar8,1);
  if (*(longlong *)(param_1 + 0x58) == 0) {
LAB_01ac1d91:
    if (*(longlong *)(param_1 + 0x50) == 0) {
      return;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
    lVar9 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
    if (*(double *)(param_1 + 0x78) < *(double *)(lVar9 + 0xb8)) {
      return;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
    lVar9 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
    if (*(double *)(lVar9 + 0xc0) < *(double *)(param_1 + 0x78)) {
      return;
    }
  }
  else {
    lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
    if ((*(double *)(param_1 + 0x78) < *(double *)(lVar9 + 0xb8)) ||
       (lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58)),
       *(double *)(lVar9 + 0xc0) < *(double *)(param_1 + 0x78))) {
      uVar8 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
      cVar2 = FUN_004113d0(uVar8,&PTR_FUN_01cb9c30);
      if (cVar2 == '\0') goto LAB_01ac1d91;
    }
  }
  (**(code **)(*(longlong *)param_2[0xf] + 0x10))
            ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x88));
  FUN_005fdcb0(param_2[0x10],1);
  FUN_01abfbd0(param_1);
  cVar2 = FUN_01a90ed0();
  if (cVar2 == '\0') {
    FUN_005fd640(param_2[0xf],0xf);
  }
  else {
    FUN_005fd640(param_2[0xf],0xe);
  }
  lVar9 = *(longlong *)(param_1 + 0x58);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x50);
    if (lVar9 != 0) {
      lVar10 = (**(code **)(**(longlong **)(lVar9 + 0x70) + 0x30))(*(longlong **)(lVar9 + 0x70),0);
      (**(code **)(*param_2 + 200))
                (param_2,*(undefined4 *)(param_1 + 100),*(undefined4 *)(lVar10 + 0x18));
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
      lVar10 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
      lVar11 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
      iVar3 = FUN_0040c770((double)*(int *)(lVar11 + 0x94) * 1.1);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(undefined4 *)(param_1 + 100),*(int *)(lVar10 + 0x18) + iVar3);
      local_b0 = lVar9;
    }
  }
  else {
    local_b0 = *(longlong *)(lVar9 + 0x78);
    uVar8 = FUN_01abda80(lVar9);
    cVar2 = FUN_004113d0(uVar8,&PTR_FUN_01cb9c30);
    if (cVar2 == '\0') {
      lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
      if ((*(int *)(lVar9 + 0x14) <= *(int *)(param_1 + 100)) &&
         (lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58)),
         *(int *)(param_1 + 100) <= *(int *)(lVar9 + 0x1c))) {
        lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
        (**(code **)(*param_2 + 200))
                  (param_2,*(undefined4 *)(param_1 + 100),*(undefined4 *)(lVar9 + 0x18));
        lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
        lVar10 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
        iVar3 = FUN_0040c770((double)*(int *)(lVar10 + 0x94) * 1.1);
        (**(code **)(*param_2 + 0xc0))
                  (param_2,*(undefined4 *)(param_1 + 100),*(int *)(lVar9 + 0x18) + iVar3);
      }
      lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      if ((*(int *)(lVar9 + 0x18) <= *(int *)(param_1 + 0x68)) &&
         (lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58)),
         *(int *)(param_1 + 0x68) <= *(int *)(lVar9 + 0x20))) {
        lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
        cVar2 = *(char *)(lVar9 + 0x120);
        lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
        uVar7 = *(undefined4 *)(lVar9 + 0x1c);
        lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
        uVar4 = *(undefined4 *)(lVar9 + 0x14);
        if (cVar2 != '\0') {
          uVar4 = uVar7;
        }
        (**(code **)(*param_2 + 200))(param_2,uVar4,*(undefined4 *)(param_1 + 0x68));
        lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
        cVar2 = *(char *)(lVar9 + 0x120);
        lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
        lVar10 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
        iVar5 = FUN_0040c770((double)*(int *)(lVar10 + 0x94) * 1.1);
        iVar3 = *(int *)(lVar9 + 0x1c);
        lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
        lVar10 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
        iVar6 = FUN_0040c770((double)*(int *)(lVar10 + 0x94) * 1.1);
        iVar6 = *(int *)(lVar9 + 0x14) + iVar6;
        if (cVar2 != '\0') {
          iVar6 = iVar3 - iVar5;
        }
        (**(code **)(*param_2 + 0xc0))(param_2,iVar6,*(undefined4 *)(param_1 + 0x68));
      }
    }
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    lVar9 = *(longlong *)(param_1 + 0x50);
    if (lVar9 != 0) {
      lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x78) + 0x30))
                        (*(longlong **)(lVar9 + 0x78),*(undefined4 *)(lVar9 + 0x94));
      (**(code **)(*param_2 + 200))
                (param_2,*(undefined4 *)(param_1 + 100),*(undefined4 *)(lVar9 + 0xec));
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
      lVar9 = (**(code **)(*plVar1 + 0x30))(plVar1,0);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(undefined4 *)(param_1 + 100),*(undefined4 *)(lVar9 + 0x18));
    }
  }
  else {
    lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
    iVar3 = *(int *)(param_1 + 0x68);
    if ((*(int *)(lVar9 + 0x18) <= iVar3) &&
       (lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58)), iVar3 <= *(int *)(lVar9 + 0x20))) {
      lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 200))
                (param_2,*(undefined4 *)(lVar9 + 0xe8),*(undefined4 *)(param_1 + 0x68));
      lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(undefined4 *)(lVar9 + 0xec),*(undefined4 *)(param_1 + 0x68));
    }
    lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
    iVar3 = *(int *)(param_1 + 100);
    if ((*(int *)(lVar9 + 0x14) <= iVar3) &&
       (lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58)), iVar3 <= *(int *)(lVar9 + 0x1c))) {
      uVar8 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
      cVar2 = FUN_004113d0(uVar8,&PTR_FUN_01cb9c30);
      if (cVar2 == '\0') {
        uVar8 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
        cVar2 = FUN_004113d0(uVar8,&PTR_FUN_010ff460);
        if (cVar2 == '\0') {
          lVar9 = (**(code **)(**(longlong **)(local_b0 + 0x78) + 0x30))
                            (*(longlong **)(local_b0 + 0x78),*(undefined4 *)(local_b0 + 0x94));
          (**(code **)(*param_2 + 200))
                    (param_2,*(undefined4 *)(param_1 + 100),*(undefined4 *)(lVar9 + 0xec));
          lVar9 = (**(code **)(**(longlong **)(local_b0 + 0x70) + 0x30))
                            (*(longlong **)(local_b0 + 0x70),0);
          (**(code **)(*param_2 + 0xc0))
                    (param_2,*(undefined4 *)(param_1 + 100),*(undefined4 *)(lVar9 + 0x18));
          goto LAB_01ac2373;
        }
      }
      lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 200))
                (param_2,*(undefined4 *)(param_1 + 100),*(undefined4 *)(lVar9 + 0xe8));
      lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(undefined4 *)(param_1 + 100),*(undefined4 *)(lVar9 + 0xec));
    }
  }
LAB_01ac2373:
  if (*(char *)(*(longlong *)(local_b0 + 0x50) + 0x10d) != '\0') {
    lVar9 = FUN_004113f0(*(longlong *)(local_b0 + 0x50),&PTR_FUN_01ac9770);
    iVar3 = (**(code **)(**(longlong **)(lVar9 + 0xd8) + 0x28))();
    local_b4 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar10 = (**(code **)(**(longlong **)(lVar9 + 0xd8) + 0x30))
                           (*(longlong **)(lVar9 + 0xd8),local_b4);
        if (lVar10 != local_b0) {
          uVar8 = (**(code **)(**(longlong **)(lVar9 + 0xd8) + 0x30))
                            (*(longlong **)(lVar9 + 0xd8),local_b4);
          lVar10 = FUN_004113f0(uVar8,&DAT_01cdd500);
          lVar11 = (**(code **)(**(longlong **)(lVar10 + 0x78) + 0x30))
                             (*(longlong **)(lVar10 + 0x78),*(undefined4 *)(lVar10 + 0x94));
          (**(code **)(*param_2 + 200))
                    (param_2,*(undefined4 *)(param_1 + 100),*(undefined4 *)(lVar11 + 0xec));
          iVar6 = (**(code **)(**(longlong **)(lVar10 + 0x70) + 0x28))
                            (*(longlong **)(lVar10 + 0x70));
          if ((iVar6 == 0) &&
             (iVar6 = (**(code **)(**(longlong **)(lVar9 + 0xd8) + 0x28))
                                (*(longlong **)(lVar9 + 0xd8)), 1 < iVar6)) {
            lVar10 = (**(code **)(**(longlong **)(lVar9 + 0xd8) + 0x30))
                               (*(longlong **)(lVar9 + 0xd8),
                                (longlong)(local_b4 + 1) % 2 & 0xffffffff);
            lVar10 = (**(code **)(**(longlong **)(lVar10 + 0x70) + 0x30))
                               (*(longlong **)(lVar10 + 0x70),0);
            (**(code **)(*param_2 + 0xc0))
                      (param_2,*(undefined4 *)(param_1 + 100),*(undefined4 *)(lVar10 + 0x18));
          }
          else {
            lVar10 = (**(code **)(**(longlong **)(lVar10 + 0x70) + 0x30))
                               (*(longlong **)(lVar10 + 0x70),0);
            (**(code **)(*param_2 + 0xc0))
                      (param_2,*(undefined4 *)(param_1 + 100),*(undefined4 *)(lVar10 + 0x18));
          }
        }
        local_b4 = local_b4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_005fd640(param_2[0xf],4);
  FUN_005fcd80(param_2[0xe],L"Tahoma");
  FUN_005fce30(param_2[0xe],6);
  iVar3 = FUN_005fdff0(param_2,&DAT_01ac31a0);
  uVar7 = FUN_0040c840(((double)*(int *)(param_1 + 0x48) * 3.5999999999999996) / (double)iVar3);
  FUN_005fce30(param_2[0xe],uVar7);
  FUN_005fce70(param_2[0xe],0);
  if (param_3 == '\0') {
    uVar7 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x88));
    uVar7 = FUN_01a90ee0(uVar7);
    FUN_005fc860(param_2[0xe],uVar7);
    uVar7 = FUN_005fd4d0(*(undefined8 *)(param_1 + 0x88));
    uVar7 = FUN_01a90ee0(uVar7);
    FUN_005fd4e0(param_2[0xf],uVar7);
  }
  else {
    uVar7 = FUN_01a90ee0(0xffffff);
    FUN_005fc860(param_2[0xe],uVar7);
    uVar7 = FUN_01a90ee0(0xffffff);
    FUN_005fd4e0(param_2[0xf],uVar7);
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    lVar9 = *(longlong *)(param_1 + 0x50);
    if (lVar9 != 0) {
      lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x78) + 0x30))
                        (*(longlong **)(lVar9 + 0x78),*(undefined4 *)(lVar9 + 0x94));
      if (*(char *)(param_1 + 0x90) == '\0') {
        iVar3 = FUN_005fdff0(param_2,&DAT_01ac31b4);
        iVar6 = FUN_0040c770((double)*(int *)(param_1 + 0x48) * 1.5);
        (**(code **)(*param_2 + 0x120))
                  (param_2,*(int *)(param_1 + 0x60) - iVar3 / 2,(*(int *)(lVar9 + 0xec) - iVar6) + 1
                   ,&DAT_01ac31b4);
      }
      else {
        iVar3 = FUN_005fdff0(param_2,&DAT_01ac31a0);
        iVar6 = FUN_0040c770((double)*(int *)(param_1 + 0x48) * 1.5);
        (**(code **)(*param_2 + 0x120))
                  (param_2,*(int *)(param_1 + 0x60) - iVar3 / 2,(*(int *)(lVar9 + 0xec) - iVar6) + 1
                   ,&DAT_01ac31a0);
      }
    }
  }
  else {
    lVar9 = (**(code **)(**(longlong **)(local_b0 + 0x78) + 0x30))
                      (*(longlong **)(local_b0 + 0x78),*(undefined4 *)(local_b0 + 0x94));
    if (*(char *)(param_1 + 0x90) == '\0') {
      iVar3 = FUN_005fdff0(param_2,&DAT_01ac31b4);
      iVar6 = FUN_0040c770((double)*(int *)(param_1 + 0x48) * 1.5);
      (**(code **)(*param_2 + 0x120))
                (param_2,*(int *)(param_1 + 0x60) - iVar3 / 2,(*(int *)(lVar9 + 0xec) - iVar6) + 1,
                 &DAT_01ac31b4);
    }
    else {
      iVar3 = FUN_005fdff0(param_2,&DAT_01ac31a0);
      iVar6 = FUN_0040c770((double)*(int *)(param_1 + 0x48) * 1.5);
      (**(code **)(*param_2 + 0x120))
                (param_2,*(int *)(param_1 + 0x60) - iVar3 / 2,(*(int *)(lVar9 + 0xec) - iVar6) + 1,
                 &DAT_01ac31a0);
    }
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    uVar8 = FUN_01abda80(*(longlong *)(param_1 + 0x58));
    cVar2 = FUN_004113d0(uVar8,&PTR_FUN_01cb9c30);
    if (cVar2 != '\0') {
      lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
      lVar10 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 200))
                (param_2,(*(int *)(lVar9 + 0xe8) - *(int *)(param_1 + 0x48) / 2) + -2,
                 ((*(int *)(lVar10 + 0xec) - *(int *)(param_1 + 0x48) / 2) -
                 *(int *)(param_1 + 0x48)) + -1);
      lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
      lVar10 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(lVar9 + 0xec) + *(int *)(param_1 + 0x48) / 2 + 1,
                 ((*(int *)(lVar10 + 0xec) - *(int *)(param_1 + 0x48) / 2) -
                 *(int *)(param_1 + 0x48)) + -1);
      lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
      lVar10 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(lVar9 + 0xec) + *(int *)(param_1 + 0x48) / 2 + 1,
                 *(int *)(lVar10 + 0xec) + -1);
      lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
      lVar10 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,(*(int *)(lVar9 + 0xe8) - *(int *)(param_1 + 0x48) / 2) + -2,
                 *(int *)(lVar10 + 0xec) + -1);
      lVar9 = FUN_01abd500(*(undefined8 *)(param_1 + 0x58));
      lVar10 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,(*(int *)(lVar9 + 0xe8) - *(int *)(param_1 + 0x48) / 2) + -2,
                 ((*(int *)(lVar10 + 0xec) - *(int *)(param_1 + 0x48) / 2) -
                 *(int *)(param_1 + 0x48)) + -1);
      lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 200))
                (param_2,*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x48) / 2,
                 *(int *)(lVar9 + 0xec) + -2);
      lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x48) / 2,
                 (*(int *)(lVar9 + 0xec) - *(int *)(param_1 + 0x48) / 2) - *(int *)(param_1 + 0x48))
      ;
      iVar3 = *(int *)(param_1 + 0x48);
      lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,(*(int *)(param_1 + 0x60) + iVar3 / 2) - iVar3,
                 (*(int *)(lVar9 + 0xec) - *(int *)(param_1 + 0x48) / 2) - *(int *)(param_1 + 0x48))
      ;
      iVar3 = *(int *)(param_1 + 0x48);
      lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,(*(int *)(param_1 + 0x60) + iVar3 / 2) - iVar3,*(int *)(lVar9 + 0xec) + -2)
      ;
      lVar9 = FUN_01abd550(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x48) / 2,
                 *(int *)(lVar9 + 0xec) + -2);
      goto LAB_01ac2fd0;
    }
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x78);
      lVar9 = (**(code **)(*plVar1 + 0x30))
                        (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x94));
      (**(code **)(*param_2 + 200))
                (param_2,*(undefined4 *)(param_1 + 0x60),*(int *)(lVar9 + 0xec) + -1);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x48) / 2,
                 *(int *)(lVar9 + 0xec) - *(int *)(param_1 + 0x48) / 2);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x48) / 2,
                 (*(int *)(lVar9 + 0xec) - *(int *)(param_1 + 0x48) / 2) - *(int *)(param_1 + 0x48))
      ;
      iVar3 = *(int *)(param_1 + 0x48);
      (**(code **)(*param_2 + 0xc0))
                (param_2,(*(int *)(param_1 + 0x60) + iVar3 / 2) - iVar3,
                 (*(int *)(lVar9 + 0xec) - iVar3 / 2) - iVar3);
      (**(code **)(*param_2 + 0xc0))
                (param_2,(*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x48) / 2) -
                         *(int *)(param_1 + 0x48),
                 *(int *)(lVar9 + 0xec) - *(int *)(param_1 + 0x48) / 2);
      (**(code **)(*param_2 + 0xc0))
                (param_2,*(undefined4 *)(param_1 + 0x60),*(int *)(lVar9 + 0xec) + -1);
    }
  }
  else {
    lVar9 = (**(code **)(**(longlong **)(local_b0 + 0x78) + 0x30))
                      (*(longlong **)(local_b0 + 0x78),*(undefined4 *)(local_b0 + 0x94));
    (**(code **)(*param_2 + 200))
              (param_2,*(undefined4 *)(param_1 + 0x60),*(int *)(lVar9 + 0xec) + -1);
    (**(code **)(*param_2 + 0xc0))
              (param_2,*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x48) / 2,
               *(int *)(lVar9 + 0xec) - *(int *)(param_1 + 0x48) / 2);
    iVar3 = *(int *)(param_1 + 0x48);
    (**(code **)(*param_2 + 0xc0))
              (param_2,*(int *)(param_1 + 0x60) + iVar3 / 2,
               (*(int *)(lVar9 + 0xec) - iVar3 / 2) - iVar3);
    iVar3 = *(int *)(param_1 + 0x48);
    (**(code **)(*param_2 + 0xc0))
              (param_2,(*(int *)(param_1 + 0x60) + iVar3 / 2) - iVar3,
               (*(int *)(lVar9 + 0xec) - iVar3 / 2) - iVar3);
    iVar3 = *(int *)(param_1 + 0x48);
    (**(code **)(*param_2 + 0xc0))
              (param_2,(*(int *)(param_1 + 0x60) + iVar3 / 2) - iVar3,
               *(int *)(lVar9 + 0xec) - iVar3 / 2);
    (**(code **)(*param_2 + 0xc0))
              (param_2,*(undefined4 *)(param_1 + 0x60),*(int *)(lVar9 + 0xec) + -1);
  }
LAB_01ac2fd0:
  if (*(longlong *)(param_1 + 0x58) == 0) {
    lVar9 = *(longlong *)(param_1 + 0x50);
    if (lVar9 != 0) {
      lVar9 = (**(code **)(**(longlong **)(lVar9 + 0x78) + 0x30))
                        (*(longlong **)(lVar9 + 0x78),*(undefined4 *)(lVar9 + 0x94));
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x78);
      lVar10 = (**(code **)(*plVar1 + 0x30))
                         (plVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x94));
      FUN_01d2b170(param_1,*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x48) / 2,
                   (*(int *)(lVar9 + 0xec) - *(int *)(param_1 + 0x48) / 2) -
                   *(int *)(param_1 + 0x48),*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x48) / 2,
                   *(undefined4 *)(lVar10 + 0xec));
    }
  }
  else {
    lVar9 = (**(code **)(**(longlong **)(local_b0 + 0x78) + 0x30))
                      (*(longlong **)(local_b0 + 0x78),*(undefined4 *)(local_b0 + 0x94));
    iVar3 = *(int *)(param_1 + 0x48) / 2;
    lVar10 = (**(code **)(**(longlong **)(local_b0 + 0x78) + 0x30))
                       (*(longlong **)(local_b0 + 0x78),*(undefined4 *)(local_b0 + 0x94));
    FUN_01d2b170(param_1,*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x48) / 2,
                 (*(int *)(lVar9 + 0xec) - iVar3) - *(int *)(param_1 + 0x48),
                 *(int *)(param_1 + 0x60) + iVar3,*(undefined4 *)(lVar10 + 0xec));
  }
  return;
}

