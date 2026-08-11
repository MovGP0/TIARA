/* Ghidra address: 00e3b2d0 */
/* Ghidra symbol: FUN_00e3b2d0 */


void FUN_00e3b2d0(double param_1,double param_2,double param_3,double *param_4,undefined8 param_5,
                 int *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  
  local_110 = 0.0;
  local_100 = 0.0;
  local_f8 = 0.0;
  local_118 = 0.0;
  local_f0 = 0.0;
  local_108 = 0.0;
  local_128 = 0.0;
  local_130 = 0.0;
  local_120 = 0.0;
  local_e8 = 0.0;
  param_6[0xb4] = 0;
  param_6[0xb5] = 0;
  dVar2 = 1.0 / *(double *)(param_6 + 0xae);
  dVar19 = (*(double *)(param_6 + 0x9a) * 8.15e-22) /
           (*(double *)(param_6 + 0x88) * *(double *)(param_6 + 0xae) * *(double *)(param_6 + 0xae)
           * *(double *)(param_6 + 0xae));
  if (0.0 < param_2) {
    dVar17 = (double)FUN_0040c760(*(undefined8 *)(param_6 + 0x66));
    dVar3 = dVar17 / (param_2 / (*(double *)(param_6 + 0x66) + *(double *)(param_6 + 0x66)) + 1.0);
    param_2 = dVar3 * dVar3;
    dVar17 = -param_2 /
             (*(double *)(param_6 + 0x66) * dVar17 + *(double *)(param_6 + 0x66) * dVar17);
  }
  else {
    param_2 = *(double *)(param_6 + 0x66) - param_2;
    dVar3 = (double)FUN_0040c760(param_2);
    dVar17 = -0.5 / dVar3;
  }
  if ((*(double *)(param_6 + 0x9c) == 0.0) || (*(double *)(param_6 + 0x96) == 0.0)) {
    dVar14 = 1.0;
    dVar11 = 0.0;
  }
  else {
    dVar11 = *(double *)(param_6 + 0x96);
    dVar18 = 1.0 / *(double *)(param_6 + 0x9c);
    dVar16 = *(double *)(param_6 + 0x9c);
    dVar14 = *(double *)(param_6 + 0xa6);
    dVar23 = dVar11 * dVar3 * dVar18;
    dVar4 = dVar23 * 0.8013292 + dVar23 * -0.01110777 * dVar23 + 0.0631353 + dVar14 * dVar18;
    dVar9 = dVar23 / (dVar23 + 1.0);
    dVar5 = (double)FUN_0040c760(1.0 - dVar9 * dVar9);
    dVar14 = 1.0 - dVar16 * dVar2 * (dVar4 * dVar5 - dVar14 * dVar18);
    dVar11 = -(dVar16 * dVar2) *
             (((dVar23 + dVar23) * -0.01110777 + 0.8013292) * *(double *)(param_6 + 0x96) * dVar17 *
              dVar18 * dVar5 +
             dVar4 * ((-dVar9 * dVar9 * (1.0 - dVar9) * *(double *)(param_6 + 0x96) * dVar17) /
                     (dVar5 * dVar11 * dVar3)));
  }
  dVar4 = *(double *)(param_6 + 0x92) * dVar14;
  dVar5 = (dVar4 * 0.5) / (dVar3 + dVar3);
  dVar18 = dVar5 + *(double *)(param_6 + 0x98) / *(double *)(param_6 + 0xb0);
  dVar16 = 1.0 / (dVar18 + 1.0);
  dVar9 = (-dVar5 * dVar17) / dVar3 + (dVar5 * dVar11) / dVar14;
  dVar5 = dVar4 * dVar3 + (*(double *)(param_6 + 0x98) * param_2) / *(double *)(param_6 + 0xb0);
  dVar11 = (dVar4 * dVar17 + *(double *)(param_6 + 0x92) * dVar11 * dVar3) -
           *(double *)(param_6 + 0x98) / *(double *)(param_6 + 0xb0);
  dVar14 = (*(double *)(param_6 + 0x68) * (double)*param_6 - dVar19 * param_1) + dVar5;
  dVar19 = -dVar19;
  *param_4 = dVar14;
  if (*(double *)(param_6 + 0x9e) == 0.0) {
    if (param_3 <= *param_4) {
      param_6[0x2a] = 0;
      param_6[0x2b] = 0;
      param_6[0x22] = 0;
      param_6[0x23] = 0;
      param_6[0x24] = 0;
      param_6[0x25] = 0;
      param_6[0x26] = 0;
      param_6[0x27] = 0;
      return;
    }
  }
  else {
    local_118 = (*(double *)(param_6 + 0x9e) * 1.6021917e-15 * *(double *)(param_6 + 0xae) *
                 *(double *)(param_6 + 0xb0) * *(double *)(param_6 + 0x62)) /
                *(double *)(param_6 + 0xb2) + dVar5 / (param_2 + param_2) + 1.0;
    *param_4 = dVar14 + *(double *)(param_6 + 0x3a) * local_118;
    local_110 = dVar11 / (param_2 + param_2) - (dVar5 * dVar17) / (param_2 * dVar3);
    local_100 = dVar11 + *(double *)(param_6 + 0x3a) * local_110;
    local_f8 = dVar19;
  }
  dVar3 = (double)FUN_00b90620(param_3,*param_4);
  dVar4 = *(double *)(param_6 + 0xa0) * (dVar3 - dVar14) + 1.0;
  dVar17 = 1.0 / dVar4;
  dVar5 = -*(double *)(param_6 + 0xa0) * dVar17 * dVar17;
  dVar23 = -dVar5 * dVar19;
  dVar20 = -dVar5 * dVar11;
  *(double *)(param_6 + 0xb4) = (dVar3 - dVar14) * dVar16;
  if (0.0 < *(double *)(param_6 + 0xa2)) {
    dVar21 = (*(double *)(param_6 + 0xae) * *(double *)(param_6 + 0xa2)) /
             (*(double *)(param_6 + 100) * dVar17);
    local_f0 = 1.0 / dVar21;
    dVar22 = (dVar3 - dVar14) * dVar16;
    dVar6 = (double)FUN_0040c760(dVar22 * dVar22 + dVar21 * dVar21);
    *(double *)(param_6 + 0xb4) = (dVar22 + dVar21) - dVar6;
    dVar12 = (1.0 - dVar22 / dVar6) * dVar16;
    dVar16 = dVar12 - (1.0 - dVar21 / dVar6) * dVar21 * dVar5 * dVar4;
    dVar22 = -dVar16 * dVar11 - dVar22 * dVar12 * dVar9;
  }
  else {
    dVar22 = -dVar16 * dVar11 - *(double *)(param_6 + 0xb4) * dVar9 * dVar16;
  }
  dVar6 = (double)FUN_00b90650(param_1,*(undefined8 *)(param_6 + 0xb4));
  if (dVar6 == 0.0) {
    dVar2 = *(double *)(param_6 + 0xac);
    param_6[0x2a] = 0;
    param_6[0x2b] = 0;
    param_6[0x22] = 0;
    param_6[0x23] = 0;
    *(double *)(param_6 + 0x24) = dVar2 * dVar17 * (dVar3 - dVar14);
    param_6[0x26] = 0;
    param_6[0x27] = 0;
    if (*(double *)(param_6 + 0x9e) == 0.0) {
      return;
    }
    if (*param_4 <= param_3) {
      return;
    }
    dVar2 = (double)FUN_0040af80((param_3 - *param_4) / (*(double *)(param_6 + 0x3a) * local_118));
    *(double *)(param_6 + 0x24) = *(double *)(param_6 + 0x24) * dVar2;
    return;
  }
  dVar12 = ((dVar3 - dVar14) - (dVar18 + 1.0) * 0.5 * dVar6) * dVar6;
  *(double *)(param_6 + 0x22) = dVar6;
  if (param_1 < *(double *)(param_6 + 0xb4) || param_1 == *(double *)(param_6 + 0xb4)) {
    *(double *)(param_6 + 0x24) = (dVar3 - dVar14) - (dVar18 + dVar19 + 1.0) * dVar6;
  }
  else {
    *(double *)(param_6 + 0x24) = -dVar19 * dVar6;
  }
  *(double *)(param_6 + 0x26) = (-dVar11 - dVar9 * 0.5 * dVar6) * dVar6;
  dVar3 = *(double *)(param_6 + 0xac) * dVar12;
  dVar17 = *(double *)(param_6 + 0xac) * dVar17;
  *(double *)(param_6 + 0x2a) = dVar17 * dVar12;
  *(double *)(param_6 + 0x22) = dVar17 * *(double *)(param_6 + 0x22) + dVar5 * dVar3;
  *(double *)(param_6 + 0x24) = dVar17 * *(double *)(param_6 + 0x24) + dVar23 * dVar3;
  *(double *)(param_6 + 0x26) = dVar17 * *(double *)(param_6 + 0x26) + dVar20 * dVar3;
  if (0.0 < *(double *)(param_6 + 0xa2)) {
    local_108 = 1.0 / (dVar6 * local_f0 + 1.0);
    local_130 = local_108 * local_108 * dVar6 * local_f0 * dVar4;
    local_128 = -dVar5 * local_130;
    if (param_1 < *(double *)(param_6 + 0xb4) || param_1 == *(double *)(param_6 + 0xb4)) {
      local_120 = -dVar23 * local_130 - local_108 * local_108 * local_f0;
    }
    else {
      local_120 = -dVar23 * local_130;
    }
    local_130 = -dVar20 * local_130;
    *(double *)(param_6 + 0x22) =
         local_108 * *(double *)(param_6 + 0x22) + local_128 * *(double *)(param_6 + 0x2a);
    *(double *)(param_6 + 0x24) =
         local_108 * *(double *)(param_6 + 0x24) + local_120 * *(double *)(param_6 + 0x2a);
    *(double *)(param_6 + 0x26) =
         local_108 * *(double *)(param_6 + 0x26) + local_130 * *(double *)(param_6 + 0x2a);
    *(double *)(param_6 + 0x2a) = local_108 * *(double *)(param_6 + 0x2a);
  }
  if (*(double *)(param_6 + 0xb4) < param_1) {
    if (*(double *)(param_6 + 0xa2) <= 0.0) {
      dVar3 = (double)FUN_0040c760(*(double *)(param_6 + 0xa4) * *(double *)(param_6 + 0x94) *
                                   ((param_1 - *(double *)(param_6 + 0xb4)) +
                                   *(double *)(param_6 + 0xb4) / 8.0));
      dVar17 = (dVar3 * 0.5) /
               ((param_1 - *(double *)(param_6 + 0xb4)) + *(double *)(param_6 + 0xb4) / 8.0);
      dVar14 = 0.0;
      local_e8 = -dVar17;
      dVar11 = 0.0;
    }
    else {
      if (*(double *)(param_6 + 0x94) == 0.0) goto LAB_00e3c93d;
      dVar9 = *(double *)(param_6 + 0x2a);
      dVar7 = (double)FUN_00b90620(0x3d719799812dea11,dVar9 * (1.0 - local_108) * local_f0);
      dVar10 = dVar7 / dVar9;
      dVar15 = dVar7 / (1.0 - local_108);
      dVar4 = dVar7 * dVar4;
      dVar14 = *(double *)(param_6 + 0x22);
      dVar18 = *(double *)(param_6 + 0x24);
      dVar6 = *(double *)(param_6 + 0x26);
      dVar3 = (*(double *)(param_6 + 0xa4) * dVar9 * dVar2) / dVar7;
      dVar9 = dVar3 / dVar9;
      dVar7 = dVar3 / dVar7;
      dVar12 = *(double *)(param_6 + 0x22);
      dVar21 = *(double *)(param_6 + 0x24);
      dVar1 = *(double *)(param_6 + 0x26);
      dVar13 = dVar3 * 0.5 * *(double *)(param_6 + 0x94);
      dVar17 = *(double *)(param_6 + 0xa4);
      dVar11 = *(double *)(param_6 + 0x94);
      dVar8 = (double)FUN_0040c760(dVar13 * dVar13 +
                                   dVar17 * dVar11 * (param_1 - *(double *)(param_6 + 0xb4)));
      dVar3 = dVar8 - dVar13;
      if (dVar8 == 0.0) {
        dVar17 = 0.0;
        dVar11 = 0.0;
      }
      else {
        dVar17 = (dVar17 * dVar11) / (dVar8 + dVar8);
        dVar11 = (dVar13 / dVar8 - 1.0) * 0.5 * *(double *)(param_6 + 0x94);
      }
      dVar14 = dVar11 * (dVar9 * dVar12 -
                        dVar7 * ((dVar10 * dVar14 - dVar15 * local_128) + dVar4 * dVar5));
      local_e8 = dVar11 * (dVar9 * dVar21 -
                          dVar7 * ((dVar10 * dVar18 - dVar15 * local_120) + dVar4 * dVar23)) -
                 dVar17;
      dVar11 = dVar11 * (dVar9 * dVar1 -
                        dVar7 * ((dVar10 * dVar6 - dVar15 * local_130) + dVar4 * dVar20));
    }
  }
  else {
    if ((0.0 < *(double *)(param_6 + 0xa2)) || (*(double *)(param_6 + 0x94) == 0.0))
    goto LAB_00e3c93d;
    dVar11 = param_1 / *(double *)(param_6 + 0xb4);
    dVar3 = (double)FUN_0040c760((*(double *)(param_6 + 0xa4) * *(double *)(param_6 + 0x94) *
                                 *(double *)(param_6 + 0xb4)) / 8.0);
    dVar17 = (dVar3 * 4.0 * dVar11 * dVar11 * dVar11) / *(double *)(param_6 + 0xb4);
    dVar3 = dVar3 * dVar11 * dVar11 * dVar11 * dVar11;
    dVar14 = 0.0;
    local_e8 = -dVar17;
    dVar11 = 0.0;
  }
  if (*(double *)(param_6 + 0xae) * 0.5 < dVar3) {
    dVar3 = *(double *)(param_6 + 0xae) -
            (*(double *)(param_6 + 0xae) * *(double *)(param_6 + 0xae)) / (dVar3 * 4.0);
    dVar4 = ((*(double *)(param_6 + 0xae) - dVar3) * 4.0 * (*(double *)(param_6 + 0xae) - dVar3)) /
            (*(double *)(param_6 + 0xae) * *(double *)(param_6 + 0xae));
    dVar14 = dVar14 * dVar4;
    local_e8 = local_e8 * dVar4;
    dVar11 = dVar11 * dVar4;
    dVar17 = dVar17 * dVar4;
  }
  dVar4 = 1.0 / (1.0 - dVar3 * dVar2);
  *(double *)(param_6 + 0x2a) = *(double *)(param_6 + 0x2a) * dVar4;
  dVar2 = *(double *)(param_6 + 0x2a) / (*(double *)(param_6 + 0xae) - dVar3);
  *(double *)(param_6 + 0x22) = *(double *)(param_6 + 0x22) * dVar4 + dVar2 * dVar14;
  *(double *)(param_6 + 0x26) = *(double *)(param_6 + 0x26) * dVar4 + dVar2 * dVar11;
  local_e8 = dVar2 * local_e8;
  *(double *)(param_6 + 0x22) = *(double *)(param_6 + 0x22) + local_e8 * dVar16;
  *(double *)(param_6 + 0x26) = *(double *)(param_6 + 0x26) + local_e8 * dVar22;
  *(double *)(param_6 + 0x24) =
       *(double *)(param_6 + 0x24) * dVar4 + dVar2 * dVar17 + local_e8 * -dVar16 * dVar19;
LAB_00e3c93d:
  if (param_3 < *param_4) {
    dVar3 = (1.0 / local_118) / *(double *)(param_6 + 0x3a);
    dVar19 = (double)FUN_0040af80((param_3 - *param_4) * dVar3);
    *(double *)(param_6 + 0x2a) = *(double *)(param_6 + 0x2a) * dVar19;
    dVar2 = *(double *)(param_6 + 0x22);
    dVar3 = *(double *)(param_6 + 0x2a) * dVar3;
    *(double *)(param_6 + 0x22) = dVar3;
    if (*(double *)(param_6 + 0xb4) <= param_1 && param_1 != *(double *)(param_6 + 0xb4)) {
      *(double *)(param_6 + 0x22) = *(double *)(param_6 + 0x22) + local_e8 * dVar16 * dVar19;
    }
    *(double *)(param_6 + 0x24) =
         *(double *)(param_6 + 0x24) * dVar19 + (dVar2 * dVar19 - dVar3) * local_f8;
    *(double *)(param_6 + 0x26) =
         (*(double *)(param_6 + 0x26) * dVar19 + (dVar2 * dVar19 - dVar3) * local_100) -
         dVar3 * (param_3 - *param_4) * (1.0 / local_118) * local_110;
  }
  return;
}

