/* Ghidra address: 018cee90 */
/* Ghidra symbol: FUN_018cee90 */


void FUN_018cee90(longlong param_1,longlong param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int local_98;
  int local_94;
  undefined8 local_90 [12];
  
  local_90[0] = 0;
  bVar5 = false;
  iVar11 = *(int *)(*(longlong *)(param_1 + 0x38) + 0xc);
  iVar2 = *(int *)(param_1 + 8);
  dVar13 = *(double *)(param_1 + 0x88);
  dVar15 = *(double *)(param_1 + 0x90);
  dVar1 = *(double *)(param_1 + 0x130);
  dVar16 = 0.0;
  iVar8 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x30))();
  local_98 = 0;
  iVar12 = iVar2;
  dVar14 = dVar15;
  local_94 = iVar11;
  bVar6 = false;
  if (-1 < iVar8 + -1) {
    do {
      bVar5 = bVar6;
      uVar9 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x20))
                        (*(longlong **)(param_2 + 0x80),local_98);
      cVar7 = FUN_004113d0(uVar9,&PTR_FUN_0192bd20);
      if (((cVar7 != '\0') &&
          (lVar10 = (**(code **)(**(longlong **)(param_2 + 0x80) + 0x20))
                              (*(longlong **)(param_2 + 0x80),local_98),
          *(char *)(lVar10 + 0xc5) != '\0')) && (*(char *)(lVar10 + 0x2b0) == '\0')) {
        bVar5 = true;
        *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
        *(undefined8 *)(param_1 + 0x160) = 0xbff0000000000000;
        if (*(char *)(param_1 + 0xf1) != '\0') {
          dVar16 = dVar14 - *(double *)(param_1 + 0xf8);
        }
        *(int *)(*(longlong *)(param_1 + 0x38) + 0xc) = local_94;
        *(double *)(param_1 + 0x130) = dVar1 + *(double *)(lVar10 + 0x98);
        *(int *)(param_1 + 8) = iVar2;
        *(double *)(param_1 + 0x88) = dVar13 + *(double *)(lVar10 + 0x98);
        *(double *)(param_1 + 0x90) =
             (dVar14 - *(double *)(param_2 + 0x238)) + *(double *)(lVar10 + 0xa0);
        FUN_018c9eb0(param_1,*(undefined8 *)(lVar10 + 0x2a8));
        if ((*(int *)(param_1 + 0x158) != -1) && (0.0 <= *(double *)(param_1 + 0x160))) {
          dVar14 = *(double *)(param_1 + 0x160) + dVar16;
          local_94 = *(int *)(param_1 + 0x158);
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x38) + 0xc);
        if (iVar11 < iVar3) {
          dVar15 = *(double *)(param_1 + 0x90);
          iVar11 = iVar3;
          iVar12 = *(int *)(param_1 + 8);
        }
        else if (iVar3 == iVar11) {
          iVar3 = *(int *)(param_1 + 8);
          if (iVar12 < iVar3) {
            dVar15 = *(double *)(param_1 + 0x90);
            iVar12 = iVar3;
          }
          else if ((iVar3 == iVar12) && (dVar15 < *(double *)(param_1 + 0x90))) {
            dVar15 = *(double *)(param_1 + 0x90);
          }
        }
      }
      local_98 = local_98 + 1;
      iVar8 = iVar8 + -1;
      bVar6 = bVar5;
    } while (iVar8 != 0);
  }
  if (bVar5) {
    *(int *)(*(longlong *)(param_1 + 0x38) + 0xc) = iVar11;
    *(int *)(param_1 + 8) = iVar12;
    *(double *)(param_1 + 0x88) = dVar1;
    if (1 < *(int *)(param_1 + 8)) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x128) + 400);
      (**(code **)(*plVar4 + 0x18))(plVar4,local_90,*(int *)(param_1 + 8) + -1);
      dVar13 = (double)FUN_0180d800(local_90[0]);
      *(double *)(param_1 + 0x88) =
           *(double *)(param_1 + 0x88) + dVar13 * *(double *)PTR_DAT_02002c30;
    }
    *(double *)(param_1 + 0x90) = dVar15;
    *(double *)(param_1 + 0x130) = dVar1;
  }
  FUN_00414480(local_90);
  return;
}

