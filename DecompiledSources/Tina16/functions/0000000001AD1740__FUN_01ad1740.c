/* Ghidra address: 01ad1740 */
/* Ghidra symbol: FUN_01ad1740 */


void FUN_01ad1740(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
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
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
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
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [7];
  
  local_278 = 0;
  local_298 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_250 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_238 = 0;
  local_248 = 0;
  local_240 = 0;
  local_220 = 0;
  local_230 = 0;
  local_228 = 0;
  local_1f8 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1d0 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1b8 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1a0 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_178 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_150 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_138 = 0;
  local_148 = 0;
  local_140 = 0;
  local_120 = 0;
  local_130 = 0;
  local_128 = 0;
  local_f8 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d0 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_a0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  lVar2 = *(longlong *)(param_1 + 0xf0);
  if ((((lVar2 != 0) && (*(longlong *)(param_1 + 0xf8) != 0)) && (*(char *)(lVar2 + 0x91) != '\0'))
     && (*(char *)(*(longlong *)(param_1 + 0xf8) + 0x91) != '\0')) {
    FUN_00b8fd60(local_40,*(double *)(*(longlong *)(param_1 + 0xf8) + 0x78) -
                          *(double *)(lVar2 + 0x78),*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc90),local_40[0]);
    FUN_00b8fd60(&local_48,
                 *(double *)(*(longlong *)(param_1 + 0xf8) + 0x80) -
                 *(double *)(*(longlong *)(param_1 + 0xf0) + 0x80),*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xca0),local_48);
    if (*(double *)(*(longlong *)(param_1 + 0xf0) + 0x78) ==
        *(double *)(*(longlong *)(param_1 + 0xf8) + 0x78)) {
      FUN_00b8fd60(&local_60,0,*PTR_DAT_02005310,0,1);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcb8),local_60);
      FUN_00b8fd60(&local_68,0,*PTR_DAT_02005310,0,1);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcc8),local_68);
    }
    else {
      dVar3 = (double)FUN_0040c850(*(double *)(*(longlong *)(param_1 + 0xf0) + 0x78) -
                                   *(double *)(*(longlong *)(param_1 + 0xf8) + 0x78));
      FUN_00b8fd60(&local_50,1.0 / dVar3,*PTR_DAT_02005310,0,1);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcb8),local_50);
      FUN_00b8fd60(&local_58,
                   (*(double *)(*(longlong *)(param_1 + 0xf8) + 0x80) -
                   *(double *)(*(longlong *)(param_1 + 0xf0) + 0x80)) /
                   (*(double *)(*(longlong *)(param_1 + 0xf8) + 0x78) -
                   *(double *)(*(longlong *)(param_1 + 0xf0) + 0x78)),*PTR_DAT_02005310,0,1);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcc8),local_58);
    }
    iVar1 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xcf0) + 0x4a8);
    if (iVar1 == 0) {
      FUN_00b8fd60(&local_70,
                   *(double *)(*(longlong *)(param_1 + 0xf0) + 0x78) -
                   *(double *)(*(longlong *)(param_1 + 0xf8) + 0x78),*PTR_DAT_02005310,0,1);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd78),local_70);
      FUN_00b8fd60(&local_78,
                   *(double *)(*(longlong *)(param_1 + 0xf0) + 0x80) -
                   *(double *)(*(longlong *)(param_1 + 0xf8) + 0x80),*PTR_DAT_02005310,0,1);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd88),local_78);
    }
    else if (iVar1 == 1) {
      FUN_00c44460(local_90,*(double *)(*(longlong *)(param_1 + 0xf0) + 0x78) -
                            *(double *)(*(longlong *)(param_1 + 0xf8) + 0x78),
                   *(double *)(*(longlong *)(param_1 + 0xf0) + 0x80) -
                   *(double *)(*(longlong *)(param_1 + 0xf8) + 0x80));
      uVar4 = FUN_00c44590(local_90);
      FUN_00b8fd60(&local_80,uVar4,*PTR_DAT_02005310,0,1);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd78),local_80);
      FUN_00c44460(local_90,*(double *)(*(longlong *)(param_1 + 0xf0) + 0x78) -
                            *(double *)(*(longlong *)(param_1 + 0xf8) + 0x78),
                   *(double *)(*(longlong *)(param_1 + 0xf0) + 0x80) -
                   *(double *)(*(longlong *)(param_1 + 0xf8) + 0x80));
      dVar3 = (double)FUN_00c445d0(local_90);
      FUN_00b8fd60(&local_98,dVar3 * 57.29577951308232,*PTR_DAT_02005310,0,1);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd88),local_98);
    }
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe98),&local_a8);
    dVar3 = (double)FUN_00b8f030(local_a8);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf18),&local_b0);
    dVar5 = (double)FUN_00b8f030(local_b0);
    FUN_00b8fd60(&local_a0,dVar3 - dVar5,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf98),local_a0);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe90),&local_c0);
    dVar3 = (double)FUN_00b8f030(local_c0);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf10),&local_c8);
    dVar5 = (double)FUN_00b8f030(local_c8);
    FUN_00b8fd60(&local_b8,dVar3 - dVar5,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf90),local_b8);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe98),&local_d8);
    dVar3 = (double)FUN_00b8f030(local_d8);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf18),&local_e0);
    dVar5 = (double)FUN_00b8f030(local_e0);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe90),&local_e8);
    dVar6 = (double)FUN_00b8f030(local_e8);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf10),&local_f0);
    dVar7 = (double)FUN_00b8f030(local_f0);
    FUN_00c44460(local_90,dVar3 - dVar5,dVar6 - dVar7);
    uVar4 = FUN_00c44590(local_90);
    FUN_00b8fd60(&local_d0,uVar4,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf50),local_d0);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe98),&local_100);
    dVar3 = (double)FUN_00b8f030(local_100);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf18),&local_108);
    dVar5 = (double)FUN_00b8f030(local_108);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe90),&local_110);
    dVar6 = (double)FUN_00b8f030(local_110);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf10),&local_118);
    dVar7 = (double)FUN_00b8f030(local_118);
    FUN_00c44460(local_90,dVar3 - dVar5,dVar6 - dVar7);
    dVar3 = (double)FUN_00c445d0(local_90);
    FUN_00b8fd60(&local_f8,dVar3 * 57.29577951308232,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf58),local_f8);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xea8),&local_128);
    dVar3 = (double)FUN_00b8f030(local_128);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf28),&local_130);
    dVar5 = (double)FUN_00b8f030(local_130);
    FUN_00b8fd60(&local_120,dVar3 - dVar5,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xfa8),local_120);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xea0),&local_140);
    dVar3 = (double)FUN_00b8f030(local_140);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf20),&local_148);
    dVar5 = (double)FUN_00b8f030(local_148);
    FUN_00b8fd60(&local_138,dVar3 - dVar5,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 4000),local_138);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xea8),&local_158);
    dVar3 = (double)FUN_00b8f030(local_158);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf28),&local_160);
    dVar5 = (double)FUN_00b8f030(local_160);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xea0),&local_168);
    dVar6 = (double)FUN_00b8f030(local_168);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf20),&local_170);
    dVar7 = (double)FUN_00b8f030(local_170);
    FUN_00c44460(local_90,dVar3 - dVar5,dVar6 - dVar7);
    uVar4 = FUN_00c44590(local_90);
    FUN_00b8fd60(&local_150,uVar4,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf60),local_150);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xea8),&local_180);
    dVar3 = (double)FUN_00b8f030(local_180);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf28),&local_188);
    dVar5 = (double)FUN_00b8f030(local_188);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xea0),&local_190);
    dVar6 = (double)FUN_00b8f030(local_190);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf20),&local_198);
    dVar7 = (double)FUN_00b8f030(local_198);
    FUN_00c44460(local_90,dVar3 - dVar5,dVar6 - dVar7);
    dVar3 = (double)FUN_00c445d0(local_90);
    FUN_00b8fd60(&local_178,dVar3 * 57.29577951308232,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf68),local_178);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xeb8),&local_1a8);
    dVar3 = (double)FUN_00b8f030(local_1a8);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf38),&local_1b0);
    dVar5 = (double)FUN_00b8f030(local_1b0);
    FUN_00b8fd60(&local_1a0,dVar3 - dVar5,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xfb8),local_1a0);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xeb0),&local_1c0);
    dVar3 = (double)FUN_00b8f030(local_1c0);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf30),&local_1c8);
    dVar5 = (double)FUN_00b8f030(local_1c8);
    FUN_00b8fd60(&local_1b8,dVar3 - dVar5,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xfb0),local_1b8);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xeb8),&local_1d8);
    dVar3 = (double)FUN_00b8f030(local_1d8);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf38),&local_1e0);
    dVar5 = (double)FUN_00b8f030(local_1e0);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xeb0),&local_1e8);
    dVar6 = (double)FUN_00b8f030(local_1e8);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf30),&local_1f0);
    dVar7 = (double)FUN_00b8f030(local_1f0);
    FUN_00c44460(local_90,dVar3 - dVar5,dVar6 - dVar7);
    uVar4 = FUN_00c44590(local_90);
    FUN_00b8fd60(&local_1d0,uVar4,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf70),local_1d0);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xeb8),&local_200);
    dVar3 = (double)FUN_00b8f030(local_200);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf38),&local_208);
    dVar5 = (double)FUN_00b8f030(local_208);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xeb0),&local_210);
    dVar6 = (double)FUN_00b8f030(local_210);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf30),&local_218);
    dVar7 = (double)FUN_00b8f030(local_218);
    FUN_00c44460(local_90,dVar3 - dVar5,dVar6 - dVar7);
    dVar3 = (double)FUN_00c445d0(local_90);
    FUN_00b8fd60(&local_1f8,dVar3 * 57.29577951308232,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf78),local_1f8);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xec8),&local_228);
    dVar3 = (double)FUN_00b8f030(local_228);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf48),&local_230);
    dVar5 = (double)FUN_00b8f030(local_230);
    FUN_00b8fd60(&local_220,dVar3 - dVar5,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xfc8),local_220);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xec0),&local_240);
    dVar3 = (double)FUN_00b8f030(local_240);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf40),&local_248);
    dVar5 = (double)FUN_00b8f030(local_248);
    FUN_00b8fd60(&local_238,dVar3 - dVar5,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xfc0),local_238);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xec8),&local_258);
    dVar3 = (double)FUN_00b8f030(local_258);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf48),&local_260);
    dVar5 = (double)FUN_00b8f030(local_260);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xec0),&local_268);
    dVar6 = (double)FUN_00b8f030(local_268);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf40),&local_270);
    dVar7 = (double)FUN_00b8f030(local_270);
    FUN_00c44460(local_90,dVar3 - dVar5,dVar6 - dVar7);
    uVar4 = FUN_00c44590(local_90);
    FUN_00b8fd60(&local_250,uVar4,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf80),local_250);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xec8),&local_280);
    dVar3 = (double)FUN_00b8f030(local_280);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf48),&local_288);
    dVar5 = (double)FUN_00b8f030(local_288);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xec0),&local_290);
    dVar6 = (double)FUN_00b8f030(local_290);
    FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf40),&local_298);
    dVar7 = (double)FUN_00b8f030(local_298);
    FUN_00c44460(local_90,dVar3 - dVar5,dVar6 - dVar7);
    dVar3 = (double)FUN_00c445d0(local_90);
    FUN_00b8fd60(&local_278,dVar3 * 57.29577951308232,*PTR_DAT_02005310,0,1);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf88),local_278);
  }
  FUN_00414560(&local_298,4);
  FUN_00414480(&local_278);
  FUN_00414560(&local_270,4);
  FUN_00414480(&local_250);
  FUN_00414560(&local_248,2);
  FUN_00414480(&local_238);
  FUN_00414560(&local_230,2);
  FUN_00414480(&local_220);
  FUN_00414560(&local_218,4);
  FUN_00414480(&local_1f8);
  FUN_00414560(&local_1f0,4);
  FUN_00414480(&local_1d0);
  FUN_00414560(&local_1c8,2);
  FUN_00414480(&local_1b8);
  FUN_00414560(&local_1b0,2);
  FUN_00414480(&local_1a0);
  FUN_00414560(&local_198,4);
  FUN_00414480(&local_178);
  FUN_00414560(&local_170,4);
  FUN_00414480(&local_150);
  FUN_00414560(&local_148,2);
  FUN_00414480(&local_138);
  FUN_00414560(&local_130,2);
  FUN_00414480(&local_120);
  FUN_00414560(&local_118,4);
  FUN_00414480(&local_f8);
  FUN_00414560(&local_f0,4);
  FUN_00414480(&local_d0);
  FUN_00414560(&local_c8,2);
  FUN_00414480(&local_b8);
  FUN_00414560(&local_b0,2);
  FUN_00414560(&local_a0,2);
  FUN_00414560(&local_80,9);
  return;
}

