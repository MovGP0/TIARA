/* Ghidra address: 018cddc0 */
/* Ghidra symbol: FUN_018cddc0 */


void FUN_018cddc0(longlong param_1)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  double dVar13;
  double dVar14;
  int local_54;
  
  cVar8 = FUN_004113d0(*(undefined8 *)(param_1 + 0xa8),&PTR_FUN_0192d4e8);
  if (cVar8 != '\0') {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + 0xc);
    *piVar1 = *piVar1 + 1;
  }
  cVar8 = FUN_004113d0(*(undefined8 *)(param_1 + 0xa8),&PTR_FUN_0192e818);
  if ((cVar8 == '\0') &&
     (cVar8 = FUN_004113d0(*(undefined8 *)(param_1 + 0xa8),&PTR_FUN_019322b8), cVar8 == '\0')) {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0xa8) =
         *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x148);
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
  }
  FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 0x158,
               *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x10));
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x278))(*(longlong **)(param_1 + 0xa8));
  FUN_01973050(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x40),*(undefined8 *)(param_1 + 0xa8)
              );
  if (*(char *)(*(longlong *)(param_1 + 0xa8) + 0xc5) != '\0') {
    if ((*(char *)(*(longlong *)(param_1 + 0xa8) + 0x1c9) == '\0') ||
       (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x22c) < 2)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    dVar13 = *(double *)(*(longlong *)(param_1 + 0xa0) + 0x88) +
             *(double *)(*(longlong *)(param_1 + 0xa8) + 0xa8);
    pdVar2 = (double *)(*(longlong *)(param_1 + 0xa0) + 0x30);
    if (*pdVar2 <= dVar13 && dVar13 != *pdVar2 || bVar7) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x128);
      cVar8 = *(char *)(lVar4 + 0x1a2);
      if ((cVar8 == '\0') || (bVar7)) {
        plVar11 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x38);
        if (cVar8 != '\0') {
          dVar13 = *(double *)(lVar4 + 0x238);
          dVar3 = *(double *)PTR_DAT_02002c30;
          puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0xa0) + 0x38);
          iVar9 = (**(code **)*puVar5)(puVar5);
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x128);
          dVar14 = (double)(**(code **)(**(longlong **)(param_1 + 0xa0) + 0x20))
                                     (*(longlong **)(param_1 + 0xa0));
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x128);
          FUN_018b9fb0(puVar5,iVar9 + -1,
                       *(double *)(*(longlong *)(param_1 + 0xa0) + 0x30) /
                       *(double *)PTR_DAT_02002c30 + *(double *)(lVar4 + 0x1a8) +
                       *(double *)(lVar4 + 0x1c8),
                       dVar14 / *(double *)PTR_DAT_02002c30 + *(double *)(lVar6 + 0x1e0) +
                       *(double *)(lVar6 + 0x178),*(undefined1 *)(lVar6 + 0x1b1));
          *(double *)(*(longlong *)(param_1 + 0xa0) + 0x30) = dVar13 * dVar3;
        }
        iVar9 = (**(code **)*plVar11)(plVar11);
        if (*(int *)((longlong)plVar11 + 0xc) < iVar9 + -1) {
          *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        }
        else {
          (**(code **)(*plVar11 + 0x40))
                    (plVar11,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x128));
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x88) = 0;
        plVar11 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x148) + 0x80);
        iVar9 = (**(code **)(*plVar11 + 0x30))(plVar11);
        FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x150),(longlong)iVar9);
        iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x140) + 0x10);
        local_54 = 0;
        if (-1 < iVar9 + -1) {
          do {
            uVar10 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x140),local_54);
            (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x58))
                      (*(longlong **)(param_1 + 0xa0),uVar10);
            local_54 = local_54 + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
      else {
        *(double *)(*(longlong *)(param_1 + 0xa0) + 0x30) =
             *(double *)(*(longlong *)(param_1 + 0xa0) + 0x30) +
             *(double *)(*(longlong *)(param_1 + 0xa8) + 0xa8);
      }
    }
    iVar9 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x80) + 0x30))();
    local_54 = 0;
    if (-1 < iVar9 + -1) {
      do {
        plVar11 = *(longlong **)(*(longlong *)(param_1 + 0xa8) + 0x80);
        plVar11 = (longlong *)(**(code **)(*plVar11 + 0x20))(plVar11,local_54);
        if (plVar11[0x27] == *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x148)) {
          FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 0x158,plVar11[2]);
          (**(code **)(*plVar11 + 0x278))(plVar11);
          FUN_01973050(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x40),plVar11);
          (**(code **)(*plVar11 + 0x280))(plVar11);
          FUN_01973030(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x40),plVar11,plVar11[0x2b],0
                      );
          plVar12 = (longlong *)(**(code **)(*plVar11 + -0x30))(*plVar11);
          (**(code **)(*plVar12 + 0x78))
                    (plVar12,0xff,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x148));
          FUN_00414ad0(plVar12 + 0x1f,plVar11[0x1f]);
          plVar12[0x22] = plVar11[0x22];
          if ((*(byte *)(plVar11 + 0x1a) & 0x40) == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12,plVar11);
          }
          else {
            FUN_0194f920(plVar12,plVar11,1);
          }
          (**(code **)(*plVar12 + 200))
                    (plVar12,(double)plVar12[0x13] +
                             *(double *)(*(longlong *)(param_1 + 0xa0) + 0x88));
          (**(code **)(*plVar11 + 0x288))(plVar11);
        }
        local_54 = local_54 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(double *)(*(longlong *)(param_1 + 0xa0) + 0x88) =
         *(double *)(*(longlong *)(param_1 + 0xa0) + 0x88) +
         *(double *)(*(longlong *)(param_1 + 0xa8) + 0xa8);
  }
  FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x40) + 0x158,
               *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x10));
  FUN_019730a0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x40),*(undefined8 *)(param_1 + 0xa8)
              );
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x288))(*(longlong **)(param_1 + 0xa8));
  cVar8 = FUN_004113d0(*(undefined8 *)(param_1 + 0xa8),&PTR_FUN_0192d4e8);
  if (cVar8 != '\0') {
    plVar11 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x98);
    (**(code **)(*plVar11 + 0x18))
              (plVar11,*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x148),
               *(undefined4 *)(*(longlong *)(param_1 + 0xa0) + 0xc));
  }
  cVar8 = FUN_004113d0(*(undefined8 *)(param_1 + 0xa8),&PTR_FUN_0192e818);
  if ((cVar8 != '\0') ||
     (cVar8 = FUN_004113d0(*(undefined8 *)(param_1 + 0xa8),&PTR_FUN_019322b8), cVar8 != '\0')) {
    FUN_018cd940(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xa8),0);
  }
  return;
}

