/* Ghidra address: 00e30570 */
/* Ghidra symbol: FUN_00e30570 */


void FUN_00e30570(int *param_1,longlong param_2,longlong param_3,byte param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined7 uVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 in_stack_fffffffffffffe70;
  int *piVar31;
  double *pdVar32;
  undefined4 uVar33;
  double local_138;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f4;
  char local_e9;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined1 local_c0 [160];
  
  uVar33 = (undefined4)((ulonglong)in_stack_fffffffffffffe70 >> 0x20);
  local_d8 = 0.0;
  local_d0 = 0.0;
  local_e0 = 0.0;
  dVar16 = 0.0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  uVar10 = FUN_016eebb0(param_2,(short)param_1[0x4a],0);
  iVar6 = (int)uVar10;
  if ((byte)(param_4 - 8) < 8) {
    bVar15 = ((int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1) << (param_4 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar15 = false;
  }
  if (bVar15) {
    if (param_4 != 0xc) {
      return;
    }
    dVar16 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x22));
    FUN_016ed7f0(param_3,0xc);
    uVar10 = FUN_0040c850();
    FUN_00b90620(uVar10,0x380b38fb9daa78e4);
    dVar28 = (double)FUN_0040c2f0();
    dVar28 = (double)FUN_0040af80(*(double *)(param_1 + 0xa6) * dVar28);
    uVar10 = FUN_0040c760((*(double *)(param_1 + 0x4c) * 1.10449808e-22 * dVar16) / 3.0 +
                          (*(double *)(param_1 + 0xa8) * *(double *)(param_1 + 0x22) *
                          *(double *)(param_1 + 0x22)) /
                          (dVar28 * *(double *)(param_1 + 0xb8) * *(double *)(param_1 + 0x66) *
                           *(double *)(param_1 + 0xb6) * *(double *)(param_1 + 0x8c)));
    FUN_016ed220(param_2,(char)param_1[2] + '\v',uVar10,0);
    return;
  }
  if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
    if ((char)param_1[0x54] == '\0') {
      uVar10 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                            *(undefined1 *)((longlong)param_1 + 0xb),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x4e) = uVar10;
    }
    if (*(char *)((longlong)param_1 + 0x151) == '\0') {
      uVar10 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                            *(undefined1 *)((longlong)param_1 + 0xd),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x50) = uVar10;
    }
    if (*(char *)((longlong)param_1 + 0x152) != '\0') {
      return;
    }
    uVar10 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                          *(undefined1 *)((longlong)param_1 + 0xe),(char)param_1[3],0);
    *(undefined8 *)(param_1 + 0x52) = uVar10;
    return;
  }
  if ((*(char *)(param_3 + 0x327) == '\0') &&
     (((*(byte *)(param_3 + 0x88) & 0x40) != 0 || ((*(byte *)(param_3 + 0x88) & 0x80) != 0)))) {
    dVar16 = (double)FUN_01b08a30(param_3,1);
    dVar16 = *(double *)(param_3 + 0x10) / dVar16;
    lVar11 = (longlong)(iVar6 + 0xf);
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar11 * 8) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + lVar11 * 8);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar11 * 8);
    dVar28 = (dVar16 + 1.0) * *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar11 * 8) -
             dVar16 * *(double *)(*(longlong *)(param_3 + 0x1c8) + lVar11 * 8);
    lVar13 = (longlong)(iVar6 + 0xe);
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + lVar13 * 8);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8);
    dVar25 = (dVar16 + 1.0) * *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar13 * 8) -
             dVar16 * *(double *)(*(longlong *)(param_3 + 0x1c8) + lVar13 * 8);
    lVar13 = (longlong)(iVar6 + 0x10);
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + lVar13 * 8);
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8);
    dVar29 = (dVar16 + 1.0) * *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar13 * 8) -
             dVar16 * *(double *)(*(longlong *)(param_3 + 0x1c8) + lVar13 * 8);
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x11) * 8) =
         *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar11 * 8) -
         *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8);
    *(undefined8 *)(param_1 + 0x14) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x11) * 8);
  }
  else if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
    if (((*(byte *)(param_3 + 0x88) & 4) == 0) || (*(char *)((longlong)param_1 + 10) == '\0')) {
      dVar28 = (double)*param_1 *
               (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[0xc] * 8) -
               *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
      dVar25 = (double)*param_1 *
               (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[0xb] * 8) -
               *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
      dVar29 = (double)*param_1 *
               (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[9] * 8) -
               *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
      *(undefined8 *)(param_1 + 0xe) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0xe) * 8);
      *(undefined8 *)(param_1 + 0x12) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0xf) * 8);
      *(undefined8 *)(param_1 + 0x14) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x11) * 8);
      *(undefined8 *)(param_1 + 0x16) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x10) * 8);
      dVar26 = dVar28 - dVar29;
      dVar21 = dVar25 - dVar29;
      dVar27 = *(double *)(param_1 + 0xe);
      dVar24 = *(double *)(param_1 + 0x16);
      dVar22 = dVar28 - *(double *)(param_1 + 0x12);
      dVar23 = dVar26 - *(double *)(param_1 + 0x14);
      dVar30 = *(double *)(param_1 + 0xe);
      dVar20 = dVar29 - *(double *)(param_1 + 0x16);
      if (param_1[1] < 0) {
        local_138 = ((*(double *)(param_1 + 0x20) -
                     (*(double *)(param_1 + 0x1e) - *(double *)(param_1 + 0x26)) * dVar23) -
                    *(double *)(param_1 + 0x22) * (dVar21 - (dVar27 - dVar24))) +
                    *(double *)(param_1 + 0x24) * dVar20;
      }
      else {
        local_138 = (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x1e) * dVar23) +
                    *(double *)(param_1 + 0x26) * dVar22 +
                    *(double *)(param_1 + 0x22) * (dVar25 - dVar30) +
                    *(double *)(param_1 + 0x24) * dVar20;
      }
      dVar19 = *(double *)(param_1 + 0x18);
      dVar1 = *(double *)(param_1 + 0x1c);
      dVar2 = *(double *)(param_1 + 0x1e);
      dVar3 = *(double *)(param_1 + 0x1a);
      uVar10 = FUN_0040c850();
      uVar17 = FUN_0040c850(*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c));
      dVar18 = (double)FUN_00b90620(uVar10,uVar17);
      dVar4 = *(double *)(param_3 + 0x3d8);
      if ((((param_4 != 5) && ((*(byte *)(param_3 + 0x88) & 0x40) == 0)) &&
          ((*(byte *)(param_3 + 0x88) & 0x80) == 0)) &&
         ((*(char *)(param_3 + 0x32f) != '\0' &&
          (dVar19 = (double)FUN_0040c850((dVar19 + dVar1 + dVar2 * dVar23 + dVar3 * dVar22) -
                                         (*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c))
                                        ), dVar19 < *(double *)(param_3 + 0x3c8) * (dVar18 + dVar4))
          ))) {
        dVar22 = (double)FUN_0040c850(dVar22);
        uVar10 = FUN_0040c850(dVar28);
        uVar17 = FUN_0040c850(*(undefined8 *)(param_1 + 0x12));
        dVar19 = (double)FUN_00b90620(uVar10,uVar17);
        if (dVar22 < *(double *)(param_3 + 0x3c8) * dVar19 + *(double *)(param_3 + 0x3d0)) {
          dVar23 = (double)FUN_0040c850(dVar23);
          uVar10 = FUN_0040c850(dVar26);
          uVar17 = FUN_0040c850(*(undefined8 *)(param_1 + 0x14));
          dVar22 = (double)FUN_00b90620(uVar10,uVar17);
          if (dVar23 < *(double *)(param_3 + 0x3c8) * dVar22 + *(double *)(param_3 + 0x3d0)) {
            dVar30 = (double)FUN_0040c850(dVar25 - dVar30);
            uVar10 = FUN_0040c850(dVar25);
            uVar17 = FUN_0040c850(*(undefined8 *)(param_1 + 0xe));
            dVar23 = (double)FUN_00b90620(uVar10,uVar17);
            if (dVar30 < *(double *)(param_3 + 0x3c8) * dVar23 + *(double *)(param_3 + 0x3d0)) {
              dVar30 = (double)FUN_0040c850(dVar20);
              uVar10 = FUN_0040c850(dVar29);
              uVar17 = FUN_0040c850(*(undefined8 *)(param_1 + 0x16));
              dVar23 = (double)FUN_00b90620(uVar10,uVar17);
              if (dVar30 < *(double *)(param_3 + 0x3c8) * dVar23 + *(double *)(param_3 + 0x3d0)) {
                dVar30 = (double)FUN_0040c850(local_138 - *(double *)(param_1 + 0x20));
                uVar10 = FUN_0040c850(local_138);
                uVar17 = FUN_0040c850(*(undefined8 *)(param_1 + 0x20));
                dVar23 = (double)FUN_00b90620(uVar10,uVar17);
                if (dVar30 < *(double *)(param_3 + 0x3c8) * dVar23 + *(double *)(param_3 + 0x3d8)) {
                  dVar28 = *(double *)(param_1 + 0x12);
                  dVar27 = *(double *)(param_1 + 0x14);
                  dVar25 = *(double *)(param_1 + 0xe);
                  dVar29 = *(double *)(param_1 + 0x16);
                  dVar24 = dVar25 - dVar29;
                  dVar30 = dVar25 - dVar28;
                  *(double *)(param_1 + 0x2a) =
                       (double)param_1[1] *
                       (*(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x1c));
                  if (param_4 < 8) {
                    bVar15 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (param_4 & 0x1f) &
                             0x60U) != 0;
                  }
                  else {
                    bVar15 = false;
                  }
                  if ((bVar15) && (*(char *)(param_3 + 0x330) != '\0')) {
                    local_d0 = *(double *)
                                (*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 1) * 8) +
                               *(double *)
                                (*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar6 + 1) * 8) +
                               *(double *)(param_1 + 0x86);
                    local_d8 = *(double *)
                                (*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 4) * 8) +
                               *(double *)
                                (*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar6 + 4) * 8) +
                               *(double *)(param_1 + 0x88);
                    local_e0 = *(double *)
                                (*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 7) * 8) +
                               *(double *)
                                (*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar6 + 7) * 8) +
                               *(double *)(param_1 + 0x8a);
                  }
                  goto LAB_00e32c98;
                }
              }
            }
          }
        }
      }
      local_e8 = (double)*param_1 * *(double *)(param_1 + 0x38);
      if (*(double *)(param_1 + 0x16) < 0.0) {
        dVar30 = *(double *)(param_1 + 0x10);
        dVar22 = (*(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x16) * 8) -
                 *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x18) * 8)) -
                 *(double *)(param_1 + 0x10);
        dVar23 = (double)FUN_0040c850(dVar21 - dVar30);
        dVar20 = (double)FUN_0040c850(dVar22);
        if (dVar20 < dVar23) {
LAB_00e31430:
          dVar21 = (double)FUN_00c432f0(dVar21,dVar27 - dVar24,local_e8,&local_e9);
          if (local_e9 != '\0') {
            FUN_016e9f80(param_2,param_3,local_e9,0x70);
          }
          dVar29 = dVar25 - dVar21;
        }
        else {
          iVar7 = FUN_00c42630(dVar21 - dVar30);
          iVar8 = FUN_00c42630(dVar22);
          if (iVar7 != iVar8) goto LAB_00e31430;
        }
        dVar25 = dVar21 + dVar29;
      }
      else {
        dVar27 = *(double *)(param_1 + 0xe);
        dVar23 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x16) * 8) -
                 *(double *)(param_1 + 0xe);
        dVar24 = (double)FUN_0040c850(dVar25 - dVar27);
        dVar30 = (double)FUN_0040c850(dVar23);
        if (dVar30 < dVar24) {
LAB_00e312a4:
          dVar25 = (double)FUN_00c432f0(dVar25,*(undefined8 *)(param_1 + 0xe),local_e8,&local_e9);
          if (local_e9 != '\0') {
            FUN_016e9f80(param_2,param_3,local_e9,0x6e);
          }
          dVar29 = dVar25 - dVar21;
        }
        else {
          iVar7 = FUN_00c42630(dVar25 - dVar27);
          iVar8 = FUN_00c42630(dVar23);
          if (iVar7 != iVar8) goto LAB_00e312a4;
        }
        dVar27 = *(double *)(param_1 + 0x16);
        dVar23 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x18) * 8) -
                 *(double *)(param_1 + 0x16);
        dVar24 = (double)FUN_0040c850(dVar29 - dVar27);
        dVar30 = (double)FUN_0040c850(dVar23);
        if (dVar24 <= dVar30) {
          iVar7 = FUN_00c42630(dVar29 - dVar27);
          iVar8 = FUN_00c42630(dVar23);
          if (iVar7 == iVar8) goto LAB_00e31487;
        }
        dVar29 = (double)FUN_00c43230(dVar29,*(undefined8 *)(param_1 + 0x16),&local_e9);
        if (local_e9 != '\0') {
          FUN_016e9f80(param_2,param_3,local_e9,0x6f);
        }
      }
