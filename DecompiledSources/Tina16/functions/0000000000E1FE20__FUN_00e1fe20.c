/* Ghidra address: 00e1fe20 */
/* Ghidra symbol: FUN_00e1fe20 */


/* WARNING: Removing unreachable block (ram,0x00e22c8d) */

void FUN_00e1fe20(int *param_1,longlong param_2,longlong param_3,byte param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
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
  double dVar31;
  undefined8 in_stack_fffffffffffffe60;
  int *piVar32;
  undefined8 *puVar33;
  undefined4 uVar34;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f4;
  char local_e9;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  undefined1 local_c0 [160];
  
  uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffe60 >> 0x20);
  dVar31 = 0.0;
  dVar26 = 0.0;
  dVar24 = 0.0;
  dVar16 = 0.0;
  uVar11 = FUN_016eebb0(param_2,(short)param_1[0x4a],0);
  iVar7 = (int)uVar11;
  if ((byte)(param_4 - 8) < 8) {
    bVar15 = ((int)CONCAT71((int7)((ulonglong)uVar11 >> 8),1) << (param_4 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar15 = false;
  }
  if (bVar15) {
    if (param_4 != 0xc) {
      return;
    }
    if (*(double *)(param_1 + 0x8a) == 0.0) {
      dVar16 = 0.000345314379969;
    }
    else {
      dVar16 = *(double *)(param_1 + 0x8a);
    }
    dVar26 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x22));
    FUN_016ed7f0(param_3,0xc);
    uVar11 = FUN_0040c850();
    FUN_00b90620(uVar11,0x380b38fb9daa78e4);
    dVar31 = (double)FUN_0040c2f0();
    dVar31 = (double)FUN_0040af80(*(double *)(param_1 + 0x98) * dVar31);
    uVar11 = FUN_0040c760((*(double *)(param_1 + 0x4e) * 1.10449808e-22 * dVar26) / 3.0 +
                          (*(double *)(param_1 + 0x9a) * *(double *)(param_1 + 0x22) *
                          *(double *)(param_1 + 0x22)) /
                          (dVar31 * *(double *)(param_1 + 0xa0) * *(double *)(param_1 + 100) *
                           *(double *)(param_1 + 0x9e) * dVar16));
    FUN_016ed220(param_2,(char)param_1[2] + '\v',uVar11,0);
    return;
  }
  if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
    if ((char)param_1[0x56] == '\0') {
      uVar11 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                            *(undefined1 *)((longlong)param_1 + 0xb),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x50) = uVar11;
    }
    if (*(char *)((longlong)param_1 + 0x159) == '\0') {
      uVar11 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                            *(undefined1 *)((longlong)param_1 + 0xd),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x52) = uVar11;
    }
    if (*(char *)((longlong)param_1 + 0x15a) != '\0') {
      return;
    }
    uVar11 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                          *(undefined1 *)((longlong)param_1 + 0xe),(char)param_1[3],0);
    *(undefined8 *)(param_1 + 0x54) = uVar11;
    return;
  }
  if ((*(char *)(param_3 + 0x327) == '\0') &&
     (((*(byte *)(param_3 + 0x88) & 0x40) != 0 || ((*(byte *)(param_3 + 0x88) & 0x80) != 0)))) {
    dVar16 = (double)FUN_01b08a30(param_3,1);
    dVar16 = *(double *)(param_3 + 0x10) / dVar16;
    lVar12 = (longlong)(iVar7 + 0xf);
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar12 * 8) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + lVar12 * 8);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar12 * 8);
    local_150 = (dVar16 + 1.0) * *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar12 * 8) -
                dVar16 * *(double *)(*(longlong *)(param_3 + 0x1c8) + lVar12 * 8);
    lVar13 = (longlong)(iVar7 + 0xe);
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + lVar13 * 8);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8);
    dVar29 = (dVar16 + 1.0) * *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar13 * 8) -
             dVar16 * *(double *)(*(longlong *)(param_3 + 0x1c8) + lVar13 * 8);
    lVar13 = (longlong)(iVar7 + 0x10);
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + lVar13 * 8);
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8);
    local_148 = (dVar16 + 1.0) * *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar13 * 8) -
                dVar16 * *(double *)(*(longlong *)(param_3 + 0x1c8) + lVar13 * 8);
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x11) * 8) =
         *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar12 * 8) -
         *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8);
    *(undefined8 *)(param_1 + 0x14) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x11) * 8);
  }
  else if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
    if (((*(byte *)(param_3 + 0x88) & 4) == 0) || (*(char *)((longlong)param_1 + 10) == '\0')) {
      local_150 = (double)*param_1 *
                  (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[0xc] * 8) -
                  *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
      dVar29 = (double)*param_1 *
               (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[0xb] * 8) -
               *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
      local_148 = (double)*param_1 *
                  (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[9] * 8) -
                  *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
      *(undefined8 *)(param_1 + 0xe) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0xe) * 8);
      *(undefined8 *)(param_1 + 0x12) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0xf) * 8);
      *(undefined8 *)(param_1 + 0x14) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x11) * 8);
      *(undefined8 *)(param_1 + 0x16) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x10) * 8);
      dVar17 = local_150 - local_148;
      dVar27 = dVar29 - local_148;
      dVar28 = *(double *)(param_1 + 0xe);
      dVar30 = *(double *)(param_1 + 0x16);
      dVar25 = local_150 - *(double *)(param_1 + 0x12);
      dVar18 = dVar17 - *(double *)(param_1 + 0x14);
      dVar23 = *(double *)(param_1 + 0xe);
      dVar19 = local_148 - *(double *)(param_1 + 0x16);
      if (param_1[1] < 0) {
        local_140 = ((*(double *)(param_1 + 0x20) -
                     (*(double *)(param_1 + 0x1e) - *(double *)(param_1 + 0x26)) * dVar18) -
                    *(double *)(param_1 + 0x22) * (dVar27 - (dVar28 - dVar30))) +
                    *(double *)(param_1 + 0x24) * dVar19;
      }
      else {
        local_140 = (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x1e) * dVar18) +
                    *(double *)(param_1 + 0x26) * dVar25 +
                    *(double *)(param_1 + 0x22) * (dVar29 - dVar23) +
                    *(double *)(param_1 + 0x24) * dVar19;
      }
      dVar22 = *(double *)(param_1 + 0x18);
      dVar1 = *(double *)(param_1 + 0x1c);
      dVar2 = *(double *)(param_1 + 0x1e);
      dVar3 = *(double *)(param_1 + 0x1a);
      uVar11 = FUN_0040c850();
      uVar20 = FUN_0040c850(*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c));
      dVar21 = (double)FUN_00b90620(uVar11,uVar20);
      dVar4 = *(double *)(param_3 + 0x3d8);
      if ((((param_4 != 5) && ((*(byte *)(param_3 + 0x88) & 0x40) == 0)) &&
          ((*(byte *)(param_3 + 0x88) & 0x80) == 0)) &&
         ((*(char *)(param_3 + 0x32f) != '\0' &&
          (dVar22 = (double)FUN_0040c850((dVar22 + dVar1 + dVar2 * dVar18 + dVar3 * dVar25) -
                                         (*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c))
                                        ), dVar22 < *(double *)(param_3 + 0x3c8) * (dVar21 + dVar4))
          ))) {
        dVar25 = (double)FUN_0040c850(dVar25);
        uVar11 = FUN_0040c850(local_150);
        uVar20 = FUN_0040c850(*(undefined8 *)(param_1 + 0x12));
        dVar22 = (double)FUN_00b90620(uVar11,uVar20);
        if (dVar25 < *(double *)(param_3 + 0x3c8) * dVar22 + *(double *)(param_3 + 0x3d0)) {
          dVar18 = (double)FUN_0040c850(dVar18);
          uVar11 = FUN_0040c850(dVar17);
          uVar20 = FUN_0040c850(*(undefined8 *)(param_1 + 0x14));
          dVar25 = (double)FUN_00b90620(uVar11,uVar20);
          if (dVar18 < *(double *)(param_3 + 0x3c8) * dVar25 + *(double *)(param_3 + 0x3d0)) {
            dVar23 = (double)FUN_0040c850(dVar29 - dVar23);
            uVar11 = FUN_0040c850(dVar29);
            uVar20 = FUN_0040c850(*(undefined8 *)(param_1 + 0xe));
            dVar18 = (double)FUN_00b90620(uVar11,uVar20);
            if (dVar23 < *(double *)(param_3 + 0x3c8) * dVar18 + *(double *)(param_3 + 0x3d0)) {
              dVar23 = (double)FUN_0040c850(dVar19);
              uVar11 = FUN_0040c850(local_148);
              uVar20 = FUN_0040c850(*(undefined8 *)(param_1 + 0x16));
              dVar18 = (double)FUN_00b90620(uVar11,uVar20);
              if (dVar23 < *(double *)(param_3 + 0x3c8) * dVar18 + *(double *)(param_3 + 0x3d0)) {
                dVar23 = (double)FUN_0040c850(local_140 - *(double *)(param_1 + 0x20));
                uVar11 = FUN_0040c850(local_140);
                uVar20 = FUN_0040c850(*(undefined8 *)(param_1 + 0x20));
                dVar18 = (double)FUN_00b90620(uVar11,uVar20);
                if (dVar23 < *(double *)(param_3 + 0x3c8) * dVar18 + *(double *)(param_3 + 0x3d8)) {
                  local_150 = *(double *)(param_1 + 0x12);
                  local_158 = *(double *)(param_1 + 0x14);
                  dVar29 = *(double *)(param_1 + 0xe);
                  local_148 = *(double *)(param_1 + 0x16);
                  dVar28 = dVar29 - local_148;
                  dVar30 = dVar29 - local_150;
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
                    dVar26 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 1) * 8)
                             + *(double *)
                                (*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar7 + 1) * 8) +
                             *(double *)(param_1 + 0x84);
                    dVar31 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 4) * 8)
                             + *(double *)
                                (*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar7 + 4) * 8) +
                             *(double *)(param_1 + 0x86);
                    dVar24 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 7) * 8)
                             + *(double *)
                                (*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar7 + 7) * 8) +
                             *(double *)(param_1 + 0x88);
                  }
                  goto LAB_00e22698;
                }
              }
            }
          }
        }
      }
      local_d0 = (double)*param_1 * *(double *)(param_1 + 0x38);
      if (*(double *)(param_1 + 0x16) < 0.0) {
        dVar26 = *(double *)(param_1 + 0x10);
        dVar23 = (*(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x16) * 8) -
                 *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x18) * 8)) -
                 *(double *)(param_1 + 0x10);
        dVar31 = (double)FUN_0040c850(dVar27 - dVar26);
        dVar24 = (double)FUN_0040c850(dVar23);
        if (dVar24 < dVar31) {
LAB_00e20d6b:
          dVar27 = (double)FUN_00c432f0(dVar27,dVar28 - dVar30,local_d0,&local_e9);
          if (local_e9 != '\0') {
            FUN_016e9f80(param_2,param_3,local_e9,0x70);
          }
          local_148 = dVar29 - dVar27;
        }
        else {
          iVar8 = FUN_00c42630(dVar27 - dVar26);
          iVar9 = FUN_00c42630(dVar23);
          if (iVar8 != iVar9) goto LAB_00e20d6b;
        }
        dVar29 = dVar27 + local_148;
      }
      else {
        dVar26 = *(double *)(param_1 + 0xe);
        dVar28 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x16) * 8) -
                 *(double *)(param_1 + 0xe);
        dVar31 = (double)FUN_0040c850(dVar29 - dVar26);
        dVar24 = (double)FUN_0040c850(dVar28);
        if (dVar24 < dVar31) {
LAB_00e20bcf:
          dVar29 = (double)FUN_00c432f0(dVar29,*(undefined8 *)(param_1 + 0xe),local_d0,&local_e9);
          if (local_e9 != '\0') {
            FUN_016e9f80(param_2,param_3,local_e9,0x6e);
          }
          local_148 = dVar29 - dVar27;
        }
        else {
          iVar8 = FUN_00c42630(dVar29 - dVar26);
          iVar9 = FUN_00c42630(dVar28);
          if (iVar8 != iVar9) goto LAB_00e20bcf;
        }
        dVar26 = *(double *)(param_1 + 0x16);
        dVar28 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x18) * 8) -
                 *(double *)(param_1 + 0x16);
        dVar31 = (double)FUN_0040c850(local_148 - dVar26);
        dVar24 = (double)FUN_0040c850(dVar28);
        if (dVar31 <= dVar24) {
          iVar8 = FUN_00c42630(local_148 - dVar26);
          iVar9 = FUN_00c42630(dVar28);
          if (iVar8 == iVar9) goto LAB_00e20dd0;
        }
        local_148 = (double)FUN_00c43230(local_148,*(undefined8 *)(param_1 + 0x16),&local_e9);
        if (local_e9 != '\0') {
          FUN_016e9f80(param_2,param_3,local_e9,0x6f);
        }
      }
