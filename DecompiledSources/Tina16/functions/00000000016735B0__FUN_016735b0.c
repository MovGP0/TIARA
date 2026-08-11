/* Ghidra address: 016735b0 */
/* Ghidra symbol: FUN_016735b0 */


char FUN_016735b0(int *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 double *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  char local_f9;
  int local_f4;
  double local_b8;
  double local_b0;
  char local_99 [145];
  
  local_f9 = '\0';
  *param_5 = 1.0;
  local_f4 = 0;
  iVar1 = FUN_016eebb0(param_2,(short)param_1[0x4a],0);
  lVar2 = (longlong)param_1[0xc];
  lVar3 = (longlong)param_1[10];
  dVar6 = (double)*param_1 *
          (*(double *)(*(longlong *)(param_3 + 0x118) + lVar2 * 8) -
          *(double *)(*(longlong *)(param_3 + 0x118) + lVar3 * 8));
  lVar5 = (longlong)param_1[0xb];
  local_b8 = (double)*param_1 *
             (*(double *)(*(longlong *)(param_3 + 0x118) + lVar5 * 8) -
             *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
  lVar4 = (longlong)param_1[9];
  local_b0 = (double)*param_1 *
             (*(double *)(*(longlong *)(param_3 + 0x118) + lVar4 * 8) -
             *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
  dVar16 = (double)*param_1 *
           (*(double *)(*(longlong *)(param_3 + 0x128) + lVar2 * 8) -
           *(double *)(*(longlong *)(param_3 + 0x128) + lVar3 * 8));
  dVar17 = (double)*param_1 *
           (*(double *)(*(longlong *)(param_3 + 0x128) + lVar2 * 8) -
           *(double *)(*(longlong *)(param_3 + 0x128) + lVar4 * 8));
  dVar18 = (double)*param_1 *
           (*(double *)(*(longlong *)(param_3 + 0x128) + lVar5 * 8) -
           *(double *)(*(longlong *)(param_3 + 0x128) + lVar3 * 8));
  dVar21 = (double)*param_1 *
           (*(double *)(*(longlong *)(param_3 + 0x128) + lVar5 * 8) -
           *(double *)(*(longlong *)(param_3 + 0x128) + lVar4 * 8));
  dVar19 = (double)*param_1 *
           (*(double *)(*(longlong *)(param_3 + 0x128) + lVar4 * 8) -
           *(double *)(*(longlong *)(param_3 + 0x128) + lVar3 * 8));
  dVar7 = dVar6 - local_b0;
  dVar15 = local_b8 - local_b0;
  dVar8 = dVar7 - dVar17;
  dVar9 = local_b8 - dVar18;
  dVar10 = local_b0 - dVar19;
  if (*(char *)(param_3 + 0x329) != '\0') {
    if (*(double *)(param_1 + 0x16) < 0.0) {
      dVar18 = (double)FUN_00c432f0(dVar15,dVar21,(double)*param_1 * *(double *)(param_1 + 0x38),
                                    local_99);
      if (local_99[0] != '\0') {
        local_f9 = '\x01';
        dVar19 = (double)FUN_0040c850(dVar15 - dVar21);
        dVar11 = *(double *)(param_3 + 0x3c8) * dVar21 + *(double *)(param_3 + 0x3d0);
        if (dVar11 < dVar19) {
          uVar13 = FUN_0040c850(dVar18 - dVar21);
          dVar11 = (double)FUN_00b90620(uVar13,dVar11);
          *param_5 = dVar11 / dVar19;
        }
        local_f4 = 200;
        local_b0 = local_b8 - dVar18;
      }
    }
    else {
      dVar11 = (double)FUN_00c432f0(local_b8,dVar18,(double)*param_1 * *(double *)(param_1 + 0x38),
                                    local_99);
      if (local_99[0] != '\0') {
        local_f9 = '\x01';
        dVar12 = (double)FUN_0040c850(local_b8 - dVar18);
        dVar20 = *(double *)(param_3 + 0x3c8) * dVar18 + *(double *)(param_3 + 0x3d0);
        if (dVar20 < dVar12) {
          uVar13 = FUN_0040c850(dVar11 - dVar18);
          dVar18 = (double)FUN_00b90620(uVar13,dVar20);
          *param_5 = dVar18 / dVar12;
        }
        local_f4 = 100;
        local_b0 = dVar11 - dVar15;
        local_b8 = dVar11;
      }
      dVar18 = (double)FUN_00c43230(local_b0,dVar19,local_99);
      if (local_99[0] != '\0') {
        local_f9 = '\x01';
        dVar11 = (double)FUN_0040c850(local_b0 - dVar19);
        dVar12 = *(double *)(param_3 + 0x3c8) * dVar19 + *(double *)(param_3 + 0x3d0);
        if (dVar12 < dVar11) {
          uVar13 = FUN_0040c850(dVar18 - dVar19);
          dVar18 = (double)FUN_00b90620(uVar13,dVar12);
          if (dVar18 / dVar11 < *param_5) {
            *param_5 = dVar18 / dVar11;
          }
        }
        local_f4 = local_f4 + 1;
      }
    }
    if (local_b0 < 0.0) {
      dVar18 = (double)FUN_00c42ff0(dVar7,dVar17,*(undefined8 *)(param_1 + 0x3c),
                                    *(undefined8 *)(param_1 + 0x34),local_99);
      if (local_99[0] != '\0') {
        local_f9 = '\x01';
        dVar19 = (double)FUN_0040c850(dVar7 - dVar17);
        dVar11 = *(double *)(param_3 + 0x3c8) * dVar17 + *(double *)(param_3 + 0x3d0);
        if (dVar11 < dVar19) {
          uVar13 = FUN_0040c850(dVar18 - dVar17);
          dVar17 = (double)FUN_00b90620(uVar13,dVar11);
          if (dVar17 / dVar19 < *param_5) {
            *param_5 = dVar17 / dVar19;
          }
        }
        if (local_f4 == 0) {
          local_f4 = 100;
        }
        local_f4 = local_f4 + 4;
      }
    }
    else {
      dVar17 = (double)FUN_00c42ff0(dVar6,dVar16,*(undefined8 *)(param_1 + 0x3c),
                                    *(undefined8 *)(param_1 + 0x36),local_99);
      if (local_99[0] != '\0') {
        local_f9 = '\x01';
        dVar18 = (double)FUN_0040c850(dVar6 - dVar16);
        dVar19 = *(double *)(param_3 + 0x3c8) * dVar16 + *(double *)(param_3 + 0x3d0);
        if (dVar19 < dVar18) {
          uVar13 = FUN_0040c850(dVar17 - dVar16);
          dVar17 = (double)FUN_00b90620(uVar13,dVar19);
          if (dVar17 / dVar18 < *param_5) {
            *param_5 = dVar17 / dVar18;
          }
        }
        if (local_f4 == 0) {
          local_f4 = 100;
        }
        local_f4 = local_f4 + 2;
      }
    }
    if (local_f9 != '\0') {
      FUN_016e9f80(param_2,param_3,local_99[0],local_f4);
    }
  }
  lVar2 = *(longlong *)(param_3 + 0x1b8);
  *(double *)(lVar2 + (longlong)(iVar1 + 0x16) * 8) = local_b8;
  *(double *)(lVar2 + (longlong)(iVar1 + 0x18) * 8) = local_b0;
  *(double *)(lVar2 + (longlong)(iVar1 + 0x17) * 8) = dVar6;
  *(double *)(lVar2 + (longlong)(iVar1 + 0x19) * 8) = dVar7;
  if ((*(char *)(param_3 + 0x331) == '\0') &&
     ((*(char *)((longlong)param_1 + 10) == '\0' || ((*(byte *)(param_3 + 0x88) & 8) != 0)))) {
    dVar7 = (double)FUN_016eec60(param_2,*(undefined8 *)(param_3 + 0x180),
                                 (short)param_1[0x4a] + 0x13,0);
    dVar17 = (double)FUN_016eec60(param_2,*(undefined8 *)(param_3 + 0x180),
                                  (short)param_1[0x4a] + 0x12,0);
    if (param_1[1] < 0) {
      dVar9 = ((*(double *)(param_1 + 0x20) -
               (*(double *)(param_1 + 0x1e) - *(double *)(param_1 + 0x26)) * dVar8) -
              *(double *)(param_1 + 0x22) * (dVar15 - dVar21)) +
              *(double *)(param_1 + 0x24) * dVar10;
    }
    else {
      dVar9 = (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x1e) * dVar8) +
              *(double *)(param_1 + 0x26) * (dVar6 - dVar16) + *(double *)(param_1 + 0x22) * dVar9 +
              *(double *)(param_1 + 0x24) * dVar10;
    }
    dVar10 = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c) +
             *(double *)(param_1 + 0x1e) * dVar8 + *(double *)(param_1 + 0x1a) * (dVar6 - dVar16);
    uVar13 = FUN_0040c850(dVar9);
    uVar14 = FUN_0040c850(*(undefined8 *)(param_1 + 0x20));
    dVar8 = (double)FUN_00b90630(uVar13,uVar14,*(double *)(param_3 + 0x3c0) * dVar7);
    dVar6 = *(double *)(param_3 + 0x3c8);
    dVar7 = *(double *)(param_3 + 0x3d8);
    dVar9 = (double)FUN_0040c850(dVar9 - *(double *)(param_1 + 0x20));
    if (dVar9 < dVar6 * dVar8 + dVar7) {
      uVar13 = FUN_0040c850(dVar10);
      uVar14 = FUN_0040c850(*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c));
      dVar8 = (double)FUN_00b90630(uVar13,uVar14,*(double *)(param_3 + 0x3c0) * dVar17);
      dVar6 = *(double *)(param_3 + 0x3c8);
      dVar7 = *(double *)(param_3 + 0x3d8);
      dVar9 = (double)FUN_0040c850(dVar10 - (*(double *)(param_1 + 0x18) +
                                            *(double *)(param_1 + 0x1c)));
      if (dVar6 * dVar8 + dVar7 < dVar9) {
        FUN_016e9f80(param_2,param_3,1,0xb);
      }
    }
    else {
      FUN_016e9f80(param_2,param_3,1,10);
    }
  }
  return local_f9;
}