LAB_00e31487:
      if (dVar29 < 0.0) {
        dVar27 = *(double *)(param_1 + 0x14);
        dVar23 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x19) * 8) -
                 *(double *)(param_1 + 0x14);
        dVar24 = (double)FUN_0040c850(dVar26 - dVar27);
        dVar30 = (double)FUN_0040c850(dVar23);
        if (dVar24 <= dVar30) {
          iVar7 = FUN_00c42630(dVar26 - dVar27);
          iVar8 = FUN_00c42630(dVar23);
          if (iVar7 == iVar8) goto LAB_00e31648;
        }
        dVar28 = (double)FUN_00c42ff0(dVar26,*(undefined8 *)(param_1 + 0x14),
                                      *(undefined8 *)(param_1 + 0x3c),
                                      *(undefined8 *)(param_1 + 0x34),&local_e9);
        dVar28 = dVar28 + dVar29;
        if (local_e9 != '\0') {
          FUN_016e9f80(param_2,param_3,local_e9,0x73);
        }
      }
      else if ((char)param_1[0x118] == '\0') {
        dVar27 = *(double *)(param_1 + 0x12);
        dVar23 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x17) * 8) -
                 *(double *)(param_1 + 0x12);
        dVar24 = (double)FUN_0040c850(dVar28 - dVar27);
        dVar30 = (double)FUN_0040c850(dVar23);
        if (dVar24 <= dVar30) {
          iVar7 = FUN_00c42630(dVar28 - dVar27);
          iVar8 = FUN_00c42630(dVar23);
          if (iVar7 == iVar8) goto LAB_00e31648;
        }
        dVar28 = (double)FUN_00c42ff0(dVar28,*(undefined8 *)(param_1 + 0x12),
                                      *(undefined8 *)(param_1 + 0x3c),
                                      *(undefined8 *)(param_1 + 0x36),&local_e9);
        if (local_e9 != '\0') {
          FUN_016e9f80(param_2,param_3,local_e9,0x72);
        }
      }
    }
    else {
      dVar28 = 0.0;
      dVar25 = 0.0;
      dVar29 = 0.0;
    }
  }
  else {
    if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
      if (*(char *)((longlong)param_1 + 10) == '\0') {
        if ((char)param_1[0x118] == '\0') {
          dVar28 = -1.0;
        }
        else {
          dVar28 = 0.0;
        }
        dVar25 = (double)*param_1 * *(double *)(param_1 + 0x32);
        dVar29 = 0.0;
      }
      else {
        dVar28 = 0.0;
        dVar25 = 0.0;
        dVar29 = 0.0;
      }
    }
    else {
      if ((char)param_1[0x118] == '\0') {
        dVar28 = (double)*param_1 * *(double *)(param_1 + 0x52);
      }
      else {
        dVar28 = 0.0;
      }
      dVar25 = (double)*param_1 * *(double *)(param_1 + 0x50);
      dVar29 = (double)*param_1 * *(double *)(param_1 + 0x4e);
    }
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x16) * 8) = 0;
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x18) * 8) = 0;
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x17) * 8) = 0;
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x19) * 8) = 0;
  }
