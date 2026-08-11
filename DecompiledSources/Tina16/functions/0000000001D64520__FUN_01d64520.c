/* Ghidra address: 01d64520 */
/* Ghidra symbol: FUN_01d64520 */


void FUN_01d64520(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  int unaff_EDI;
  char unaff_R13B;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double unaff_XMM8_Qa;
  double unaff_XMM9_Qa;
  double unaff_XMM10_Qa;
  double unaff_XMM11_Qa;
  double unaff_XMM12_Qa;
  double unaff_XMM13_Qa;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar16;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0 [19];
  
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  bVar8 = (byte)param_4;
  if ((byte)(bVar8 - 8) < 8) {
    uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar8 - 8 & 0x1f);
    bVar9 = (uVar3 & 0x11) != 0;
    uVar6 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar9);
  }
  else {
    uVar6 = 0;
    bVar9 = false;
  }
  if (bVar9) {
    return;
  }
  if (bVar8 < 8) {
    bVar9 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << (bVar8 & 0x1f) & 0xa2U) != 0;
  }
  else {
    bVar9 = false;
  }
  if (bVar9) {
    lVar7 = 0;
    if (*(char *)(param_1 + 299) == '\x03') {
      dVar10 = (double)FUN_0040c760(*(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x20));
      dVar10 = *(double *)(param_1 + 8) * dVar10;
      dVar11 = (double)FUN_0040af80(-dVar10);
      dVar10 = (double)FUN_0040af80(dVar10);
      *(double *)(param_1 + 0xd8) = (dVar10 + dVar11) * 0.5;
      if (1e-10 < *(double *)(param_1 + 0x20)) {
        dVar12 = (double)FUN_0040c760(*(double *)(param_1 + 0x10) / *(double *)(param_1 + 0x20));
        *(double *)(param_1 + 0xe0) = (dVar10 - dVar11) * 0.5 * dVar12;
      }
      else {
        *(double *)(param_1 + 0xe0) = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x10);
      }
      if (1e-10 < *(double *)(param_1 + 0x10)) {
        dVar12 = (double)FUN_0040c760(*(double *)(param_1 + 0x20) / *(double *)(param_1 + 0x10));
        *(double *)(param_1 + 0xe8) = (dVar10 - dVar11) * 0.5 * dVar12;
        lVar7 = param_1;
      }
      else {
        *(double *)(param_1 + 0xe8) = *(double *)(param_1 + 8) * *(double *)(param_1 + 0x20);
        lVar7 = param_1;
      }
    }
  }
  else if (((*(byte *)(param_3 + 0x88) & 0x40) != 0) ||
          (lVar7 = 0, (*(byte *)(param_3 + 0x88) & 0x80) != 0)) {
    if ((*(char *)(param_1 + 299) == '\x01') || (*(char *)(param_1 + 299) == '\x04')) {
      dVar10 = (double)FUN_016ed780(param_3,param_4);
      if (dVar10 < *(double *)(param_1 + 0x40) || dVar10 == *(double *)(param_1 + 0x40)) {
        unaff_R13B = '\0';
      }
      else {
        unaff_R13B = '\x01';
      }
    }
    cVar2 = *(char *)(param_1 + 299);
    lVar7 = 0;
    if (cVar2 != '\x01') {
      if (cVar2 == '\x02') {
        uVar13 = FUN_016ed780(param_3,param_4);
        uVar14 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
        uVar4 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
        lVar7 = FUN_01d5f3c0(param_1 + 0xf0,param_1 + 0xf8,param_1 + 0x100,
                             *(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138),
                             *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x70),
                             *(undefined8 *)(param_1 + 0x78),uVar13,uVar14,CONCAT44(uVar16,uVar4),
                             *(undefined8 *)(param_1 + 200));
        goto LAB_01d64acb;
      }
      if (cVar2 != '\x04') goto LAB_01d64acb;
    }
    if (cVar2 == '\x01') {
      uVar14 = FUN_016ed780(param_3,param_4);
      lVar7 = FUN_01d5fb40(param_1 + 0xf0,param_1 + 0xf8,param_1 + 0x100,
                           *(undefined8 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138),
                           *(undefined8 *)(param_1 + 0x140),*(undefined8 *)(param_1 + 0x40),
                           *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),uVar14,
                           *(undefined8 *)(param_3 + 0x4b0),*(undefined8 *)(param_1 + 200),
                           param_1 + 0x170);
    }
    if (unaff_R13B != '\0') {
      dVar10 = (double)FUN_016ed780(param_3,param_4);
      unaff_EDI = FUN_01b10d30(*(undefined8 *)(param_3 + 0x4b0),dVar10 - *(double *)(param_1 + 0x40)
                              );
      iVar5 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      if (unaff_EDI == iVar5) {
        unaff_EDI = unaff_EDI + -1;
      }
      if (unaff_EDI == -1) {
        return;
      }
      lVar7 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      uVar14 = *(undefined8 *)(lVar7 + (longlong)unaff_EDI * 8);
      lVar7 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
      uVar13 = *(undefined8 *)(lVar7 + (longlong)(unaff_EDI + 1) * 8);
      if ((unaff_EDI != 0) &&
         ((*(char *)(param_1 + 0x128) == '\x02' || (*(char *)(param_1 + 0x128) == '\x03')))) {
        lVar7 = FUN_01b10cd0(*(undefined8 *)(param_3 + 0x4b0));
        uVar1 = *(undefined8 *)(lVar7 + (longlong)(unaff_EDI + -1) * 8);
        dVar10 = (double)FUN_016ed780(param_3,param_4);
        FUN_01d5e100(dVar10 - *(double *)(param_1 + 0x40),uVar1,uVar14,uVar13,local_c0,&local_c8,
                     &local_d0);
      }
      if (((unaff_EDI == 0) || (*(char *)(param_1 + 0x128) == '\x03')) ||
         (lVar7 = param_1, *(char *)(param_1 + 0x128) == '\x01')) {
        dVar10 = (double)FUN_016ed780(param_3,param_4);
        lVar7 = FUN_01d5e320(dVar10 - *(double *)(param_1 + 0x40),uVar14,uVar13,&local_d8,&local_e0)
        ;
      }
    }
  }