LAB_00e20dd0:
      if (local_148 < 0.0) {
        dVar26 = *(double *)(param_1 + 0x14);
        dVar28 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x19) * 8) -
                 *(double *)(param_1 + 0x14);
        dVar31 = (double)FUN_0040c850(dVar17 - dVar26);
        dVar24 = (double)FUN_0040c850(dVar28);
        if (dVar31 <= dVar24) {
          iVar8 = FUN_00c42630(dVar17 - dVar26);
          iVar9 = FUN_00c42630(dVar28);
          if (iVar8 == iVar9) goto LAB_00e20f9e;
        }
        local_150 = (double)FUN_00c42ff0(dVar17,*(undefined8 *)(param_1 + 0x14),
                                         *(undefined8 *)(param_1 + 0x3c),
                                         *(undefined8 *)(param_1 + 0x34),&local_e9);
        local_150 = local_150 + local_148;
        if (local_e9 != '\0') {
          FUN_016e9f80(param_2,param_3,local_e9,0x73);
        }
      }
      else if ((char)param_1[0x10a] == '\0') {
        dVar26 = *(double *)(param_1 + 0x12);
        dVar28 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x17) * 8) -
                 *(double *)(param_1 + 0x12);
        dVar31 = (double)FUN_0040c850(local_150 - dVar26);
        dVar24 = (double)FUN_0040c850(dVar28);
        if (dVar31 <= dVar24) {
          iVar8 = FUN_00c42630(local_150 - dVar26);
          iVar9 = FUN_00c42630(dVar28);
          if (iVar8 == iVar9) goto LAB_00e20f9e;
        }
        local_150 = (double)FUN_00c42ff0(local_150,*(undefined8 *)(param_1 + 0x12),
                                         *(undefined8 *)(param_1 + 0x3c),
                                         *(undefined8 *)(param_1 + 0x36),&local_e9);
        if (local_e9 != '\0') {
          FUN_016e9f80(param_2,param_3,local_e9,0x72);
        }
      }
    }
    else {
      local_150 = 0.0;
      dVar29 = 0.0;
      local_148 = 0.0;
    }
  }
  else {
    if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
      if (*(char *)((longlong)param_1 + 10) == '\0') {
        if ((char)param_1[0x10a] == '\0') {
          local_150 = -1.0;
        }
        else {
          local_150 = 0.0;
        }
        dVar29 = (double)*param_1 * *(double *)(param_1 + 0x32);
        local_148 = 0.0;
      }
      else {
        local_150 = 0.0;
        dVar29 = 0.0;
        local_148 = 0.0;
      }
    }
    else {
      if ((char)param_1[0x10a] == '\0') {
        local_150 = (double)*param_1 * *(double *)(param_1 + 0x54);
      }
      else {
        local_150 = 0.0;
      }
      dVar29 = (double)*param_1 * *(double *)(param_1 + 0x52);
      local_148 = (double)*param_1 * *(double *)(param_1 + 0x50);
    }
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x16) * 8) = 0;
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x18) * 8) = 0;
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x17) * 8) = 0;
    *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x19) * 8) = 0;
  }
