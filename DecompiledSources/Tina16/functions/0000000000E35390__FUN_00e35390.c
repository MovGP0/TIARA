/* Ghidra address: 00e35390 */
/* Ghidra symbol: FUN_00e35390 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e35390(longlong param_1,longlong param_2,int param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,double *param_8,
                 double *param_9,longlong param_10,int *param_11)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  double *pdVar5;
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
  undefined1 auStack_338 [32];
  double *local_318;
  double *local_310;
  int *local_308;
  longlong local_2f8;
  longlong local_2f0;
  undefined1 local_2e1;
  double local_2e0;
  undefined8 local_2d0;
  double local_2c8 [4];
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  char local_250;
  char local_24f;
  char local_24c;
  char local_24b;
  char local_24a;
  undefined1 local_249;
  char local_248;
  double local_240 [4];
  undefined8 local_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  undefined8 local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  pdVar5 = local_2c8;
  for (lVar4 = 0x11; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_8;
    param_8 = param_8 + 1;
    pdVar5 = pdVar5 + 1;
  }
  pdVar5 = local_240;
  for (lVar4 = 0x31; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_9;
    param_9 = param_9 + 1;
    pdVar5 = pdVar5 + 1;
  }
  local_2f8 = param_1;
  local_2f0 = param_2;
  local_2e1 = param_4;
  if ((local_250 == '\0') ||
     (iVar3 = FUN_00e35350(auStack_338,&local_f8), *(char *)(param_10 + iVar3) != '\0')) {
    local_f8 = local_2c8[1];
  }
  if ((local_24f == '\0') ||
     (iVar3 = FUN_00e35350(auStack_338,&local_f0), *(char *)(param_10 + iVar3) != '\0')) {
    local_f0 = local_2c8[2];
  }
  *param_11 = param_3;
  iVar3 = FUN_00e35350(auStack_338,&local_110);
  if (*(char *)(param_10 + iVar3) == '\0') {
    local_110 = local_110 + 273.15;
  }
  else {
    local_110 = 300.15;
  }
  dVar11 = local_110 / 300.15;
  dVar14 = local_110 * 8.61708745588933e-05;
  dVar6 = local_110 * 1.3806226e-23;
  dVar10 = 1.16 - (local_110 * 0.000702 * local_110) / (local_110 + 1108.0);
  dVar7 = (double)FUN_0040c2f0(dVar11);
  dVar6 = dVar14 * -2.0 *
          (dVar7 * 1.5 + (-dVar10 / (dVar6 + dVar6) + 1.3454442398941469e+20) * 1.6021917e-19);
  iVar3 = FUN_00e35350(auStack_338,&local_180);
  if (*(char *)(param_10 + iVar3) != '\0') {
    local_180 = 1e-07;
  }
  *(double *)(param_11 + 0x8c) = 3.45314379969e-11 / local_180;
  iVar3 = FUN_00e35350(auStack_338,&local_170);
  if (*(char *)(param_10 + iVar3) != '\0') {
    local_170 = 600.0;
  }
  iVar3 = FUN_00e35350(auStack_338,local_240 + 1);
  if (*(char *)(param_10 + iVar3) != '\0') {
    local_240[1] = local_170 * *(double *)(param_11 + 0x8c) * 0.0001;
  }
  iVar3 = FUN_00e35350(auStack_338,&local_160);
  if (*(char *)(param_10 + iVar3) == '\0') {
    if (local_160 * 1000000.0 <= 1.45e+16) {
      local_160 = 0.0;
    }
    else {
      iVar3 = FUN_00e35350(auStack_338,local_240 + 3);
      if (*(char *)(param_10 + iVar3) != '\0') {
        local_240[3] = (double)FUN_0040c2f0((local_160 * 1000000.0) / 1.45e+16);
        local_240[3] = dVar14 * 2.0 * local_240[3];
        local_240[3] = (double)FUN_00b90620(0x3fb999999999999a,local_240[3]);
      }
      dVar13 = (double)param_3 * 0.5 * local_240[3];
      dVar7 = 3.2;
      iVar3 = FUN_00e35350(auStack_338,&local_158);
      if (*(char *)(param_10 + iVar3) != '\0') {
        local_158 = 1.0;
      }
      if (local_158 != 0.0) {
        dVar7 = (dVar10 * 0.5 - (double)param_3 * local_158 * 0.5 * dVar10) + 3.25;
      }
      iVar3 = FUN_00e35350(auStack_338,local_240 + 2);
      if (*(char *)(param_10 + iVar3) != '\0') {
        local_240[2] = (double)FUN_0040c760(local_160 * 3.319559000861868e-23);
        local_240[2] = local_240[2] / *(double *)(param_11 + 0x8c);
      }
      iVar3 = FUN_00e35350(auStack_338,local_240);
      if (*(char *)(param_10 + iVar3) == '\0') {
        FUN_0040c760(local_240[3]);
      }
      else {
        iVar3 = FUN_00e35350(auStack_338,&local_150);
        if (*(char *)(param_10 + iVar3) != '\0') {
          local_150 = 0.0;
        }
        dVar8 = local_150 * 1.6021917e-15;
        dVar12 = *(double *)(param_11 + 0x8c);
        dVar9 = (double)FUN_0040c760(local_240[3]);
        local_240[0] = (((dVar7 - (dVar10 * 0.5 + dVar13)) - 3.25) - dVar8 / dVar12) +
                       (double)param_3 * (local_240[2] * dVar9 + local_240[3]);
      }
      *(double *)(param_11 + 0x96) = 2.0718862798139998e-10 / (local_160 * 1.6021917e-13);
    }
  }
  iVar3 = FUN_00e35350(auStack_338,&local_1a8);
  if (*(char *)(param_10 + iVar3) != '\0') {
    local_1a8 = (double)FUN_0040c760((local_160 * 1.659779500430934e-23) / (local_1d0 * 2.0));
  }
  *(double *)(param_11 + 0x4c) = local_2c8[0];
  param_11[1] = 1;
  param_11[0x38] = 0;
  param_11[0x39] = 0;
  dVar9 = local_2c8[0] * 8.61708745588933e-05;
  dVar15 = local_2c8[0] / local_110;
  dVar12 = local_2c8[0] / 300.15;
  dVar7 = local_2c8[0] * 1.3806226e-23;
  local_2e0 = 1.16 - (local_2c8[0] * 0.000702 * local_2c8[0]) / (local_2c8[0] + 1108.0);
  dVar8 = -local_2e0;
  dVar13 = (double)FUN_0040c2f0(dVar12);
  dVar13 = dVar9 * -2.0 *
           (dVar13 * 1.5 + (dVar8 / (dVar7 + dVar7) + 1.3454442398941469e+20) * 1.6021917e-19);
  *(double *)(param_11 + 0x56) = local_f8;
  *(undefined8 *)(param_11 + 0x58) = local_f0;
  *(double *)(param_11 + 0x62) = local_2c8[3];
  *(double *)(param_11 + 100) = local_2a8;
  *(double *)(param_11 + 0x66) = local_270;
  dVar7 = (double)FUN_0040c760(dVar15);
  dVar15 = dVar15 * dVar7;
  dVar8 = local_240[1] / dVar15;
  *(double *)(param_11 + 0x68) = (local_170 * 0.0001) / dVar15;
  *(double *)(param_11 + 0x6a) = dVar12 * ((local_240[3] - dVar6) / dVar11) + dVar13;
  dVar7 = (double)FUN_0040c760(local_240[3]);
  *(double *)(param_11 + 0x6c) =
       (local_240[0] - (double)param_3 * local_240[2] * dVar7) + (dVar10 - local_2e0) * 0.5 +
       (double)param_3 * 0.5 * (*(double *)(param_11 + 0x6a) - local_240[3]);
  dVar7 = (double)FUN_0040c760(*(undefined8 *)(param_11 + 0x6a));
  *(double *)(param_11 + 0x32) =
       *(double *)(param_11 + 0x6c) + (double)param_3 * local_240[2] * dVar7;
  dVar7 = (double)FUN_0040af80(-local_2e0 / dVar9 + dVar10 / dVar14);
  dVar7 = local_1e0 * dVar7;
  dVar10 = (double)FUN_0040af80(-local_2e0 / dVar9 + dVar10 / dVar14);
  dVar10 = local_188 * dVar10;
  dVar11 = (local_1d0 - dVar6) / dVar11;
  dVar6 = (local_1d0 - dVar11) / dVar11;
  dVar14 = 1.0 / (local_1a0 * ((local_110 - 300.15) * 0.0004 - dVar6) + 1.0);
  *(double *)(param_11 + 0x6e) = local_1f0 * dVar14;
  *(double *)(param_11 + 0x70) = local_1e8 * dVar14;
  *(double *)(param_11 + 0x72) = local_1a8 * dVar14;
  *(double *)(param_11 + 0x74) =
       local_198 * (1.0 / (local_190 * ((local_110 - 300.15) * 0.0004 - dVar6) + 1.0));
  *(double *)(param_11 + 0x76) = dVar12 * dVar11 + dVar13;
  dVar11 = (*(double *)(param_11 + 0x76) - dVar11) / dVar11;
  dVar6 = local_1a0 * ((local_2c8[0] - 300.15) * 0.0004 - dVar11) + 1.0;
  *(double *)(param_11 + 0x6e) = *(double *)(param_11 + 0x6e) * dVar6;
  *(double *)(param_11 + 0x70) = *(double *)(param_11 + 0x70) * dVar6;
  *(double *)(param_11 + 0x72) = *(double *)(param_11 + 0x72) * dVar6;
  *(double *)(param_11 + 0x74) =
       *(double *)(param_11 + 0x74) *
       (local_190 * ((local_2c8[0] - 300.15) * 0.0004 - dVar11) + 1.0);
  *(double *)(param_11 + 0x78) = local_168 * *(double *)(param_11 + 0x76);
  *(double *)(param_11 + 0x3a) = dVar9;
  *(double *)(param_11 + 0x3c) = local_1d8 * dVar9;
  if (((local_188 == 0.0) || (local_2c8[3] == 0.0)) || (local_2a8 == 0.0)) {
    if (dVar7 == 0.0) {
      param_11[0x34] = 0x66666666;
      param_11[0x35] = 0x3fe66666;
    }
    else {
      dVar6 = (double)FUN_0040c2f0(*(double *)(param_11 + 0x3c) /
                                   (local_270 * 1.4142135623730951 * dVar7));
      *(double *)(param_11 + 0x34) = *(double *)(param_11 + 0x3c) * dVar6;
    }
    *(undefined8 *)(param_11 + 0x36) = *(undefined8 *)(param_11 + 0x34);
  }
  else if (dVar10 == 0.0) {
    param_11[0x34] = 0x66666666;
    param_11[0x35] = 0x3fe66666;
    *(undefined8 *)(param_11 + 0x36) = *(undefined8 *)(param_11 + 0x34);
  }
  else {
    dVar6 = (double)FUN_0040c2f0(*(double *)(param_11 + 0x3c) /
                                 (local_270 * 1.4142135623730951 * dVar10 * local_2c8[3]));
    *(double *)(param_11 + 0x34) = *(double *)(param_11 + 0x3c) * dVar6;
    dVar6 = (double)FUN_0040c2f0(*(double *)(param_11 + 0x3c) /
                                 (local_270 * 1.4142135623730951 * dVar10 * local_2a8));
    *(double *)(param_11 + 0x36) = *(double *)(param_11 + 0x3c) * dVar6;
  }
  iVar3 = FUN_00e35350(auStack_338,&local_1f0);
  if (*(char *)(param_10 + iVar3) == '\0') {
    dVar6 = *(double *)(param_11 + 0x6e) * local_270;
  }
  else {
    iVar3 = FUN_00e35350(auStack_338,&local_1a8);
    if (*(char *)(param_10 + iVar3) == '\0') {
      dVar6 = *(double *)(param_11 + 0x72) * local_2c8[3] * local_270;
    }
    else {
      dVar6 = 0.0;
    }
  }
  iVar3 = FUN_00e35350(auStack_338,&local_198);
  if (*(char *)(param_10 + iVar3) == '\0') {
    dVar11 = *(double *)(param_11 + 0x74) * local_2a0 * local_270;
  }
  else {
    dVar11 = 0.0;
  }
  dVar12 = 1.0 - local_168;
  dVar14 = (double)FUN_0040c2f0(dVar12);
  dVar14 = (double)FUN_0040af80(-local_1a0 * dVar14);
  dVar13 = (double)FUN_0040c2f0(dVar12);
  dVar13 = (double)FUN_0040af80(-local_190 * dVar13);
  *(double *)(param_11 + 0x60) = dVar6;
  *(double *)(param_11 + 0x5c) = dVar11;
  *(double *)(param_11 + 0x7a) =
       (dVar6 * (1.0 - local_168 * (local_1a0 + 1.0)) * dVar14) / dVar12 +
       (dVar11 * (1.0 - local_168 * (local_190 + 1.0)) * dVar13) / dVar12;
  *(double *)(param_11 + 0x7c) =
       ((dVar6 * local_1a0 * dVar14) / dVar12) / *(double *)(param_11 + 0x76) +
       ((dVar11 * local_190 * dVar13) / dVar12) / *(double *)(param_11 + 0x76);
  *(double *)(param_11 + 0x7e) =
       (((dVar6 * *(double *)(param_11 + 0x76) * (1.0 - dVar12 * dVar14)) / (1.0 - local_1a0) +
        (dVar11 * *(double *)(param_11 + 0x76) * (1.0 - dVar12 * dVar13)) / (1.0 - local_190)) -
       (*(double *)(param_11 + 0x7c) / 2.0) *
       *(double *)(param_11 + 0x78) * *(double *)(param_11 + 0x78)) -
       *(double *)(param_11 + 0x78) * *(double *)(param_11 + 0x7a);
  iVar3 = FUN_00e35350(auStack_338,&local_1e8);
  if (*(char *)(param_10 + iVar3) == '\0') {
    dVar6 = *(double *)(param_11 + 0x70) * local_270;
  }
  else {
    iVar3 = FUN_00e35350(auStack_338,&local_1a8);
    if (*(char *)(param_10 + iVar3) == '\0') {
      dVar6 = *(double *)(param_11 + 0x72) * local_2a8 * local_270;
    }
    else {
      dVar6 = 0.0;
    }
  }
  iVar3 = FUN_00e35350(auStack_338,&local_198);
  if (*(char *)(param_10 + iVar3) == '\0') {
    dVar11 = *(double *)(param_11 + 0x74) * local_298 * local_270;
  }
  else {
    dVar11 = 0.0;
  }
  dVar12 = 1.0 - local_168;
  dVar14 = (double)FUN_0040c2f0(dVar12);
  dVar14 = (double)FUN_0040af80(-local_1a0 * dVar14);
  dVar13 = (double)FUN_0040c2f0(dVar12);
  dVar13 = (double)FUN_0040af80(-local_190 * dVar13);
  *(double *)(param_11 + 0x5e) = dVar6;
  *(double *)(param_11 + 0x5a) = dVar11;
  *(double *)(param_11 + 0x80) =
       (dVar6 * (1.0 - local_168 * (local_1a0 + 1.0)) * dVar14) / dVar12 +
       (dVar11 * (1.0 - local_168 * (local_190 + 1.0)) * dVar13) / dVar12;
  *(double *)(param_11 + 0x82) =
       ((dVar6 * local_1a0 * dVar14) / dVar12) / *(double *)(param_11 + 0x76) +
       ((dVar11 * local_190 * dVar13) / dVar12) / *(double *)(param_11 + 0x76);
  *(double *)(param_11 + 0x84) =
       (((dVar6 * *(double *)(param_11 + 0x76) * (1.0 - dVar12 * dVar14)) / (1.0 - local_1a0) +
        (dVar11 * *(double *)(param_11 + 0x76) * (1.0 - dVar12 * dVar13)) / (1.0 - local_190)) -
       (*(double *)(param_11 + 0x82) / 2.0) *
       *(double *)(param_11 + 0x78) * *(double *)(param_11 + 0x78)) -
       *(double *)(param_11 + 0x78) * *(double *)(param_11 + 0x80);
  *(undefined8 *)(param_11 + 0x8e) = local_220;
  *(double *)(param_11 + 0x90) = local_240[2];
  *(undefined8 *)(param_11 + 0x98) = local_128;
  *(undefined8 *)(param_11 + 0x9a) = local_118;
  *(undefined8 *)(param_11 + 0xa2) = local_130;
  *(double *)(param_11 + 0x92) = local_160;
  *(double *)(param_11 + 0xa0) = local_170;
  *(double *)(param_11 + 0xac) = local_1a0;
  *(double *)(param_11 + 0xae) = local_190;
  *(undefined8 *)(param_11 + 0xaa) = local_178;
  *(undefined8 *)(param_11 + 0xa6) = local_100;
  *(undefined8 *)(param_11 + 0xa8) = local_108;
  *(double *)(param_11 + 0xb0) = local_1f0;
  *(double *)(param_11 + 0xb2) = local_1e8;
  *(undefined8 *)(param_11 + 0x94) = local_148;
  *(undefined8 *)(param_11 + 0x9e) = local_140;
  *(undefined8 *)(param_11 + 0x9c) = local_138;
  *(undefined8 *)(param_11 + 0xa4) = local_120;
  iVar3 = FUN_00e35350(auStack_338,&local_218);
  if ((*(char *)(param_10 + iVar3) != '\0') &&
     (iVar3 = FUN_00e35350(auStack_338,&local_1b0), *(char *)(param_10 + iVar3) == '\0')) {
    local_218 = local_1b0 * local_290;
  }
  iVar3 = FUN_00e35350(auStack_338,&local_210);
  if ((*(char *)(param_10 + iVar3) != '\0') &&
     (iVar3 = FUN_00e35350(auStack_338,&local_1b0), *(char *)(param_10 + iVar3) == '\0')) {
    local_210 = local_1b0 * local_288;
  }
  iVar3 = FUN_00e35350(auStack_338,&local_208);
  if ((*(char *)(param_10 + iVar3) != '\0') &&
     (iVar3 = FUN_00e35350(auStack_338,&local_1b0), *(char *)(param_10 + iVar3) == '\0')) {
    local_208 = local_1b0 * local_280;
  }
  iVar3 = FUN_00e35350(auStack_338,&local_200);
  if ((*(char *)(param_10 + iVar3) != '\0') &&
     (iVar3 = FUN_00e35350(auStack_338,&local_1b0), *(char *)(param_10 + iVar3) == '\0')) {
    local_200 = local_1b0 * local_278;
  }
  if (1e-06 <= local_218) {
    *(double *)(param_11 + 0xc4) = 1.0 / local_218;
  }
  else {
    local_218 = 0.0;
    param_11[0xc4] = 0;
    param_11[0xc5] = 0;
  }
  if (1e-06 <= local_210) {
    *(double *)(param_11 + 0xc6) = 1.0 / local_210;
  }
  else {
    local_210 = 0.0;
    param_11[0xc6] = 0;
    param_11[199] = 0;
  }
  if (1e-06 <= local_208) {
    *(double *)(param_11 + 200) = 1.0 / local_208;
  }
  else {
    local_208 = 0.0;
    param_11[200] = 0;
    param_11[0xc9] = 0;
  }
  if (1e-06 <= local_200) {
    *(double *)(param_11 + 0xca) = 1.0 / local_200;
  }
  else {
    local_200 = 0.0;
    param_11[0xca] = 0;
    param_11[0xcb] = 0;
  }
  if (1e-06 <= local_1f8) {
    *(double *)(param_11 + 0xc2) = 1.0 / local_1f8;
  }
  else {
    local_1f8 = 0.0;
    param_11[0xc2] = 0;
    param_11[0xc3] = 0;
  }
  *(char *)((longlong)param_11 + 9) = local_248;
  *(undefined1 *)((longlong)param_11 + 10) = local_249;
  *(undefined8 *)(param_11 + 0x4e) = local_268;
  *(undefined8 *)(param_11 + 0x50) = local_260;
  *(undefined8 *)(param_11 + 0x52) = local_258;
  *(bool *)(param_11 + 0x54) = local_24c == '\0';
  *(bool *)((longlong)param_11 + 0x151) = local_24b == '\0';
  *(bool *)((longlong)param_11 + 0x152) = local_24a == '\0';
  *(undefined8 *)(param_11 + 0x3e) = local_e8;
  *(undefined8 *)(param_11 + 0x40) = local_e0;
  *(undefined8 *)(param_11 + 0x42) = local_d8;
  *(undefined8 *)(param_11 + 0x44) = local_d0;
  *(undefined8 *)(param_11 + 0x46) = local_c8;
  *(undefined8 *)(param_11 + 0x48) = local_c0;
  if (local_248 == '\x01') {
    local_210 = 1000000000.0;
  }
  else if (local_248 == '\x02') {
    local_218 = 1000000000.0;
  }
  *(undefined1 *)((longlong)param_11 + 0xd) = param_5;
  *(undefined1 *)((longlong)param_11 + 0xb) = local_2e1;
  *(undefined1 *)(param_11 + 3) = param_6;
  *(undefined1 *)((longlong)param_11 + 0xe) = param_7;
  *(undefined8 *)(param_11 + 0xb8) = local_f0;
  *(double *)(param_11 + 0xb6) = local_f8 - *(double *)(param_11 + 0xaa) * 2.0;
  if (((dVar10 == 0.0) || (*(double *)(param_11 + 0x62) == 0.0)) ||
     (*(double *)(param_11 + 100) == 0.0)) {
    *(double *)(param_11 + 0xbe) = *(double *)(param_11 + 0x66) * dVar7;
    *(double *)(param_11 + 0xc0) = *(double *)(param_11 + 0x66) * dVar7;
  }
  else {
    *(double *)(param_11 + 0xbe) =
         *(double *)(param_11 + 0x66) * dVar10 * *(double *)(param_11 + 0x62);
    *(double *)(param_11 + 0xc0) =
         *(double *)(param_11 + 0x66) * dVar10 * *(double *)(param_11 + 100);
  }
  *(double *)(param_11 + 0x86) =
       *(double *)(param_11 + 0x66) * local_1c8 * *(double *)(param_11 + 0xb8);
  *(double *)(param_11 + 0x88) =
       *(double *)(param_11 + 0x66) * local_1c0 * *(double *)(param_11 + 0xb8);
  *(double *)(param_11 + 0x8a) =
       *(double *)(param_11 + 0x66) * local_1b8 * *(double *)(param_11 + 0xb6);
  *(double *)(param_11 + 0xb4) =
       (*(double *)(param_11 + 0x66) * dVar8 * *(double *)(param_11 + 0xb8)) /
       *(double *)(param_11 + 0xb6);
  *(double *)(param_11 + 0xba) =
       *(double *)(param_11 + 0x66) * *(double *)(param_11 + 0x8c) * *(double *)(param_11 + 0xb6) *
       *(double *)(param_11 + 0xb8);
  param_11[0xe] = 0;
  param_11[0xf] = 0;
  param_11[0x10] = 0;
  param_11[0x11] = 0;
  param_11[0x12] = 0;
  param_11[0x13] = 0;
  param_11[0x14] = 0;
  param_11[0x15] = 0;
  param_11[0x16] = 0;
  param_11[0x17] = 0;
  uVar2 = FUN_016ea1b0(local_2f8,0x19);
  *(undefined2 *)(param_11 + 0x4a) = uVar2;
  local_310 = (double *)((longlong)param_11 + 0xf);
  local_308 = (int *)((ulonglong)local_308 & 0xffffffffffffff00);
  local_318._0_1_ = *(undefined1 *)((longlong)param_11 + 0xb);
  FUN_016760d0(local_2f8,local_218 / *(double *)(param_11 + 0x66),1,local_2c8[0]);
  local_318._0_1_ = (char)param_11[3];
  local_310 = (double *)(param_11 + 4);
  local_308 = (int *)((ulonglong)local_308 & 0xffffffffffffff00);
  FUN_016760d0(local_2f8,local_210 / *(double *)(param_11 + 0x66),1,local_2c8[0]);
  *(undefined1 *)(param_11 + 0x118) = 0;
  iVar3 = FUN_016ee690(local_2f8,(char)param_11[3],0);
  param_11[6] = iVar3;
  iVar3 = FUN_016ee690(local_2f8,*(undefined1 *)((longlong)param_11 + 0xe),0);
  param_11[8] = iVar3;
  if (local_200 == 0.0) {
    if (param_11[8] == param_11[6]) {
      *(undefined1 *)((longlong)param_11 + 0x12) = *(undefined1 *)((longlong)param_11 + 0xe);
      *(undefined1 *)(param_11 + 0x118) = 1;
    }
    else {
      *(undefined1 *)((longlong)param_11 + 0x12) = *(undefined1 *)((longlong)param_11 + 0xe);
      if (*(char *)(local_2f0 + 0xed6) == '\x01') {
        *(undefined1 *)(param_11 + 0x118) = 1;
      }
    }
  }
  else {
    local_318._0_1_ = *(undefined1 *)((longlong)param_11 + 0xe);
    local_310 = (double *)((longlong)param_11 + 0x12);
    local_308 = (int *)((ulonglong)local_308 & 0xffffffffffffff00);
    FUN_016760d0(local_2f8,local_200 / *(double *)(param_11 + 0x66),1,local_2c8[0]);
  }
  local_318 = (double *)CONCAT71(local_318._1_7_,*(undefined1 *)((longlong)param_11 + 0xd));
  local_310 = (double *)((longlong)param_11 + 0x11);
  local_308 = (int *)((ulonglong)local_308 & 0xffffffffffffff00);
  FUN_016760d0(local_2f8,local_208 / *(double *)(param_11 + 0x66),1,local_2c8[0]);
  uVar2 = FUN_016ea1b0(local_2f8,4);
  *(undefined2 *)((longlong)param_11 + 0x12a) = uVar2;
  if (*(char *)(local_2f0 + 0xed6) == '\0') {
    uVar1 = FUN_016e9e80(local_2f8,0xb);
    *(undefined1 *)(param_11 + 2) = uVar1;
  }
  else {
    uVar1 = FUN_016e9e80(local_2f8,8);
    *(undefined1 *)(param_11 + 2) = uVar1;
  }
  local_318 = (double *)((ulonglong)local_318 & 0xffffffffffffff00);
  FUN_016ebe60(local_2f8,(char)param_11[2] + '\x01',*(undefined1 *)((longlong)param_11 + 0xf),
               (char)param_11[4]);
  local_318._0_1_ = (char)param_11[2] + '\x01';
  FUN_016ec850(local_2f8,(char)param_11[2] + '\x02',*(undefined1 *)((longlong)param_11 + 0x11),
               (char)param_11[4]);
  local_318._0_1_ = (char)param_11[2] + '\x01';
  FUN_016ec850(local_2f8,(char)param_11[2] + '\x03',*(undefined1 *)((longlong)param_11 + 0x12),
               (char)param_11[4]);
  local_318._0_1_ = (char)param_11[2] + '\x01';
  FUN_016ec850(local_2f8,(char)param_11[2] + '\x04',*(undefined1 *)((longlong)param_11 + 0x11),
               *(undefined1 *)((longlong)param_11 + 0xf));
  local_318._0_1_ = (char)param_11[2] + '\x01';
  FUN_016ec850(local_2f8,(char)param_11[2] + '\x05',*(undefined1 *)((longlong)param_11 + 0x12),
               *(undefined1 *)((longlong)param_11 + 0xf));
  if (*(char *)(local_2f0 + 0xed6) == '\0') {
    local_318 = (double *)((ulonglong)local_318._1_7_ << 8);
    FUN_016ebe60(local_2f8,(char)param_11[2] + '\x06',*(undefined1 *)((longlong)param_11 + 0x12),
                 *(undefined1 *)((longlong)param_11 + 0xf));
    local_318 = (double *)((ulonglong)local_318 & 0xffffffffffffff00);
    FUN_016ebe60(local_2f8,(char)param_11[2] + '\a',*(undefined1 *)((longlong)param_11 + 0x12),
                 (char)param_11[4]);
    local_318 = (double *)((ulonglong)local_318 & 0xffffffffffffff00);
    FUN_016ebe60(local_2f8,(char)param_11[2] + '\b',*(undefined1 *)((longlong)param_11 + 0x11),
                 (char)param_11[4]);
    local_318 = (double *)((ulonglong)local_318 & 0xffffffffffffff00);
    FUN_016ebe60(local_2f8,(char)param_11[2] + '\t',*(undefined1 *)((longlong)param_11 + 0x11),
                 *(undefined1 *)((longlong)param_11 + 0xf));
    local_318 = (double *)((ulonglong)local_318 & 0xffffffffffffff00);
    FUN_016ebe60(local_2f8,(char)param_11[2] + '\n',*(undefined1 *)((longlong)param_11 + 0x11),
                 *(undefined1 *)((longlong)param_11 + 0x12));
  }
  else {
    local_318._0_1_ = 1;
    FUN_016ebfa0(local_2f8,(char)param_11[2] + '\x06',*(undefined1 *)((longlong)param_11 + 0x11),
                 (char)param_11[4]);
    local_318 = (double *)CONCAT71(local_318._1_7_,1);
    FUN_016ebfa0(local_2f8,(char)param_11[2] + '\a',*(undefined1 *)((longlong)param_11 + 0x11),
                 *(undefined1 *)((longlong)param_11 + 0xf));
    FUN_016ed220(local_2f8,(char)param_11[2] + '\x06',*(double *)(param_11 + 0xba) / 3.0,0);
    FUN_016ed220(local_2f8,(char)param_11[2] + '\a',*(double *)(param_11 + 0xba) / 3.0,0);
  }
  if (*(char *)(local_2f0 + 0xed6) == '\0') {
    FUN_016ed1a0(local_2f8,(char)param_11[2] + '\v',*(undefined1 *)((longlong)param_11 + 0xf),
                 (char)param_11[4]);
  }
  else {
    FUN_016ed1a0(local_2f8,(char)param_11[2] + '\b',*(undefined1 *)((longlong)param_11 + 0xf),
                 (char)param_11[4]);
  }
  lVar4 = *(longlong *)(local_2f8 + 0x130);
  local_318 = local_2c8;
  local_310 = local_240;
  local_308 = param_11;
  local_2d0 = FUN_00e343f0(&PTR_FUN_00e341d8,1,local_2f8,local_2f0);
  FUN_00597e50(lVar4 + 8,&local_2d0);
  return;
}

