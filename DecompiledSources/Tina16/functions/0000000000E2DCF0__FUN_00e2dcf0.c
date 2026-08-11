/* Ghidra address: 00e2dcf0 */
/* Ghidra symbol: FUN_00e2dcf0 */


void FUN_00e2dcf0(double param_1,double param_2,double param_3,double *param_4,undefined8 param_5,
                 int *param_6)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
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
  double local_2a8;
  double local_2a0;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_1e8;
  int local_1d8;
  int local_1d4;
  double local_1d0;
  double local_1c0;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double adStack_178 [8];
  double adStack_138 [8];
  double adStack_f8 [4];
  double adStack_d8 [23];
  
  dVar7 = 0.0;
  dVar6 = 0.0;
  dVar12 = 0.0;
  dVar13 = 0.0;
  local_260 = 0.0;
  local_258 = 0.0;
  local_270 = 0.0;
  local_278 = 0.0;
  local_288 = 0.0;
  local_1e8 = 0.0;
  local_2a8 = 0.0;
  local_2a0 = 0.0;
  local_290 = 0.0;
  local_238 = *(double *)(param_6 + 0x8e);
  dVar3 = *(double *)(param_6 + 0x6a) - param_2;
  if (0.0 < param_2) {
    dVar14 = (double)FUN_0040c760(*(undefined8 *)(param_6 + 0x6a));
    local_248 = dVar14 / ((param_2 * 0.5) / *(double *)(param_6 + 0x6a) + 1.0);
    local_188 = local_248 / (*(double *)(param_6 + 0x6a) * dVar14);
    local_220 = local_248 * -0.5 * local_188;
    local_188 = -local_220 * local_188;
  }
  else {
    local_248 = (double)FUN_0040c760(dVar3);
    local_220 = -0.5 / local_248;
    local_188 = (local_220 * 0.5) / dVar3;
  }
  if (0.0 < param_2 - param_1) {
    dVar14 = (double)FUN_0040c760(*(undefined8 *)(param_6 + 0x6a));
    local_280 = dVar14 / (((param_2 - param_1) * 0.5) / *(double *)(param_6 + 0x6a) + 1.0);
    dVar14 = local_280 / (*(double *)(param_6 + 0x6a) * dVar14);
    dVar15 = local_280 * -0.5 * dVar14;
    dVar14 = -dVar15 * dVar14;
  }
  else {
    local_280 = (double)FUN_0040c760(dVar3 + param_1);
    dVar15 = -0.5 / local_280;
    dVar14 = (dVar15 * 0.5) / (dVar3 + param_1);
  }
  dVar4 = ((*(double *)(param_6 + 0x94) * 8.136278394671435e-11) / *(double *)(param_6 + 0xba)) *
          *(double *)(param_6 + 0xb6);
  dVar5 = dVar4 + 1.0;
  dVar9 = *(double *)(param_6 + 0x6c) * (double)*param_6 + dVar4 * dVar3;
  if ((0.0 < *(double *)(param_6 + 0x90)) || (0.0 < *(double *)(param_6 + 0x92))) {
    dVar11 = 0.0;
    dVar10 = 0.0;
    dVar17 = 0.0;
    dVar16 = 0.0;
    local_250 = 0.0;
    dVar19 = 0.0;
    if (0.0 < *(double *)(param_6 + 0x98)) {
      dVar12 = *(double *)(param_6 + 0x96) * local_248 * (2.0 / *(double *)(param_6 + 0x98)) + 1.0;
      dVar13 = *(double *)(param_6 + 0x96) * local_280 * (2.0 / *(double *)(param_6 + 0x98)) + 1.0;
      dVar6 = (double)FUN_0040c760(dVar12);
      dVar7 = (double)FUN_0040c760(dVar13);
      dVar10 = (*(double *)(param_6 + 0x98) * 0.5) / *(double *)(param_6 + 0xb6);
      dVar11 = dVar10 * (dVar6 - 1.0);
      dVar10 = dVar10 * (dVar7 - 1.0);
    }
    local_240 = *(double *)(param_6 + 0x90) * (1.0 - (dVar11 + dVar10));
    if (0.0 < *(double *)(param_6 + 0x98)) {
      dVar17 = ((0.5 / *(double *)(param_6 + 0xb6)) * *(double *)(param_6 + 0x96) * local_220) /
               dVar6;
      dVar16 = ((0.5 / *(double *)(param_6 + 0xb6)) * *(double *)(param_6 + 0x96) * dVar15) / dVar7;
      dVar19 = *(double *)(param_6 + 0x90) * -0.5 *
               ((-*(double *)(param_6 + 0x96) *
                (local_188 +
                (local_220 * local_220 * *(double *)(param_6 + 0x96)) /
                (*(double *)(param_6 + 0x98) * dVar12))) / (*(double *)(param_6 + 0xb6) * dVar6) +
               (-*(double *)(param_6 + 0x96) *
               (dVar14 + (dVar15 * dVar15 * *(double *)(param_6 + 0x96)) /
                         (*(double *)(param_6 + 0x98) * dVar13))) /
               (*(double *)(param_6 + 0xb6) * dVar7));
    }
    local_228 = -*(double *)(param_6 + 0x90) * (dVar17 + dVar16);
    if (0.0 < *(double *)(param_6 + 0x98)) {
      local_250 = (-*(double *)(param_6 + 0x90) * 0.5 * -(*(double *)(param_6 + 0x96) * dVar15)) /
                  (*(double *)(param_6 + 0xb6) * dVar7);
    }
  }
  else {
    local_240 = *(double *)(param_6 + 0x90);
    local_228 = 0.0;
    local_250 = 0.0;
    dVar19 = 0.0;
  }
  *param_4 = dVar9 + local_240 * local_248;
  dVar6 = *param_4;
  param_6[0xbc] = 0;
  param_6[0xbd] = 0;
  if ((*(double *)(param_6 + 0x9a) == 0.0) || (*(double *)(param_6 + 0xba) == 0.0)) {
    local_1c0 = *param_4;
    if (param_3 <= *param_4) {
      param_6[0x24] = 0;
      param_6[0x25] = 0;
      goto LAB_00e30413;
    }
  }
  else {
    local_260 = ((*(double *)(param_6 + 0x9a) * 1.6021917e-15) / *(double *)(param_6 + 0xba)) *
                *(double *)(param_6 + 0x66) * *(double *)(param_6 + 0x58) *
                *(double *)(param_6 + 0xb6) +
                -(local_240 * local_220 + local_228 * local_248) + dVar4 + 1.0;
    dVar7 = *(double *)(param_6 + 0x3a);
    *param_4 = *param_4 + dVar7 * local_260;
    local_258 = 1.0 / (dVar7 * local_260);
    local_1c0 = *param_4;
  }
  local_1c0 = param_3 - local_1c0;
  dVar7 = local_248 * local_248 * local_248;
  dVar12 = (double)FUN_0040c760(*(undefined8 *)(param_6 + 0x76));
  local_230 = local_280 * local_280 * local_280 - dVar7;
  local_218 = local_240 * 2.0 * (local_280 * local_280 * dVar15 - local_248 * local_248 * local_220)
  ;
  local_210 = -dVar4 + local_228 * local_248 + local_240 * local_220;
  if (*(double *)(param_6 + 0x9a) == 0.0) {
LAB_00e2e8c3:
    if ((*(double *)(param_6 + 0xba) <= 0.0) ||
       (dVar13 = (*(double *)(param_6 + 0x9c) * 1.035943139907e-08) / *(double *)(param_6 + 0x8c),
       local_1c0 <= dVar13)) goto LAB_00e2e9e9;
    dVar13 = (double)FUN_0040c2f0(dVar13 / local_1c0);
    local_1a8 = (double)FUN_0040af80(*(double *)(param_6 + 0x9e) * dVar13);
    local_1a0 = *(double *)(param_6 + 0xa0) * 0.0001 * local_1a8;
    local_1d0 = (-local_1a8 * *(double *)(param_6 + 0x9e)) / local_1c0;
    local_1c0 = (*(double *)(param_6 + 0x9e) * local_1a8 * local_210) / local_1c0;
  }
  else {
    if (*(double *)(param_6 + 0xba) != 0.0) {
      local_288 = local_228 * 2.0 * local_220 + local_240 * local_188 + dVar19 * local_248;
      local_210 = local_210 + *(double *)(param_6 + 0x3a) * local_288;
      local_278 = local_250 * local_220;
      local_270 = local_250 * local_248 + *(double *)(param_6 + 0x3a) * local_278;
      goto LAB_00e2e8c3;
    }
LAB_00e2e9e9:
    local_1a8 = 1.0;
    local_1a0 = *(double *)(param_6 + 0xa0) * 0.0001;
    local_1d0 = 0.0;
    local_1c0 = 0.0;
  }
  dVar13 = local_240 / dVar5;
  local_1b0 = param_3;
  if ((*(double *)(param_6 + 0x9a) != 0.0) && (*(double *)(param_6 + 0xba) != 0.0)) {
    local_1b0 = (double)FUN_00b90620(param_3,*param_4);
  }
  if (dVar13 <= 0.0) {
    *(double *)(param_6 + 0xbc) = (local_1b0 - dVar9) / dVar5;
    uVar8 = FUN_00b90620(*(undefined8 *)(param_6 + 0xbc),0);
    *(undefined8 *)(param_6 + 0xbc) = uVar8;
    local_198 = 1.0;
    local_190 = 0.0;
  }
  else {
    dVar14 = (local_1b0 - dVar9) / dVar5 + dVar3;
    if (0.0 < dVar14) {
      dVar15 = (double)FUN_0040c760((dVar14 * 4.0) / (dVar13 * dVar13) + 1.0);
      *(double *)(param_6 + 0xbc) =
           (local_1b0 - dVar9) / dVar5 + (dVar13 * dVar13 * (1.0 - dVar15)) / 2.0;
      uVar8 = FUN_00b90620(*(undefined8 *)(param_6 + 0xbc),0);
      *(undefined8 *)(param_6 + 0xbc) = uVar8;
      local_198 = (1.0 - 1.0 / dVar15) / dVar5;
      local_190 = ((dVar13 * (1.0 - dVar15) + (dVar14 * 2.0) / (dVar13 * dVar15)) / dVar5) *
                  local_228 + 1.0 / dVar15 + dVar4 * local_198;
    }
    else {
      param_6[0xbc] = 0;
      param_6[0xbd] = 0;
      local_198 = 0.0;
      local_190 = 0.0;
    }
  }
  if (0.0 < *(double *)(param_6 + 0xa2)) {
    dVar14 = (local_1b0 - dVar9) / dVar5 + dVar3;
    dVar15 = (*(double *)(param_6 + 0xa2) * *(double *)(param_6 + 0xb6)) / local_1a0;
    dVar11 = dVar13 / 0.75;
    dVar10 = (dVar14 + dVar15) * -2.0;
    dVar16 = dVar13 * -2.0 * dVar15;
    dVar17 = (dVar14 * 2.0 * (dVar3 + dVar15) - dVar3 * dVar3) - dVar13 * 1.3333333333333333 * dVar7
    ;
    dVar15 = -dVar10;
    dVar13 = dVar11 * dVar16 - dVar17 * 4.0;
    dVar14 = (-dVar15 * dVar15) / 3.0 + dVar13;
    dVar18 = ((dVar15 * 2.0 * dVar15 * dVar15) / 27.0 - (dVar15 * dVar13) / 3.0) +
             (-dVar17 * (dVar11 * dVar11 - dVar10 * 4.0) - dVar16 * dVar16);
    dVar19 = (dVar18 * dVar18) / 4.0 + (dVar14 * dVar14 * dVar14) / 27.0;
    dVar13 = (double)FUN_0040c850(dVar19);
    dVar14 = (double)FUN_0040c760(dVar13);
    if (0.0 <= dVar19) {
      FUN_0040c850(-dVar18 / 2.0 + dVar14);
      dVar13 = (double)FUN_0040c2f0();
      dVar13 = (double)FUN_0040af80(dVar13 / 3.0);
      FUN_0040c850(-dVar18 / 2.0 - dVar14);
      dVar14 = (double)FUN_0040c2f0();
      dVar14 = (double)FUN_0040af80(dVar14 / 3.0);
      dVar13 = (dVar13 + dVar14) - dVar15 / 3.0;
    }
    else {
      uVar8 = FUN_0040c760((dVar18 * dVar18) / 4.0 + dVar13);
      dVar13 = (double)FUN_0040c2f0(uVar8);
      dVar13 = (double)FUN_0040af80(dVar13 / 3.0);
      dVar14 = (double)FUN_0040c660((dVar14 * -2.0) / dVar18);
      dVar14 = (double)FUN_0040bcd0(dVar14 / 3.0);
      dVar13 = dVar13 * 2.0 * dVar14 - dVar15 / 3.0;
    }
    local_1d8 = 0;
    dVar14 = (double)FUN_0040c760(((dVar11 * dVar11) / 4.0 - dVar10) + dVar13);
    dVar15 = (double)FUN_0040c760((dVar13 * dVar13) / 4.0 - dVar17);
    local_1d4 = 1;
    do {
      adStack_d8[local_1d4 + -1] = dVar11 / 2.0 + (double)(&DAT_01edd900)[local_1d4 + -1] * dVar14;
      adStack_f8[local_1d4 + -1] = dVar13 / 2.0 + (double)(&DAT_01edd920)[local_1d4 + -1] * dVar15;
      if (0.0 <= (adStack_d8[local_1d4 + -1] * adStack_d8[local_1d4 + -1]) / 4.0 -
                 adStack_f8[local_1d4 + -1]) {
        iVar1 = local_1d8 + 1;
        dVar19 = (double)FUN_0040c760();
        adStack_138[local_1d8] = -adStack_d8[local_1d4 + -1] / 2.0 + dVar19;
        local_1d8 = local_1d8 + 2;
        adStack_138[iVar1] = -adStack_d8[local_1d4 + -1] / 2.0 - dVar19;
      }
      local_1d4 = local_1d4 + 1;
    } while (local_1d4 != 5);
    iVar2 = 0;
    iVar1 = 1;
    if (0 < local_1d8) {
      do {
        if (0.0 < adStack_138[iVar1 + -1]) {
          adStack_178[iVar1 + -1] =
               adStack_138[iVar1 + -1] * adStack_138[iVar1 + -1] * adStack_138[iVar1 + -1] *
               adStack_138[iVar1 + -1] +
               dVar11 * adStack_138[iVar1 + -1] * adStack_138[iVar1 + -1] * adStack_138[iVar1 + -1];
          adStack_178[iVar1 + -1] =
               adStack_178[iVar1 + -1] + dVar10 * adStack_138[iVar1 + -1] * adStack_138[iVar1 + -1]
               + dVar16 * adStack_138[iVar1 + -1] + dVar17;
          dVar13 = (double)FUN_0040c850(adStack_178[iVar1 + -1]);
          if (dVar13 <= 1e-06) {
            iVar2 = iVar2 + 1;
            if (iVar2 < 2) {
              local_1e8 = adStack_138[iVar1 + -1];
            }
            if (adStack_138[iVar1 + -1] <= local_1e8) {
              local_1e8 = adStack_138[iVar1 + -1];
            }
          }
        }
        iVar1 = iVar1 + 1;
        local_1d8 = local_1d8 + -1;
      } while (local_1d8 != 0);
    }
    if (0 < iVar2) {
      *(double *)(param_6 + 0xbc) = local_1e8 * local_1e8 - dVar3;
    }
  }
  if (param_1 == 0.0) {
LAB_00e2f96e:
    dVar7 = 0.0;
    dVar13 = 0.0;
    dVar3 = 0.0;
  }
  else {
    if (0.0 < param_2 - *(double *)(param_6 + 0xbc)) {
      dVar3 = (double)FUN_0040c760(*(undefined8 *)(param_6 + 0x6a));
      local_2a8 = dVar3 / (((param_2 - *(double *)(param_6 + 0xbc)) * 0.5) /
                           *(double *)(param_6 + 0x6a) + 1.0);
      dVar3 = (local_2a8 * -0.5 * local_2a8) / (*(double *)(param_6 + 0x6a) * dVar3);
    }
    else {
      local_2a8 = (double)FUN_0040c760(*(double *)(param_6 + 0xbc) + dVar3);
      dVar3 = -0.5 / local_2a8;
    }
    local_2a0 = local_2a8 * local_2a8 * local_2a8 - dVar7;
    local_290 = local_240 * 2.0 *
                (local_2a8 * local_2a8 * dVar3 - local_248 * local_248 * local_220);
    if (0.0 < *(double *)(param_6 + 0xa2)) {
      dVar7 = *(double *)(param_6 + 0xbc);
      dVar13 = (double)FUN_0040c760(*(undefined8 *)(param_6 + 0xa4));
      dVar13 = *(double *)(param_6 + 0x96) / dVar13;
      dVar15 = (*(double *)(param_6 + 0xa2) * dVar13) / (local_1a0 * 2.0);
      dVar3 = local_240 * dVar3 + -1.0;
      dVar14 = *(double *)(param_6 + 0xa2) * *(double *)(param_6 + 0xb6);
      local_190 = dVar14 * dVar3 -
                  local_1a0 * (((local_1b0 - dVar9) / dVar5 - dVar7) - local_240 * local_2a8);
      local_198 = -((dVar14 - local_1a0 * *(double *)(param_6 + 0xbc)) / dVar5) / local_190;
      local_190 = -(-dVar14 * ((dVar3 - dVar4 / dVar5) + 1.0) +
                   (local_1a0 * (local_290 - (local_228 * local_2a0) / 1.5)) / dVar5) / local_190;
      if ((*(double *)(param_6 + 0x92) != 0.0) && (local_238 <= 0.0)) {
        dVar3 = (double)FUN_00b90620(param_1 - *(double *)(param_6 + 0xbc),0);
        dVar3 = (double)FUN_0040c760(dVar15 * dVar15 + dVar3);
        local_238 = (dVar13 / (*(double *)(param_6 + 0xb6) * param_1)) * (dVar3 - dVar15);
        dVar3 = (dVar13 / (dVar3 * 2.0)) / *(double *)(param_6 + 0xb6);
        goto LAB_00e2f931;
      }
      goto LAB_00e2f96e;
    }
    if ((*(double *)(param_6 + 0x92) == 0.0) || (0.0 < local_238)) goto LAB_00e2f96e;
    dVar7 = (param_1 - *(double *)(param_6 + 0xbc)) / 4.0;
    dVar3 = (double)FUN_0040c760(dVar7 * dVar7 + 1.0);
    local_238 = (double)FUN_0040c760(dVar7 + dVar3);
    local_238 = (*(double *)(param_6 + 0x96) / (*(double *)(param_6 + 0xb6) * param_1)) * local_238;
    dVar3 = (param_1 * local_238) / (dVar3 * 8.0);
LAB_00e2f931:
    dVar7 = dVar3 * local_198;
    dVar13 = -local_238 + dVar3;
    dVar3 = dVar3 * local_190;
  }
  dVar12 = *(double *)(param_6 + 0x96) * dVar12;
  dVar14 = *(double *)(param_6 + 0xb6) - dVar12;
  dVar15 = 1.0 - local_238 * param_1;
  dVar13 = -local_238 - dVar13;
  if (*(double *)(param_6 + 0x92) == 0.0) {
    dVar12 = 2.5e-07;
  }
  if (*(double *)(param_6 + 0xb6) * dVar15 < dVar12) {
    dVar14 = dVar12 / ((local_238 * param_1 * *(double *)(param_6 + 0xb6) - dVar14) / dVar12 + 1.0);
    dVar15 = dVar14 / *(double *)(param_6 + 0xb6);
    dVar12 = (dVar14 * dVar14) / (dVar12 * dVar12);
    dVar7 = dVar7 * dVar12;
    dVar13 = dVar13 * dVar12;
    dVar3 = dVar3 * dVar12;
  }
  dVar12 = (*(double *)(param_6 + 0xb4) * local_1a8) / dVar15;
  if (1e-10 < param_1) {
    if (*param_4 <= param_3 && param_3 != *param_4) {
      if (param_1 <= *(double *)(param_6 + 0xbc)) {
        *(double *)(param_6 + 0x2a) =
             dVar12 * (((param_3 - dVar9) - (dVar5 * param_1) / 2.0) * param_1 -
                      (local_240 * local_230) / 1.5);
        *(double *)(param_6 + 0x22) =
             *(double *)(param_6 + 0x2a) * (local_1d0 / local_1a8 - dVar7 / dVar15) +
             dVar12 * param_1;
        *(double *)(param_6 + 0x24) =
             *(double *)(param_6 + 0x2a) * (0.0 / local_1a8 - dVar13 / dVar15) +
             dVar12 * ((((param_3 - dVar9) - dVar5 * param_1) - local_240 * local_280) -
                      (local_250 * local_230) / 1.5);
        *(double *)(param_6 + 0x26) =
             *(double *)(param_6 + 0x2a) * (local_1c0 / local_1a8 - dVar3 / dVar15) -
             dVar12 * ((local_218 + (local_228 * local_230) / 1.5) - dVar4 * param_1);
        return;
      }
      *(double *)(param_6 + 0x2a) =
           dVar12 * (((param_3 - dVar9) - (dVar5 * *(double *)(param_6 + 0xbc)) / 2.0) *
                     *(double *)(param_6 + 0xbc) - (local_240 * local_2a0) / 1.5);
      *(double *)(param_6 + 0x22) =
           *(double *)(param_6 + 0x2a) * (local_1d0 / local_1a8 - dVar7 / dVar15) +
           dVar12 * *(double *)(param_6 + 0xbc) +
           dVar12 * (((param_3 - dVar9) - dVar5 * *(double *)(param_6 + 0xbc)) -
                    local_240 * local_2a8) * local_198;
      *(double *)(param_6 + 0x24) =
           (-*(double *)(param_6 + 0x2a) * dVar13) / dVar15 - (dVar12 * local_250 * local_2a0) / 1.5
      ;
      *(double *)(param_6 + 0x26) =
           (*(double *)(param_6 + 0x2a) * (local_1c0 / local_1a8 - dVar3 / dVar15) -
           dVar12 * ((local_290 + (local_228 * local_2a0) / 1.5) -
                    dVar4 * *(double *)(param_6 + 0xbc))) +
           dVar12 * (((param_3 - dVar9) - dVar5 * *(double *)(param_6 + 0xbc)) -
                    local_240 * local_2a8) * local_190;
      return;
    }
    if (0.0 < *(double *)(param_6 + 0xbc)) {
      dVar6 = (double)FUN_00b90650(*(undefined8 *)(param_6 + 0xbc),param_1);
      if (*(double *)(param_6 + 0xbc) <= param_1 && param_1 != *(double *)(param_6 + 0xbc)) {
        local_280 = local_2a8;
        local_230 = local_2a0;
        local_218 = local_290;
      }
      dVar14 = dVar12 * (((*param_4 - dVar9) - dVar5 * dVar6 * 0.5) * dVar6 -
                        (local_240 * local_230) / 1.5);
      dVar5 = dVar12 * (((*param_4 - dVar9) - dVar5 * dVar6) - local_240 * local_280);
      dVar7 = (-dVar14 * dVar13) / dVar15 - (dVar12 * local_250 * local_230) / 1.5;
      if (param_1 < *(double *)(param_6 + 0xbc)) {
        dVar7 = dVar7 + dVar5;
      }
      dVar3 = (-dVar14 * dVar3) / dVar15 +
              dVar12 * (((local_210 * dVar6 + dVar4 * dVar6) - (local_228 * local_230) / 1.5) -
                       local_218);
      if (*(double *)(param_6 + 0xbc) <= param_1 && param_1 != *(double *)(param_6 + 0xbc)) {
        dVar3 = dVar3 + dVar5 * local_190;
      }
      dVar6 = (double)FUN_0040af80(local_258 * (param_3 - *param_4));
      *(double *)(param_6 + 0x2a) = dVar14 * dVar6;
      local_258 = *(double *)(param_6 + 0x2a) * local_258;
      *(double *)(param_6 + 0x22) = local_258;
      if (*(double *)(param_6 + 0xbc) <= param_1 && param_1 != *(double *)(param_6 + 0xbc)) {
        *(double *)(param_6 + 0x22) = local_258 + dVar5 * local_198 * dVar6;
      }
      local_260 = (local_258 * (param_3 - *param_4)) / local_260;
      *(double *)(param_6 + 0x24) =
           (dVar7 * dVar6 - *(double *)(param_6 + 0x22) * local_270) - local_260 * local_278;
      *(double *)(param_6 + 0x26) =
           (dVar3 * dVar6 - *(double *)(param_6 + 0x22) * local_210) - local_260 * local_288;
      return;
    }
    param_6[0x24] = 0;
    param_6[0x25] = 0;
    if (dVar6 < param_3) {
      return;
    }
  }
  else if (*param_4 < param_3) {
    *(double *)(param_6 + 0x24) = dVar12 * ((param_3 - dVar9) - local_240 * local_248);
  }
  else if ((*(double *)(param_6 + 0x9a) == 0.0) || (*(double *)(param_6 + 0xba) == 0.0)) {
    param_6[0x24] = 0;
    param_6[0x25] = 0;
  }
  else {
    dVar3 = (double)FUN_0040af80(local_258 * (param_3 - *param_4));
    *(double *)(param_6 + 0x24) = dVar12 * ((*param_4 - dVar9) - local_240 * local_248) * dVar3;
  }
LAB_00e30413:
  param_6[0x2a] = 0;
  param_6[0x2b] = 0;
  param_6[0x22] = 0;
  param_6[0x23] = 0;
  param_6[0x26] = 0;
  param_6[0x27] = 0;
  return;
}

