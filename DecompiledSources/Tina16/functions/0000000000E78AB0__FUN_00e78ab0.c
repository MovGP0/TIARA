/* Ghidra address: 00e78ab0 */
/* Ghidra symbol: FUN_00e78ab0 */


void FUN_00e78ab0(int *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 unaff_XMM6_Qa;
  double dVar11;
  undefined8 unaff_XMM7_Qa;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_e9;
  double local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined1 local_a0 [152];
  
  iVar2 = FUN_016eebb0(param_2,(short)param_1[3],0);
  dVar5 = *(double *)(param_1 + 0x2c) * *(double *)(param_1 + 0x42);
  dVar15 = *(double *)(param_1 + 0x2e) * *(double *)(param_1 + 0x42);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x1e);
  *(undefined8 *)(param_1 + 8) =
       *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 1) * 8);
  uVar7 = *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 2) * 8);
  *(undefined8 *)(param_1 + 10) = uVar7;
  if ((byte)(param_4 - 8U) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    if (param_4 != '\f') {
      return;
    }
    uVar6 = FUN_0040c850(*(undefined8 *)(param_1 + 0xe));
    FUN_00b90620(uVar6,0x380b38fb9daa78e4);
    dVar5 = (double)FUN_0040c2f0();
    dVar5 = (double)FUN_0040af80(*(double *)(param_1 + 0x3e) * dVar5);
    uVar6 = FUN_0040c760((*(double *)(param_1 + 0x1c) * 1.10449808e-22 * *(double *)(param_1 + 0x40)
                         * *(double *)(param_1 + 0x12)) / 3.0 +
                         *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x3c) * dVar5);
    FUN_016ed220(param_2,*(char *)((longlong)param_1 + 5) + '\x06',uVar6,0);
    return;
  }
  if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
    if (*(char *)((longlong)param_1 + 0xe) == '\0') {
      uVar6 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 9),
                           *(undefined1 *)((longlong)param_1 + 10),0);
      *(undefined8 *)(param_1 + 4) = uVar6;
    }
    if (*(char *)((longlong)param_1 + 0xf) != '\0') {
      return;
    }
    uVar6 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                         *(undefined1 *)((longlong)param_1 + 0xb),
                         *(undefined1 *)((longlong)param_1 + 10),0);
    *(undefined8 *)(param_1 + 6) = uVar6;
    return;
  }
  if ((*(byte *)(param_3 + 0x88) & 0x40) == 0) {
    if ((*(char *)(param_3 + 0x327) == '\0') && ((*(byte *)(param_3 + 0x88) & 0x80) != 0)) {
      dVar10 = (double)FUN_01b08a30(param_3,1);
      dVar10 = *(double *)(param_3 + 0x10) / dVar10;
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 1) * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 1) * 8);
      local_160 = (dVar10 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 1) * 8) -
                  dVar10 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 1) * 8);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 2) * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 2) * 8);
      local_168 = (dVar10 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 2) * 8) -
                  dVar10 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 2) * 8);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 3) * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 3) * 8);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 4) * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 4) * 8);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 5) * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 5) * 8);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 6) * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 6) * 8);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 7) * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 7) * 8);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 8) * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 8) * 8);
      *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 9) * 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 9) * 8);
      *(undefined8 *)(param_1 + 8) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 1) * 8);
      *(undefined8 *)(param_1 + 10) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 2) * 8);
      *(undefined8 *)(param_1 + 0xc) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 3) * 8);
      *(undefined8 *)(param_1 + 0xe) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 4) * 8);
      *(undefined8 *)(param_1 + 0x10) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 5) * 8);
      *(undefined8 *)(param_1 + 0x12) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 6) * 8);
      *(undefined8 *)(param_1 + 0x14) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 7) * 8);
      *(undefined8 *)(param_1 + 0x16) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 8) * 8);
      *(undefined8 *)(param_1 + 0x18) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 9) * 8);
      goto LAB_00e79671;
    }
    if ((*(byte *)(param_3 + 0x88) & 2) != 0) {
      if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
        if ((char)param_1[1] == '\0') {
          local_160 = -1.0;
          local_168 = -1.0;
        }
        else {
          local_160 = 0.0;
          local_168 = 0.0;
        }
      }
      else {
        local_160 = (double)*param_1 * *(double *)(param_1 + 6);
        local_168 = local_160 - (double)*param_1 * *(double *)(param_1 + 4);
      }
      goto LAB_00e79671;
    }
    if (((*(byte *)(param_3 + 0x88) & 4) != 0) && ((char)param_1[1] != '\0')) {
      local_160 = 0.0;
      local_168 = 0.0;
      goto LAB_00e79671;
    }
    dVar10 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                  *(undefined1 *)((longlong)param_1 + 0xb),
                                  *(undefined1 *)((longlong)param_1 + 10),0);
    dVar10 = (double)*param_1 * dVar10;
    dVar11 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                  *(undefined1 *)((longlong)param_1 + 0xb),
                                  *(undefined1 *)((longlong)param_1 + 9),0);
    dVar11 = (double)*param_1 * dVar11;
    dVar14 = dVar10 - *(double *)(param_1 + 8);
    dVar13 = dVar11 - *(double *)(param_1 + 10);
    dVar16 = *(double *)(param_1 + 0xc) + *(double *)(param_1 + 0x18) * dVar13 +
             *(double *)(param_1 + 0x16) * dVar14;
    dVar12 = (*(double *)(param_1 + 0xe) + *(double *)(param_1 + 0x12) * dVar14 +
             *(double *)(param_1 + 0x14) * (dVar14 - dVar13)) - *(double *)(param_1 + 0x18) * dVar13
    ;
    lVar3 = FUN_0040c770(*(undefined8 *)(param_3 + 0x6e0));
    if (lVar3 == 0) {
LAB_00e7959d:
      uVar7 = FUN_00c42ff0(dVar10,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x1a),uVar6
                           ,&local_e9);
      uVar6 = FUN_00c42ff0(dVar11,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0x1a),
                           uVar6,&local_e9);
      local_160 = (double)FUN_00c432f0(uVar7,*(undefined8 *)(param_1 + 8),
                                       *(undefined8 *)(param_1 + 0x1e),&local_e9);
      local_168 = (double)FUN_00c432f0(uVar6,*(undefined8 *)(param_1 + 10),
                                       *(undefined8 *)(param_1 + 0x1e),&local_e9);
      goto LAB_00e79671;
    }
    dVar14 = (double)FUN_0040c850(dVar14);
    uVar7 = FUN_0040c850(dVar10);
    uVar8 = FUN_0040c850(*(undefined8 *)(param_1 + 8));
    dVar9 = (double)FUN_00b90620(uVar7,uVar8);
    if (*(double *)(param_3 + 0x3c8) * dVar9 + *(double *)(param_3 + 0x3d0) <= dVar14)
    goto LAB_00e7959d;
    dVar13 = (double)FUN_0040c850(dVar13);
    uVar7 = FUN_0040c850(dVar11);
    uVar8 = FUN_0040c850(*(undefined8 *)(param_1 + 10));
    dVar14 = (double)FUN_00b90620(uVar7,uVar8);
    if (*(double *)(param_3 + 0x3c8) * dVar14 + *(double *)(param_3 + 0x3d0) <= dVar13)
    goto LAB_00e7959d;
    dVar13 = (double)FUN_0040c850(dVar16 - *(double *)(param_1 + 0xc));
    uVar7 = FUN_0040c850(dVar16);
    uVar8 = FUN_0040c850(*(undefined8 *)(param_1 + 0xc));
    dVar16 = (double)FUN_00b90620(uVar7,uVar8);
    if (*(double *)(param_3 + 0x3c8) * dVar16 + *(double *)(param_3 + 0x3d0) <= dVar13)
    goto LAB_00e7959d;
    dVar16 = (double)FUN_0040c850(dVar12 - *(double *)(param_1 + 0xe));
    uVar7 = FUN_0040c850(dVar12);
    uVar8 = FUN_0040c850(*(undefined8 *)(param_1 + 0xe));
    dVar12 = (double)FUN_00b90620(uVar7,uVar8);
    if (*(double *)(param_3 + 0x3c8) * dVar12 + *(double *)(param_3 + 0x3d0) <= dVar16)
    goto LAB_00e7959d;
    local_160 = *(double *)(param_1 + 8);
    local_168 = *(double *)(param_1 + 10);
    local_130 = local_160 - local_168;
    local_150 = *(double *)(param_1 + 0x10);
    local_158 = *(double *)(param_1 + 0xc) - local_150;
    local_128 = *(double *)(param_1 + 0xe) + local_150;
    local_118 = *(double *)(param_1 + 0x12);
    local_108 = *(double *)(param_1 + 0x14);
    local_138 = *(double *)(param_1 + 0x16);
    local_148 = *(double *)(param_1 + 0x18);
  }
  else {
    local_160 = *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 1) * 8);
    local_168 = *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 2) * 8);