LAB_00e20f9e:
  local_158 = local_150 - local_148;
  dVar28 = dVar29 - local_148;
  dVar30 = dVar29 - local_150;
  if ((char)param_1[0x10a] == '\0') {
    if (*(double *)(param_1 + 0x3c) * -3.0 < local_150) {
      dVar26 = (double)FUN_00c42aa0(local_150 / *(double *)(param_1 + 0x3c),
                                    *(undefined8 *)(param_1 + 0xa8),param_1 + 0x1a);
      *(double *)(param_1 + 0x1a) =
           (*(double *)(param_1 + 0xa8) * *(double *)(param_1 + 0x1a)) / *(double *)(param_1 + 0x3c)
           + *(double *)(param_3 + 0x430);
      *(double *)(param_1 + 0x18) =
           *(double *)(param_1 + 0xa8) * (dVar26 - 1.0) + *(double *)(param_3 + 0x430) * local_150;
    }
    else {
      dVar26 = (*(double *)(param_1 + 0x3c) * 3.0) / (local_150 * 2.718281828459045);
      dVar26 = dVar26 * dVar26 * dVar26;
      *(double *)(param_1 + 0x18) =
           -*(double *)(param_1 + 0xa8) * (dVar26 + 1.0) + *(double *)(param_3 + 0x430) * local_150;
      *(double *)(param_1 + 0x1a) =
           (*(double *)(param_1 + 0xa8) * 3.0 * dVar26) / local_150 + *(double *)(param_3 + 0x430);
    }
  }
  else {
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  cVar6 = FUN_00e1fe10(param_3);
  if (cVar6 == '\0') {
    if (*(double *)(param_1 + 0x3c) * -3.0 < local_158) {
      dVar26 = (double)FUN_00c42aa0(local_158 / *(double *)(param_1 + 0x3c),
                                    *(undefined8 *)(param_1 + 0xa6),param_1 + 0x1e);
      *(double *)(param_1 + 0x1e) =
           (*(double *)(param_1 + 0xa6) * *(double *)(param_1 + 0x1e)) / *(double *)(param_1 + 0x3c)
           + *(double *)(param_3 + 0x430);
      *(double *)(param_1 + 0x1c) =
           *(double *)(param_1 + 0xa6) * (dVar26 - 1.0) + *(double *)(param_3 + 0x430) * local_158;
    }
    else {
      dVar26 = (*(double *)(param_1 + 0x3c) * 3.0) / (local_158 * 2.718281828459045);
      dVar26 = dVar26 * dVar26 * dVar26;
      *(double *)(param_1 + 0x1c) =
           -*(double *)(param_1 + 0xa6) * (dVar26 + 1.0) + *(double *)(param_3 + 0x430) * local_158;
      *(double *)(param_1 + 0x1e) =
           (*(double *)(param_1 + 0xa6) * 3.0 * dVar26) / local_158 + *(double *)(param_3 + 0x430);
    }
  }
  else {
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  if (local_148 < 0.0) {
    param_1[1] = -1;
  }
  else {
    param_1[1] = 1;
  }
  cVar6 = FUN_00e1fe10(param_3);
  if (cVar6 == '\0') {
    if (param_1[1] == 1) {
      piVar32 = param_1;
      FUN_00e1fa90(local_148,local_150,dVar29,&local_d0,param_1 + 0x2a,param_1);
      uVar34 = (undefined4)((ulonglong)piVar32 >> 0x20);
    }
    else {
      piVar32 = param_1;
      FUN_00e1fa90(-local_148,local_158,dVar28,&local_d0,param_1 + 0x2a,param_1);
      uVar34 = (undefined4)((ulonglong)piVar32 >> 0x20);
    }
  }
  else {
    local_d0 = (double)*param_1 * *(double *)(param_1 + 0x76);
    dVar26 = dVar28;
    if (param_1[1] == 1) {
      dVar26 = dVar29;
    }
    dVar26 = dVar26 - local_d0;
    lVar12 = *(longlong *)(param_2 + 0x130);
    if ((lVar12 != 0) && (0 < *(int *)(lVar12 + 0x10))) {
      local_118 = dVar28;
      if (*(char *)(param_3 + 0xed7) == '\x01') {
        if (param_1[1] == 1) {
          local_118 = dVar29;
        }
        if (*(int *)(lVar12 + 0x10) == 0) {
          FUN_00594f90();
        }
        uVar10 = (**(code **)(*(longlong *)**(undefined8 **)(lVar12 + 8) + 0x38))
                           ((longlong *)**(undefined8 **)(lVar12 + 8),&local_118);
        lVar12 = *(longlong *)(param_2 + 0x130);
        if (*(int *)(lVar12 + 0x10) == 0) {
          FUN_00594f90();
        }
        plVar5 = (longlong *)**(undefined8 **)(lVar12 + 8);
        dVar24 = (double)(**(code **)(*plVar5 + 0x10))(plVar5,param_3,uVar10);
        dVar31 = local_148;
        if (param_1[1] != 1) {
          dVar31 = -local_148;
        }
        *(double *)(param_1 + 0x22) = dVar24 * dVar31;
        *(double *)(param_1 + 0x24) = dVar24 * dVar26;
        dVar31 = local_148;
        if (param_1[1] != 1) {
          dVar31 = -local_148;
        }
        *(double *)(param_1 + 0x2a) = dVar24 * dVar31 * dVar26;
      }
      else {
        if (param_1[1] == 1) {
          local_118 = dVar29;
        }
        local_110 = local_148;
        if (param_1[1] != 1) {
          local_110 = -local_148;
        }
        if (*(int *)(lVar12 + 0x10) == 0) {
          FUN_00594f90();
        }
        local_f4 = (**(code **)(*(longlong *)**(undefined8 **)(lVar12 + 8) + 0x38))
                             ((longlong *)**(undefined8 **)(lVar12 + 8),&local_118);
        lVar12 = *(longlong *)(param_2 + 0x130);
        if (*(int *)(lVar12 + 0x10) == 0) {
          FUN_00594f90();
        }
        plVar5 = (longlong *)**(undefined8 **)(lVar12 + 8);
        uVar11 = (**(code **)(*plVar5 + 0x28))(plVar5,param_3,&local_f4,&local_118);
        *(undefined8 *)(param_1 + 0x2a) = uVar11;
        lVar12 = *(longlong *)(param_2 + 0x130);
        if (*(int *)(lVar12 + 0x10) == 0) {
          FUN_00594f90();
        }
        plVar5 = (longlong *)**(undefined8 **)(lVar12 + 8);
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_108,param_3,&local_f4,&local_118);
        *(undefined8 *)(param_1 + 0x22) = local_108;
        *(undefined8 *)(param_1 + 0x24) = local_100;
      }
      param_1[0x26] = 0;
      param_1[0x27] = 0;
    }
  }
  *(double *)(param_1 + 0x2a) =
       *(double *)(param_1 + 0x2a) + (double)param_1[1] * *(double *)(param_1 + 0xaa) * local_148;
  *(double *)(param_1 + 0x24) = *(double *)(param_1 + 0x24) + *(double *)(param_1 + 0xaa);
  *(double *)(param_1 + 0x38) = (double)*param_1 * local_d0;
  *(double *)(param_1 + 0x20) =
       (double)param_1[1] * *(double *)(param_1 + 0x2a) - *(double *)(param_1 + 0x1c);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  uVar11 = FUN_00e1fe10(param_3);
  if ((char)uVar11 == '\0') {
    if (param_4 < 8) {
      bVar15 = ((int)CONCAT71((int7)((ulonglong)uVar11 >> 8),1) << (param_4 & 0x1f) & 0xe0U) != 0;
    }
    else {
      bVar15 = false;
    }
    if ((!bVar15) || (*(char *)(param_3 + 0x330) == '\0')) goto LAB_00e21f3d;
    if (((*(double *)(param_1 + 0x5c) == 0.0) && (*(double *)(param_1 + 0x58) == 0.0)) ||
       ((char)param_1[0x10a] != '\0')) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0xc) * 8) = 0;
      param_1[0x92] = 0;
      param_1[0x93] = 0;
    }
    else if (*(double *)(param_1 + 0x74) <= local_150) {
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0xc) * 8) =
           *(double *)(param_1 + 0x82) +
           local_150 *
           (*(double *)(param_1 + 0x7e) + local_150 * (*(double *)(param_1 + 0x80) / 2.0));
      *(double *)(param_1 + 0x92) =
           *(double *)(param_1 + 0x7e) + *(double *)(param_1 + 0x80) * local_150;
    }
    else {
      dVar26 = 1.0 - local_150 / *(double *)(param_1 + 0x72);
      if (*(double *)(param_1 + 0x8c) == *(double *)(param_1 + 0x8e)) {
        if (*(double *)(param_1 + 0x8c) == 0.5) {
          dVar24 = (double)FUN_0040c760(dVar26);
          dVar24 = 1.0 / dVar24;
          dVar31 = dVar24;
        }
        else {
          dVar31 = (double)FUN_0040c2f0(dVar26);
          dVar24 = (double)FUN_0040af80(-*(double *)(param_1 + 0x8c) * dVar31);
          dVar31 = dVar24;
        }
      }
      else {
        if (*(double *)(param_1 + 0x8c) == 0.5) {
          dVar31 = (double)FUN_0040c760(dVar26);
          dVar31 = 1.0 / dVar31;
        }
        else {
          dVar31 = (double)FUN_0040c2f0(dVar26);
          dVar31 = (double)FUN_0040af80(-*(double *)(param_1 + 0x8c) * dVar31);
        }
        if (*(double *)(param_1 + 0x8e) == 0.5) {
          dVar24 = (double)FUN_0040c760(dVar26);
          dVar24 = 1.0 / dVar24;
        }
        else {
          dVar24 = (double)FUN_0040c2f0(dVar26);
          dVar24 = (double)FUN_0040af80(-*(double *)(param_1 + 0x8e) * dVar24);
        }
      }
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0xc) * 8) =
           *(double *)(param_1 + 0x72) *
           ((*(double *)(param_1 + 0x5c) * (1.0 - dVar26 * dVar31)) /
            (1.0 - *(double *)(param_1 + 0x8c)) +
           (*(double *)(param_1 + 0x58) * (1.0 - dVar26 * dVar24)) /
           (1.0 - *(double *)(param_1 + 0x8e)));
      *(double *)(param_1 + 0x92) =
           *(double *)(param_1 + 0x5c) * dVar31 + *(double *)(param_1 + 0x58) * dVar24;
    }
    if ((*(double *)(param_1 + 0x5e) == 0.0) && (*(double *)(param_1 + 0x5a) == 0.0)) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 10) * 8) = 0;
      param_1[0x90] = 0;
      param_1[0x91] = 0;
    }
    else if (*(double *)(param_1 + 0x74) <= local_158) {
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 10) * 8) =
           *(double *)(param_1 + 0x7c) +
           local_158 *
           (*(double *)(param_1 + 0x78) + (local_158 * *(double *)(param_1 + 0x7a)) / 2.0);
      *(double *)(param_1 + 0x90) =
           *(double *)(param_1 + 0x78) + local_158 * *(double *)(param_1 + 0x7a);
    }
    else {
      dVar26 = 1.0 - local_158 / *(double *)(param_1 + 0x72);
      if ((*(double *)(param_1 + 0x8c) == 0.5) && (*(double *)(param_1 + 0x8e) == 0.5)) {
        dVar24 = (double)FUN_0040c760(dVar26);
        dVar24 = 1.0 / dVar24;
        dVar31 = dVar24;
      }
      else {
        if (*(double *)(param_1 + 0x8c) == 0.5) {
          dVar31 = (double)FUN_0040c760(dVar26);
          dVar31 = 1.0 / dVar31;
        }
        else {
          dVar31 = (double)FUN_0040c2f0(dVar26);
          dVar31 = (double)FUN_0040af80(-*(double *)(param_1 + 0x8c) * dVar31);
        }
        if (*(double *)(param_1 + 0x8e) == 0.5) {
          dVar24 = (double)FUN_0040c760(dVar26);
          dVar24 = 1.0 / dVar24;
        }
        else {
          dVar24 = (double)FUN_0040c2f0(dVar26);
          dVar24 = (double)FUN_0040af80(-*(double *)(param_1 + 0x8e) * dVar24);
        }
      }
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 10) * 8) =
           *(double *)(param_1 + 0x72) *
           ((*(double *)(param_1 + 0x5e) * (1.0 - dVar26 * dVar31)) /
            (1.0 - *(double *)(param_1 + 0x8c)) +
           (*(double *)(param_1 + 0x5a) * (1.0 - dVar26 * dVar24)) /
           (1.0 - *(double *)(param_1 + 0x8e)));
      *(double *)(param_1 + 0x90) =
           *(double *)(param_1 + 0x5e) * dVar31 + *(double *)(param_1 + 0x5a) * dVar24;
    }
    if ((param_4 == 6) && (*(char *)(param_3 + 0x330) != '\0')) {
      uVar11 = CONCAT44(uVar34,*(ushort *)(param_1 + 0x4a) + 10);
      FUN_00dafac0(param_2,param_3,&local_c8,local_c0,*(undefined8 *)(param_1 + 0x90),uVar11,0,1);
      uVar34 = (undefined4)((ulonglong)uVar11 >> 0x20);
      *(double *)(param_1 + 0x1e) = *(double *)(param_1 + 0x1e) + local_c8;
      *(double *)(param_1 + 0x1c) =
           *(double *)(param_1 + 0x1c) +
           *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0xb) * 8);
      *(double *)(param_1 + 0x20) =
           *(double *)(param_1 + 0x20) -
           *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0xb) * 8);
      if ((char)param_1[0x10a] == '\0') {
        uVar11 = CONCAT44(uVar34,*(ushort *)(param_1 + 0x4a) + 0xc);
        FUN_00dafac0(param_2,param_3,&local_c8,local_c0,*(undefined8 *)(param_1 + 0x92),uVar11,0,1);
        uVar34 = (undefined4)((ulonglong)uVar11 >> 0x20);
        *(double *)(param_1 + 0x1a) = *(double *)(param_1 + 0x1a) + local_c8;
        *(double *)(param_1 + 0x18) =
             *(double *)(param_1 + 0x18) +
             *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0xd) * 8);
      }
    }
  }
  else {
LAB_00e21f3d:
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    param_1[0x90] = 0;
    param_1[0x91] = 0;
  }
  *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0xf) * 8) = local_150;
  *(double *)(param_1 + 0x12) = local_150;
  *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x11) * 8) = local_158;
  *(double *)(param_1 + 0x14) = local_158;
  *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0xe) * 8) = dVar29;
  *(double *)(param_1 + 0xe) = dVar29;
  *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 0x10) * 8) = local_148;
  *(double *)(param_1 + 0x16) = local_148;
  lVar12 = *(longlong *)(param_3 + 0x1b8);
  *(undefined8 *)(lVar12 + (longlong)(iVar7 + 0x13) * 8) = *(undefined8 *)(param_1 + 0x20);
  *(double *)(lVar12 + (longlong)(iVar7 + 0x12) * 8) =
       *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c);
  *(undefined8 *)(lVar12 + (longlong)(iVar7 + 0x14) * 8) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(lVar12 + (longlong)(iVar7 + 0x15) * 8) = *(undefined8 *)(param_1 + 0x92);
  uVar11 = FUN_00e1fe10(param_3);
  if ((char)uVar11 == '\0') {
    if (param_4 < 8) {
      bVar15 = ((int)CONCAT71((int7)((ulonglong)uVar11 >> 8),1) << (param_4 & 0x1f) & 0xe0U) != 0;
    }
    else {
      bVar15 = false;
    }
    if ((bVar15) && (*(char *)(param_3 + 0x330) != '\0')) {
      lVar13 = (longlong)(iVar7 + 1);
      local_d8 = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8);
      lVar12 = (longlong)(iVar7 + 4);
      local_e0 = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar12 * 8);
      lVar14 = (longlong)(iVar7 + 7);
      local_e8 = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar14 * 8);
      if (param_1[1] < 1) {
        puVar33 = &local_e0;
        FUN_01674280(dVar28,dVar29,dVar30,local_d0,*(undefined8 *)(param_1 + 0xa4),puVar33,&local_d8
                     ,&local_e8,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0xa2));
        uVar34 = (undefined4)((ulonglong)puVar33 >> 0x20);
      }
      else {
        puVar33 = &local_d8;
        FUN_01674280(dVar29,dVar28,dVar30,local_d0,*(undefined8 *)(param_1 + 0xa4),puVar33,&local_e0
                     ,&local_e8,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0xa2));
        uVar34 = (undefined4)((ulonglong)puVar33 >> 0x20);
      }
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar12 * 8) = local_e0;
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8) = local_d8;
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + lVar14 * 8) = local_e8;
      dVar23 = *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar7 + 0xe) * 8);
      dVar17 = *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar7 + 0x10) * 8);
      dVar18 = *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar7 + 0xf) * 8);
      if (param_4 == 5) {
        dVar26 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 1) * 8) * 2.0 +
                 *(double *)(param_1 + 0x84);
        dVar31 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 4) * 8) * 2.0 +
                 *(double *)(param_1 + 0x86);
        dVar24 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 7) * 8) * 2.0 +
                 *(double *)(param_1 + 0x88);
      }
      else {
        dVar26 = *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar13 * 8) +
                 *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar13 * 8) +
                 *(double *)(param_1 + 0x84);
        dVar31 = *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar12 * 8) +
                 *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar12 * 8) +
                 *(double *)(param_1 + 0x86);
        dVar24 = *(double *)(*(longlong *)(param_3 + 0x1b8) + lVar14 * 8) +
                 *(double *)(*(longlong *)(param_3 + 0x1c0) + lVar14 * 8) +
                 *(double *)(param_1 + 0x88);
      }
      if ((*(char *)(param_3 + 0x327) == '\0') &&
         (((*(byte *)(param_3 + 0x88) & 0x40) != 0 || ((*(byte *)(param_3 + 0x88) & 0x80) != 0)))) {
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 2) * 8) =
             (dVar16 + 1.0) *
             *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar7 + 2) * 8) -
             dVar16 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar7 + 2) * 8);
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 5) * 8) =
             (dVar16 + 1.0) *
             *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar7 + 5) * 8) -
             dVar16 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar7 + 5) * 8);
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 8) * 8) =
             (dVar16 + 1.0) *
             *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar7 + 8) * 8) -
             dVar16 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar7 + 8) * 8);
      }
      else if (param_4 == 6) {
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 2) * 8) =
             (dVar29 - dVar23) * dVar26 +
             *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar7 + 2) * 8);
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 5) * 8) =
             (dVar28 - (dVar23 - dVar17)) * dVar31 +
             *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar7 + 5) * 8);
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 8) * 8) =
             (dVar30 - (dVar23 - dVar18)) * dVar24 +
             *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar7 + 8) * 8);
      }
      else {
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 2) * 8) = dVar29 * dVar26;
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 5) * 8) = dVar28 * dVar31;
        *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 8) * 8) = dVar30 * dVar24;
      }
      goto LAB_00e22698;
    }
  }
  dVar26 = *(double *)(param_1 + 0xa2) / 3.0;
  dVar31 = *(double *)(param_1 + 0xa2) / 3.0;
  dVar24 = 0.0;