LAB_00e31648:
  dVar27 = dVar28 - dVar29;
  dVar24 = dVar25 - dVar29;
  dVar30 = dVar25 - dVar28;
  if ((char)param_1[0x118] == '\0') {
    if (*(double *)(param_1 + 0x3c) * -3.0 < dVar28) {
      dVar23 = (double)FUN_00c42aa0(dVar28 / *(double *)(param_1 + 0x3c),
                                    *(undefined8 *)(param_1 + 0xc0),param_1 + 0x1a);
      *(double *)(param_1 + 0x1a) =
           (*(double *)(param_1 + 0xc0) * *(double *)(param_1 + 0x1a)) / *(double *)(param_1 + 0x3c)
           + *(double *)(param_3 + 0x430);
      *(double *)(param_1 + 0x18) =
           *(double *)(param_1 + 0xc0) * (dVar23 - 1.0) + *(double *)(param_3 + 0x430) * dVar28;
    }
    else {
      dVar23 = (*(double *)(param_1 + 0x3c) * 3.0) / (dVar28 * 2.718281828459045);
      dVar23 = dVar23 * dVar23 * dVar23;
      *(double *)(param_1 + 0x18) =
           -*(double *)(param_1 + 0xc0) * (dVar23 + 1.0) + *(double *)(param_3 + 0x430) * dVar28;
      *(double *)(param_1 + 0x1a) =
           (*(double *)(param_1 + 0xc0) * 3.0 * dVar23) / dVar28 + *(double *)(param_3 + 0x430);
    }
  }
  else {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  if (*(char *)(param_3 + 0xed6) == '\0') {
    if (*(double *)(param_1 + 0x3c) * -3.0 < dVar27) {
      dVar23 = (double)FUN_00c42aa0(dVar27 / *(double *)(param_1 + 0x3c),
                                    *(undefined8 *)(param_1 + 0xbe),param_1 + 0x1e);
      *(double *)(param_1 + 0x1e) =
           (*(double *)(param_1 + 0xbe) * *(double *)(param_1 + 0x1e)) / *(double *)(param_1 + 0x3c)
           + *(double *)(param_3 + 0x430);
      *(double *)(param_1 + 0x1c) =
           *(double *)(param_1 + 0xbe) * (dVar23 - 1.0) + *(double *)(param_3 + 0x430) * dVar27;
    }
    else {
      dVar23 = (*(double *)(param_1 + 0x3c) * 3.0) / (dVar27 * 2.718281828459045);
      dVar23 = dVar23 * dVar23 * dVar23;
      *(double *)(param_1 + 0x1c) =
           -*(double *)(param_1 + 0xbe) * (dVar23 + 1.0) + *(double *)(param_3 + 0x430) * dVar27;
      *(double *)(param_1 + 0x1e) =
           (*(double *)(param_1 + 0xbe) * 3.0 * dVar23) / dVar27 + *(double *)(param_3 + 0x430);
    }
  }
  else {
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  if (dVar29 < 0.0) {
    param_1[1] = -1;
  }
  else {
    param_1[1] = 1;
  }
  if (*(char *)(param_3 + 0xed6) == '\0') {
    if (param_1[1] == 1) {
      piVar31 = param_1;
      FUN_00e2dcf0(dVar29,dVar28,dVar25,&local_e8,param_1 + 0x2a,param_1);
      uVar33 = (undefined4)((ulonglong)piVar31 >> 0x20);
    }
    else {
      piVar31 = param_1;
      FUN_00e2dcf0(-dVar29,dVar27,dVar24,&local_e8,param_1 + 0x2a,param_1);
      uVar33 = (undefined4)((ulonglong)piVar31 >> 0x20);
    }
  }
  else {
    local_e8 = (double)*param_1 * *(double *)(param_1 + 0x6c);
    dVar23 = dVar24;
    if (param_1[1] == 1) {
      dVar23 = dVar25;
    }
    dVar23 = dVar23 - local_e8;
    lVar11 = *(longlong *)(param_2 + 0x130);
    if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x10))) {
      local_118 = dVar24;
      if (*(char *)(param_3 + 0xed7) == '\x01') {
        if (param_1[1] == 1) {
          local_118 = dVar25;
        }
        if (*(int *)(lVar11 + 0x10) == 0) {
          FUN_00594f90();
        }
        uVar9 = (**(code **)(*(longlong *)**(undefined8 **)(lVar11 + 8) + 0x38))
                          ((longlong *)**(undefined8 **)(lVar11 + 8),&local_118);
        lVar11 = *(longlong *)(param_2 + 0x130);
        if (*(int *)(lVar11 + 0x10) == 0) {
          FUN_00594f90();
        }
        plVar5 = (longlong *)**(undefined8 **)(lVar11 + 8);
        dVar21 = (double)(**(code **)(*plVar5 + 0x10))(plVar5,param_3,uVar9);
        dVar20 = dVar29;
        if (param_1[1] != 1) {
          dVar20 = -dVar29;
        }
        *(double *)(param_1 + 0x22) = dVar21 * dVar20;
        *(double *)(param_1 + 0x24) = dVar21 * dVar23;
        dVar20 = dVar29;
        if (param_1[1] != 1) {
          dVar20 = -dVar29;
        }
        *(double *)(param_1 + 0x2a) = dVar21 * dVar20 * dVar23;
      }
      else {
        if (param_1[1] == 1) {
          local_118 = dVar25;
        }
        local_110 = dVar29;
        if (param_1[1] != 1) {
          local_110 = -dVar29;
        }
        if (*(int *)(lVar11 + 0x10) == 0) {
          FUN_00594f90();
        }
        local_f4 = (**(code **)(*(longlong *)**(undefined8 **)(lVar11 + 8) + 0x38))
                             ((longlong *)**(undefined8 **)(lVar11 + 8),&local_118);
        lVar11 = *(longlong *)(param_2 + 0x130);
        if (*(int *)(lVar11 + 0x10) == 0) {
          FUN_00594f90();
        }
        plVar5 = (longlong *)**(undefined8 **)(lVar11 + 8);
        uVar10 = (**(code **)(*plVar5 + 0x28))(plVar5,param_3,&local_f4,&local_118);
        *(undefined8 *)(param_1 + 0x2a) = uVar10;
        lVar11 = *(longlong *)(param_2 + 0x130);
        if (*(int *)(lVar11 + 0x10) == 0) {
          FUN_00594f90();
        }
        plVar5 = (longlong *)**(undefined8 **)(lVar11 + 8);
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_108,param_3,&local_f4,&local_118);
        *(undefined8 *)(param_1 + 0x22) = local_108;
        *(undefined8 *)(param_1 + 0x24) = local_100;
      }
      param_1[0x26] = 0;
      param_1[0x27] = 0;
    }
  }
  *(double *)(param_1 + 0x2a) =
       *(double *)(param_1 + 0x2a) + (double)param_1[1] * *(double *)(param_1 + 0xc2) * dVar29;
  *(double *)(param_1 + 0x24) = *(double *)(param_1 + 0x24) + *(double *)(param_1 + 0xc2);
  *(double *)(param_1 + 0x38) = (double)*param_1 * local_e8;
  *(double *)(param_1 + 0x20) =
       (double)param_1[1] * *(double *)(param_1 + 0x2a) - *(double *)(param_1 + 0x1c);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  uVar12 = (undefined7)((ulonglong)param_3 >> 8);
  if (*(char *)(param_3 + 0xed6) == '\0') {
    if (param_4 < 8) {
      bVar15 = ((int)CONCAT71(uVar12,1) << (param_4 & 0x1f) & 0xe0U) != 0;
    }
    else {
      bVar15 = false;
    }
    if ((!bVar15) || (*(char *)(param_3 + 0x330) == '\0')) goto LAB_00e3255e;
    if (((*(double *)(param_1 + 0x5e) == 0.0) && (*(double *)(param_1 + 0x5a) == 0.0)) ||
       ((char)param_1[0x118] != '\0')) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0xc) * 8) = 0;
      param_1[0xb2] = 0;
      param_1[0xb3] = 0;
    }
    else if (*(double *)(param_1 + 0x78) <= dVar28) {
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0xc) * 8) =
           *(double *)(param_1 + 0x84) +
           dVar28 * (*(double *)(param_1 + 0x80) + dVar28 * (*(double *)(param_1 + 0x82) / 2.0));
      *(double *)(param_1 + 0xb2) =
           *(double *)(param_1 + 0x80) + *(double *)(param_1 + 0x82) * dVar28;
    }
    else {
      dVar23 = 1.0 - dVar28 / *(double *)(param_1 + 0x76);
      if (*(double *)(param_1 + 0xac) == *(double *)(param_1 + 0xae)) {
        if (*(double *)(param_1 + 0xac) == 0.5) {
          dVar20 = (double)FUN_0040c760(dVar23);
          dVar20 = 1.0 / dVar20;
          dVar21 = dVar20;
        }
        else {
          dVar20 = (double)FUN_0040c2f0(dVar23);
          dVar20 = (double)FUN_0040af80(-*(double *)(param_1 + 0xac) * dVar20);
          dVar21 = dVar20;
        }
      }
      else {
        if (*(double *)(param_1 + 0xac) == 0.5) {
          dVar20 = (double)FUN_0040c760(dVar23);
          dVar20 = 1.0 / dVar20;
        }
        else {
          dVar20 = (double)FUN_0040c2f0(dVar23);
          dVar20 = (double)FUN_0040af80(-*(double *)(param_1 + 0xac) * dVar20);
        }
        if (*(double *)(param_1 + 0xae) == 0.5) {
          dVar21 = (double)FUN_0040c760(dVar23);
          dVar21 = 1.0 / dVar21;
        }
        else {
          dVar21 = (double)FUN_0040c2f0(dVar23);
          dVar21 = (double)FUN_0040af80(-*(double *)(param_1 + 0xae) * dVar21);
        }
      }
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0xc) * 8) =
           *(double *)(param_1 + 0x76) *
           ((*(double *)(param_1 + 0x5e) * (1.0 - dVar23 * dVar20)) /
            (1.0 - *(double *)(param_1 + 0xac)) +
           (*(double *)(param_1 + 0x5a) * (1.0 - dVar23 * dVar21)) /
           (1.0 - *(double *)(param_1 + 0xae)));
      *(double *)(param_1 + 0xb2) =
           *(double *)(param_1 + 0x5e) * dVar20 + *(double *)(param_1 + 0x5a) * dVar21;
    }
    if ((*(double *)(param_1 + 0x60) == 0.0) && (*(double *)(param_1 + 0x5c) == 0.0)) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 10) * 8) = 0;
      param_1[0xb0] = 0;
      param_1[0xb1] = 0;
    }
    else if (*(double *)(param_1 + 0x78) <= dVar27) {
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 10) * 8) =
           *(double *)(param_1 + 0x7e) +
           dVar27 * (*(double *)(param_1 + 0x7a) + (dVar27 * *(double *)(param_1 + 0x7c)) / 2.0);
      *(double *)(param_1 + 0xb0) =
           *(double *)(param_1 + 0x7a) + dVar27 * *(double *)(param_1 + 0x7c);
    }
    else {
      dVar23 = 1.0 - dVar27 / *(double *)(param_1 + 0x76);
      if ((*(double *)(param_1 + 0xac) == 0.5) && (*(double *)(param_1 + 0xae) == 0.5)) {
        dVar20 = (double)FUN_0040c760(dVar23);
        dVar20 = 1.0 / dVar20;
        dVar21 = dVar20;
      }
      else {
        if (*(double *)(param_1 + 0xac) == 0.5) {
          dVar20 = (double)FUN_0040c760(dVar23);
          dVar20 = 1.0 / dVar20;
        }
        else {
          dVar20 = (double)FUN_0040c2f0(dVar23);
          dVar20 = (double)FUN_0040af80(-*(double *)(param_1 + 0xac) * dVar20);
        }
        if (*(double *)(param_1 + 0xae) == 0.5) {
          dVar21 = (double)FUN_0040c760(dVar23);
          dVar21 = 1.0 / dVar21;
        }
        else {
          dVar21 = (double)FUN_0040c2f0(dVar23);
          dVar21 = (double)FUN_0040af80(-*(double *)(param_1 + 0xae) * dVar21);
        }
      }
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 10) * 8) =
           *(double *)(param_1 + 0x76) *
           ((*(double *)(param_1 + 0x60) * (1.0 - dVar23 * dVar20)) /
            (1.0 - *(double *)(param_1 + 0xac)) +
           (*(double *)(param_1 + 0x5c) * (1.0 - dVar23 * dVar21)) /
           (1.0 - *(double *)(param_1 + 0xae)));
      *(double *)(param_1 + 0xb0) =
           *(double *)(param_1 + 0x60) * dVar20 + *(double *)(param_1 + 0x5c) * dVar21;
    }
    if ((param_4 == 6) && (*(char *)(param_3 + 0x330) != '\0')) {
      uVar10 = CONCAT44(uVar33,*(ushort *)(param_1 + 0x4a) + 10);
      FUN_00dafac0(param_2,param_3,&local_c8,local_c0,*(undefined8 *)(param_1 + 0xb0),uVar10,0,1);
      uVar33 = (undefined4)((ulonglong)uVar10 >> 0x20);
      *(double *)(param_1 + 0x1e) = *(double *)(param_1 + 0x1e) + local_c8;
      *(double *)(param_1 + 0x1c) =
           *(double *)(param_1 + 0x1c) +
           *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0xb) * 8);
      *(double *)(param_1 + 0x20) =
           *(double *)(param_1 + 0x20) -
           *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0xb) * 8);
      if ((char)param_1[0x118] == '\0') {
        uVar10 = CONCAT44(uVar33,*(ushort *)(param_1 + 0x4a) + 0xc);
        FUN_00dafac0(param_2,param_3,&local_c8,local_c0,*(undefined8 *)(param_1 + 0xb2),uVar10,0,1);
        uVar33 = (undefined4)((ulonglong)uVar10 >> 0x20);
        *(double *)(param_1 + 0x1a) = *(double *)(param_1 + 0x1a) + local_c8;
        *(double *)(param_1 + 0x18) =
             *(double *)(param_1 + 0x18) +
             *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0xd) * 8);
      }
    }
  }
  else {
LAB_00e3255e:
    param_1[0xb2] = 0;
    param_1[0xb3] = 0;
    param_1[0xb0] = 0;
    param_1[0xb1] = 0;
  }
  *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0xf) * 8) = dVar28;
  *(double *)(param_1 + 0x12) = dVar28;
  *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x11) * 8) = dVar27;
  *(double *)(param_1 + 0x14) = dVar27;
  *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0xe) * 8) = dVar25;
  *(double *)(param_1 + 0xe) = dVar25;
  *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 0x10) * 8) = dVar29;
  *(double *)(param_1 + 0x16) = dVar29;
  lVar11 = *(longlong *)(param_3 + 0x1b8);
  *(undefined8 *)(lVar11 + (longlong)(iVar6 + 0x13) * 8) = *(undefined8 *)(param_1 + 0x20);
  *(double *)(lVar11 + (longlong)(iVar6 + 0x12) * 8) =
       *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c);
  *(undefined8 *)(lVar11 + (longlong)(iVar6 + 0x14) * 8) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(lVar11 + (longlong)(iVar6 + 0x15) * 8) = *(undefined8 *)(param_1 + 0xb2);
  if (*(char *)(param_3 + 0xed6) == '\0') {
    if (param_4 < 8) {
      bVar15 = ((int)CONCAT71(uVar12,1) << (param_4 & 0x1f) & 0xe0U) != 0;
    }
    else {
      bVar15 = false;
    }
    if ((bVar15) && (*(char *)(param_3 + 0x330) != '\0')) {
      lVar13 = (longlong)(iVar6 + 1);
      local_d0 = *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8);
      lVar11 = (longlong)(iVar6 + 4);
      local_d8 = *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar11 * 8);
      lVar14 = (longlong)(iVar6 + 7);
      local_e0 = *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar14 * 8);
      if (param_1[1] < 1) {
        pdVar32 = &local_d8;
        FUN_01674280(dVar24,dVar25,dVar30,local_e8,*(undefined8 *)(param_1 + 0xbc),pdVar32,&local_d0
                     ,&local_e0,*(undefined8 *)(param_1 + 0x6a),*(undefined8 *)(param_1 + 0xba));
        uVar33 = (undefined4)((ulonglong)pdVar32 >> 0x20);
      }
      else {
        pdVar32 = &local_d0;
        FUN_01674280(dVar25,dVar24,dVar30,local_e8,*(undefined8 *)(param_1 + 0xbc),pdVar32,&local_d8
                     ,&local_e0,*(undefined8 *)(param_1 + 0x6a),*(undefined8 *)(param_1 + 0xba));
        uVar33 = (undefined4)((ulonglong)pdVar32 >> 0x20);
      }
      *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar11 * 8) = local_d8;
      *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8) = local_d0;
      *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar14 * 8) = local_e0;
      dVar23 = *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar6 + 0xe) * 8);
      dVar20 = *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar6 + 0x10) * 8);
      dVar21 = *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar6 + 0xf) * 8);
      if (param_4 == 5) {
        local_d0 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 1) * 8) * 2.0 +
                   *(double *)(param_1 + 0x86);
        local_d8 = *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar11 * 8) * 2.0 +
                   *(double *)(param_1 + 0x88);
        local_e0 = *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar14 * 8) * 2.0 +
                   *(double *)(param_1 + 0x8a);
      }
      else {
        local_d0 = *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8) +
                   *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar13 * 8) +
                   *(double *)(param_1 + 0x86);
        local_d8 = *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar11 * 8) +
                   *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar11 * 8) +
                   *(double *)(param_1 + 0x88);
        local_e0 = *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar14 * 8) +
                   *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar14 * 8) +
                   *(double *)(param_1 + 0x8a);
      }
      if ((*(char *)(param_3 + 0x327) == '\0') &&
         (((*(byte *)(param_3 + 0x88) & 0x40) != 0 || ((*(byte *)(param_3 + 0x88) & 0x80) != 0)))) {
        lVar11 = (longlong)(iVar6 + 2);
        *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar11 * 8) =
             (dVar16 + 1.0) * *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar11 * 8) -
             dVar16 * *(double *)(*(longlong *)(param_3 + 0x1c8) + lVar11 * 8);
        lVar11 = (longlong)(iVar6 + 5);
        *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar11 * 8) =
             (dVar16 + 1.0) * *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar11 * 8) -
             dVar16 * *(double *)(*(longlong *)(param_3 + 0x1c8) + lVar11 * 8);
        lVar11 = (longlong)(iVar6 + 8);
        *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar11 * 8) =
             (dVar16 + 1.0) * *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar11 * 8) -
             dVar16 * *(double *)(*(longlong *)(param_3 + 0x1c8) + lVar11 * 8);
      }
      else if (param_4 == 6) {
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 2) * 8) =
             (dVar25 - dVar23) * local_d0 +
             *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar6 + 2) * 8);
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 5) * 8) =
             (dVar24 - (dVar23 - dVar20)) * local_d8 +
             *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar6 + 5) * 8);
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 8) * 8) =
             (dVar30 - (dVar23 - dVar21)) * local_e0 +
             *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar6 + 8) * 8);
      }
      else {
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 2) * 8) = dVar25 * local_d0;
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 5) * 8) = dVar24 * local_d8;
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 8) * 8) = dVar30 * local_e0;
      }
      goto LAB_00e32c98;
    }
  }
  local_d0 = *(double *)(param_1 + 0xba) / 3.0;
  local_d8 = *(double *)(param_1 + 0xba) / 3.0;
  local_e0 = 0.0;
