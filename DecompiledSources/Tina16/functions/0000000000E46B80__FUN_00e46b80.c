/* Ghidra address: 00e46b80 */
/* Ghidra symbol: FUN_00e46b80 */


void FUN_00e46b80(longlong param_1,undefined8 param_2,longlong param_3,char param_4,double param_5)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double unaff_XMM14_Qa;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  
  if (*(int *)(param_3 + 300) == 0) {
    local_270 = *(double *)(param_3 + 0x78);
    local_268 = *(double *)(param_3 + 0x68);
  }
  else {
    local_270 = 0.0;
    local_268 = 0.0;
  }
  if (*(int *)(param_3 + 0x13c) == 0) {
    local_208 = *(double *)(param_3 + 0x658);
    local_260 = *(double *)(param_3 + 0x650);
  }
  else {
    local_260 = 0.0;
    local_208 = 0.0;
  }
  dVar1 = *(double *)(param_3 + 0x628);
  if ((byte)(param_4 - 8U) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0
    ;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    local_180 = 0.0;
    local_248 = 0.0;
    local_1e0 = -(*(double *)(param_3 + 0xa20) + *(double *)(param_3 + 0xa08) +
                 *(double *)(param_3 + 0xa38));
    local_1f8 = -(*(double *)(param_3 + 0xa10) + *(double *)(param_3 + 0x9f8) +
                 *(double *)(param_3 + 0xa28));
    dVar4 = -(*(double *)(param_3 + 0xa18) + *(double *)(param_3 + 0xa00) +
             *(double *)(param_3 + 0xa30));
    if (*(int *)(param_3 + 0x154) < 1) {
      local_238 = *(double *)(param_3 + 0x88);
      local_240 = *(double *)(param_3 + 0x98);
      local_258 = *(double *)(param_3 + 0x90);
      local_250 = 0.0;
      local_220 = 0.0;
      local_228 = 0.0;
      local_138 = *(double *)(param_3 + 0xa20);
      local_e0 = *(double *)(param_3 + 0xa10);
      dVar5 = *(double *)(param_3 + 0xa18);
      dVar6 = local_138 + local_e0 + dVar5;
      local_160 = 0.0;
      local_158 = 0.0;
      local_150 = 0.0;
      local_168 = 0.0;
      local_140 = 0.0;
      local_130 = 0.0;
      local_c0 = 0.0;
      local_148 = 0.0;
      dVar8 = *(double *)(param_3 + 0xa08);
      local_128 = *(double *)(param_3 + 0x9f8);
      local_1a0 = *(double *)(param_3 + 0xa00);
      local_110 = 0.0;
      local_d0 = 0.0;
      local_c8 = 0.0;
      local_d8 = 0.0;
    }
    else {
      unaff_XMM14_Qa = param_5 * *(double *)(param_3 + 0x6f0);
      dVar7 = 1.0 / (unaff_XMM14_Qa * unaff_XMM14_Qa + 1.0);
      dVar8 = unaff_XMM14_Qa * dVar7;
      local_238 = *(double *)(param_3 + 0x88) * dVar7;
      local_240 = *(double *)(param_3 + 0x98) * dVar7;
      local_258 = *(double *)(param_3 + 0x90) * dVar7;
      local_228 = -*(double *)(param_3 + 0x88) * dVar8;
      local_220 = -*(double *)(param_3 + 0x98) * dVar8;
      local_250 = -*(double *)(param_3 + 0x90) * dVar8;
      local_138 = *(double *)(param_3 + 0xa20) * dVar7;
      local_e0 = *(double *)(param_3 + 0xa10) * dVar7;
      dVar5 = *(double *)(param_3 + 0xa18) * dVar7;
      dVar6 = local_138 + local_e0 + dVar5;
      local_168 = *(double *)(param_3 + 0xa20) * dVar8 * param_5;
      local_150 = *(double *)(param_3 + 0xa10) * dVar8 * param_5;
      local_158 = *(double *)(param_3 + 0xa18) * dVar8 * param_5;
      local_160 = -(local_168 + local_150 + local_158);
      local_148 = local_1e0 * dVar8 * param_5;
      local_c0 = local_1f8 * dVar8 * param_5;
      local_130 = dVar4 * dVar8 * param_5;
      local_140 = -(local_148 + local_c0 + local_130);
      dVar8 = -(local_138 + local_1e0 * dVar7 + *(double *)(param_3 + 0xa38));
      local_128 = -(local_e0 + local_1f8 * dVar7 + *(double *)(param_3 + 0xa28));
      local_1a0 = -(dVar5 + dVar4 * dVar7 + *(double *)(param_3 + 0xa30));
      local_d8 = -(local_168 + local_148);
      local_c8 = -(local_150 + local_c0);
      local_d0 = -(local_158 + local_130);
      local_110 = -(local_d8 + local_c8 + local_d0);
      local_1f8 = local_1f8 * dVar7;
      local_1e0 = local_1e0 * dVar7;
      dVar4 = dVar4 * dVar7;
    }
    if (*(int *)(param_3 + 4) < 0) {
      local_238 = -local_238;
      local_240 = -local_240;
      local_230 = 0.0;
      local_218 = -(local_238 + local_240);
      local_228 = -local_228;
      local_220 = -local_220;
      local_210 = 0.0;
      local_200 = -(local_228 + local_220);
      if (*(int *)(param_3 + 0x14c) == 2) {
        dVar7 = (double)FUN_016eebe0(param_2,param_1 + 0x1b8,0,*(short *)(param_3 + 0x128) + 8,0);
        dVar3 = (double)FUN_016eebe0(param_2,param_1 + 0x1b8,0,*(short *)(param_3 + 0x128) + 3,0);
        unaff_XMM14_Qa = dVar7 - dVar3;
      }
      else if (*(int *)(param_3 + 0x14c) == 3) {
        dVar7 = (double)FUN_016eebe0(param_2,param_1 + 0x1b8,0,*(short *)(param_3 + 0x128) + 9,0);
        dVar3 = (double)FUN_016eebe0(param_2,param_1 + 0x1b8,0,*(short *)(param_3 + 0x128) + 3,0);
        unaff_XMM14_Qa = dVar7 - dVar3;
      }
      if (*(int *)(param_3 + 0x14c) < 2) {
        *(undefined8 *)(param_3 + 0xe00) = 0;
        *(undefined8 *)(param_3 + 0xe10) = 0;
        *(undefined8 *)(param_3 + 0xe08) = 0;
        *(undefined8 *)(param_3 + 0xdf8) = 0;
        *(undefined8 *)(param_3 + 0xdf0) = 0;
      }
      else {
        *(double *)(param_3 + 0xdf8) = *(double *)(param_3 + 0x888) * unaff_XMM14_Qa;
        *(double *)(param_3 + 0xe08) = *(double *)(param_3 + 0x898) * unaff_XMM14_Qa;
        *(double *)(param_3 + 0xe10) = *(double *)(param_3 + 0x8a0) * unaff_XMM14_Qa;
        *(double *)(param_3 + 0xe00) = *(double *)(param_3 + 0x890) * unaff_XMM14_Qa;
        *(double *)(param_3 + 0xe08) = *(double *)(param_3 + 0xe08) - *(double *)(param_3 + 0x880);
        *(undefined8 *)(param_3 + 0xdf0) = *(undefined8 *)(param_3 + 0x880);
      }
      if (*(int *)(param_3 + 0x14c) == 3) {
        local_180 = (*(double *)(param_3 + 0xac0) + *(double *)(param_3 + 0xab8) +
                    *(double *)(param_3 + 0x520)) * param_5;
        local_f8 = -*(double *)(param_3 + 0xac0) * param_5;
        local_100 = -*(double *)(param_3 + 0xab8) * param_5;
        local_108 = -*(double *)(param_3 + 0x520) * param_5;
        local_128 = local_128 * param_5;
        local_178 = local_1a0 * param_5;
        local_1a0 = dVar8 * param_5;
        local_1b8 = local_128 + local_178 + local_1a0;
        local_1f0 = *(double *)(param_3 + 0xa28);
      }
      else {
        local_128 = (local_128 + *(double *)(param_3 + 0xac0) + *(double *)(param_3 + 0xab8) +
                    *(double *)(param_3 + 0x520)) * param_5;
        local_178 = (local_1a0 - *(double *)(param_3 + 0xac0)) * param_5;
        local_1a0 = (dVar8 - *(double *)(param_3 + 0xab8)) * param_5;
        local_1b8 = local_128 + local_178 + local_1a0;
        local_1f8 = local_1f8 - *(double *)(param_3 + 0xac0);
        local_e0 = local_e0 - *(double *)(param_3 + 0xab8);
        local_1f0 = *(double *)(param_3 + 0xa28) - *(double *)(param_3 + 0x520);
        local_108 = 0.0;
        local_100 = 0.0;
        local_f8 = 0.0;
      }
      local_1d8 = local_1f8 * param_5;
      local_1f0 = local_1f0 * param_5;
      local_1f8 = local_e0 * param_5;
      local_1c8 = (*(double *)(param_3 + 0xaa8) + *(double *)(param_3 + 0xac0) + dVar4) * param_5;
      local_1e8 = local_1e0 * param_5;
      local_1e0 = dVar5 * param_5;
      local_1d0 = (local_138 + *(double *)(param_3 + 0xaa0) + *(double *)(param_3 + 0xab8)) *
                  param_5;
      if (*(int *)(param_3 + 300) == 0) {
        local_1c0 = -(local_1d8 + local_1c8 + local_1e8 + local_f8);
        local_190 = -(local_1f8 + local_1e0 + local_1d0 + local_100);
        local_170 = *(double *)(param_3 + 0xa30) - *(double *)(param_3 + 0xaa8);
        local_118 = *(double *)(param_3 + 0xa38) - *(double *)(param_3 + 0xaa0);
        local_120 = 0.0;
      }
      else {
        local_1c0 = -(local_1d8 + local_1c8 + local_1e8 + local_f8) +
                    *(double *)(param_3 + 0xaa8) * param_5;
        local_190 = -dVar6 * param_5;
        local_170 = *(double *)(param_3 + 0xa30);
        local_118 = *(double *)(param_3 + 0xa38);
        local_120 = -*(double *)(param_3 + 0xaa8) * param_5;
        local_248 = -*(double *)(param_3 + 0xaa0) * param_5;
      }
      local_118 = local_118 * param_5;
      local_170 = local_170 * param_5;
      dVar7 = local_1f0 + local_170 + local_118 + local_108;
      local_b0 = local_d0;
      local_a8 = local_d8;
      dVar6 = local_130;
      dVar8 = local_c0;
      dVar5 = local_148;
      dVar4 = local_140;
      local_148 = local_158;
      local_c0 = local_150;
      local_130 = local_168;
      local_140 = local_160;
    }
    else {
      local_230 = local_238 + local_240;
      local_218 = 0.0;
      local_210 = local_228 + local_220;
      local_200 = 0.0;
      if (*(int *)(param_3 + 0x14c) == 2) {
        dVar7 = (double)FUN_016eebe0(param_2,param_1 + 0x1b8,0,*(short *)(param_3 + 0x128) + 8,0);
        dVar3 = (double)FUN_016eebe0(param_2,param_1 + 0x1b8,0,*(short *)(param_3 + 0x128) + 3,0);
        unaff_XMM14_Qa = dVar7 - dVar3;
      }
      else if (*(int *)(param_3 + 0x14c) == 3) {
        dVar7 = (double)FUN_016eebe0(param_2,param_1 + 0x1b8,0,*(short *)(param_3 + 0x128) + 9,0);
        dVar3 = (double)FUN_016eebe0(param_2,param_1 + 0x1b8,0,*(short *)(param_3 + 0x128) + 3,0);
        unaff_XMM14_Qa = dVar7 - dVar3;
      }
      if (*(int *)(param_3 + 0x14c) < 2) {
        *(undefined8 *)(param_3 + 0xe00) = 0;
        *(undefined8 *)(param_3 + 0xe10) = 0;
        *(undefined8 *)(param_3 + 0xe08) = 0;
        *(undefined8 *)(param_3 + 0xdf8) = 0;
        *(undefined8 *)(param_3 + 0xdf0) = 0;
      }
      else {
        *(double *)(param_3 + 0xdf8) = *(double *)(param_3 + 0x888) * unaff_XMM14_Qa;
        *(double *)(param_3 + 0xe08) = *(double *)(param_3 + 0x898) * unaff_XMM14_Qa;
        *(double *)(param_3 + 0xe10) = *(double *)(param_3 + 0x8a0) * unaff_XMM14_Qa;
        *(double *)(param_3 + 0xe00) = *(double *)(param_3 + 0x890) * unaff_XMM14_Qa;
        *(double *)(param_3 + 0xe08) = *(double *)(param_3 + 0xe08) - *(double *)(param_3 + 0x880);
        *(undefined8 *)(param_3 + 0xdf0) = *(undefined8 *)(param_3 + 0x880);
      }
      if (*(int *)(param_3 + 0x14c) == 3) {
        local_180 = (*(double *)(param_3 + 0xac0) + *(double *)(param_3 + 0xab8) +
                    *(double *)(param_3 + 0x520)) * param_5;
        local_f8 = -*(double *)(param_3 + 0xac0) * param_5;
        local_100 = -*(double *)(param_3 + 0xab8) * param_5;
        local_108 = -*(double *)(param_3 + 0x520) * param_5;
        local_128 = local_128 * param_5;
        local_178 = dVar8 * param_5;
        local_1a0 = local_1a0 * param_5;
        local_1b8 = local_128 + local_178 + local_1a0;
        local_1f0 = *(double *)(param_3 + 0xa28);
      }
      else {
        local_128 = (local_128 + *(double *)(param_3 + 0xac0) + *(double *)(param_3 + 0xab8) +
                    *(double *)(param_3 + 0x520)) * param_5;
        local_178 = (dVar8 - *(double *)(param_3 + 0xac0)) * param_5;
        local_1a0 = (local_1a0 - *(double *)(param_3 + 0xab8)) * param_5;
        local_1b8 = local_128 + local_178 + local_1a0;
        local_e0 = local_e0 - *(double *)(param_3 + 0xac0);
        local_1f8 = local_1f8 - *(double *)(param_3 + 0xab8);
        local_1f0 = *(double *)(param_3 + 0xa28) - *(double *)(param_3 + 0x520);
        local_108 = 0.0;
        local_100 = 0.0;
        local_f8 = 0.0;
      }
      local_1d8 = local_e0 * param_5;
      local_1f0 = local_1f0 * param_5;
      local_1f8 = local_1f8 * param_5;
      local_1c8 = (local_138 + *(double *)(param_3 + 0xaa8) + *(double *)(param_3 + 0xac0)) *
                  param_5;
      local_1e8 = dVar5 * param_5;
      local_1e0 = local_1e0 * param_5;
      local_1d0 = (*(double *)(param_3 + 0xaa0) + *(double *)(param_3 + 0xab8) + dVar4) * param_5;
      if (*(int *)(param_3 + 300) == 0) {
        local_1c0 = -(local_1d8 + local_1c8 + local_1e8 + local_f8);
        local_190 = -(local_1f8 + local_1e0 + local_1d0 + local_100);
        local_170 = *(double *)(param_3 + 0xa38) - *(double *)(param_3 + 0xaa8);
        local_118 = *(double *)(param_3 + 0xa30) - *(double *)(param_3 + 0xaa0);
        local_120 = 0.0;
      }
      else {
        local_1c0 = -dVar6 * param_5;
        local_190 = -(local_1f8 + local_1e0 + local_1d0 + local_100) +
                    *(double *)(param_3 + 0xaa0) * param_5;
        local_170 = *(double *)(param_3 + 0xa38);
        local_118 = *(double *)(param_3 + 0xa30);
        local_120 = -*(double *)(param_3 + 0xaa8) * param_5;
        local_248 = -*(double *)(param_3 + 0xaa0) * param_5;
      }
      local_118 = local_118 * param_5;
      local_170 = local_170 * param_5;
      dVar7 = local_170 + local_1f0 + local_118 + local_108;
      local_b0 = local_d8;
      local_a8 = local_d0;
      dVar6 = local_168;
      dVar8 = local_150;
      dVar5 = local_158;
      dVar4 = local_160;
    }
    local_1b8 = -local_1b8;
    if (*(int *)(param_3 + 0x14c) == 1) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xfd0),*(double *)(param_3 + 0x178) * dVar1,0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1060),-(*(double *)(param_3 + 0x178) * dVar1),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1040),-(*(double *)(param_3 + 0x178) * dVar1),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xff0),
                   *(double *)(param_3 + 0x178) * (dVar1 + local_c8 + *(double *)(param_3 + 0xad8)),
                   *(double *)(param_3 + 0x178) * local_128);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1080),
                   *(double *)(param_3 + 0x178) * (local_b0 + *(double *)(param_3 + 0xae0)),
                   *(double *)(param_3 + 0x178) * local_178);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1088),
                   *(double *)(param_3 + 0x178) * (local_a8 + *(double *)(param_3 + 0xae8)),
                   *(double *)(param_3 + 0x178) * local_1a0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1070),
                   *(double *)(param_3 + 0x178) * (local_110 + *(double *)(param_3 + 0xaf0)),
                   *(double *)(param_3 + 0x178) * local_1b8);
    }
    else if (*(int *)(param_3 + 0x14c) == 2) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xfd0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdf0),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1040),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xe08),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10e0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdf8),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10e8),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xe10),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10f0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xe00),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1060),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdf0)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xff0),
                   -(*(double *)(param_3 + 0x178) *
                    ((*(double *)(param_3 + 0xe08) - local_c8) - *(double *)(param_3 + 0xad8))),
                   *(double *)(param_3 + 0x178) * local_128);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1080),
                   -(*(double *)(param_3 + 0x178) *
                    ((*(double *)(param_3 + 0xdf8) - local_b0) - *(double *)(param_3 + 0xae0))),
                   *(double *)(param_3 + 0x178) * local_178);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1088),
                   -(*(double *)(param_3 + 0x178) *
                    ((*(double *)(param_3 + 0xe10) - local_a8) - *(double *)(param_3 + 0xae8))),
                   *(double *)(param_3 + 0x178) * local_1a0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1070),
                   -(*(double *)(param_3 + 0x178) *
                    ((*(double *)(param_3 + 0xe00) - local_110) - *(double *)(param_3 + 0xaf0))),
                   *(double *)(param_3 + 0x178) * local_1b8);
    }
    else if (*(int *)(param_3 + 0x14c) == 3) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xfd0),*(double *)(param_3 + 0x178) * dVar1,0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1138),-(*(double *)(param_3 + 0x178) * dVar1),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1110),-(*(double *)(param_3 + 0x178) * dVar1),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1108),
                   *(double *)(param_3 + 0x178) * (dVar1 + *(double *)(param_3 + 0xdf0)),
                   *(double *)(param_3 + 0x178) * local_180);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10f8),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdf8),
                   *(double *)(param_3 + 0x178) * local_f8);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1100),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xe08),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1118),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xe10),
                   *(double *)(param_3 + 0x178) * local_100);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1120),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xe00),
                   *(double *)(param_3 + 0x178) * local_108);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1128),0,*(double *)(param_3 + 0x178) * local_f8);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1130),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdf0)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1140),0,*(double *)(param_3 + 0x178) * local_100);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1148),0,*(double *)(param_3 + 0x178) * local_108);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xff0),
                   -(*(double *)(param_3 + 0x178) *
                    ((*(double *)(param_3 + 0xe08) - local_c8) - *(double *)(param_3 + 0xad8))),
                   *(double *)(param_3 + 0x178) * local_128);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1080),
                   -(*(double *)(param_3 + 0x178) *
                    ((*(double *)(param_3 + 0xdf8) - local_b0) - *(double *)(param_3 + 0xae0))),
                   *(double *)(param_3 + 0x178) * local_178);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1088),
                   -(*(double *)(param_3 + 0x178) *
                    ((*(double *)(param_3 + 0xe10) - local_a8) - *(double *)(param_3 + 0xae8))),
                   *(double *)(param_3 + 0x178) * local_1a0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1070),
                   -(*(double *)(param_3 + 0x178) *
                    ((*(double *)(param_3 + 0xe00) - local_110) - *(double *)(param_3 + 0xaf0))),
                   *(double *)(param_3 + 0x178) * local_1b8);
    }
    else {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xff0),
                   *(double *)(param_3 + 0x178) * (local_c8 + *(double *)(param_3 + 0xad8)),
                   *(double *)(param_3 + 0x178) * local_128);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1080),
                   *(double *)(param_3 + 0x178) * (local_b0 + *(double *)(param_3 + 0xae0)),
                   *(double *)(param_3 + 0x178) * local_178);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1088),
                   *(double *)(param_3 + 0x178) * (local_a8 + *(double *)(param_3 + 0xae8)),
                   *(double *)(param_3 + 0x178) * local_1a0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1070),
                   *(double *)(param_3 + 0x178) * (local_110 + *(double *)(param_3 + 0xaf0)),
                   *(double *)(param_3 + 0x178) * local_1b8);
    }
    if (0 < *(int *)(param_3 + 0x13c)) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11c0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdd8),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11c8),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xde0),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11d0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xde8),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11d8),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xda8),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11e0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdb0),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11e8),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdc0),0);
    }
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xfe0),
                 *(double *)(param_3 + 0x178) *
                 ((((local_208 + dVar6 + local_258 + *(double *)(param_3 + 0x78)) -
                   *(double *)(param_3 + 0xdd0)) + local_218 + *(double *)(param_3 + 0xcc0)) -
                 *(double *)(param_3 + 0xbe8)),
                 *(double *)(param_3 + 0x178) * (local_1c8 + local_250 + local_200));
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1050),
                 -(*(double *)(param_3 + 0x178) * (local_208 + *(double *)(param_3 + 0xdc8))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1020),
                 *(double *)(param_3 + 0x178) *
                 ((((local_238 + dVar8) - *(double *)(param_3 + 0xdd8)) +
                  *(double *)(param_3 + 0xc30)) - *(double *)(param_3 + 0xbe0)),
                 *(double *)(param_3 + 0x178) * (local_1d8 + local_228));
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1028),
                 -(*(double *)(param_3 + 0x178) *
                  ((((local_258 - dVar5) + local_230 + *(double *)(param_3 + 0xde0)) -
                   *(double *)(param_3 + 0xce8)) + *(double *)(param_3 + 0xbf0))),
                 *(double *)(param_3 + 0x178) * ((local_1e8 - local_250) - local_210));
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1018),
                 -(*(double *)(param_3 + 0x178) *
                  (((((local_270 + *(double *)(param_3 + 0xde8)) - dVar4) - local_240) -
                   *(double *)(param_3 + 0xc38)) + *(double *)(param_3 + 0xbf8))),
                 *(double *)(param_3 + 0x178) * (local_1c0 + local_220));
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1030),
                 -(*(double *)(param_3 + 0x178) * (local_208 - *(double *)(param_3 + 0xdd0))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xfc0),
                 *(double *)(param_3 + 0x178) * (local_208 + *(double *)(param_3 + 0xdc8)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1098),
                 -(*(double *)(param_3 + 0x178) *
                  ((((local_258 - local_148) + *(double *)(param_3 + 0xda8) + local_218) -
                   *(double *)(param_3 + 0xcc8)) + *(double *)(param_3 + 3000))),
                 *(double *)(param_3 + 0x178) * ((local_1e0 - local_250) - local_200));
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1090),
                 -(*(double *)(param_3 + 0x178) *
                  ((((local_238 - local_c0) + *(double *)(param_3 + 0xdb0)) -
                   *(double *)(param_3 + 0xc50)) + *(double *)(param_3 + 0xbb0))),
                 *(double *)(param_3 + 0x178) * (local_1f8 - local_228));
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xfe8),
                 *(double *)(param_3 + 0x178) *
                 ((((local_260 + local_130 + local_258 + *(double *)(param_3 + 0x68)) -
                   *(double *)(param_3 + 0xdb8)) + local_230 + *(double *)(param_3 + 0xcd0)) -
                 *(double *)(param_3 + 0xbc0)),
                 *(double *)(param_3 + 0x178) * (local_1d0 + local_250 + local_210));
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1058),
                 -(*(double *)(param_3 + 0x178) * (local_260 + *(double *)(param_3 + 0xda0))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1078),
                 -(*(double *)(param_3 + 0x178) *
                  (((((local_268 + *(double *)(param_3 + 0xdc0)) - local_140) + local_240) -
                   *(double *)(param_3 + 0xc68)) + *(double *)(param_3 + 0xbc8))),
                 *(double *)(param_3 + 0x178) * (local_190 - local_220));
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1038),
                 -(*(double *)(param_3 + 0x178) * (local_260 - *(double *)(param_3 + 0xdb8))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xfc8),
                 *(double *)(param_3 + 0x178) * (local_260 + *(double *)(param_3 + 0xda0)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1000),
                 -(*(double *)(param_3 + 0x178) *
                  ((local_270 - *(double *)(param_3 + 0xc90)) + *(double *)(param_3 + 0xcf0))),
                 *(double *)(param_3 + 0x178) * local_170);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1010),
                 -(*(double *)(param_3 + 0x178) *
                  (*(double *)(param_3 + 0x868) + *(double *)(param_3 + 0xd00))),
                 *(double *)(param_3 + 0x178) * local_1f0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1008),
                 -(*(double *)(param_3 + 0x178) *
                  ((local_268 - *(double *)(param_3 + 0xc88)) + *(double *)(param_3 + 0xcf8))),
                 *(double *)(param_3 + 0x178) * local_118);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xff8),
                 *(double *)(param_3 + 0x178) *
                 (((local_270 + local_268) - *(double *)(param_3 + 0x860)) -
                 *(double *)(param_3 + 0xd08)),*(double *)(param_3 + 0x178) * -dVar7);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xfe0),
                 *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x900),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1020),
                 *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x908),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1028),
                 -(*(double *)(param_3 + 0x178) *
                  (*(double *)(param_3 + 0x908) + *(double *)(param_3 + 0x900) +
                  *(double *)(param_3 + 0x910))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1018),
                 *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x910),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1000),
                 -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x900)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1010),
                 -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x908)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1008),
                 *(double *)(param_3 + 0x178) *
                 (*(double *)(param_3 + 0x908) + *(double *)(param_3 + 0x900) +
                 *(double *)(param_3 + 0x910)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xff8),
                 -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x910)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1098),
                 -(*(double *)(param_3 + 0x178) *
                  (*(double *)(param_3 + 0x920) + *(double *)(param_3 + 0x928) +
                  *(double *)(param_3 + 0x930))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1090),
                 *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x928),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xfe8),
                 *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x920),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1078),
                 *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x930),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1000),
                 *(double *)(param_3 + 0x178) *
                 (*(double *)(param_3 + 0x928) + *(double *)(param_3 + 0x920) +
                 *(double *)(param_3 + 0x930)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1010),
                 -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x928)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1008),
                 -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x920)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xff8),
                 -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x930)),0);
    if (0 < *(int *)(param_3 + 300)) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1150),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x78)),
                   *(double *)(param_3 + 0x178) * local_120);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1158),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x68)),
                   *(double *)(param_3 + 0x178) * local_248);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1160),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x78)),
                   *(double *)(param_3 + 0x178) * local_120);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1168),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0x78) + *(double *)(param_3 + 0x620) +
                   *(double *)(param_3 + 0x600)),-(*(double *)(param_3 + 0x178) * local_120));
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1170),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x620)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1178),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x600)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1180),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x620)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1068),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x608)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1188),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x610)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xff8),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0x620) + *(double *)(param_3 + 0x610) +
                   *(double *)(param_3 + 0x608)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1190),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x68)),
                   *(double *)(param_3 + 0x178) * local_248);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1198),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x610)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11a0),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x618)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11a8),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0x68) + *(double *)(param_3 + 0x610) +
                   *(double *)(param_3 + 0x618)),-(*(double *)(param_3 + 0x178) * local_248));
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11b0),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x600)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1048),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x608)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11b8),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x618)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xfd8),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0x618) + *(double *)(param_3 + 0x600) +
                   *(double *)(param_3 + 0x608)),0);
    }
    if (0 < *(int *)(param_3 + 0x150)) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10a0),*(undefined8 *)(param_3 + 0x178),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10c0),0,0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10b0),0,0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10b8),0,0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10a8),0,0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10c8),0,0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10d0),0,0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10d8),0,0);
    }
  }
  else {
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1208),
                 *(double *)(param_3 + 0x178) *
                 (((((*(double *)(param_3 + 0xd18) - *(double *)(param_3 + 0xd28)) +
                    *(double *)(param_3 + 0xd68)) - *(double *)(param_3 + 0xd50)) -
                  *(double *)(param_3 + 0xd48)) + *(double *)(param_3 + 0xd98)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1218),
                 -(*(double *)(param_3 + 0x178) *
                  ((*(double *)(param_3 + 0xd38) - *(double *)(param_3 + 0xd58)) +
                  *(double *)(param_3 + 0xe50))),0);
    if (*(int *)(param_3 + 0x14c) == 2) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1200),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xd58)),0);
    }
    else if (*(int *)(param_3 + 0x14c) == 3) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1240),
                   -(*(double *)(param_3 + 0x178) *
                    (*(double *)(param_3 + 0xd70) + *(double *)(param_3 + 0xd58))),0);
    }
    if (*(int *)(param_3 + 300) == 0) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1220),
                   *(double *)(param_3 + 0x178) *
                   (((((*(double *)(param_3 + 0xd28) + *(double *)(param_3 + 0xd30)) -
                      *(double *)(param_3 + 0xd18)) - *(double *)(param_3 + 0xd20)) -
                    *(double *)(param_3 + 0xd40)) + *(double *)(param_3 + 0xd88)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1210),
                   *(double *)(param_3 + 0x178) *
                   ((((*(double *)(param_3 + 0xd50) - *(double *)(param_3 + 0xd30)) +
                      *(double *)(param_3 + 0xd20) + *(double *)(param_3 + 0xd38) +
                      *(double *)(param_3 + 0xd40) + *(double *)(param_3 + 0xd48) +
                     *(double *)(param_3 + 0xd70)) - *(double *)(param_3 + 0xd60)) +
                   *(double *)(param_3 + 0xd90)),0);
    }
    else {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1230),
                   -(*(double *)(param_3 + 0x178) *
                    (*(double *)(param_3 + 0xd18) + *(double *)(param_3 + 0xd78))),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1220),
                   *(double *)(param_3 + 0x178) *
                   (((*(double *)(param_3 + 0xd28) + *(double *)(param_3 + 0xd30)) -
                    *(double *)(param_3 + 0xd40)) + *(double *)(param_3 + 0xd88)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1238),
                   -(*(double *)(param_3 + 0x178) *
                    (*(double *)(param_3 + 0xd20) + *(double *)(param_3 + 0xd80))),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1210),
                   *(double *)(param_3 + 0x178) *
                   ((((*(double *)(param_3 + 0xd50) - *(double *)(param_3 + 0xd30)) +
                      *(double *)(param_3 + 0xd20) + *(double *)(param_3 + 0xd48) +
                      *(double *)(param_3 + 0xd38) + *(double *)(param_3 + 0xd40) +
                      *(double *)(param_3 + 0xd78) + *(double *)(param_3 + 0xd80) +
                     *(double *)(param_3 + 0xd70)) - *(double *)(param_3 + 0xd60)) +
                   *(double *)(param_3 + 0xd90)),0);
    }
    if (0 < *(int *)(param_3 + 0x13c)) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11f0),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xd68)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11f8),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xd60),0);
    }
    if (0 < *(int *)(param_3 + 0x150)) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1228),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0xe58) - *(double *)(param_3 + 0xe60)),0);
    }
    dVar4 = *(double *)(param_3 + 0xab0) * *(double *)(param_3 + 0xa98);
    if (*(int *)(param_3 + 0x14c) == 1) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xfd0),*(double *)(param_3 + 0x178) * dVar1,0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1060),-(*(double *)(param_3 + 0x178) * dVar1),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1040),-(*(double *)(param_3 + 0x178) * dVar1),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xff0),
                   *(double *)(param_3 + 0x178) *
                   (((*(double *)(param_3 + 0xaf8) + dVar1) - *(double *)(param_3 + 0xb30)) +
                   *(double *)(param_3 + 0xad8)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1080),
                   *(double *)(param_3 + 0x178) *
                   ((*(double *)(param_3 + 0xb08) - *(double *)(param_3 + 0xb20)) +
                   *(double *)(param_3 + 0xae0)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1088),
                   *(double *)(param_3 + 0x178) *
                   ((*(double *)(param_3 + 0xb00) - *(double *)(param_3 + 0xb18)) +
                   *(double *)(param_3 + 0xae8)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1070),
                   *(double *)(param_3 + 0x178) *
                   ((*(double *)(param_3 + 0xb10) - *(double *)(param_3 + 0xb28)) +
                   *(double *)(param_3 + 0xaf0)),0);
    }
    else if (*(int *)(param_3 + 0x14c) == 2) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xfd0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdf0),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1040),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xe08),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10e0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdf8),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10e8),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xe10),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10f0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xe00),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1060),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdf0)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xff0),
                   *(double *)(param_3 + 0x178) *
                   (((*(double *)(param_3 + 0xaf8) - *(double *)(param_3 + 0xe08)) -
                    *(double *)(param_3 + 0xb30)) + *(double *)(param_3 + 0xad8)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1080),
                   *(double *)(param_3 + 0x178) *
                   (((*(double *)(param_3 + 0xb08) - *(double *)(param_3 + 0xdf8)) -
                    *(double *)(param_3 + 0xb20)) + *(double *)(param_3 + 0xae0)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1088),
                   *(double *)(param_3 + 0x178) *
                   (((*(double *)(param_3 + 0xb00) - *(double *)(param_3 + 0xe10)) -
                    *(double *)(param_3 + 0xb18)) + *(double *)(param_3 + 0xae8)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1070),
                   *(double *)(param_3 + 0x178) *
                   (((*(double *)(param_3 + 0xb10) - *(double *)(param_3 + 0xe00)) -
                    *(double *)(param_3 + 0xb28)) + *(double *)(param_3 + 0xaf0)),0);
    }
    else if (*(int *)(param_3 + 0x14c) == 3) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xfd0),*(double *)(param_3 + 0x178) * dVar1,0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1138),-(*(double *)(param_3 + 0x178) * dVar1),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1110),-(*(double *)(param_3 + 0x178) * dVar1),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1108),
                   *(double *)(param_3 + 0x178) *
                   (dVar1 + *(double *)(param_3 + 0xdf0) + *(double *)(param_3 + 0xb68)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10f8),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0xdf8) + *(double *)(param_3 + 0xb38)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1100),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xe08),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1118),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0xe10) + *(double *)(param_3 + 0xb40)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1120),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0xe00) + *(double *)(param_3 + 0xb48)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1128),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xb50),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1130),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdf0)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1140),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xb58),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1148),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xb60),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xff0),
                   *(double *)(param_3 + 0x178) *
                   (((*(double *)(param_3 + 0xaf8) - *(double *)(param_3 + 0xe08)) -
                    *(double *)(param_3 + 0xb30)) + *(double *)(param_3 + 0xad8)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1080),
                   *(double *)(param_3 + 0x178) *
                   (((*(double *)(param_3 + 0xb08) - *(double *)(param_3 + 0xdf8)) -
                    *(double *)(param_3 + 0xb20)) + *(double *)(param_3 + 0xae0)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1088),
                   *(double *)(param_3 + 0x178) *
                   (((*(double *)(param_3 + 0xb00) - *(double *)(param_3 + 0xe10)) -
                    *(double *)(param_3 + 0xb18)) + *(double *)(param_3 + 0xae8)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1070),
                   *(double *)(param_3 + 0x178) *
                   (((*(double *)(param_3 + 0xb10) - *(double *)(param_3 + 0xe00)) -
                    *(double *)(param_3 + 0xb28)) + *(double *)(param_3 + 0xaf0)),0);
    }
    else {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xff0),
                   *(double *)(param_3 + 0x178) *
                   ((*(double *)(param_3 + 0xaf8) - *(double *)(param_3 + 0xb30)) +
                   *(double *)(param_3 + 0xad8)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1080),
                   *(double *)(param_3 + 0x178) *
                   ((*(double *)(param_3 + 0xb08) - *(double *)(param_3 + 0xb20)) +
                   *(double *)(param_3 + 0xae0)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1088),
                   *(double *)(param_3 + 0x178) *
                   ((*(double *)(param_3 + 0xb00) - *(double *)(param_3 + 0xb18)) +
                   *(double *)(param_3 + 0xae8)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1070),
                   *(double *)(param_3 + 0x178) *
                   ((*(double *)(param_3 + 0xb10) - *(double *)(param_3 + 0xb28)) +
                   *(double *)(param_3 + 0xaf0)),0);
    }
    if (0 < *(int *)(param_3 + 0x13c)) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11c0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdd8),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11c8),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xde0),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11d0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xde8),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11d8),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xda8),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11e0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdb0),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11e8),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xdc0),0);
    }
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xfe0),
                 *(double *)(param_3 + 0x178) *
                 ((((local_208 + *(double *)(param_3 + 0x90) + *(double *)(param_3 + 0x78) +
                    dVar4 * *(double *)(param_3 + 0xb70)) - *(double *)(param_3 + 0xdd0)) +
                   *(double *)(param_3 + 0xbd8) + *(double *)(param_3 + 0xc10) +
                   *(double *)(param_3 + 0xcc0) +
                  *(double *)(param_3 + 0xc00) * *(double *)(param_3 + 0xb20)) -
                 *(double *)(param_3 + 0xbe8)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1050),
                 -(*(double *)(param_3 + 0x178) * (local_208 + *(double *)(param_3 + 0xdc8))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1020),
                 *(double *)(param_3 + 0x178) *
                 (((((*(double *)(param_3 + 0xe70) + *(double *)(param_3 + 0xc18)) -
                    *(double *)(param_3 + 0xdd8)) + *(double *)(param_3 + 0xc30)) -
                  *(double *)(param_3 + 0xbe0)) +
                  *(double *)(param_3 + 0xc00) * *(double *)(param_3 + 0xb30) +
                 dVar4 * *(double *)(param_3 + 0xb78)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1028),
                 -(*(double *)(param_3 + 0x178) *
                  (((((((*(double *)(param_3 + 0x90) + *(double *)(param_3 + 0xde0)) -
                       *(double *)(param_3 + 0xc00) * *(double *)(param_3 + 0xb18)) +
                      *(double *)(param_3 + 0xbf0)) - dVar4 * *(double *)(param_3 + 0xb88)) +
                    *(double *)(param_3 + 0xbd0)) - *(double *)(param_3 + 0xc20)) -
                  *(double *)(param_3 + 0xce8))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1018),
                 -(*(double *)(param_3 + 0x178) *
                  (((((((local_270 + *(double *)(param_3 + 0xde8)) - *(double *)(param_3 + 0xe68)) -
                      *(double *)(param_3 + 0xc28)) - *(double *)(param_3 + 0xc38)) +
                    *(double *)(param_3 + 0xbf8)) - dVar4 * *(double *)(param_3 + 0xb80)) -
                  *(double *)(param_3 + 0xc00) * *(double *)(param_3 + 0xb28))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1030),
                 -(*(double *)(param_3 + 0x178) * (local_208 - *(double *)(param_3 + 0xdd0))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xfc0),
                 *(double *)(param_3 + 0x178) * (local_208 + *(double *)(param_3 + 0xdc8)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1098),
                 -(*(double *)(param_3 + 0x178) *
                  ((((((*(double *)(param_3 + 0x90) + *(double *)(param_3 + 0xda8) +
                       *(double *)(param_3 + 0xbd8)) - *(double *)(param_3 + 0xc40)) -
                     *(double *)(param_3 + 0xcc8)) - dVar4 * *(double *)(param_3 + 0xb90)) -
                   *(double *)(param_3 + 0xc08) * *(double *)(param_3 + 0xb20)) +
                  *(double *)(param_3 + 3000))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1090),
                 *(double *)(param_3 + 0x178) *
                 ((((*(double *)(param_3 + 0xc48) - *(double *)(param_3 + 0xe70)) -
                   *(double *)(param_3 + 0xdb0)) + *(double *)(param_3 + 0xc50) +
                   *(double *)(param_3 + 0xc08) * *(double *)(param_3 + 0xb30) +
                  dVar4 * *(double *)(param_3 + 0xb98)) - *(double *)(param_3 + 0xbb0)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xfe8),
                 *(double *)(param_3 + 0x178) *
                 ((((local_260 + *(double *)(param_3 + 0x90) + *(double *)(param_3 + 0x68) +
                    dVar4 * *(double *)(param_3 + 0xba8)) - *(double *)(param_3 + 0xdb8)) +
                   *(double *)(param_3 + 0xbd0) + *(double *)(param_3 + 0xc58) +
                   *(double *)(param_3 + 0xcd0) +
                  *(double *)(param_3 + 0xc08) * *(double *)(param_3 + 0xb18)) -
                 *(double *)(param_3 + 0xbc0)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1058),
                 -(*(double *)(param_3 + 0x178) * (local_260 + *(double *)(param_3 + 0xda0))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1078),
                 -(*(double *)(param_3 + 0x178) *
                  ((((((local_268 + *(double *)(param_3 + 0xdc0) + *(double *)(param_3 + 0xe68)) -
                      *(double *)(param_3 + 0xc60)) - *(double *)(param_3 + 0xc68)) -
                    *(double *)(param_3 + 0xc08) * *(double *)(param_3 + 0xb28)) -
                   dVar4 * *(double *)(param_3 + 0xba0)) + *(double *)(param_3 + 0xbc8))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1038),
                 -(*(double *)(param_3 + 0x178) * (local_260 - *(double *)(param_3 + 0xdb8))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xfc8),
                 *(double *)(param_3 + 0x178) * (local_260 + *(double *)(param_3 + 0xda0)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1000),
                 *(double *)(param_3 + 0x178) *
                 (((*(double *)(param_3 + 0xc70) - local_270) + *(double *)(param_3 + 0xc90)) -
                 *(double *)(param_3 + 0xcf0)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1010),
                 *(double *)(param_3 + 0x178) *
                 ((*(double *)(param_3 + 0xc78) - *(double *)(param_3 + 0x868)) -
                 *(double *)(param_3 + 0xd00)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1008),
                 *(double *)(param_3 + 0x178) *
                 (((*(double *)(param_3 + 0xc80) - local_268) + *(double *)(param_3 + 0xc88)) -
                 *(double *)(param_3 + 0xcf8)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xff8),
                 *(double *)(param_3 + 0x178) *
                 (((local_270 + local_268 + *(double *)(param_3 + 0xc98)) -
                  *(double *)(param_3 + 0x860)) - *(double *)(param_3 + 0xd08)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xfe0),
                 *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x900),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1020),
                 *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x908),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1028),
                 -(*(double *)(param_3 + 0x178) *
                  (*(double *)(param_3 + 0x908) + *(double *)(param_3 + 0x900) +
                  *(double *)(param_3 + 0x910))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1018),
                 *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x910),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1000),
                 -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x900)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1010),
                 -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x908)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1008),
                 *(double *)(param_3 + 0x178) *
                 (*(double *)(param_3 + 0x908) + *(double *)(param_3 + 0x900) +
                 *(double *)(param_3 + 0x910)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xff8),
                 -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x910)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1098),
                 -(*(double *)(param_3 + 0x178) *
                  (*(double *)(param_3 + 0x920) + *(double *)(param_3 + 0x928) +
                  *(double *)(param_3 + 0x930))),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1090),
                 *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x928),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xfe8),
                 *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x920),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1078),
                 *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x930),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1000),
                 *(double *)(param_3 + 0x178) *
                 (*(double *)(param_3 + 0x928) + *(double *)(param_3 + 0x920) +
                 *(double *)(param_3 + 0x930)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1010),
                 -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x928)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0x1008),
                 -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x920)),0);
    FUN_00e46b40(*(undefined8 *)(param_3 + 0xff8),
                 -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x930)),0);
    if (0 < *(int *)(param_3 + 300)) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1150),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0xcd8) - *(double *)(param_3 + 0x78)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1158),
                   -(*(double *)(param_3 + 0x178) *
                    (*(double *)(param_3 + 0x68) - *(double *)(param_3 + 0xce0))),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1160),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0xcd8) - *(double *)(param_3 + 0x78)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1168),
                   *(double *)(param_3 + 0x178) *
                   ((*(double *)(param_3 + 0x78) - *(double *)(param_3 + 0xcd8)) +
                    *(double *)(param_3 + 0x620) + *(double *)(param_3 + 0x600)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1170),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x620)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1178),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x600)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1180),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x620)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1068),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x608)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1188),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x610)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xff8),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0x620) + *(double *)(param_3 + 0x610) +
                   *(double *)(param_3 + 0x608)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1190),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0xce0) - *(double *)(param_3 + 0x68)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1198),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x610)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11a0),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x618)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11a8),
                   *(double *)(param_3 + 0x178) *
                   ((*(double *)(param_3 + 0x68) - *(double *)(param_3 + 0xce0)) +
                    *(double *)(param_3 + 0x610) + *(double *)(param_3 + 0x618)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11b0),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x600)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x1048),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x608)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x11b8),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0x618)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0xfd8),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0x618) + *(double *)(param_3 + 0x600) +
                   *(double *)(param_3 + 0x608)),0);
    }
    if (0 < *(int *)(param_3 + 0x150)) {
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10a0),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0xd10) + *(double *)(param_3 + 0xa98)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10c0),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0xb30) - *(double *)(param_3 + 0xca0)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10b0),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0xb20) - *(double *)(param_3 + 0xca8)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10b8),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0xb18) - *(double *)(param_3 + 0xcb0)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10a8),
                   *(double *)(param_3 + 0x178) *
                   (*(double *)(param_3 + 0xb28) - *(double *)(param_3 + 0xcb8)),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10c8),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xc00) *
                   *(double *)(param_3 + 0xa98),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10d0),
                   *(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xc08) *
                   *(double *)(param_3 + 0xa98),0);
      FUN_00e46b40(*(undefined8 *)(param_3 + 0x10d8),
                   -(*(double *)(param_3 + 0x178) * *(double *)(param_3 + 0xa98)),0);
    }
  }
  return;
}