LAB_01d64acb:
  if (bVar8 < 8) {
    bVar9 = ((int)CONCAT71((int7)((ulonglong)lVar7 >> 8),1) << (bVar8 & 0x1f) & 0xa2U) != 0;
  }
  else {
    bVar9 = false;
  }
  if ((!bVar9) && (*(char *)(param_1 + 299) != '\x03')) {
    if (((*(byte *)(param_3 + 0x88) & 0x40) != 0) && ((*(byte *)(param_3 + 0x88) & 0x10) == 0)) {
      uVar14 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 1),
                            *(undefined1 *)(param_1 + 2),0);
      *(undefined8 *)(param_1 + 0x108) = uVar14;
      uVar14 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 3),
                            *(undefined1 *)(param_1 + 4),0);
      *(undefined8 *)(param_1 + 0x110) = uVar14;
      uVar14 = FUN_016ee570(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 5));
      *(undefined8 *)(param_1 + 0x118) = uVar14;
      uVar14 = FUN_016ee570(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 6));
      *(undefined8 *)(param_1 + 0x120) = uVar14;
    }
    if (((*(byte *)(param_3 + 0x88) & 0x40) == 0) && ((*(byte *)(param_3 + 0x88) & 0x80) == 0)) {
      return;
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    if (((*(char *)(param_1 + 299) == '\x01') || (*(char *)(param_1 + 299) == '\x04')) &&
       (unaff_R13B != '\0')) {
      if ((unaff_EDI != 0) &&
         ((*(char *)(param_1 + 0x128) == '\x02' || (*(char *)(param_1 + 0x128) == '\x03')))) {
        unaff_XMM8_Qa =
             *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)(unaff_EDI + -1) * 8) *
             local_c0[0] +
             *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)unaff_EDI * 8) * local_c8 +
             *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)(unaff_EDI + 1) * 8) * local_d0;
        uVar14 = FUN_00b90620(*(undefined8 *)
                               (*(longlong *)(param_1 + 0x148) + (longlong)(unaff_EDI + -1) * 8),
                              *(undefined8 *)
                               (*(longlong *)(param_1 + 0x148) + (longlong)unaff_EDI * 8));
        unaff_XMM12_Qa =
             (double)FUN_00b90620(uVar14,*(undefined8 *)
                                          (*(longlong *)(param_1 + 0x148) +
                                          (longlong)(unaff_EDI + 1) * 8));
        uVar14 = FUN_00b90650(*(undefined8 *)
                               (*(longlong *)(param_1 + 0x148) + (longlong)(unaff_EDI + -1) * 8),
                              *(undefined8 *)
                               (*(longlong *)(param_1 + 0x148) + (longlong)unaff_EDI * 8));
        unaff_XMM13_Qa =
             (double)FUN_00b90650(uVar14,*(undefined8 *)
                                          (*(longlong *)(param_1 + 0x148) +
                                          (longlong)(unaff_EDI + 1) * 8));
      }
      if ((((*(char *)(param_1 + 0x128) == '\x01') || (unaff_EDI == 0)) ||
          (((unaff_EDI != 0 &&
            ((*(char *)(param_1 + 0x128) == '\x02' || (*(char *)(param_1 + 0x128) == '\x03')))) &&
           ((unaff_XMM12_Qa < unaff_XMM8_Qa || (unaff_XMM8_Qa < unaff_XMM13_Qa)))))) &&
         ((unaff_EDI == 0 || (*(char *)(param_1 + 0x128) != '\x02')))) {
        unaff_XMM8_Qa =
             *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)unaff_EDI * 8) * local_d8 +
             *(double *)(*(longlong *)(param_1 + 0x148) + (longlong)(unaff_EDI + 1) * 8) * local_e0;
      }
      if ((unaff_EDI != 0) &&
         ((*(char *)(param_1 + 0x128) == '\x02' || (*(char *)(param_1 + 0x128) == '\x03')))) {
        unaff_XMM10_Qa =
             *(double *)(*(longlong *)(param_1 + 0x150) + (longlong)(unaff_EDI + -1) * 8) *
             local_c0[0] +
             *(double *)(*(longlong *)(param_1 + 0x150) + (longlong)unaff_EDI * 8) * local_c8 +
             *(double *)(*(longlong *)(param_1 + 0x150) + (longlong)(unaff_EDI + 1) * 8) * local_d0;
        uVar14 = FUN_00b90620(*(undefined8 *)
                               (*(longlong *)(param_1 + 0x150) + (longlong)(unaff_EDI + -1) * 8),
                              *(undefined8 *)
                               (*(longlong *)(param_1 + 0x150) + (longlong)unaff_EDI * 8));
        unaff_XMM12_Qa =
             (double)FUN_00b90620(uVar14,*(undefined8 *)
                                          (*(longlong *)(param_1 + 0x150) +
                                          (longlong)(unaff_EDI + 1) * 8));
        uVar14 = FUN_00b90650(*(undefined8 *)
                               (*(longlong *)(param_1 + 0x150) + (longlong)(unaff_EDI + -1) * 8),
                              *(undefined8 *)
                               (*(longlong *)(param_1 + 0x150) + (longlong)unaff_EDI * 8));
        unaff_XMM13_Qa =
             (double)FUN_00b90650(uVar14,*(undefined8 *)
                                          (*(longlong *)(param_1 + 0x150) +
                                          (longlong)(unaff_EDI + 1) * 8));
      }
      if ((((*(char *)(param_1 + 0x128) == '\x01') || (unaff_EDI == 0)) ||
          (((unaff_EDI != 0 &&
            ((*(char *)(param_1 + 0x128) == '\x02' || (*(char *)(param_1 + 0x128) == '\x03')))) &&
           ((unaff_XMM12_Qa < unaff_XMM10_Qa || (unaff_XMM10_Qa < unaff_XMM13_Qa)))))) &&
         ((unaff_EDI == 0 || (*(char *)(param_1 + 0x128) != '\x02')))) {
        unaff_XMM10_Qa =
             *(double *)(*(longlong *)(param_1 + 0x150) + (longlong)unaff_EDI * 8) * local_d8 +
             *(double *)(*(longlong *)(param_1 + 0x150) + (longlong)(unaff_EDI + 1) * 8) * local_e0;
      }
      if ((unaff_EDI != 0) &&
         ((*(char *)(param_1 + 0x128) == '\x02' || (*(char *)(param_1 + 0x128) == '\x03')))) {
        unaff_XMM9_Qa =
             *(double *)(*(longlong *)(param_1 + 0x158) + (longlong)(unaff_EDI + -1) * 8) *
             local_c0[0] +
             *(double *)(*(longlong *)(param_1 + 0x158) + (longlong)unaff_EDI * 8) * local_c8 +
             *(double *)(*(longlong *)(param_1 + 0x158) + (longlong)(unaff_EDI + 1) * 8) * local_d0;
        uVar14 = FUN_00b90620(*(undefined8 *)
                               (*(longlong *)(param_1 + 0x158) + (longlong)(unaff_EDI + -1) * 8),
                              *(undefined8 *)
                               (*(longlong *)(param_1 + 0x158) + (longlong)unaff_EDI * 8));
        unaff_XMM12_Qa =
             (double)FUN_00b90620(uVar14,*(undefined8 *)
                                          (*(longlong *)(param_1 + 0x158) +
                                          (longlong)(unaff_EDI + 1) * 8));
        uVar14 = FUN_00b90650(*(undefined8 *)
                               (*(longlong *)(param_1 + 0x158) + (longlong)(unaff_EDI + -1) * 8),
                              *(undefined8 *)
                               (*(longlong *)(param_1 + 0x158) + (longlong)unaff_EDI * 8));
        unaff_XMM13_Qa =
             (double)FUN_00b90650(uVar14,*(undefined8 *)
                                          (*(longlong *)(param_1 + 0x158) +
                                          (longlong)(unaff_EDI + 1) * 8));
      }
      if ((((*(char *)(param_1 + 0x128) == '\x01') || (unaff_EDI == 0)) ||
          (((unaff_EDI != 0 &&
            ((*(char *)(param_1 + 0x128) == '\x02' || (*(char *)(param_1 + 0x128) == '\x03')))) &&
           ((unaff_XMM12_Qa < unaff_XMM9_Qa || (unaff_XMM9_Qa < unaff_XMM13_Qa)))))) &&
         ((unaff_EDI == 0 || (*(char *)(param_1 + 0x128) != '\x02')))) {
        unaff_XMM9_Qa =
             *(double *)(*(longlong *)(param_1 + 0x158) + (longlong)unaff_EDI * 8) * local_d8 +
             *(double *)(*(longlong *)(param_1 + 0x158) + (longlong)(unaff_EDI + 1) * 8) * local_e0;
      }
      if ((unaff_EDI != 0) &&
         ((*(char *)(param_1 + 0x128) == '\x02' || (*(char *)(param_1 + 0x128) == '\x03')))) {
        unaff_XMM11_Qa =
             *(double *)(*(longlong *)(param_1 + 0x160) + (longlong)(unaff_EDI + -1) * 8) *
             local_c0[0] +
             *(double *)(*(longlong *)(param_1 + 0x160) + (longlong)unaff_EDI * 8) * local_c8 +
             *(double *)(*(longlong *)(param_1 + 0x160) + (longlong)(unaff_EDI + 1) * 8) * local_d0;
        uVar14 = FUN_00b90620(*(undefined8 *)
                               (*(longlong *)(param_1 + 0x160) + (longlong)(unaff_EDI + -1) * 8),
                              *(undefined8 *)
                               (*(longlong *)(param_1 + 0x160) + (longlong)unaff_EDI * 8));
        unaff_XMM12_Qa =
             (double)FUN_00b90620(uVar14,*(undefined8 *)
                                          (*(longlong *)(param_1 + 0x160) +
                                          (longlong)(unaff_EDI + 1) * 8));
        uVar14 = FUN_00b90650(*(undefined8 *)
                               (*(longlong *)(param_1 + 0x160) + (longlong)(unaff_EDI + -1) * 8),
                              *(undefined8 *)
                               (*(longlong *)(param_1 + 0x160) + (longlong)unaff_EDI * 8));
        unaff_XMM13_Qa =
             (double)FUN_00b90650(uVar14,*(undefined8 *)
                                          (*(longlong *)(param_1 + 0x160) +
                                          (longlong)(unaff_EDI + 1) * 8));
      }
      if ((((*(char *)(param_1 + 0x128) == '\x01') || (unaff_EDI == 0)) ||
          (((unaff_EDI != 0 &&
            ((*(char *)(param_1 + 0x128) == '\x02' || (*(char *)(param_1 + 0x128) == '\x03')))) &&
           ((unaff_XMM12_Qa < unaff_XMM11_Qa || (unaff_XMM11_Qa < unaff_XMM13_Qa)))))) &&
         ((unaff_EDI == 0 || (*(char *)(param_1 + 0x128) != '\x02')))) {
        unaff_XMM11_Qa =
             *(double *)(*(longlong *)(param_1 + 0x160) + (longlong)unaff_EDI * 8) * local_d8 +
             *(double *)(*(longlong *)(param_1 + 0x160) + (longlong)(unaff_EDI + 1) * 8) * local_e0;
      }
    }
    cVar2 = *(char *)(param_1 + 299);
    if (cVar2 != '\x01') {
      if (cVar2 == '\x02') {
        dVar11 = 0.0;
        dVar15 = 0.0;
        iVar5 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
        dVar10 = 0.0;
        dVar12 = 0.0;
        if (0 < iVar5) {
          do {
            lVar7 = (longlong)iVar5;
            dVar11 = dVar10;
            dVar15 = dVar12;
            if (*(double *)(*(longlong *)(param_1 + 0x130) + lVar7 * 8) != 0.0) {
              dVar11 = dVar10 + *(double *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar5 * 8) *
                                (*(double *)(*(longlong *)(param_1 + 0x148) + lVar7 * 8) -
                                *(double *)(param_1 + 0x108));
              dVar15 = dVar12 + *(double *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar5 * 8) *
                                (*(double *)(*(longlong *)(param_1 + 0x158) + lVar7 * 8) -
                                *(double *)(param_1 + 0x110));
            }
            iVar5 = iVar5 + -1;
            dVar10 = dVar11;
            dVar12 = dVar15;
          } while (iVar5 != 0);
        }
        *(double *)(param_1 + 0x98) =
             *(double *)(param_1 + 0x98) -
             ((dVar11 + *(double *)(param_1 + 0x108) * *(double *)(param_1 + 0x80)) -
             *(double *)(param_1 + 0x108) * *(double *)(param_1 + 0xf0));
        *(double *)(param_1 + 0xa0) =
             *(double *)(param_1 + 0xa0) -
             ((dVar15 + *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x80)) -
             *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0xf0));
        dVar11 = 0.0;
        dVar15 = 0.0;
        iVar5 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
        dVar10 = 0.0;
        dVar12 = 0.0;
        if (0 < iVar5) {
          do {
            lVar7 = (longlong)iVar5;
            dVar11 = dVar10;
            dVar15 = dVar12;
            if (*(double *)(*(longlong *)(param_1 + 0x138) + lVar7 * 8) != 0.0) {
              dVar11 = dVar10 + *(double *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar5 * 8) *
                                (*(double *)(*(longlong *)(param_1 + 0x160) + lVar7 * 8) -
                                *(double *)(param_1 + 0x120));
              dVar15 = dVar12 + *(double *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar5 * 8) *
                                (*(double *)(*(longlong *)(param_1 + 0x150) + lVar7 * 8) -
                                *(double *)(param_1 + 0x118));
            }
            iVar5 = iVar5 + -1;
            dVar10 = dVar11;
            dVar12 = dVar15;
          } while (iVar5 != 0);
        }
        *(double *)(param_1 + 0x98) =
             *(double *)(param_1 + 0x98) +
             ((dVar11 + *(double *)(param_1 + 0x120) * *(double *)(param_1 + 0x88)) -
             *(double *)(param_1 + 0x120) * *(double *)(param_1 + 0xf8));
        *(double *)(param_1 + 0xa0) =
             *(double *)(param_1 + 0xa0) +
             ((dVar15 + *(double *)(param_1 + 0x118) * *(double *)(param_1 + 0x88)) -
             *(double *)(param_1 + 0x118) * *(double *)(param_1 + 0xf8));
        dVar11 = 0.0;
        dVar15 = 0.0;
        iVar5 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
        dVar10 = 0.0;
        dVar12 = 0.0;
        if (0 < iVar5) {
          do {
            lVar7 = (longlong)iVar5;
            dVar11 = dVar10;
            dVar15 = dVar12;
            if (*(double *)(*(longlong *)(param_1 + 0x140) + lVar7 * 8) != 0.0) {
              dVar11 = dVar10 + *(double *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar5 * 8) *
                                (*(double *)(*(longlong *)(param_1 + 0x158) + lVar7 * 8) -
                                *(double *)(param_1 + 0x110));
              dVar15 = dVar12 + *(double *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar5 * 8) *
                                (*(double *)(*(longlong *)(param_1 + 0x148) + lVar7 * 8) -
                                *(double *)(param_1 + 0x108));
            }
            iVar5 = iVar5 + -1;
            dVar10 = dVar11;
            dVar12 = dVar15;
          } while (iVar5 != 0);
        }
        *(double *)(param_1 + 0x98) =
             *(double *)(param_1 + 0x98) +
             ((dVar11 + *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x90)) -
             *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x100));
        *(double *)(param_1 + 0xa0) =
             *(double *)(param_1 + 0xa0) +
             ((dVar15 + *(double *)(param_1 + 0x108) * *(double *)(param_1 + 0x90)) -
             *(double *)(param_1 + 0x108) * *(double *)(param_1 + 0x100));
        return;
      }
      if (cVar2 != '\x04') {
        return;
      }
    }
    if (cVar2 == '\x01') {
      dVar11 = 0.0;
      dVar15 = 0.0;
      iVar5 = FUN_01b10ce0(*(undefined8 *)(param_3 + 0x4b0));
      dVar10 = 0.0;
      dVar12 = 0.0;
      if (0 < iVar5) {
        do {
          lVar7 = (longlong)iVar5;
          dVar11 = dVar10;
          dVar15 = dVar12;
          if (*(double *)(*(longlong *)(param_1 + 0x130) + lVar7 * 8) != 0.0) {
            dVar11 = dVar10 + *(double *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar5 * 8) *
                              (*(double *)(*(longlong *)(param_1 + 0x148) + lVar7 * 8) -
                              *(double *)(param_1 + 0x108));
            dVar15 = dVar12 + *(double *)(*(longlong *)(param_1 + 0x130) + (longlong)iVar5 * 8) *
                              (*(double *)(*(longlong *)(param_1 + 0x158) + lVar7 * 8) -
                              *(double *)(param_1 + 0x110));
          }
          iVar5 = iVar5 + -1;
          dVar10 = dVar11;
          dVar12 = dVar15;
        } while (iVar5 != 0);
      }
      *(double *)(param_1 + 0x98) =
           *(double *)(param_1 + 0x98) -
           ((dVar11 + *(double *)(param_1 + 0x108) * *(double *)(param_1 + 0x80)) -
           *(double *)(param_1 + 0x108) * *(double *)(param_1 + 0xf0)) * *(double *)(param_1 + 0x50)
      ;
      *(double *)(param_1 + 0xa0) =
           *(double *)(param_1 + 0xa0) -
           ((dVar15 + *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x80)) -
           *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0xf0)) * *(double *)(param_1 + 0x50)
      ;
      dVar10 = 0.0;
      dVar11 = 0.0;
      if (unaff_R13B != '\0') {
        dVar10 = (unaff_XMM11_Qa - *(double *)(param_1 + 0x120)) * *(double *)(param_1 + 0xf8);
        dVar11 = (unaff_XMM10_Qa - *(double *)(param_1 + 0x118)) * *(double *)(param_1 + 0xf8);
        iVar5 = *(int *)(param_1 + 0x170);
        if (0 < iVar5) {
          do {
            lVar7 = (longlong)iVar5;
            if (*(double *)(*(longlong *)(param_1 + 0x138) + lVar7 * 8) != 0.0) {
              dVar10 = dVar10 + *(double *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar5 * 8) *
                                (*(double *)(*(longlong *)(param_1 + 0x160) + lVar7 * 8) -
                                *(double *)(param_1 + 0x120));
              dVar11 = dVar11 + *(double *)(*(longlong *)(param_1 + 0x138) + (longlong)iVar5 * 8) *
                                (*(double *)(*(longlong *)(param_1 + 0x150) + lVar7 * 8) -
                                *(double *)(param_1 + 0x118));
            }
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      *(double *)(param_1 + 0x98) =
           *(double *)(param_1 + 0x98) +
           dVar10 + *(double *)(param_1 + 0x120) * *(double *)(param_1 + 0x88);
      *(double *)(param_1 + 0xa0) =
           *(double *)(param_1 + 0xa0) +
           dVar11 + *(double *)(param_1 + 0x118) * *(double *)(param_1 + 0x88);
      dVar10 = 0.0;
      dVar11 = 0.0;
      if (unaff_R13B != '\0') {
        dVar10 = (unaff_XMM9_Qa - *(double *)(param_1 + 0x110)) * *(double *)(param_1 + 0x100);
        dVar11 = (unaff_XMM8_Qa - *(double *)(param_1 + 0x108)) * *(double *)(param_1 + 0x100);
        iVar5 = *(int *)(param_1 + 0x170);
        if (0 < iVar5) {
          do {
            lVar7 = (longlong)iVar5;
            if (*(double *)(*(longlong *)(param_1 + 0x140) + lVar7 * 8) != 0.0) {
              dVar10 = dVar10 + *(double *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar5 * 8) *
                                (*(double *)(*(longlong *)(param_1 + 0x158) + lVar7 * 8) -
                                *(double *)(param_1 + 0x110));
              dVar11 = dVar11 + *(double *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar5 * 8) *
                                (*(double *)(*(longlong *)(param_1 + 0x148) + lVar7 * 8) -
                                *(double *)(param_1 + 0x108));
            }
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      *(double *)(param_1 + 0x98) =
           *(double *)(param_1 + 0x98) +
           *(double *)(param_1 + 0x50) *
           (dVar10 + *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x90));
      *(double *)(param_1 + 0xa0) =
           *(double *)(param_1 + 0xa0) +
           *(double *)(param_1 + 0x50) *
           (dVar11 + *(double *)(param_1 + 0x108) * *(double *)(param_1 + 0x90));
    }
    if (unaff_R13B == '\0') {
      *(double *)(param_1 + 0x98) =
           *(double *)(param_1 + 0x98) +
           *(double *)(param_1 + 0x68) *
           (*(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x50) +
           *(double *)(param_1 + 0x120));
      *(double *)(param_1 + 0xa0) =
           *(double *)(param_1 + 0xa0) +
           *(double *)(param_1 + 0x68) *
           (*(double *)(param_1 + 0x108) * *(double *)(param_1 + 0x50) +
           *(double *)(param_1 + 0x118));
      return;
    }
    *(double *)(param_1 + 0x98) =
         *(double *)(param_1 + 0x98) +
         *(double *)(param_1 + 0x68) *
         (unaff_XMM9_Qa * *(double *)(param_1 + 0x50) + unaff_XMM11_Qa);
    *(double *)(param_1 + 0xa0) =
         *(double *)(param_1 + 0xa0) +
         *(double *)(param_1 + 0x68) *
         (unaff_XMM8_Qa * *(double *)(param_1 + 0x50) + unaff_XMM10_Qa);
    return;
  }
  cVar2 = *(char *)(param_1 + 299);
  if (1 < (byte)(cVar2 - 1U)) {
    if (cVar2 == '\x03') {
      *(undefined8 *)(param_1 + 0x98) = 0;
      *(undefined8 *)(param_1 + 0xa0) = 0;
      return;
    }
    if (cVar2 != '\x04') {
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  return;
}

