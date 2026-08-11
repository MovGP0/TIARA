/* Ghidra address: 016f0eb0 */
/* Ghidra symbol: FUN_016f0eb0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_016f0eb0(longlong param_1,undefined1 param_2,char param_3,undefined1 *param_4,
                 double *param_5)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_90 [12];
  
  uVar6 = FUN_00b92140(0);
  cVar3 = '\0';
  DAT_0210fee0 = 0;
  DAT_0210fed8 = -1;
  *param_4 = 1;
  *(undefined4 *)(param_1 + 0x2ec) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x348) = 0;
  dVar11 = 1.0;
  *param_5 = *(double *)(param_1 + 0x3d8);
  if (*(char *)(param_1 + 0x32a) != '\0' || param_3 != '\0') {
    iVar5 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + -1;
    iVar4 = 1;
    if (0 < iVar5) {
      do {
        dVar7 = (double)FUN_0040c850(*(double *)
                                      (*(longlong *)(param_1 + 0x118) + (longlong)iVar4 * 8) -
                                     *(double *)
                                      (*(longlong *)(param_1 + 0x128) + (longlong)iVar4 * 8));
        dVar8 = (double)FUN_0040c850(*(undefined8 *)
                                      (*(longlong *)(param_1 + 0x128) + (longlong)iVar4 * 8));
        if (((*(char *)(param_1 + 0x32a) != '\0') &&
            (dVar9 = *(double *)(param_1 + 0x418) * dVar8 + *(double *)(param_1 + 0x408),
            dVar9 < dVar7)) && (local_90[0] = dVar9 / dVar7, local_90[0] < dVar11)) {
          cVar3 = '\x01';
          DAT_0210fed8 = iVar4;
          *param_5 = 1.0;
          dVar11 = local_90[0];
        }
        if ((param_3 != '\0') && (cVar3 == '\0')) {
          dVar10 = (double)FUN_0040c850(*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x118) + (longlong)iVar4 * 8));
          dVar9 = (double)FUN_0040c850(*(undefined8 *)
                                        (*(longlong *)(param_1 + 0x138) + (longlong)iVar4 * 8));
          dVar9 = *(double *)(param_1 + 0x3c0) * dVar9;
          if (dVar9 < dVar8) {
            dVar9 = dVar8;
          }
          if (dVar9 < dVar10) {
            dVar9 = dVar10;
          }
          dVar8 = *(double *)(param_1 + 0x3c8) * dVar9 + *(double *)(param_1 + 0x3d0);
          if (dVar8 < dVar7) {
            *param_5 = dVar8;
            *param_4 = 0;
            cVar3 = '\x01';
            *(int *)(param_1 + 0x2ec) = iVar4;
            if (*(char *)(param_1 + 0x32a) == '\0') goto LAB_016f12ec;
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((*(char *)(param_1 + 0x32a) != '\0') || ((param_3 != '\0' && (cVar3 == '\0')))) {
    iVar4 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310);
    iVar5 = iVar4 + *(int *)(param_1 + 0x314) + -1;
    if (iVar4 <= iVar5) {
      iVar5 = (iVar5 - iVar4) + 1;
      do {
        dVar7 = (double)FUN_0040c850(*(double *)
                                      (*(longlong *)(param_1 + 0x118) + (longlong)iVar4 * 8) -
                                     *(double *)
                                      (*(longlong *)(param_1 + 0x128) + (longlong)iVar4 * 8));
        dVar8 = (double)FUN_0040c850(*(undefined8 *)
                                      (*(longlong *)(param_1 + 0x128) + (longlong)iVar4 * 8));
        if (((*(char *)(param_1 + 0x32a) != '\0') &&
            (dVar9 = *(double *)(param_1 + 0x418) * dVar8 + *(double *)(param_1 + 0x410),
            dVar9 < dVar7)) && (local_90[0] = dVar9 / dVar7, local_90[0] < dVar11)) {
          cVar3 = '\x01';
          DAT_0210fed8 = iVar4;
          *param_5 = 1.0;
          dVar11 = local_90[0];
        }
        if ((param_3 != '\0') && (cVar3 == '\0')) {
          dVar10 = (double)FUN_0040c850(*(undefined8 *)
                                         (*(longlong *)(param_1 + 0x118) + (longlong)iVar4 * 8));
          dVar9 = (double)FUN_0040c850(*(undefined8 *)
                                        (*(longlong *)(param_1 + 0x138) + (longlong)iVar4 * 8));
          dVar9 = *(double *)(param_1 + 0x3c0) * dVar9;
          if (dVar9 < dVar8) {
            dVar9 = dVar8;
          }
          if (dVar9 < dVar10) {
            dVar9 = dVar10;
          }
          dVar8 = *(double *)(param_1 + 0x3c8) * dVar9 + *(double *)(param_1 + 0x3d8);
          if (dVar8 < dVar7) {
            *param_5 = dVar8;
            *param_4 = 0;
            cVar3 = '\x01';
            *(int *)(param_1 + 0x2ec) = iVar4;
            if (*(char *)(param_1 + 0x32a) == '\0') break;
          }
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
LAB_016f12ec:
  iVar4 = 0;
  while (iVar4 < *(int *)(param_1 + 0x2dc)) {
    iVar4 = iVar4 + 1;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2b8) + -8 + (longlong)iVar4 * 8);
    cVar1 = FUN_016ef670(lVar2,param_1,param_2,local_90);
    if ((cVar1 != '\0') && (local_90[0] < dVar11)) {
      DAT_0210fee0 = *(longlong *)(lVar2 + 0x128);
      cVar3 = '\x01';
      *param_5 = 1.0;
      dVar11 = local_90[0];
    }
  }
  if (param_3 != '\0') {
    iVar4 = 0;
    while ((iVar4 < *(int *)(param_1 + 0x2e0) && (cVar3 == '\0'))) {
      iVar4 = iVar4 + 1;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + -8 + (longlong)iVar4 * 8);
      FUN_016ef480(lVar2,param_1);
      if (*(char *)(param_1 + 0x331) != '\0') {
        *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(lVar2 + 0x128);
        cVar3 = '\x01';
        *param_5 = 1.0;
      }
    }
  }
  if (dVar11 < 1.0 - _DAT_01f96760) {
    cVar3 = '\x01';
    dVar11 = (double)FUN_00b90620(*(undefined8 *)PTR_DAT_02002208,dVar11);
    FUN_01b08810(param_1,dVar11);
    iVar5 = *(int *)(param_1 + 0x30c) + *(int *)(param_1 + 0x310) + *(int *)(param_1 + 0x314) + -1;
    iVar4 = 1;
    if (0 < iVar5) {
      do {
        lVar2 = (longlong)iVar4;
        dVar7 = *(double *)(*(longlong *)(param_1 + 0x128) + lVar2 * 8);
        dVar7 = dVar7 + dVar11 * (*(double *)(*(longlong *)(param_1 + 0x118) + lVar2 * 8) - dVar7);
        if (dVar7 <= 100000000000000.0) {
          if (dVar7 < -100000000000000.0) {
            dVar7 = -100000000000000.0;
          }
        }
        else {
          dVar7 = 100000000000000.0;
        }
        *(double *)(*(longlong *)(param_1 + 0x118) + lVar2 * 8) = dVar7;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if ((*(int *)(param_1 + 0x2ec) == -1) && (-1 < DAT_0210fed8)) {
    *(int *)(param_1 + 0x2ec) = DAT_0210fed8;
  }
  if ((*(longlong *)(param_1 + 0x348) == 0) && (DAT_0210fee0 != 0)) {
    *(longlong *)(param_1 + 0x348) = DAT_0210fee0;
  }
  if (cVar3 != '\0') {
    *param_4 = 0;
  }
  dVar11 = (double)FUN_00b92140(uVar6);
  *(double *)PTR_DAT_020050f0 = dVar11 + *(double *)PTR_DAT_020050f0;
  return cVar3;
}

