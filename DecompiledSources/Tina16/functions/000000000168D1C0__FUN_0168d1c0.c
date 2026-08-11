/* Ghidra address: 0168d1c0 */
/* Ghidra symbol: FUN_0168d1c0 */


void FUN_0168d1c0(longlong param_1,longlong param_2,undefined2 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,char param_7,double *param_8,double *param_9,
                 longlong param_10,undefined2 *param_11)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 in_stack_fffffffffffffd58;
  ulonglong uVar15;
  ulonglong in_stack_fffffffffffffd68;
  undefined8 local_268 [2];
  undefined8 local_258;
  double local_250 [4];
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  undefined8 local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8 [2];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  char local_a0;
  char local_9f;
  char local_9e;
  
  pdVar5 = local_c8;
  for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_8;
    param_8 = param_8 + 1;
    pdVar5 = pdVar5 + 1;
  }
  pdVar5 = local_250;
  for (lVar4 = 0x31; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_9;
    param_9 = param_9 + 1;
    pdVar5 = pdVar5 + 1;
  }
  *param_11 = param_3;
  *(double *)(param_11 + 0x120) = local_c8[1];
  if (*(char *)(param_10 + 0x28) == '\0') {
    local_110 = local_110 + 273.15;
  }
  else {
    local_110 = 300.15;
  }
  dVar13 = local_110 / 300.15;
  if (*(char *)(param_10 + 5) != '\0') {
    if (local_228 <= 1.0) {
      local_228 = 0.0;
    }
    else {
      local_228 = local_228 * local_250[0];
    }
  }
  if (*(char *)(param_10 + 0xb) != '\0') {
    if (local_1f8 <= 1.0) {
      local_1f8 = 0.0;
    }
    else {
      local_1f8 = local_1f8 * local_250[0];
    }
  }
  if (*(char *)(param_10 + 0x1b) != '\0') {
    local_1c8 = local_1d8;
  }
  *(undefined8 *)(param_11 + 0xdc) = local_1c8;
  *(undefined8 *)(param_11 + 0xe0) = local_1d8;
  if (((*(char *)(param_10 + 3) != '\0') || (local_250[3] == 0.0)) || (1e+30 <= local_250[3])) {
    *(undefined8 *)(param_11 + 0xb4) = 0;
  }
  else {
    *(double *)(param_11 + 0xb4) = 1.0 / local_250[3];
  }
  if (((*(char *)(param_10 + 4) != '\0') || (local_230 == 0.0)) || (1e+30 <= local_230)) {
    *(undefined8 *)(param_11 + 0xb8) = 0;
  }
  else {
    *(double *)(param_11 + 0xb8) = 1.0 / local_230;
  }
  if (((*(char *)(param_10 + 9) != '\0') || (local_208 == 0.0)) || (1e+30 <= local_208)) {
    *(undefined8 *)(param_11 + 0xbc) = 0;
  }
  else {
    *(double *)(param_11 + 0xbc) = 1.0 / local_208;
  }
  if (((*(char *)(param_10 + 10) != '\0') || (local_200 == 0.0)) || (1e+30 <= local_200)) {
    *(undefined8 *)(param_11 + 0xc0) = 0;
  }
  else {
    *(double *)(param_11 + 0xc0) = 1.0 / local_200;
  }
  if (((*(char *)(param_10 + 0x19) != '\0') || (local_188 == 0.0)) || (1e+30 <= local_188)) {
    *(undefined8 *)(param_11 + 0xc4) = 0;
  }
  else {
    *(double *)(param_11 + 0xc4) = 1.0 / (local_188 * 1.44);
  }
  *(double *)(param_11 + 200) = (local_178 / 57.29577951308232) * local_198;
  if (*(char *)(param_10 + 0x27) == '\0') {
    if (0.9999 < local_118) {
      local_118 = 0.9999;
    }
  }
  else {
    local_118 = 0.5;
  }
  dVar6 = (double)FUN_0040c2f0(1.0 - local_118);
  uVar7 = FUN_0040af80((local_1a0 + 1.0) * dVar6);
  *(undefined8 *)(param_11 + 0xcc) = uVar7;
  *(double *)(param_11 + 0xd0) = 1.0 - local_118 * (local_1a0 + 1.0);
  uVar7 = FUN_0040af80((local_160 + 1.0) * dVar6);
  *(undefined8 *)(param_11 + 0xd4) = uVar7;
  *(double *)(param_11 + 0xd8) = 1.0 - local_118 * (local_160 + 1.0);
  *(double *)(param_11 + 0x7c) = local_c8[0];
  dVar12 = local_c8[0] * 8.61708745588933e-05;
  dVar14 = local_c8[0] / 300.15;
  dVar8 = local_c8[0] * 0.000702 * local_c8[0];
  dVar11 = local_c8[0] + 1108.0;
  dVar9 = local_c8[0] * 2.7612452e-23;
  dVar10 = (double)FUN_0040c2f0(dVar14);
  dVar11 = dVar12 * -2.0 *
           (dVar10 * 1.5 +
           (-(1.16 - dVar8 / dVar11) / dVar9 + 1.3454442398941469e+20) * 1.6021917e-19);
  dVar8 = (double)FUN_0040c2f0(local_c8[0] / local_110);
  dVar10 = ((local_c8[0] / local_110 - 1.0) * local_128) / dVar12 + local_120 * dVar8;
  dVar9 = (double)FUN_0040af80(dVar10);
  *(double *)(param_11 + 0x80) = local_250[0] * dVar9;
  dVar8 = (double)FUN_0040af80(dVar8 * local_130);
  *(double *)(param_11 + 0x84) = local_250[1] * dVar8;
  *(double *)(param_11 + 0x88) = local_218 * dVar8;
  dVar9 = (double)FUN_0040af80(dVar10 / local_220);
  *(double *)(param_11 + 0x8c) = (local_228 * dVar9) / dVar8;
  dVar9 = (double)FUN_0040af80(dVar10 / local_1f0);
  *(double *)(param_11 + 0x90) = (local_1f8 * dVar9) / dVar8;
  dVar9 = (double)FUN_0040af80(dVar10 / local_1e0);
  *(double *)(param_11 + 0x128) = (local_1e8 * dVar9) / dVar8;
  *(double *)(param_11 + 0xe4) = local_220;
  *(double *)(param_11 + 0xe8) = local_1f0;
  dVar8 = (local_1a8 - dVar11) / dVar13;
  *(double *)(param_11 + 0x94) =
       local_1b0 / (local_1a0 * ((local_110 - 300.15) * 0.0004 - (local_1a8 - dVar8) / dVar8) + 1.0)
  ;
  *(double *)(param_11 + 0x98) = dVar14 * dVar8 + dVar11;
  *(double *)(param_11 + 0x94) =
       *(double *)(param_11 + 0x94) *
       (local_1a0 *
        ((local_c8[0] - 300.15) * 0.0004 - (*(double *)(param_11 + 0x98) - dVar8) / dVar8) + 1.0);
  dVar8 = (local_168 - dVar11) / dVar13;
  *(double *)(param_11 + 0x9c) =
       local_170 / (local_160 * ((local_110 - 300.15) * 0.0004 - (local_168 - dVar8) / dVar8) + 1.0)
  ;
  *(double *)(param_11 + 0xa0) = dVar14 * dVar8 + dVar11;
  *(double *)(param_11 + 0x9c) =
       *(double *)(param_11 + 0x9c) *
       (local_160 *
        ((local_c8[0] - 300.15) * 0.0004 - (*(double *)(param_11 + 0xa0) - dVar8) / dVar8) + 1.0);
  dVar13 = (local_140 - dVar11) / dVar13;
  *(double *)(param_11 + 0x110) =
       local_148 /
       (local_138 * ((local_110 - 300.15) * 0.0004 - (local_140 - dVar13) / dVar13) + 1.0);
  *(double *)(param_11 + 0x114) = dVar14 * dVar13 + dVar11;
  *(double *)(param_11 + 0x110) =
       *(double *)(param_11 + 0x110) *
       (local_138 *
        ((local_c8[0] - 300.15) * 0.0004 - (*(double *)(param_11 + 0x114) - dVar13) / dVar13) + 1.0)
  ;
  *(double *)(param_11 + 0xa4) = local_118 * *(double *)(param_11 + 0x98);
  dVar13 = (double)FUN_0040af80((1.0 - local_1a0) * dVar6);
  *(double *)(param_11 + 0xa8) = (*(double *)(param_11 + 0x98) * (1.0 - dVar13)) / (1.0 - local_1a0)
  ;
  *(double *)(param_11 + 0xac) = local_118 * *(double *)(param_11 + 0xa0);
  dVar13 = (double)FUN_0040af80((1.0 - local_160) * dVar6);
  *(double *)(param_11 + 0xb0) = (*(double *)(param_11 + 0xa0) * (1.0 - dVar13)) / (1.0 - local_160)
  ;
  dVar13 = (double)FUN_0040c2f0(dVar12 / (*(double *)(param_11 + 0x80) * 1.4142135623730951 *
                                         local_c8[1]));
  *(double *)(param_11 + 0x38) = dVar12 * dVar13;
  *(undefined8 *)(param_11 + 0xec) = local_1d0;
  *(double *)(param_11 + 0xf0) = local_250[2];
  *(undefined8 *)(param_11 + 0xf4) = local_210;
  *(double *)(param_11 + 0x124) = local_1e0;
  *(double *)(param_11 + 0xf8) = local_198;
  *(undefined8 *)(param_11 + 0xfc) = local_150;
  *(double *)(param_11 + 0x100) = local_1a0;
  *(double *)(param_11 + 0x104) = local_160;
  *(double *)(param_11 + 0x10c) = local_138;
  *(undefined8 *)(param_11 + 0x108) = local_158;
  *(undefined8 *)(param_11 + 0x118) = local_190;
  *(undefined8 *)(param_11 + 0x11c) = local_180;
  *(undefined8 *)(param_11 + 300) = local_108;
  *(undefined8 *)(param_11 + 0x130) = local_100;
  *(char *)((longlong)param_11 + 3) = local_9e;
  *(undefined8 *)(param_11 + 0x30) = 0;
  *(undefined8 *)(param_11 + 0x34) = 0;
  *(undefined1 *)(param_11 + 2) = local_b8;
  *(undefined8 *)(param_11 + 0x138) = local_b0;
  *(undefined8 *)(param_11 + 0x13c) = local_a8;
  *(bool *)(param_11 + 0x134) = local_a0 == '\0';
  *(bool *)((longlong)param_11 + 0x269) = local_9f == '\0';
  *(undefined8 *)(param_11 + 0x44) = local_f8;
  *(undefined8 *)(param_11 + 0x48) = local_f0;
  *(undefined8 *)(param_11 + 0x4c) = local_e8;
  *(undefined8 *)(param_11 + 0x50) = local_e0;
  *(undefined8 *)(param_11 + 0x54) = local_d8;
  *(undefined8 *)(param_11 + 0x58) = local_d0;
  if (local_9e == '\x01') {
    local_1d8 = 0x41cdcd6500000000;
  }
  else if (local_9e == '\x02') {
    local_1b8 = 1000000000.0;
  }
  *(undefined1 *)((longlong)param_11 + 7) = param_4;
  *(undefined1 *)((longlong)param_11 + 5) = param_5;
  *(undefined1 *)(param_11 + 3) = param_6;
  if ((*(char *)(param_2 + 0xed6) == '\0') && (*(double *)(param_11 + 0xe0) != 0.0)) {
    uVar1 = FUN_016e9e80(param_1,2);
    *(undefined1 *)(param_11 + 1) = uVar1;
    *(undefined1 *)(param_11 + 0x150) = uVar1;
    uVar7 = FUN_016e9d10(param_1,1);
    cVar2 = (char)uVar7 + '\x01';
    *(char *)(param_11 + 4) = cVar2;
    in_stack_fffffffffffffd58 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd58 >> 8),1);
    FUN_016ebe60(param_1,*(char *)(param_11 + 1) + '\x01',*(undefined1 *)((longlong)param_11 + 5),
                 CONCAT71((int7)((ulonglong)uVar7 >> 8),cVar2) & 0xffffffff,
                 in_stack_fffffffffffffd58);
    FUN_016ed1a0(param_1,*(char *)(param_11 + 1) + '\x02',*(undefined1 *)((longlong)param_11 + 5),
                 *(undefined1 *)(param_11 + 4));
  }
  else {
    *(undefined1 *)(param_11 + 4) = *(undefined1 *)((longlong)param_11 + 5);
  }
  uVar7 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd58 >> 8),*(undefined1 *)(param_11 + 3));
  in_stack_fffffffffffffd68 = in_stack_fffffffffffffd68 & 0xffffffffffffff00;
  FUN_016760d0(param_1,local_1b8 / *(double *)(param_11 + 0x120),1,local_c8[0],uVar7,
               (longlong)param_11 + 9,in_stack_fffffffffffffd68);
  uVar15 = CONCAT71((int7)((ulonglong)uVar7 >> 8),*(undefined1 *)((longlong)param_11 + 7));
  FUN_016760d0(param_1,local_1c0 / *(double *)(param_11 + 0x120),1,local_c8[0],uVar15,param_11 + 5,
               in_stack_fffffffffffffd68 & 0xffffffffffffff00);
  if (param_7 == -1) {
    if (DAT_01f806e8 == '\0') {
      param_7 = *(char *)((longlong)param_11 + 9);
    }
    else {
      param_7 = '\0';
    }
  }
  *(char *)((longlong)param_11 + 0xb) = param_7;
  uVar3 = FUN_016ea1b0(param_1,0x16);
  param_11[0x5c] = uVar3;
  uVar3 = FUN_016ea1b0(param_1,6);
  param_11[0x5d] = uVar3;
  if (*(char *)(param_2 + 0xed6) == '\0') {
    uVar1 = FUN_016e9e80(param_1,9);
    *(undefined1 *)(param_11 + 1) = uVar1;
  }
  else {
    uVar1 = FUN_016e9e80(param_1,0xb);
    *(undefined1 *)(param_11 + 1) = uVar1;
  }
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*(char *)(param_11 + 1) + '\x01',*(undefined1 *)(param_11 + 4),
               *(undefined1 *)(param_11 + 5),uVar15);
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*(char *)(param_11 + 1) + '\x02',*(undefined1 *)(param_11 + 4),
               *(undefined1 *)((longlong)param_11 + 9),uVar15);
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*(char *)(param_11 + 1) + '\x03',*(undefined1 *)((longlong)param_11 + 9),
               *(undefined1 *)(param_11 + 5),uVar15);
  uVar15 = uVar15 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*(char *)(param_11 + 1) + '\x04',*(undefined1 *)((longlong)param_11 + 5),
               *(undefined1 *)((longlong)param_11 + 9),uVar15);
  FUN_016ebe60(param_1,*(char *)(param_11 + 1) + '\x05',*(undefined1 *)((longlong)param_11 + 0xb),
               *(undefined1 *)((longlong)param_11 + 9),uVar15 & 0xffffffffffffff00);
  FUN_016ec850(param_1,*(char *)(param_11 + 1) + '\x06',*(undefined1 *)(param_11 + 4),
               *(undefined1 *)((longlong)param_11 + 9),*(char *)(param_11 + 1) + '\x01');
  FUN_016ec850(param_1,*(char *)(param_11 + 1) + '\a',*(undefined1 *)(param_11 + 4),
               *(undefined1 *)(param_11 + 5),*(char *)(param_11 + 1) + '\x03');
  FUN_016ed1a0(param_1,*(char *)(param_11 + 1) + '\b',*(undefined1 *)(param_11 + 5),
               *(undefined1 *)(param_11 + 4));
  FUN_016ed1a0(param_1,*(char *)(param_11 + 1) + '\t',*(undefined1 *)((longlong)param_11 + 9),
               *(undefined1 *)(param_11 + 5));
  if (*(char *)(param_2 + 0xed6) == '\x01') {
    FUN_016ebfa0(param_1,*(char *)(param_11 + 1) + '\n',*(undefined1 *)(param_11 + 4),
                 *(undefined1 *)(param_11 + 5),1);
    FUN_016ebfa0(param_1,*(char *)(param_11 + 1) + '\v',*(undefined1 *)(param_11 + 4),
                 *(undefined1 *)((longlong)param_11 + 9),1);
    FUN_016ed220(param_1,*(char *)(param_11 + 1) + '\n',
                 *(double *)(param_11 + 0x94) * *(double *)(param_11 + 0x120),0);
    FUN_016ed220(param_1,*(char *)(param_11 + 1) + '\v',
                 *(double *)(param_11 + 0x9c) * *(double *)(param_11 + 0x120) *
                 *(double *)(param_11 + 0x108),0);
  }
  lVar4 = *(longlong *)(param_1 + 0x130);
  local_258 = FUN_0168cbd0(&LAB_0168bf70,1,param_1,param_2,local_250,param_11,local_c8[1],0);
  FUN_00597e50(lVar4 + 8,&local_258);
  lVar4 = *(longlong *)(param_1 + 0x130);
  local_268[0] = FUN_0168cbd0(&LAB_0168bf70,1,param_1,param_2,local_250,param_11,local_c8[1],1);
  FUN_00597e50(lVar4 + 8,local_268);
  return;
}