LAB_00e79671:
    local_130 = local_160 - local_168;
    if (*(double *)(param_1 + 0x1a) * -3.0 < local_160) {
      dVar10 = (double)FUN_0040af80(local_160 / *(double *)(param_1 + 0x1a));
      local_138 = (dVar15 * dVar10) / *(double *)(param_1 + 0x1a) + *(double *)(param_3 + 0x430);
      local_158 = dVar15 * (dVar10 - 1.0) + *(double *)(param_3 + 0x430) * local_160;
    }
    else {
      dVar10 = (*(double *)(param_1 + 0x1a) * 3.0) / (local_160 * 2.718281828459045);
      dVar10 = dVar10 * dVar10 * dVar10;
      local_158 = -dVar15 * (dVar10 + 1.0) + *(double *)(param_3 + 0x430) * local_160;
      local_138 = (dVar15 * 3.0 * dVar10) / local_160 + *(double *)(param_3 + 0x430);
    }
    if (*(double *)(param_1 + 0x1a) * -3.0 < local_168) {
      dVar10 = (double)FUN_0040af80(local_168 / *(double *)(param_1 + 0x1a));
      local_148 = (dVar15 * dVar10) / *(double *)(param_1 + 0x1a) + *(double *)(param_3 + 0x430);
      local_150 = dVar15 * (dVar10 - 1.0) + *(double *)(param_3 + 0x430) * local_168;
    }
    else {
      dVar10 = (*(double *)(param_1 + 0x1a) * 3.0) / (local_168 * 2.718281828459045);
      dVar10 = dVar10 * dVar10 * dVar10;
      local_150 = -dVar15 * (dVar10 + 1.0) + *(double *)(param_3 + 0x430) * local_168;
      local_148 = (dVar15 * 3.0 * dVar10) / local_168 + *(double *)(param_3 + 0x430);
    }
    local_120 = local_158 + local_150;
    if (local_130 < 0.0) {
      dVar15 = local_168 - *(double *)(param_1 + 0x1e);
      if (0.0 < dVar15) {
        dVar16 = 1.0 - *(double *)(param_1 + 0x30) * local_130;
        dVar10 = dVar5 * dVar16;
        dVar11 = *(double *)(param_1 + 0x3a) * dVar15 + 1.0;
        dVar12 = 1.0 / dVar11;
        if (-local_130 < 3.0 / *(double *)(param_1 + 0x2a)) {
          dVar13 = (*(double *)(param_1 + 0x2a) * local_130) / 3.0 + 1.0;
          dVar14 = 1.0 - dVar13 * dVar13 * dVar13;
          local_128 = -dVar10 * dVar15 * dVar15 * dVar12 * dVar14;
          local_118 = -dVar10 * dVar15 * (dVar11 + 1.0) * dVar12 * dVar12 * dVar14;
          local_108 = dVar5 * dVar15 * dVar15 * dVar12 *
                      (*(double *)(param_1 + 0x2a) * dVar13 * dVar13 * dVar16 +
                      dVar14 * *(double *)(param_1 + 0x30)) - local_118;
        }
        else {
          local_128 = -dVar10 * dVar15 * dVar15 * dVar12;
          local_118 = -dVar10 * dVar15 * (dVar11 + 1.0) * dVar12 * dVar12;
          local_108 = *(double *)(param_1 + 0x30) * dVar5 * dVar15 * dVar15 * dVar12 - local_118;
        }
      }
      else {
        local_128 = 0.0;
        local_118 = 0.0;
        local_108 = 0.0;
      }
    }
    else {
      dVar15 = local_160 - *(double *)(param_1 + 0x1e);
      if (0.0 < dVar15) {
        dVar12 = *(double *)(param_1 + 0x30) * local_130 + 1.0;
        dVar10 = dVar5 * dVar12;
        dVar11 = *(double *)(param_1 + 0x3a) * dVar15 + 1.0;
        local_108 = 1.0 / dVar11;
        if (local_130 < 3.0 / *(double *)(param_1 + 0x2a)) {
          dVar16 = 1.0 - (*(double *)(param_1 + 0x2a) * local_130) / 3.0;
          dVar13 = 1.0 - dVar16 * dVar16 * dVar16;
          local_128 = dVar10 * dVar15 * dVar15 * local_108 * dVar13;
          local_118 = dVar10 * dVar15 * (dVar11 + 1.0) * local_108 * local_108 * dVar13;
          local_108 = dVar5 * dVar15 * dVar15 * local_108 *
                      (*(double *)(param_1 + 0x2a) * dVar16 * dVar16 * dVar12 +
                      dVar13 * *(double *)(param_1 + 0x30));
        }
        else {
          local_128 = dVar10 * dVar15 * dVar15 * local_108;
          local_118 = dVar10 * dVar15 * (dVar11 + 1.0) * local_108 * local_108;
          local_108 = *(double *)(param_1 + 0x30) * dVar5 * dVar15 * dVar15 * local_108;
        }
      }
      else {
        local_128 = 0.0;
        local_118 = 0.0;
        local_108 = 0.0;
      }
    }
    local_110 = local_128 - local_150;
    if (((param_4 == '\x06') || ((*(byte *)(param_3 + 0x88) & 0x20) != 0)) ||
       ((param_4 == '\x05' && ((*(byte *)(param_3 + 0x88) & 0x10) != 0)))) {
      dVar12 = *(double *)(param_1 + 0x34) * *(double *)(param_1 + 0x42);
      dVar11 = *(double *)(param_1 + 0x36) * *(double *)(param_1 + 0x42);
      uVar6 = *(undefined8 *)(param_1 + 0x32);
      uVar7 = *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 1) * 8);
      uVar8 = *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 2) * 8);
      dVar16 = 1.0 / *(double *)(param_1 + 0x2a);
      dVar5 = (double)FUN_00e7a840(local_160,local_168,uVar6,dVar16,uVar1,dVar12,dVar11,&local_c8,
                                   &local_a8);
      dVar15 = (double)FUN_00e7a840(uVar7,local_168,uVar6,dVar16,uVar1,dVar12,dVar11,local_d0,
                                    local_b0);
      dVar10 = (double)FUN_00e7a840(local_160,uVar8,uVar6,dVar16,uVar1,dVar12,dVar11,local_d8,
                                    local_b8);
      dVar11 = (double)FUN_00e7a840(uVar7,uVar8,uVar6,dVar16,uVar1,dVar12,dVar11,local_e0,local_c0);
      if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
        *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 10) * 8) = dVar5;
        *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 0xc) * 8) = dVar5;
      }
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 10) * 8) =
           *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 10) * 8) +
           (((dVar5 - dVar15) + dVar10) - dVar11) * 0.5;
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0xc) * 8) =
           *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 0xc) * 8) +
           (((dVar5 - dVar10) + dVar15) - dVar11) * 0.5;
      unaff_XMM7_Qa = local_c8;
      unaff_XMM6_Qa = local_a8;
      if ((param_4 != '\x05') || ((*(byte *)(param_3 + 0x88) & 0x10) == 0)) {
        if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
          *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 10) * 8) = local_c8;
          *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0xc) * 8) = local_a8;
          goto LAB_00e7a5e5;
        }
        if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
          *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 10) * 8) =
               *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 10) * 8);
          *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 0xc) * 8) =
               *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0xc) * 8);
        }
        FUN_00dafac0(param_2,param_3,&local_e8,local_a0,local_c8,*(ushort *)(param_1 + 3) + 10,0,1);
        local_138 = local_138 + local_e8;
        local_158 = local_158 +
                    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0xb) * 8);
        FUN_00dafac0(param_2,param_3,&local_e8,local_a0,local_a8,*(ushort *)(param_1 + 3) + 0xc,0,1)
        ;
        local_148 = local_148 + local_e8;
        local_110 = local_110 -
                    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0xd) * 8);
        local_150 = local_150 +
                    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0xd) * 8);
        local_120 = local_158 + local_150;
        if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
          *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 0xb) * 8) =
               *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0xb) * 8);
          *(undefined8 *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 0xd) * 8) =
               *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0xd) * 8);
        }
      }
    }
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 1) * 8) = local_160;
    *(double *)(param_1 + 8) = local_160;
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 2) * 8) = local_168;
    *(double *)(param_1 + 10) = local_168;
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 3) * 8) = local_120;
    *(double *)(param_1 + 0xc) = local_120;
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 4) * 8) = local_110;
    *(double *)(param_1 + 0xe) = local_110;
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 5) * 8) = local_150;
    *(double *)(param_1 + 0x10) = local_150;
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 6) * 8) = local_118;
    *(double *)(param_1 + 0x12) = local_118;
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 7) * 8) = local_108;
    *(double *)(param_1 + 0x14) = local_108;
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 8) * 8) = local_138;
    *(double *)(param_1 + 0x16) = local_138;
    *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 9) * 8) = local_148;
    *(double *)(param_1 + 0x18) = local_148;
  }
  local_178 = (double)*param_1 * (local_150 - local_148 * local_168);
  local_170 = (double)*param_1 * (local_158 - local_138 * local_160);
  local_180 = (double)*param_1 * ((local_128 - local_108 * local_130) - local_118 * local_160);
LAB_00e7a5e5:
  FUN_016ed320(param_2,*(char *)((longlong)param_1 + 5) + '\x01',local_180,local_108,0);
  FUN_016ed220(param_2,*(char *)((longlong)param_1 + 5) + '\x02',local_118,0);
  FUN_016ed460(param_2,*(char *)((longlong)param_1 + 5) + '\x03',local_170,local_138,unaff_XMM7_Qa,0
              );
  FUN_016ed460(param_2,*(char *)((longlong)param_1 + 5) + '\x04',local_178,local_148,unaff_XMM6_Qa,0
              );
  FUN_016ed220(param_2,*(char *)((longlong)param_1 + 5) + '\x05',*(undefined8 *)(param_1 + 0x38),0);
  return;
}