LAB_00e22698:
  cVar6 = FUN_00e1fe10(param_3);
  if ((((cVar6 == '\x01') || ((*(byte *)(param_3 + 0x88) & 0x40) != 0)) || (param_4 != 6)) ||
     (*(char *)(param_3 + 0x330) == '\0')) {
    param_1[0x106] = 0;
    param_1[0x107] = 0;
    param_1[0xf8] = 0;
    param_1[0xf9] = 0;
    param_1[0x102] = 0;
    param_1[0x103] = 0;
    param_1[0xfc] = 0;
    param_1[0xfd] = 0;
    param_1[0x104] = 0;
    param_1[0x105] = 0;
    param_1[0xfe] = 0;
    param_1[0xff] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
  }
  else {
    if (dVar26 == 0.0) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 3) * 8) = 0;
    }
    if (dVar31 == 0.0) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 6) * 8) = 0;
    }
    if (dVar24 == 0.0) {
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 9) * 8) = 0;
    }
    FUN_00dafac0(param_2,param_3,param_1 + 0x106,param_1 + 0xf8,dVar26,
                 CONCAT44(uVar34,*(ushort *)(param_1 + 0x4a) + 2),0,1);
    FUN_00dafac0(param_2,param_3,param_1 + 0x102,param_1 + 0xfc,dVar31,
                 *(ushort *)(param_1 + 0x4a) + 5,0,1);
    FUN_00dafac0(param_2,param_3,param_1 + 0x104,param_1 + 0xfe,dVar24,
                 *(ushort *)(param_1 + 0x4a) + 8,0,1);
    *(undefined8 *)(param_1 + 0x2c) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 3) * 8);
    *(double *)(param_1 + 0xf8) =
         *(double *)(param_1 + 0x2c) - *(double *)(param_1 + 0x106) * dVar29;
    *(undefined8 *)(param_1 + 0x2e) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 6) * 8);
    *(double *)(param_1 + 0xfc) =
         *(double *)(param_1 + 0x2e) - *(double *)(param_1 + 0x102) * dVar28;
    *(undefined8 *)(param_1 + 0x30) =
         *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar7 + 9) * 8);
    *(double *)(param_1 + 0xfe) =
         *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x104) * dVar30;
  }
  *(double *)(param_1 + 0xfa) =
       (double)*param_1 * (*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x1a) * local_150);
  *(double *)(param_1 + 0x100) =
       (double)*param_1 * (*(double *)(param_1 + 0x1c) - *(double *)(param_1 + 0x1e) * local_158);
  if (param_1[1] < 0) {
    param_1[0x108] = 0;
    param_1[0x109] = 1;
    *(double *)(param_1 + 0xf6) =
         (double)-*param_1 *
         (((*(double *)(param_1 + 0x2a) + *(double *)(param_1 + 0x24) * local_148) -
          *(double *)(param_1 + 0x22) * dVar28) - *(double *)(param_1 + 0x26) * local_158);
  }
  else {
    param_1[0x108] = 1;
    param_1[0x109] = 0;
    *(double *)(param_1 + 0xf6) =
         (double)*param_1 *
         (((*(double *)(param_1 + 0x2a) - *(double *)(param_1 + 0x24) * local_148) -
          *(double *)(param_1 + 0x22) * dVar29) - *(double *)(param_1 + 0x26) * local_150);
  }
  *(double *)(param_1 + 0x106) = *(double *)(param_1 + 0x106) + *(double *)(param_3 + 0x430);
  FUN_00e1fe10(param_3);
  FUN_016ed320(param_2,(char)param_1[2] + '\x01',*(undefined8 *)(param_1 + 0xf6),
               *(undefined8 *)(param_1 + 0x24),0);
  FUN_016ed220(param_2,(char)param_1[2] + '\x02',
               (double)param_1[0x108] * *(double *)(param_1 + 0x22),0);
  FUN_016ed220(param_2,(char)param_1[2] + '\x03',
               (double)param_1[0x108] * *(double *)(param_1 + 0x26),0);
  FUN_016ed220(param_2,(char)param_1[2] + '\x04',
               (double)-param_1[0x109] * *(double *)(param_1 + 0x22),0);
  FUN_016ed220(param_2,(char)param_1[2] + '\x05',
               (double)-param_1[0x109] * *(double *)(param_1 + 0x26),0);
  *(undefined1 *)(*(longlong *)(param_1 + 0xee) + 0x70) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0x70) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0xf2) + 0x70) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0xf4) + 0x70) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0xec) + 0x70) = 0;
  cVar6 = FUN_00e1fe10(param_3);
  if (cVar6 == '\0') {
    FUN_016ed460(param_2,(char)param_1[2] + '\x06',*(undefined8 *)(param_1 + 0x100),
                 *(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0x90),0);
    FUN_016ed460(param_2,(char)param_1[2] + '\a',*(undefined8 *)(param_1 + 0xfa),
                 *(undefined8 *)(param_1 + 0x1a),*(undefined8 *)(param_1 + 0x92),0);
    FUN_016ed460(param_2,(char)param_1[2] + '\b',(double)*param_1 * *(double *)(param_1 + 0xf8),
                 *(undefined8 *)(param_1 + 0x106),dVar26,0);
    FUN_016ed460(param_2,(char)param_1[2] + '\t',(double)*param_1 * *(double *)(param_1 + 0xfc),
                 *(undefined8 *)(param_1 + 0x102),dVar31,0);
    FUN_016ed460(param_2,(char)param_1[2] + '\n',(double)*param_1 * *(double *)(param_1 + 0xfe),
                 *(undefined8 *)(param_1 + 0x104),dVar24,0);
  }
  return;
}

