/* Ghidra address: 00e270f0 */
/* Ghidra symbol: FUN_00e270f0 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00e270f0(longlong param_1,undefined8 param_2,int param_3,undefined1 param_4,
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
  undefined1 auStack_308 [32];
  double *local_2e8;
  double *local_2e0;
  int *local_2d8;
  longlong local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b1;
  double local_2b0;
  undefined8 local_298;
  double local_290 [4];
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  char local_218;
  char local_217;
  char local_214;
  char local_213;
  char local_212;
  undefined1 local_211;
  char local_210;
  double local_208 [4];
  undefined8 local_1e8;
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
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
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
  
  pdVar5 = local_290;
  for (lVar4 = 0x11; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_8;
    param_8 = param_8 + 1;
    pdVar5 = pdVar5 + 1;
  }
  pdVar5 = local_208;
  for (lVar4 = 0x2a; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_9;
    param_9 = param_9 + 1;
    pdVar5 = pdVar5 + 1;
  }
  local_2c8 = param_1;
  local_2c0 = param_2;
  local_2b1 = param_4;
  if ((local_218 == '\0') ||
     (iVar3 = FUN_00e270b0(auStack_308,&local_f8), *(char *)(param_10 + iVar3) != '\0')) {
    local_f8 = local_290[1];
  }
  if ((local_217 == '\0') ||
     (iVar3 = FUN_00e270b0(auStack_308,&local_f0), *(char *)(param_10 + iVar3) != '\0')) {
    local_f0 = local_290[2];
  }
  *param_11 = param_3;
  iVar3 = FUN_00e270b0(auStack_308,&local_110);
  if (*(char *)(param_10 + iVar3) == '\0') {
    local_110 = local_110 + 273.15;
  }
  else {
    local_110 = 300.15;
  }
  dVar10 = local_110 / 300.15;
  dVar14 = local_110 * 8.61708745588933e-05;
  dVar6 = local_110 * 1.3806226e-23;
  dVar9 = 1.16 - (local_110 * 0.000702 * local_110) / (local_110 + 1108.0);
  dVar7 = (double)FUN_0040c2f0(dVar10);
  dVar6 = dVar14 * -2.0 *
          (dVar7 * 1.5 + (-dVar9 / (dVar6 + dVar6) + 1.3454442398941469e+20) * 1.6021917e-19);
  iVar3 = FUN_00e270b0(auStack_308,&local_148);
  if ((*(char *)(param_10 + iVar3) == '\0') && (local_148 != 0.0)) {
    *(double *)(param_11 + 0x8a) = 3.45314379969e-11 / local_148;
    iVar3 = FUN_00e270b0(auStack_308,local_208 + 1);
    if (*(char *)(param_10 + iVar3) != '\0') {
      iVar3 = FUN_00e270b0(auStack_308,&local_138);
      if (*(char *)(param_10 + iVar3) != '\0') {
        local_138 = 600.0;
      }
      local_208[1] = local_138 * *(double *)(param_11 + 0x8a) * 0.0001;
    }
    iVar3 = FUN_00e270b0(auStack_308,&local_128);
    if (*(char *)(param_10 + iVar3) == '\0') {
      if (local_128 * 1000000.0 <= 1.45e+16) {
        local_128 = 0.0;
      }
      else {
        iVar3 = FUN_00e270b0(auStack_308,local_208 + 3);
        if (*(char *)(param_10 + iVar3) != '\0') {
          local_208[3] = (double)FUN_0040c2f0((local_128 * 1000000.0) / 1.45e+16);
          local_208[3] = dVar14 * 2.0 * local_208[3];
          local_208[3] = (double)FUN_00b90620(0x3fb999999999999a,local_208[3]);
        }
        dVar8 = (double)param_3 * 0.5 * local_208[3];
        dVar7 = 3.2;
        iVar3 = FUN_00e270b0(auStack_308,&local_120);
        if (*(char *)(param_10 + iVar3) != '\0') {
          local_120 = 1.0;
        }
        if (local_120 != 0.0) {
          dVar7 = (dVar9 * 0.5 - (double)param_3 * local_120 * 0.5 * dVar9) + 3.25;
        }
        iVar3 = FUN_00e270b0(auStack_308,local_208 + 2);
        if (*(char *)(param_10 + iVar3) != '\0') {
          local_208[2] = (double)FUN_0040c760(local_128 * 3.319559000861868e-23);
          local_208[2] = local_208[2] / *(double *)(param_11 + 0x8a);
        }
        iVar3 = FUN_00e270b0(auStack_308,local_208);
        if (*(char *)(param_10 + iVar3) != '\0') {
          iVar3 = FUN_00e270b0(auStack_308,&local_118);
          if (*(char *)(param_10 + iVar3) != '\0') {
            local_118 = 0.0;
          }
          dVar12 = local_118 * 1.6021917e-15;
          dVar11 = *(double *)(param_11 + 0x8a);
          dVar13 = (double)FUN_0040c760(local_208[3]);
          local_208[0] = (((dVar7 - (dVar9 * 0.5 + dVar8)) - 3.25) - dVar12 / dVar11) +
                         (double)param_3 * (local_208[2] * dVar13 + local_208[3]);
        }
      }
    }
  }
  else {
    param_11[0x8a] = 0;
    param_11[0x8b] = 0;
  }
  *(double *)(param_11 + 0x4e) = local_290[0];
  dVar13 = local_290[0] * 8.61708745588933e-05;
  dVar15 = local_290[0] / local_110;
  dVar11 = local_290[0] / 300.15;
  dVar7 = local_290[0] * 1.3806226e-23;
  local_2b0 = 1.16 - (local_290[0] * 0.000702 * local_290[0]) / (local_290[0] + 1108.0);
  dVar12 = -local_2b0;
  dVar8 = (double)FUN_0040c2f0(dVar11);
  dVar8 = dVar13 * -2.0 *
          (dVar8 * 1.5 + (dVar12 / (dVar7 + dVar7) + 1.3454442398941469e+20) * 1.6021917e-19);
  *(double *)(param_11 + 0x60) = local_290[3];
  *(double *)(param_11 + 0x62) = local_270;
  *(double *)(param_11 + 100) = local_238;
  dVar7 = (double)FUN_0040c760(dVar15);
  dVar15 = dVar15 * dVar7;
  dVar12 = local_208[1] / dVar15;
  *(double *)(param_11 + 0x66) = (local_138 * 0.0001) / dVar15;
  *(double *)(param_11 + 0x68) = dVar11 * ((local_208[3] - dVar6) / dVar10) + dVar8;
  dVar7 = (double)FUN_0040c760(local_208[3]);
  *(double *)(param_11 + 0x76) =
       (local_208[0] - (double)param_3 * local_208[2] * dVar7) + (dVar9 - local_2b0) * 0.5 +
       (double)param_3 * 0.5 * (*(double *)(param_11 + 0x68) - local_208[3]);
  dVar7 = (double)FUN_0040c760(*(undefined8 *)(param_11 + 0x68));
  *(double *)(param_11 + 0x32) =
       *(double *)(param_11 + 0x76) + (double)param_3 * local_208[2] * dVar7;
  dVar7 = (double)FUN_0040af80(-local_2b0 / dVar13 + dVar9 / dVar14);
  dVar7 = local_1a8 * dVar7;
  dVar9 = (double)FUN_0040af80(-local_2b0 / dVar13 + dVar9 / dVar14);
  dVar9 = local_150 * dVar9;
  dVar10 = (local_198 - dVar6) / dVar10;
  dVar6 = (local_198 - dVar10) / dVar10;
  dVar14 = 1.0 / (local_168 * ((local_110 - 300.15) * 0.0004 - dVar6) + 1.0);
  *(double *)(param_11 + 0x6a) = local_1b8 * dVar14;
  *(double *)(param_11 + 0x6c) = local_1b0 * dVar14;
  *(double *)(param_11 + 0x6e) = local_170 * dVar14;
  *(double *)(param_11 + 0x70) =
       local_160 * (1.0 / (local_158 * ((local_110 - 300.15) * 0.0004 - dVar6) + 1.0));
  *(double *)(param_11 + 0x72) = dVar11 * dVar10 + dVar8;
  dVar10 = (*(double *)(param_11 + 0x72) - dVar10) / dVar10;
  dVar6 = local_168 * ((local_290[0] - 300.15) * 0.0004 - dVar10) + 1.0;
  *(double *)(param_11 + 0x6a) = *(double *)(param_11 + 0x6a) * dVar6;
  *(double *)(param_11 + 0x6c) = *(double *)(param_11 + 0x6c) * dVar6;
  *(double *)(param_11 + 0x6e) = *(double *)(param_11 + 0x6e) * dVar6;
  *(double *)(param_11 + 0x70) =
       *(double *)(param_11 + 0x70) *
       (local_158 * ((local_290[0] - 300.15) * 0.0004 - dVar10) + 1.0);
  *(double *)(param_11 + 0x74) = local_130 * *(double *)(param_11 + 0x72);
  *(double *)(param_11 + 0x3a) = dVar13;
  *(double *)(param_11 + 0x3c) = local_1a0 * dVar13;
  if (((local_150 == 0.0) || (local_290[3] == 0.0)) || (local_270 == 0.0)) {
    if (dVar7 == 0.0) {
      param_11[0x34] = 0x66666666;
      param_11[0x35] = 0x3fe66666;
    }
    else {
      dVar6 = (double)FUN_0040c2f0(*(double *)(param_11 + 0x3c) /
                                   (local_238 * 1.4142135623730951 * dVar7));
      *(double *)(param_11 + 0x34) = *(double *)(param_11 + 0x3c) * dVar6;
    }
    *(undefined8 *)(param_11 + 0x36) = *(undefined8 *)(param_11 + 0x34);
  }
  else if (dVar9 == 0.0) {
    param_11[0x34] = 0x66666666;
    param_11[0x35] = 0x3fe66666;
    *(undefined8 *)(param_11 + 0x36) = *(undefined8 *)(param_11 + 0x34);
  }
  else {
    dVar6 = (double)FUN_0040c2f0(*(double *)(param_11 + 0x3c) /
                                 (local_238 * 1.4142135623730951 * dVar9 * local_290[3]));
    *(double *)(param_11 + 0x34) = *(double *)(param_11 + 0x3c) * dVar6;
    dVar6 = (double)FUN_0040c2f0(*(double *)(param_11 + 0x3c) /
                                 (local_238 * 1.4142135623730951 * dVar9 * local_270));
    *(double *)(param_11 + 0x36) = *(double *)(param_11 + 0x3c) * dVar6;
  }
  iVar3 = FUN_00e270b0(auStack_308,&local_1b8);
  if (*(char *)(param_10 + iVar3) == '\0') {
    dVar6 = *(double *)(param_11 + 0x6a) * local_238;
  }
  else {
    iVar3 = FUN_00e270b0(auStack_308,&local_170);
    if (*(char *)(param_10 + iVar3) == '\0') {
      dVar6 = *(double *)(param_11 + 0x6e) * local_290[3] * local_238;
    }
    else {
      dVar6 = 0.0;
    }
  }
  iVar3 = FUN_00e270b0(auStack_308,&local_160);
  if (*(char *)(param_10 + iVar3) == '\0') {
    dVar10 = *(double *)(param_11 + 0x70) * local_268 * local_238;
  }
  else {
    dVar10 = 0.0;
  }
  dVar11 = 1.0 - local_130;
  dVar14 = (double)FUN_0040c2f0(dVar11);
  dVar14 = (double)FUN_0040af80(-local_168 * dVar14);
  dVar8 = (double)FUN_0040c2f0(dVar11);
  dVar8 = (double)FUN_0040af80(-local_158 * dVar8);
  *(double *)(param_11 + 0x5e) = dVar6;
  *(double *)(param_11 + 0x5a) = dVar10;
  *(double *)(param_11 + 0x78) =
       (dVar6 * (1.0 - local_130 * (local_168 + 1.0)) * dVar14) / dVar11 +
       (dVar10 * (1.0 - local_130 * (local_158 + 1.0)) * dVar8) / dVar11;
  *(double *)(param_11 + 0x7a) =
       ((dVar6 * local_168 * dVar14) / dVar11) / *(double *)(param_11 + 0x72) +
       ((dVar10 * local_158 * dVar8) / dVar11) / *(double *)(param_11 + 0x72);
  *(double *)(param_11 + 0x7c) =
       (((dVar6 * *(double *)(param_11 + 0x72) * (1.0 - dVar11 * dVar14)) / (1.0 - local_168) +
        (dVar10 * *(double *)(param_11 + 0x72) * (1.0 - dVar11 * dVar8)) / (1.0 - local_158)) -
       (*(double *)(param_11 + 0x7a) / 2.0) *
       *(double *)(param_11 + 0x74) * *(double *)(param_11 + 0x74)) -
       *(double *)(param_11 + 0x74) * *(double *)(param_11 + 0x78);
  iVar3 = FUN_00e270b0(auStack_308,&local_1b0);
  if (*(char *)(param_10 + iVar3) == '\0') {
    dVar6 = *(double *)(param_11 + 0x6c) * local_238;
  }
  else {
    iVar3 = FUN_00e270b0(auStack_308,&local_170);
    if (*(char *)(param_10 + iVar3) == '\0') {
      dVar6 = *(double *)(param_11 + 0x6e) * local_270 * local_238;
    }
    else {
      dVar6 = 0.0;
    }
  }
  iVar3 = FUN_00e270b0(auStack_308,&local_160);
  if (*(char *)(param_10 + iVar3) == '\0') {
    dVar10 = *(double *)(param_11 + 0x70) * local_260 * local_238;
  }
  else {
    dVar10 = 0.0;
  }
  dVar11 = 1.0 - local_130;
  dVar14 = (double)FUN_0040c2f0(dVar11);
  dVar14 = (double)FUN_0040af80(-local_168 * dVar14);
  dVar8 = (double)FUN_0040c2f0(dVar11);
  dVar8 = (double)FUN_0040af80(-local_158 * dVar8);
  *(double *)(param_11 + 0x5c) = dVar6;
  *(double *)(param_11 + 0x58) = dVar10;
  *(double *)(param_11 + 0x7e) =
       (dVar6 * (1.0 - local_130 * (local_168 + 1.0)) * dVar14) / dVar11 +
       (dVar10 * (1.0 - local_130 * (local_158 + 1.0)) * dVar8) / dVar11;
  *(double *)(param_11 + 0x80) =
       ((dVar6 * local_168 * dVar14) / dVar11) / *(double *)(param_11 + 0x72) +
       ((dVar10 * local_158 * dVar8) / dVar11) / *(double *)(param_11 + 0x72);
  *(double *)(param_11 + 0x82) =
       (((dVar6 * *(double *)(param_11 + 0x72) * (1.0 - dVar11 * dVar14)) / (1.0 - local_168) +
        (dVar10 * *(double *)(param_11 + 0x72) * (1.0 - dVar11 * dVar8)) / (1.0 - local_158)) -
       (*(double *)(param_11 + 0x80) / 2.0) *
       *(double *)(param_11 + 0x74) * *(double *)(param_11 + 0x74)) -
       *(double *)(param_11 + 0x74) * *(double *)(param_11 + 0x7e);
  *(undefined8 *)(param_11 + 0x4c) = local_1e8;
  *(double *)(param_11 + 0x94) = local_208[2];
  *(double *)(param_11 + 0x8c) = local_168;
  *(double *)(param_11 + 0x8e) = local_158;
  *(undefined8 *)(param_11 + 0x96) = local_140;
  *(undefined8 *)(param_11 + 0x98) = local_100;
  *(undefined8 *)(param_11 + 0x9a) = local_108;
  *(double *)(param_11 + 0x90) = local_1b8;
  *(double *)(param_11 + 0x92) = local_1b0;
  iVar3 = FUN_00e270b0(auStack_308,&local_1e0);
  if ((*(char *)(param_10 + iVar3) != '\0') &&
     (iVar3 = FUN_00e270b0(auStack_308,&local_178), *(char *)(param_10 + iVar3) == '\0')) {
    local_1e0 = local_178 * local_258;
  }
  iVar3 = FUN_00e270b0(auStack_308,&local_1d8);
  if ((*(char *)(param_10 + iVar3) != '\0') &&
     (iVar3 = FUN_00e270b0(auStack_308,&local_178), *(char *)(param_10 + iVar3) == '\0')) {
    local_1d8 = local_178 * local_250;
  }
  iVar3 = FUN_00e270b0(auStack_308,&local_1d0);
  if ((*(char *)(param_10 + iVar3) != '\0') &&
     (iVar3 = FUN_00e270b0(auStack_308,&local_178), *(char *)(param_10 + iVar3) == '\0')) {
    local_1d0 = local_178 * local_248;
  }
  iVar3 = FUN_00e270b0(auStack_308,&local_1c8);
  if ((*(char *)(param_10 + iVar3) != '\0') &&
     (iVar3 = FUN_00e270b0(auStack_308,&local_178), *(char *)(param_10 + iVar3) == '\0')) {
    local_1c8 = local_178 * local_240;
  }
  if (1e-06 <= local_1e0) {
    *(double *)(param_11 + 0xac) = 1.0 / local_1e0;
  }
  else {
    local_1e0 = 0.0;
    param_11[0xac] = 0;
    param_11[0xad] = 0;
  }
  if (1e-06 <= local_1d8) {
    *(double *)(param_11 + 0xae) = 1.0 / local_1d8;
  }
  else {
    local_1d8 = 0.0;
    param_11[0xae] = 0;
    param_11[0xaf] = 0;
  }
  if (1e-06 <= local_1d0) {
    *(double *)(param_11 + 0xb0) = 1.0 / local_1d0;
  }
  else {
    local_1d0 = 0.0;
    param_11[0xb0] = 0;
    param_11[0xb1] = 0;
  }
  if (1e-06 <= local_1c8) {
    *(double *)(param_11 + 0xb2) = 1.0 / local_1c8;
  }
  else {
    local_1c8 = 0.0;
    param_11[0xb2] = 0;
    param_11[0xb3] = 0;
  }
  if (1e-06 <= local_1c0) {
    *(double *)(param_11 + 0xaa) = 1.0 / local_1c0;
  }
  else {
    local_1c0 = 0.0;
    param_11[0xaa] = 0;
    param_11[0xab] = 0;
  }
  *(char *)((longlong)param_11 + 9) = local_210;
  *(undefined1 *)((longlong)param_11 + 10) = local_211;
  *(undefined8 *)(param_11 + 0x50) = local_230;
  *(undefined8 *)(param_11 + 0x52) = local_228;
  *(undefined8 *)(param_11 + 0x54) = local_220;
  *(bool *)(param_11 + 0x56) = local_214 == '\0';
  *(bool *)((longlong)param_11 + 0x159) = local_213 == '\0';
  *(bool *)((longlong)param_11 + 0x15a) = local_212 == '\0';
  *(undefined8 *)(param_11 + 0x3e) = local_e8;
  *(undefined8 *)(param_11 + 0x40) = local_e0;
  *(undefined8 *)(param_11 + 0x42) = local_d8;
  *(undefined8 *)(param_11 + 0x44) = local_d0;
  *(undefined8 *)(param_11 + 0x46) = local_c8;
  *(undefined8 *)(param_11 + 0x48) = local_c0;
  if (local_210 == '\x01') {
    local_1d8 = 1000000000.0;
  }
  else if (local_210 == '\x02') {
    local_1e0 = 1000000000.0;
  }
  *(undefined1 *)((longlong)param_11 + 0xd) = param_5;
  *(undefined1 *)((longlong)param_11 + 0xb) = local_2b1;
  *(undefined1 *)(param_11 + 3) = param_6;
  *(undefined1 *)((longlong)param_11 + 0xe) = param_7;
  *(undefined8 *)(param_11 + 0xa0) = local_f0;
  *(double *)(param_11 + 0x9e) = local_f8 - *(double *)(param_11 + 0x96) * 2.0;
  if (((dVar9 == 0.0) || (*(double *)(param_11 + 0x60) == 0.0)) ||
     (*(double *)(param_11 + 0x62) == 0.0)) {
    *(double *)(param_11 + 0xa6) = *(double *)(param_11 + 100) * dVar7;
    *(double *)(param_11 + 0xa8) = *(double *)(param_11 + 100) * dVar7;
  }
  else {
    *(double *)(param_11 + 0xa6) =
         *(double *)(param_11 + 100) * dVar9 * *(double *)(param_11 + 0x60);
    *(double *)(param_11 + 0xa8) =
         *(double *)(param_11 + 100) * dVar9 * *(double *)(param_11 + 0x62);
  }
  *(double *)(param_11 + 0x84) =
       *(double *)(param_11 + 100) * local_190 * *(double *)(param_11 + 0xa0);
  *(double *)(param_11 + 0x86) =
       *(double *)(param_11 + 100) * local_188 * *(double *)(param_11 + 0xa0);
  *(double *)(param_11 + 0x88) =
       *(double *)(param_11 + 100) * local_180 * *(double *)(param_11 + 0x9e);
  *(double *)(param_11 + 0x9c) =
       (*(double *)(param_11 + 100) * dVar12 * *(double *)(param_11 + 0xa0)) /
       *(double *)(param_11 + 0x9e);
  *(double *)(param_11 + 0xa2) =
       *(double *)(param_11 + 100) * *(double *)(param_11 + 0x8a) * *(double *)(param_11 + 0x9e) *
       *(double *)(param_11 + 0xa0);
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
  uVar2 = FUN_016ea1b0(local_2c8,0x19);
  *(undefined2 *)(param_11 + 0x4a) = uVar2;
  local_2e0 = (double *)((longlong)param_11 + 0xf);
  local_2e8._0_1_ = *(undefined1 *)((longlong)param_11 + 0xb);
  FUN_01676240(local_2c8,local_1e0 / *(double *)(param_11 + 100),1,local_290[0]);
  local_2e8._0_1_ = (char)param_11[3];
  local_2e0 = (double *)(param_11 + 4);
  FUN_01676240(local_2c8,local_1d8 / *(double *)(param_11 + 100),1,local_290[0]);
  local_2e8._0_1_ = *(undefined1 *)((longlong)param_11 + 0xe);
  local_2e0 = (double *)((longlong)param_11 + 0x12);
  FUN_01676240(local_2c8,local_1c8 / *(double *)(param_11 + 100),1,local_290[0]);
  local_2e8._0_1_ = *(undefined1 *)((longlong)param_11 + 0xd);
  local_2e0 = (double *)((longlong)param_11 + 0x11);
  FUN_01676240(local_2c8,local_1d0 / *(double *)(param_11 + 100),1,local_290[0]);
  uVar2 = FUN_016ea1b0(local_2c8,4);
  *(undefined2 *)((longlong)param_11 + 0x12a) = uVar2;
  uVar1 = FUN_016e9e80(local_2c8,8);
  *(undefined1 *)(param_11 + 2) = uVar1;
  local_2e8._0_1_ = 0;
  FUN_016ebe60(local_2c8,(char)param_11[2] + '\x01',*(undefined1 *)((longlong)param_11 + 0xf),
               (char)param_11[4]);
  local_2e8._0_1_ = (char)param_11[2] + '\x01';
  FUN_016ec850(local_2c8,(char)param_11[2] + '\x02',*(undefined1 *)((longlong)param_11 + 0x11),
               (char)param_11[4]);
  local_2e8._0_1_ = (char)param_11[2] + '\x01';
  FUN_016ec850(local_2c8,(char)param_11[2] + '\x03',*(undefined1 *)((longlong)param_11 + 0x12),
               (char)param_11[4]);
  local_2e8._0_1_ = (char)param_11[2] + '\x01';
  FUN_016ec850(local_2c8,(char)param_11[2] + '\x04',*(undefined1 *)((longlong)param_11 + 0x11),
               *(undefined1 *)((longlong)param_11 + 0xf));
  local_2e8._0_1_ = (char)param_11[2] + '\x01';
  FUN_016ec850(local_2c8,(char)param_11[2] + '\x05',*(undefined1 *)((longlong)param_11 + 0x12),
               *(undefined1 *)((longlong)param_11 + 0xf));
  local_2e8._0_1_ = 1;
  FUN_016ebfa0(local_2c8,(char)param_11[2] + '\x06',*(undefined1 *)((longlong)param_11 + 0x11),
               (char)param_11[4]);
  local_2e8 = (double *)CONCAT71(local_2e8._1_7_,1);
  FUN_016ebfa0(local_2c8,(char)param_11[2] + '\a',*(undefined1 *)((longlong)param_11 + 0x11));
  FUN_016ed220(local_2c8,(char)param_11[2] + '\x06',*(double *)(param_11 + 0xa2) / 3.0,0);
  FUN_016ed220(local_2c8,(char)param_11[2] + '\a',*(double *)(param_11 + 0xa2) / 3.0,0);
  FUN_016ed1a0(local_2c8,(char)param_11[2] + '\b',*(undefined1 *)((longlong)param_11 + 0xf),
               (char)param_11[4]);
  lVar4 = *(longlong *)(local_2c8 + 0x130);
  local_2e8 = local_290;
  local_2e0 = local_208;
  local_2d8 = param_11;
  local_298 = FUN_00e23e80(&PTR_FUN_00e23c70,1,local_2c8,local_2c0);
  FUN_00597e50(lVar4 + 8,&local_298);
  return;
}

