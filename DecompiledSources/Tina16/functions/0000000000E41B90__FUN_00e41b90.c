/* Ghidra address: 00e41b90 */
/* Ghidra symbol: FUN_00e41b90 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e41b90(longlong param_1,undefined8 param_2,int param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,double *param_8,
                 double *param_9,longlong param_10,int *param_11)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  double *pdVar7;
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
  undefined1 auStack_348 [32];
  double *local_328;
  double *local_320;
  int *local_318;
  longlong local_308;
  undefined8 local_300;
  undefined1 local_2f1;
  double local_2f0;
  undefined8 local_2d8;
  double local_2d0 [4];
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  char local_258;
  char local_257;
  char local_254;
  char local_253;
  char local_252;
  undefined1 local_251;
  char local_250;
  double local_248 [4];
  double local_228;
  double local_220;
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
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
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
  
  pdVar7 = local_2d0;
  for (lVar6 = 0x11; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar7 = *param_8;
    param_8 = param_8 + 1;
    pdVar7 = pdVar7 + 1;
  }
  pdVar7 = local_248;
  for (lVar6 = 0x32; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar7 = *param_9;
    param_9 = param_9 + 1;
    pdVar7 = pdVar7 + 1;
  }
  local_308 = param_1;
  local_300 = param_2;
  local_2f1 = param_4;
  if ((local_258 == '\0') ||
     (iVar4 = FUN_00e41b50(auStack_348,&local_f8), *(char *)(param_10 + iVar4) != '\0')) {
    local_f8 = local_2d0[1];
  }
  if ((local_257 == '\0') ||
     (iVar4 = FUN_00e41b50(auStack_348,&local_f0), *(char *)(param_10 + iVar4) != '\0')) {
    local_f0 = local_2d0[2];
  }
  *param_11 = param_3;
  iVar4 = FUN_00e41b50(auStack_348,&local_110);
  if (*(char *)(param_10 + iVar4) == '\0') {
    local_110 = local_110 + 273.15;
  }
  else {
    local_110 = 300.15;
  }
  local_2f0 = local_110 / 300.15;
  dVar13 = local_110 * 8.61708745588933e-05;
  dVar8 = local_110 * 1.3806226e-23;
  dVar15 = 1.16 - (local_110 * 0.000702 * local_110) / (local_110 + 1108.0);
  dVar9 = (double)FUN_0040c2f0(local_2f0);
  dVar16 = dVar13 * -2.0 *
           (dVar9 * 1.5 + (-dVar15 / (dVar8 + dVar8) + 1.3454442398941469e+20) * 1.6021917e-19);
  dVar8 = (double)FUN_0040c760(local_110 / 300.15);
  dVar12 = local_110 / 300.15;
  dVar9 = (double)FUN_0040af80((dVar15 * 0.5 * (0.0033316674995835416 - 1.0 / local_110)) /
                               8.61708745588933e-05);
  dVar8 = dVar12 * dVar8 * dVar9 * 1.45e+16;
  if (local_190 < 1e-30) {
    local_190 = DAT_01eddc18;
  }
  *(double *)(param_11 + 0x88) = 3.45314379969e-11 / local_190;
  iVar4 = FUN_00e41b50(auStack_348,&local_180);
  if (*(char *)(param_10 + iVar4) != '\0') {
    local_180 = 600.0;
  }
  iVar4 = FUN_00e41b50(auStack_348,local_248 + 1);
  if (*(char *)(param_10 + iVar4) != '\0') {
    local_248[1] = local_180 * *(double *)(param_11 + 0x88) * 0.0001;
  }
  iVar4 = FUN_00e41b50(auStack_348,&local_170);
  if (*(char *)(param_10 + iVar4) == '\0') {
    if (local_170 * 1000000.0 <= dVar8) {
      local_170 = 0.0;
    }
    else {
      iVar4 = FUN_00e41b50(auStack_348,local_248 + 3);
      if (*(char *)(param_10 + iVar4) != '\0') {
        local_248[3] = (double)FUN_0040c2f0((local_170 * 1000000.0) / dVar8);
        local_248[3] = dVar13 * 2.0 * local_248[3];
        local_248[3] = (double)FUN_00b90620(0x3fb999999999999a,local_248[3]);
      }
      dVar8 = (double)param_3 * 0.5 * local_248[3];
      dVar9 = 3.2;
      iVar4 = FUN_00e41b50(auStack_348,&local_168);
      if (*(char *)(param_10 + iVar4) != '\0') {
        local_168 = 1.0;
      }
      if (local_168 != 0.0) {
        dVar9 = (dVar15 * 0.5 - (double)param_3 * local_168 * 0.5 * dVar15) + 3.25;
      }
      iVar4 = FUN_00e41b50(auStack_348,local_248 + 2);
      if (*(char *)(param_10 + iVar4) != '\0') {
        local_248[2] = (double)FUN_0040c760(local_170 * 3.319559000861868e-23);
        local_248[2] = local_248[2] / *(double *)(param_11 + 0x88);
      }
      iVar4 = FUN_00e41b50(auStack_348,local_248);
      if (*(char *)(param_10 + iVar4) == '\0') {
        FUN_0040c760(local_248[3]);
      }
      else {
        iVar4 = FUN_00e41b50(auStack_348,&local_160);
        if (*(char *)(param_10 + iVar4) != '\0') {
          local_160 = 0.0;
        }
        dVar10 = local_160 * 1.6021917e-15;
        dVar12 = *(double *)(param_11 + 0x88);
        dVar11 = (double)FUN_0040c760(local_248[3]);
        local_248[0] = (((dVar9 - (dVar15 * 0.5 + dVar8)) - 3.25) - dVar10 / dVar12) +
                       (double)param_3 * (local_248[2] * dVar11 + local_248[3]);
      }
      local_138 = 2.0718862798139998e-10 / (local_170 * 1.6021917e-13);
      local_140 = FUN_0040c760(local_138);
    }
  }
  *(double *)(param_11 + 0x98) = (local_128 * 1.627255678934287e-10) / *(double *)(param_11 + 0x88);
  *(double *)(param_11 + 0x4c) = local_2d0[0];
  dVar14 = local_2d0[0] * 8.61708745588933e-05;
  dVar17 = local_2d0[0] / local_110;
  dVar11 = local_2d0[0] / 300.15;
  dVar8 = local_2d0[0] * 1.3806226e-23;
  dVar12 = 1.16 - (local_2d0[0] * 0.000702 * local_2d0[0]) / (local_2d0[0] + 1108.0);
  dVar9 = (double)FUN_0040c2f0(dVar11);
  dVar10 = dVar14 * -2.0 *
           (dVar9 * 1.5 + (-dVar12 / (dVar8 + dVar8) + 1.3454442398941469e+20) * 1.6021917e-19);
  *(double *)(param_11 + 0x5e) = local_2d0[3];
  *(double *)(param_11 + 0x60) = local_2b0;
  *(double *)(param_11 + 0x62) = local_278;
  dVar8 = (double)FUN_0040c760(dVar17);
  dVar17 = dVar17 * dVar8;
  dVar18 = local_248[1] / dVar17;
  *(double *)(param_11 + 100) = (local_180 * 0.0001) / dVar17;
  *(double *)(param_11 + 0x66) = dVar11 * ((local_248[3] - dVar16) / local_2f0) + dVar10;
  dVar8 = (double)FUN_0040c760(local_248[3]);
  *(double *)(param_11 + 0x68) =
       (local_248[0] - (double)param_3 * local_248[2] * dVar8) + (dVar15 - dVar12) * 0.5 +
       (double)param_3 * 0.5 * (*(double *)(param_11 + 0x66) - local_248[3]);
  dVar8 = (double)FUN_0040c760(*(undefined8 *)(param_11 + 0x66));
  *(double *)(param_11 + 0x32) =
       *(double *)(param_11 + 0x68) + (double)param_3 * local_248[2] * dVar8;
  dVar8 = (double)FUN_0040af80(-dVar12 / dVar14 + dVar15 / dVar13);
  dVar8 = local_1f0 * dVar8;
  dVar9 = (double)FUN_0040af80(-dVar12 / dVar14 + dVar15 / dVar13);
  dVar9 = local_198 * dVar9;
  dVar12 = (local_1e0 - dVar16) / local_2f0;
  dVar13 = (local_1e0 - dVar12) / dVar12;
  dVar15 = 1.0 / (local_1b0 * ((local_110 - 300.15) * 0.0004 - dVar13) + 1.0);
  *(double *)(param_11 + 0x6a) = local_200 * dVar15;
  *(double *)(param_11 + 0x6c) = local_1f8 * dVar15;
  *(double *)(param_11 + 0x6e) = local_1b8 * dVar15;
  *(double *)(param_11 + 0x70) =
       local_1a8 * (1.0 / (local_1a0 * ((local_110 - 300.15) * 0.0004 - dVar13) + 1.0));
  *(double *)(param_11 + 0x72) = dVar11 * dVar12 + dVar10;
  dVar12 = (*(double *)(param_11 + 0x72) - dVar12) / dVar12;
  dVar13 = local_1b0 * ((local_2d0[0] - 300.15) * 0.0004 - dVar12) + 1.0;
  *(double *)(param_11 + 0x6a) = *(double *)(param_11 + 0x6a) * dVar13;
  *(double *)(param_11 + 0x6c) = *(double *)(param_11 + 0x6c) * dVar13;
  *(double *)(param_11 + 0x6e) = *(double *)(param_11 + 0x6e) * dVar13;
  *(double *)(param_11 + 0x70) =
       *(double *)(param_11 + 0x70) *
       (local_1a0 * ((local_2d0[0] - 300.15) * 0.0004 - dVar12) + 1.0);
  *(double *)(param_11 + 0x74) = local_178 * *(double *)(param_11 + 0x72);
  *(double *)(param_11 + 0x3a) = dVar14;
  *(double *)(param_11 + 0x3c) = local_1e8 * dVar14;
  if (((local_198 == 0.0) || (local_2d0[3] == 0.0)) || (local_2b0 == 0.0)) {
    if (dVar8 == 0.0) {
      param_11[0x34] = 0x66666666;
      param_11[0x35] = 0x3fe66666;
    }
    else {
      dVar12 = (double)FUN_0040c2f0(*(double *)(param_11 + 0x3c) /
                                    (local_278 * 1.4142135623730951 * dVar8));
      *(double *)(param_11 + 0x34) = *(double *)(param_11 + 0x3c) * dVar12;
    }
    *(undefined8 *)(param_11 + 0x36) = *(undefined8 *)(param_11 + 0x34);
  }
  else if (dVar9 == 0.0) {
    param_11[0x34] = 0x66666666;
    param_11[0x35] = 0x3fe66666;
    *(undefined8 *)(param_11 + 0x36) = *(undefined8 *)(param_11 + 0x34);
  }
  else {
    dVar12 = (double)FUN_0040c2f0(*(double *)(param_11 + 0x3c) /
                                  (local_278 * 1.4142135623730951 * dVar9 * local_2d0[3]));
    *(double *)(param_11 + 0x34) = *(double *)(param_11 + 0x3c) * dVar12;
    dVar12 = (double)FUN_0040c2f0(*(double *)(param_11 + 0x3c) /
                                  (local_278 * 1.4142135623730951 * dVar9 * local_2b0));
    *(double *)(param_11 + 0x36) = *(double *)(param_11 + 0x3c) * dVar12;
  }
  iVar4 = FUN_00e41b50(auStack_348,&local_200);
  if (*(char *)(param_10 + iVar4) == '\0') {
    dVar12 = *(double *)(param_11 + 0x6a) * local_278;
  }
  else {
    iVar4 = FUN_00e41b50(auStack_348,&local_1b8);
    if (*(char *)(param_10 + iVar4) == '\0') {
      dVar12 = *(double *)(param_11 + 0x6e) * local_2d0[3] * local_278;
    }
    else {
      dVar12 = 0.0;
    }
  }
  iVar4 = FUN_00e41b50(auStack_348,&local_1a8);
  if (*(char *)(param_10 + iVar4) == '\0') {
    dVar13 = *(double *)(param_11 + 0x70) * local_2a8 * local_278;
  }
  else {
    dVar13 = 0.0;
  }
  dVar10 = 1.0 - local_178;
  dVar15 = (double)FUN_0040c2f0(dVar10);
  dVar15 = (double)FUN_0040af80(-local_1b0 * dVar15);
  dVar16 = (double)FUN_0040c2f0(dVar10);
  dVar16 = (double)FUN_0040af80(-local_1a0 * dVar16);
  *(double *)(param_11 + 0x5c) = dVar12;
  *(double *)(param_11 + 0x58) = dVar13;
  *(double *)(param_11 + 0x76) =
       (dVar12 * (1.0 - local_178 * (local_1b0 + 1.0)) * dVar15) / dVar10 +
       (dVar13 * (1.0 - local_178 * (local_1a0 + 1.0)) * dVar16) / dVar10;
  *(double *)(param_11 + 0x78) =
       ((dVar12 * local_1b0 * dVar15) / dVar10) / *(double *)(param_11 + 0x72) +
       ((dVar13 * local_1a0 * dVar16) / dVar10) / *(double *)(param_11 + 0x72);
  *(double *)(param_11 + 0x7a) =
       (((dVar12 * *(double *)(param_11 + 0x72) * (1.0 - dVar10 * dVar15)) / (1.0 - local_1b0) +
        (dVar13 * *(double *)(param_11 + 0x72) * (1.0 - dVar10 * dVar16)) / (1.0 - local_1a0)) -
       (*(double *)(param_11 + 0x78) / 2.0) *
       *(double *)(param_11 + 0x74) * *(double *)(param_11 + 0x74)) -
       *(double *)(param_11 + 0x74) * *(double *)(param_11 + 0x76);
  iVar4 = FUN_00e41b50(auStack_348,&local_1f8);
  if (*(char *)(param_10 + iVar4) == '\0') {
    dVar12 = *(double *)(param_11 + 0x6c) * local_278;
  }
  else {
    iVar4 = FUN_00e41b50(auStack_348,&local_1b8);
    if (*(char *)(param_10 + iVar4) == '\0') {
      dVar12 = *(double *)(param_11 + 0x6e) * local_2b0 * local_278;
    }
    else {
      dVar12 = 0.0;
    }
  }
  iVar4 = FUN_00e41b50(auStack_348,&local_1a8);
  if (*(char *)(param_10 + iVar4) == '\0') {
    dVar13 = *(double *)(param_11 + 0x70) * local_2a0 * local_278;
  }
  else {
    dVar13 = 0.0;
  }
  dVar10 = 1.0 - local_178;
  dVar15 = (double)FUN_0040c2f0(dVar10);
  dVar15 = (double)FUN_0040af80(-local_1b0 * dVar15);
  dVar16 = (double)FUN_0040c2f0(dVar10);
  dVar16 = (double)FUN_0040af80(-local_1a0 * dVar16);
  *(double *)(param_11 + 0x5a) = dVar12;
  *(double *)(param_11 + 0x56) = dVar13;
  *(double *)(param_11 + 0x7c) =
       (dVar12 * (1.0 - local_178 * (local_1b0 + 1.0)) * dVar15) / dVar10 +
       (dVar13 * (1.0 - local_178 * (local_1a0 + 1.0)) * dVar16) / dVar10;
  *(double *)(param_11 + 0x7e) =
       ((dVar12 * local_1b0 * dVar15) / dVar10) / *(double *)(param_11 + 0x72) +
       ((dVar13 * local_1a0 * dVar16) / dVar10) / *(double *)(param_11 + 0x72);
  *(double *)(param_11 + 0x80) =
       (((dVar12 * *(double *)(param_11 + 0x72) * (1.0 - dVar10 * dVar15)) / (1.0 - local_1b0) +
        (dVar13 * *(double *)(param_11 + 0x72) * (1.0 - dVar10 * dVar16)) / (1.0 - local_1a0)) -
       (*(double *)(param_11 + 0x7e) / 2.0) *
       *(double *)(param_11 + 0x74) * *(double *)(param_11 + 0x74)) -
       *(double *)(param_11 + 0x74) * *(double *)(param_11 + 0x7c);
  *(double *)(param_11 + 0x92) = local_248[2];
  *(double *)(param_11 + 0x94) = local_138;
  *(undefined8 *)(param_11 + 0x96) = local_140;
  *(undefined8 *)(param_11 + 0x9a) = local_130;
  *(undefined8 *)(param_11 + 0x9c) = local_150;
  *(undefined8 *)(param_11 + 0x9e) = local_148;
  *(undefined8 *)(param_11 + 0xa0) = local_120;
  *(undefined8 *)(param_11 + 0xa2) = local_158;
  *(undefined8 *)(param_11 + 0xa4) = local_118;
  *(double *)(param_11 + 0x8a) = local_1b0;
  *(double *)(param_11 + 0x8c) = local_1a0;
  *(undefined8 *)(param_11 + 0xa6) = local_188;
  *(undefined8 *)(param_11 + 0xa8) = local_100;
  *(undefined8 *)(param_11 + 0xaa) = local_108;
  *(double *)(param_11 + 0x8e) = local_200;
  *(double *)(param_11 + 0x90) = local_1f8;
  iVar4 = FUN_00e41b50(auStack_348,&local_228);
  if ((*(char *)(param_10 + iVar4) != '\0') &&
     (iVar4 = FUN_00e41b50(auStack_348,&local_1c0), *(char *)(param_10 + iVar4) == '\0')) {
    local_228 = local_1c0 * local_298;
  }
  iVar4 = FUN_00e41b50(auStack_348,&local_220);
  if ((*(char *)(param_10 + iVar4) != '\0') &&
     (iVar4 = FUN_00e41b50(auStack_348,&local_1c0), *(char *)(param_10 + iVar4) == '\0')) {
    local_220 = local_1c0 * local_290;
  }
  iVar4 = FUN_00e41b50(auStack_348,&local_218);
  if ((*(char *)(param_10 + iVar4) != '\0') &&
     (iVar4 = FUN_00e41b50(auStack_348,&local_1c0), *(char *)(param_10 + iVar4) == '\0')) {
    local_218 = local_1c0 * local_288;
  }
  iVar4 = FUN_00e41b50(auStack_348,&local_210);
  if ((*(char *)(param_10 + iVar4) != '\0') &&
     (iVar4 = FUN_00e41b50(auStack_348,&local_1c0), *(char *)(param_10 + iVar4) == '\0')) {
    local_210 = local_1c0 * local_280;
  }
  if (1e-06 <= local_228) {
    *(double *)(param_11 + 0xbc) = 1.0 / local_228;
  }
  else {
    local_228 = 0.0;
    param_11[0xbc] = 0;
    param_11[0xbd] = 0;
  }
  if (1e-06 <= local_220) {
    *(double *)(param_11 + 0xbe) = 1.0 / local_220;
  }
  else {
    local_220 = 0.0;
    param_11[0xbe] = 0;
    param_11[0xbf] = 0;
  }
  if (1e-06 <= local_218) {
    *(double *)(param_11 + 0xc0) = 1.0 / local_218;
  }
  else {
    local_218 = 0.0;
    param_11[0xc0] = 0;
    param_11[0xc1] = 0;
  }
  if (1e-06 <= local_210) {
    *(double *)(param_11 + 0xc2) = 1.0 / local_210;
  }
  else {
    local_210 = 0.0;
    param_11[0xc2] = 0;
    param_11[0xc3] = 0;
  }
  if (1e-06 <= local_208) {
    *(double *)(param_11 + 0xba) = 1.0 / local_208;
  }
  else {
    local_208 = 0.0;
    param_11[0xba] = 0;
    param_11[0xbb] = 0;
  }
  *(char *)((longlong)param_11 + 9) = local_250;
  *(undefined1 *)((longlong)param_11 + 10) = local_251;
  *(undefined8 *)(param_11 + 0x4e) = local_270;
  *(undefined8 *)(param_11 + 0x50) = local_268;
  *(undefined8 *)(param_11 + 0x52) = local_260;
  *(bool *)(param_11 + 0x54) = local_254 == '\0';
  *(bool *)((longlong)param_11 + 0x151) = local_253 == '\0';
  *(bool *)((longlong)param_11 + 0x152) = local_252 == '\0';
  *(undefined8 *)(param_11 + 0x3e) = local_e8;
  *(undefined8 *)(param_11 + 0x40) = local_e0;
  *(undefined8 *)(param_11 + 0x42) = local_d8;
  *(undefined8 *)(param_11 + 0x44) = local_d0;
  *(undefined8 *)(param_11 + 0x46) = local_c8;
  *(undefined8 *)(param_11 + 0x48) = local_c0;
  if (local_250 == '\x01') {
    local_220 = 1000000000.0;
  }
  else if (local_250 == '\x02') {
    local_228 = 1000000000.0;
  }
  *(undefined1 *)((longlong)param_11 + 0xd) = param_5;
  *(undefined1 *)((longlong)param_11 + 0xb) = local_2f1;
  *(undefined1 *)(param_11 + 3) = param_6;
  *(undefined1 *)((longlong)param_11 + 0xe) = param_7;
  *(undefined8 *)(param_11 + 0xb0) = local_f0;
  *(double *)(param_11 + 0xae) = local_f8 - *(double *)(param_11 + 0xa6) * 2.0;
  if (((dVar9 == 0.0) || (*(double *)(param_11 + 0x5e) == 0.0)) ||
     (*(double *)(param_11 + 0x60) == 0.0)) {
    *(double *)(param_11 + 0xb6) = *(double *)(param_11 + 0x62) * dVar8;
    *(double *)(param_11 + 0xb8) = *(double *)(param_11 + 0x62) * dVar8;
  }
  else {
    *(double *)(param_11 + 0xb6) =
         *(double *)(param_11 + 0x62) * dVar9 * *(double *)(param_11 + 0x5e);
    *(double *)(param_11 + 0xb8) =
         *(double *)(param_11 + 0x62) * dVar9 * *(double *)(param_11 + 0x60);
  }
  *(double *)(param_11 + 0x82) =
       *(double *)(param_11 + 0x62) * local_1d8 * *(double *)(param_11 + 0xb0);
  *(double *)(param_11 + 0x84) =
       *(double *)(param_11 + 0x62) * local_1d0 * *(double *)(param_11 + 0xb0);
  *(double *)(param_11 + 0x86) =
       *(double *)(param_11 + 0x62) * local_1c8 * *(double *)(param_11 + 0xae);
  *(double *)(param_11 + 0xac) =
       (*(double *)(param_11 + 0x62) * dVar18 * *(double *)(param_11 + 0xb0)) /
       *(double *)(param_11 + 0xae);
  *(double *)(param_11 + 0xb2) =
       *(double *)(param_11 + 0x62) * *(double *)(param_11 + 0x88) * *(double *)(param_11 + 0xae) *
       *(double *)(param_11 + 0xb0);
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
  uVar3 = FUN_016ea1b0(local_308,0x19);
  *(undefined2 *)(param_11 + 0x4a) = uVar3;
  local_320 = (double *)((longlong)param_11 + 0xf);
  local_328._0_1_ = *(undefined1 *)((longlong)param_11 + 0xb);
  FUN_01676240(local_308,local_228 / *(double *)(param_11 + 0x62),1,local_2d0[0]);
  local_328._0_1_ = (char)param_11[3];
  local_320 = (double *)(param_11 + 4);
  FUN_01676240(local_308,local_220 / *(double *)(param_11 + 0x62),1,local_2d0[0]);
  *(undefined1 *)(param_11 + 0x11a) = 0;
  iVar4 = FUN_016ee690(local_308,(char)param_11[3],0);
  param_11[6] = iVar4;
  iVar4 = FUN_016ee690(local_308,*(undefined1 *)((longlong)param_11 + 0xe),0);
  param_11[8] = iVar4;
  if (local_210 == 0.0) {
    if (param_11[8] == param_11[6]) {
      *(undefined1 *)((longlong)param_11 + 0x12) = *(undefined1 *)((longlong)param_11 + 0xe);
      *(undefined1 *)(param_11 + 0x11a) = 1;
    }
    else {
      *(undefined1 *)((longlong)param_11 + 0x12) = *(undefined1 *)((longlong)param_11 + 0xe);
      cVar1 = FUN_00e3ccc0(local_300);
      if (cVar1 == '\x01') {
        *(undefined1 *)(param_11 + 0x11a) = 1;
      }
    }
  }
  else {
    local_328._0_1_ = *(undefined1 *)((longlong)param_11 + 0xe);
    local_320 = (double *)((longlong)param_11 + 0x12);
    FUN_01676240(local_308,local_210 / *(double *)(param_11 + 0x62),1,local_2d0[0]);
  }
  local_328 = (double *)CONCAT71(local_328._1_7_,*(undefined1 *)((longlong)param_11 + 0xd));
  local_320 = (double *)((longlong)param_11 + 0x11);
  FUN_01676240(local_308,local_218 / *(double *)(param_11 + 0x62),1,local_2d0[0]);
  uVar3 = FUN_016ea1b0(local_308,4);
  *(undefined2 *)((longlong)param_11 + 0x12a) = uVar3;
  cVar1 = FUN_00e3ccc0(local_300);
  if (cVar1 == '\0') {
    uVar2 = FUN_016e9e80(local_308,0xb);
    *(undefined1 *)(param_11 + 2) = uVar2;
  }
  else {
    uVar2 = FUN_016e9e80(local_308,8);
    *(undefined1 *)(param_11 + 2) = uVar2;
  }
  local_328 = (double *)((ulonglong)local_328 & 0xffffffffffffff00);
  uVar5 = FUN_016ebe60(local_308,(char)param_11[2] + '\x01',
                       *(undefined1 *)((longlong)param_11 + 0xf),(char)param_11[4]);
  *(undefined8 *)(param_11 + 0xfc) = uVar5;
  local_328._0_1_ = (char)param_11[2] + '\x01';
  uVar5 = FUN_016ec850(local_308,(char)param_11[2] + '\x02',
                       *(undefined1 *)((longlong)param_11 + 0x11),(char)param_11[4]);
  *(undefined8 *)(param_11 + 0xfe) = uVar5;
  local_328._0_1_ = (char)param_11[2] + '\x01';
  uVar5 = FUN_016ec850(local_308,(char)param_11[2] + '\x03',
                       *(undefined1 *)((longlong)param_11 + 0x12),(char)param_11[4]);
  *(undefined8 *)(param_11 + 0x100) = uVar5;
  local_328._0_1_ = (char)param_11[2] + '\x01';
  uVar5 = FUN_016ec850(local_308,(char)param_11[2] + '\x04',
                       *(undefined1 *)((longlong)param_11 + 0x11),
                       *(undefined1 *)((longlong)param_11 + 0xf));
  *(undefined8 *)(param_11 + 0x102) = uVar5;
  local_328._0_1_ = (char)param_11[2] + '\x01';
  uVar5 = FUN_016ec850(local_308,(char)param_11[2] + '\x05',
                       *(undefined1 *)((longlong)param_11 + 0x12),
                       *(undefined1 *)((longlong)param_11 + 0xf));
  *(undefined8 *)(param_11 + 0x104) = uVar5;
  cVar1 = FUN_00e3ccc0(local_300);
  if (cVar1 == '\0') {
    local_328 = (double *)((ulonglong)local_328._1_7_ << 8);
    FUN_016ebe60(local_308,(char)param_11[2] + '\x06',*(undefined1 *)((longlong)param_11 + 0x12),
                 *(undefined1 *)((longlong)param_11 + 0xf));
    local_328 = (double *)((ulonglong)local_328 & 0xffffffffffffff00);
    FUN_016ebe60(local_308,(char)param_11[2] + '\a',*(undefined1 *)((longlong)param_11 + 0x12),
                 (char)param_11[4]);
    local_328 = (double *)((ulonglong)local_328 & 0xffffffffffffff00);
    FUN_016ebe60(local_308,(char)param_11[2] + '\b',*(undefined1 *)((longlong)param_11 + 0x11),
                 (char)param_11[4]);
    local_328 = (double *)((ulonglong)local_328 & 0xffffffffffffff00);
    FUN_016ebe60(local_308,(char)param_11[2] + '\t',*(undefined1 *)((longlong)param_11 + 0x11),
                 *(undefined1 *)((longlong)param_11 + 0xf));
    local_328 = (double *)((ulonglong)local_328 & 0xffffffffffffff00);
    FUN_016ebe60(local_308,(char)param_11[2] + '\n',*(undefined1 *)((longlong)param_11 + 0x11),
                 *(undefined1 *)((longlong)param_11 + 0x12));
  }
  else {
    local_328._0_1_ = 1;
    FUN_016ebfa0(local_308,(char)param_11[2] + '\x06',*(undefined1 *)((longlong)param_11 + 0x11),
                 (char)param_11[4]);
    local_328 = (double *)CONCAT71(local_328._1_7_,1);
    FUN_016ebfa0(local_308,(char)param_11[2] + '\a',*(undefined1 *)((longlong)param_11 + 0x11),
                 *(undefined1 *)((longlong)param_11 + 0xf));
    FUN_016ed220(local_308,(char)param_11[2] + '\x06',*(double *)(param_11 + 0xb2) / 3.0,0);
    FUN_016ed220(local_308,(char)param_11[2] + '\a',*(double *)(param_11 + 0xb2) / 3.0,0);
  }
  cVar1 = FUN_00e3ccc0(local_300);
  if (cVar1 == '\0') {
    FUN_016ed1a0(local_308,(char)param_11[2] + '\v',*(undefined1 *)((longlong)param_11 + 0xf),
                 (char)param_11[4]);
  }
  else {
    FUN_016ed1a0(local_308,(char)param_11[2] + '\b',*(undefined1 *)((longlong)param_11 + 0xf),
                 (char)param_11[4]);
  }
  lVar6 = *(longlong *)(local_308 + 0x130);
  local_328 = local_2d0;
  local_320 = local_248;
  local_318 = param_11;
  local_2d8 = FUN_00e40bf0(&PTR_FUN_00e409d8,1,local_308,local_300);
  FUN_00597e50(lVar6 + 8,&local_2d8);
  return;
}