LAB_00e32c98:
  if ((((*(char *)(param_3 + 0xed6) == '\x01') || ((*(byte *)(param_3 + 0x88) & 0x40) != 0)) ||
      (param_4 != 6)) || (*(char *)(param_3 + 0x330) == '\0')) {
    param_1[0x114] = 0;
    param_1[0x115] = 0;
    param_1[0x106] = 0;
    param_1[0x107] = 0;
    param_1[0x110] = 0;
    param_1[0x111] = 0;
    param_1[0x10a] = 0;
    param_1[0x10b] = 0;
    param_1[0x112] = 0;
    param_1[0x113] = 0;
    param_1[0x10c] = 0;
    param_1[0x10d] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
  }
  else {
    if (local_d0 == 0.0) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 3) * 8) = 0;
    }
    if (local_d8 == 0.0) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 6) * 8) = 0;
    }
    if (local_e0 == 0.0) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 9) * 8) = 0;
    }
    FUN_00dafac0(param_2,param_3,param_1 + 0x114,param_1 + 0x106,local_d0,
                 CONCAT44(uVar33,*(ushort *)(param_1 + 0x4a) + 2),0,1);
    FUN_00dafac0(param_2,param_3,param_1 + 0x110,param_1 + 0x10a,local_d8,
                 *(ushort *)(param_1 + 0x4a) + 5,0,1);
    FUN_00dafac0(param_2,param_3,param_1 + 0x112,param_1 + 0x10c,local_e0,
                 *(ushort *)(param_1 + 0x4a) + 8,0,1);
    *(undefined8 *)(param_1 + 0x2c) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 3) * 8);
    *(double *)(param_1 + 0x106) =
         *(double *)(param_1 + 0x2c) - *(double *)(param_1 + 0x114) * dVar25;
    *(undefined8 *)(param_1 + 0x2e) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 6) * 8);
    *(double *)(param_1 + 0x10a) =
         *(double *)(param_1 + 0x2e) - *(double *)(param_1 + 0x110) * dVar24;
    *(undefined8 *)(param_1 + 0x30) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar6 + 9) * 8);
    *(double *)(param_1 + 0x10c) =
         *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x112) * dVar30;
  }
  *(double *)(param_1 + 0x108) =
       (double)*param_1 * (*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x1a) * dVar28);
  *(double *)(param_1 + 0x10e) =
       (double)*param_1 * (*(double *)(param_1 + 0x1c) - *(double *)(param_1 + 0x1e) * dVar27);
  if (param_1[1] < 0) {
    param_1[0x116] = 0;
    param_1[0x117] = 1;
    *(double *)(param_1 + 0x104) =
         (double)-*param_1 *
         (((*(double *)(param_1 + 0x2a) + *(double *)(param_1 + 0x24) * dVar29) -
          *(double *)(param_1 + 0x22) * dVar24) - *(double *)(param_1 + 0x26) * dVar27);
  }
  else {
    param_1[0x116] = 1;
    param_1[0x117] = 0;
    *(double *)(param_1 + 0x104) =
         (double)*param_1 *
         (((*(double *)(param_1 + 0x2a) - *(double *)(param_1 + 0x24) * dVar29) -
          *(double *)(param_1 + 0x22) * dVar25) - *(double *)(param_1 + 0x26) * dVar28);
  }
  *(double *)(param_1 + 0x114) = *(double *)(param_1 + 0x114) + *(double *)(param_3 + 0x430);
  FUN_016ed320(param_2,(char)param_1[2] + '\x01',*(undefined8 *)(param_1 + 0x104),
               *(undefined8 *)(param_1 + 0x24),0);
  FUN_016ed220(param_2,(char)param_1[2] + '\x02',
               (double)param_1[0x116] * *(double *)(param_1 + 0x22),0);
  FUN_016ed220(param_2,(char)param_1[2] + '\x03',
               (double)param_1[0x116] * *(double *)(param_1 + 0x26),0);
  FUN_016ed220(param_2,(char)param_1[2] + '\x04',
               (double)-param_1[0x117] * *(double *)(param_1 + 0x22),0);
  FUN_016ed220(param_2,(char)param_1[2] + '\x05',
               (double)-param_1[0x117] * *(double *)(param_1 + 0x26),0);
  if (*(char *)(param_3 + 0xed6) == '\0') {
    FUN_016ed460(param_2,(char)param_1[2] + '\x06',*(undefined8 *)(param_1 + 0x10e),
                 *(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0xb0),0);
    FUN_016ed460(param_2,(char)param_1[2] + '\a',*(undefined8 *)(param_1 + 0x108),
                 *(undefined8 *)(param_1 + 0x1a),*(undefined8 *)(param_1 + 0xb2),0);
    FUN_016ed460(param_2,(char)param_1[2] + '\b',(double)*param_1 * *(double *)(param_1 + 0x106),
                 *(undefined8 *)(param_1 + 0x114),local_d0,0);
    FUN_016ed460(param_2,(char)param_1[2] + '\t',(double)*param_1 * *(double *)(param_1 + 0x10a),
                 *(undefined8 *)(param_1 + 0x110),local_d8,0);
    FUN_016ed460(param_2,(char)param_1[2] + '\n',(double)*param_1 * *(double *)(param_1 + 0x10c),
                 *(undefined8 *)(param_1 + 0x112),local_e0,0);
  }
  return;
}

