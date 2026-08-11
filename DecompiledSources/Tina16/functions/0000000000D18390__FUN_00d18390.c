/* Ghidra address: 00d18390 */
/* Ghidra symbol: FUN_00d18390 */


void FUN_00d18390(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  (*(code *)PTR_FUN_01ebb7d0)(&local_168,param_2,*(undefined1 *)(param_1 + 0x98));
  uVar10 = *(uint *)(param_1 + 0x6c);
  uVar9 = *(uint *)(param_1 + 0x70);
  uVar1 = *(uint *)(param_1 + 0x74);
  uVar3 = *(uint *)(param_1 + 0x78);
  uVar6 = *(int *)(param_1 + 0x7c) +
          (uVar10 << 5 | uVar10 >> 0x1b) + (uVar3 ^ uVar9 & (uVar1 ^ uVar3)) + local_168 +
          0x5a827999;
  uVar9 = uVar9 >> 2 | uVar9 << 0x1e;
  uVar3 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar1 ^ uVar10 & (uVar9 ^ uVar1)) + local_164 +
          0x5a827999;
  uVar10 = uVar10 >> 2 | uVar10 << 0x1e;
  uVar1 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar9 ^ uVar6 & (uVar10 ^ uVar9)) + local_160 +
          0x5a827999;
  uVar6 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar9 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar10 ^ uVar3 & (uVar6 ^ uVar10)) + local_15c +
          0x5a827999;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar10 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar6 ^ uVar1 & (uVar3 ^ uVar6)) + local_158 +
           0x5a827999;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar3 ^ uVar9 & (uVar1 ^ uVar3)) + local_154 +
          0x5a827999;
  uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar3 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar1 ^ uVar10 & (uVar9 ^ uVar1)) + local_150 +
          0x5a827999;
  uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar1 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar9 ^ uVar6 & (uVar10 ^ uVar9)) + local_14c +
          0x5a827999;
  uVar6 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar9 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar10 ^ uVar3 & (uVar6 ^ uVar10)) + local_148 +
          0x5a827999;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar10 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar6 ^ uVar1 & (uVar3 ^ uVar6)) + local_144 +
           0x5a827999;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar3 ^ uVar9 & (uVar1 ^ uVar3)) + local_140 +
          0x5a827999;
  uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar3 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar1 ^ uVar10 & (uVar9 ^ uVar1)) + local_13c +
          0x5a827999;
  uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar1 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar9 ^ uVar6 & (uVar10 ^ uVar9)) + local_138 +
          0x5a827999;
  uVar6 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar9 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar10 ^ uVar3 & (uVar6 ^ uVar10)) + local_134 +
          0x5a827999;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar10 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar6 ^ uVar1 & (uVar3 ^ uVar6)) + local_130 +
           0x5a827999;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar3 ^ uVar9 & (uVar1 ^ uVar3)) + local_12c +
          0x5a827999;
  uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar3 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar1 ^ uVar10 & (uVar9 ^ uVar1)) + local_128 +
          0x5a827999;
  uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar1 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar9 ^ uVar6 & (uVar10 ^ uVar9)) + local_124 +
          0x5a827999;
  uVar6 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar9 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar10 ^ uVar3 & (uVar6 ^ uVar10)) + local_120 +
          0x5a827999;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar10 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar6 ^ uVar1 & (uVar3 ^ uVar6)) + local_11c +
           0x5a827999;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar3 ^ uVar9 ^ uVar1) + local_118 +
          0x6ed9eba1;
  uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar3 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar1 ^ uVar10 ^ uVar9) + local_114 + 0x6ed9eba1
  ;
  uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar1 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar9 ^ uVar6 ^ uVar10) + local_110 + 0x6ed9eba1
  ;
  uVar6 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar9 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar10 ^ uVar3 ^ uVar6) + local_10c + 0x6ed9eba1
  ;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar10 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar6 ^ uVar1 ^ uVar3) + local_108 +
           0x6ed9eba1;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar3 ^ uVar9 ^ uVar1) + local_104 +
          0x6ed9eba1;
  uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar3 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar1 ^ uVar10 ^ uVar9) + local_100 + 0x6ed9eba1
  ;
  uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar1 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar9 ^ uVar6 ^ uVar10) + local_fc + 0x6ed9eba1;
  uVar6 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar9 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar10 ^ uVar3 ^ uVar6) + local_f8 + 0x6ed9eba1;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar10 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar6 ^ uVar1 ^ uVar3) + local_f4 + 0x6ed9eba1
  ;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar3 ^ uVar9 ^ uVar1) + local_f0 + 0x6ed9eba1
  ;
  uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar3 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar1 ^ uVar10 ^ uVar9) + local_ec + 0x6ed9eba1;
  uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar1 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar9 ^ uVar6 ^ uVar10) + local_e8 + 0x6ed9eba1;
  uVar6 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar9 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar10 ^ uVar3 ^ uVar6) + local_e4 + 0x6ed9eba1;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar10 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar6 ^ uVar1 ^ uVar3) + local_e0 + 0x6ed9eba1
  ;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar3 ^ uVar9 ^ uVar1) + local_dc + 0x6ed9eba1
  ;
  uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar3 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar1 ^ uVar10 ^ uVar9) + local_d8 + 0x6ed9eba1;
  uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar1 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar9 ^ uVar6 ^ uVar10) + local_d4 + 0x6ed9eba1;
  uVar6 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar9 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar10 ^ uVar3 ^ uVar6) + local_d0 + 0x6ed9eba1;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar10 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar6 ^ uVar1 ^ uVar3) + local_cc + 0x6ed9eba1
  ;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  iVar7 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar9 & uVar1 | uVar3 & (uVar9 | uVar1)) +
                  local_c8;
  uVar6 = iVar7 + 0x8f1bbcdc;
  uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
  iVar4 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar10 & uVar9 | uVar1 & (uVar10 | uVar9)) +
                  local_c4;
  uVar3 = iVar4 + 0x8f1bbcdc;
  uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
  iVar2 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar6 & uVar10 | uVar9 & (uVar6 | uVar10)) +
                  local_c0;
  uVar1 = iVar2 + 0x8f1bbcdc;
  uVar6 = uVar6 >> 2 | iVar7 * 0x40000000;
  iVar7 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar3 & uVar6 | uVar10 & (uVar3 | uVar6)) +
                  local_bc;
  uVar9 = iVar7 + 0x8f1bbcdc;
  uVar3 = uVar3 >> 2 | iVar4 * 0x40000000;
  iVar4 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar1 & uVar3 | uVar6 & (uVar1 | uVar3)) +
                   local_b8;
  uVar10 = iVar4 + 0x8f1bbcdc;
  uVar1 = uVar1 >> 2 | iVar2 * 0x40000000;
  iVar8 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar9 & uVar1 | uVar3 & (uVar9 | uVar1)) +
                  local_b4;
  uVar6 = iVar8 + 0x8f1bbcdc;
  uVar9 = uVar9 >> 2 | iVar7 * 0x40000000;
  iVar5 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar10 & uVar9 | uVar1 & (uVar10 | uVar9)) +
                  local_b0;
  uVar3 = iVar5 + 0x8f1bbcdc;
  uVar10 = uVar10 >> 2 | iVar4 * 0x40000000;
  iVar2 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar6 & uVar10 | uVar9 & (uVar6 | uVar10)) +
                  local_ac;
  uVar1 = iVar2 + 0x8f1bbcdc;
  uVar6 = uVar6 >> 2 | iVar8 * 0x40000000;
  iVar7 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar3 & uVar6 | uVar10 & (uVar3 | uVar6)) +
                  local_a8;
  uVar9 = iVar7 + 0x8f1bbcdc;
  uVar3 = uVar3 >> 2 | iVar5 * 0x40000000;
  iVar4 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar1 & uVar3 | uVar6 & (uVar1 | uVar3)) +
                   local_a4;
  uVar10 = iVar4 + 0x8f1bbcdc;
  uVar1 = uVar1 >> 2 | iVar2 * 0x40000000;
  iVar8 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar9 & uVar1 | uVar3 & (uVar9 | uVar1)) +
                  local_a0;
  uVar6 = iVar8 + 0x8f1bbcdc;
  uVar9 = uVar9 >> 2 | iVar7 * 0x40000000;
  iVar5 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar10 & uVar9 | uVar1 & (uVar10 | uVar9)) +
                  local_9c;
  uVar3 = iVar5 + 0x8f1bbcdc;
  uVar10 = uVar10 >> 2 | iVar4 * 0x40000000;
  iVar2 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar6 & uVar10 | uVar9 & (uVar6 | uVar10)) +
                  local_98;
  uVar1 = iVar2 + 0x8f1bbcdc;
  uVar6 = uVar6 >> 2 | iVar8 * 0x40000000;
  iVar7 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar3 & uVar6 | uVar10 & (uVar3 | uVar6)) +
                  local_94;
  uVar9 = iVar7 + 0x8f1bbcdc;
  uVar3 = uVar3 >> 2 | iVar5 * 0x40000000;
  iVar4 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar1 & uVar3 | uVar6 & (uVar1 | uVar3)) +
                   local_90;
  uVar10 = iVar4 + 0x8f1bbcdc;
  uVar1 = uVar1 >> 2 | iVar2 * 0x40000000;
  iVar8 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar9 & uVar1 | uVar3 & (uVar9 | uVar1)) +
                  local_8c;
  uVar6 = iVar8 + 0x8f1bbcdc;
  uVar9 = uVar9 >> 2 | iVar7 * 0x40000000;
  iVar5 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar10 & uVar9 | uVar1 & (uVar10 | uVar9)) +
                  local_88;
  uVar3 = iVar5 + 0x8f1bbcdc;
  uVar10 = uVar10 >> 2 | iVar4 * 0x40000000;
  iVar2 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar6 & uVar10 | uVar9 & (uVar6 | uVar10)) +
                  local_84;
  uVar1 = iVar2 + 0x8f1bbcdc;
  uVar6 = uVar6 >> 2 | iVar8 * 0x40000000;
  iVar7 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar3 & uVar6 | uVar10 & (uVar3 | uVar6)) +
                  local_80;
  uVar9 = iVar7 + 0x8f1bbcdc;
  uVar3 = uVar3 >> 2 | iVar5 * 0x40000000;
  iVar4 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar1 & uVar3 | uVar6 & (uVar1 | uVar3)) +
                   local_7c;
  uVar10 = iVar4 + 0x8f1bbcdc;
  uVar1 = uVar1 >> 2 | iVar2 * 0x40000000;
  uVar6 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar3 ^ uVar9 ^ uVar1) + local_78 + 0xca62c1d6
  ;
  uVar9 = uVar9 >> 2 | iVar7 * 0x40000000;
  uVar3 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar1 ^ uVar10 ^ uVar9) + local_74 + 0xca62c1d6;
  uVar10 = uVar10 >> 2 | iVar4 * 0x40000000;
  uVar1 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar9 ^ uVar6 ^ uVar10) + local_70 + 0xca62c1d6;
  uVar6 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar9 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar10 ^ uVar3 ^ uVar6) + local_6c + 0xca62c1d6;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar10 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar6 ^ uVar1 ^ uVar3) + local_68 + 0xca62c1d6
  ;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar3 ^ uVar9 ^ uVar1) + local_64 + 0xca62c1d6
  ;
  uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar3 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar1 ^ uVar10 ^ uVar9) + local_60 + 0xca62c1d6;
  uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar1 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar9 ^ uVar6 ^ uVar10) + local_5c + 0xca62c1d6;
  uVar6 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar9 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar10 ^ uVar3 ^ uVar6) + local_58 + 0xca62c1d6;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar10 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar6 ^ uVar1 ^ uVar3) + local_54 + 0xca62c1d6
  ;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar6 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar3 ^ uVar9 ^ uVar1) + local_50 + 0xca62c1d6
  ;
  uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar3 = uVar3 + (uVar6 * 0x20 | uVar6 >> 0x1b) + (uVar1 ^ uVar10 ^ uVar9) + local_4c + 0xca62c1d6;
  uVar10 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar1 = uVar1 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar9 ^ uVar6 ^ uVar10) + local_48 + 0xca62c1d6;
  uVar6 = uVar6 >> 2 | uVar6 * 0x40000000;
  uVar9 = uVar9 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar10 ^ uVar3 ^ uVar6) + local_44 + 0xca62c1d6;
  uVar11 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar10 = uVar10 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar6 ^ uVar1 ^ uVar11) + local_40 +
           0xca62c1d6;
  uVar12 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar3 = uVar6 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar11 ^ uVar9 ^ uVar12) + local_3c +
          0xca62c1d6;
  uVar6 = uVar9 >> 2 | uVar9 * 0x40000000;
  uVar1 = uVar11 + (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar12 ^ uVar10 ^ uVar6) + local_38 +
          0xca62c1d6;
  uVar11 = uVar10 >> 2 | uVar10 * 0x40000000;
  uVar9 = uVar12 + (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar6 ^ uVar3 ^ uVar11) + local_34 + 0xca62c1d6
  ;
  uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
  uVar10 = uVar6 + (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar11 ^ uVar1 ^ uVar3) + local_30 + 0xca62c1d6
  ;
  uVar1 = uVar1 >> 2 | uVar1 * 0x40000000;
  *(int *)(param_1 + 0x6c) =
       *(int *)(param_1 + 0x6c) +
       uVar11 + (uVar10 * 0x20 | uVar10 >> 0x1b) + (uVar3 ^ uVar9 ^ uVar1) + local_2c + -0x359d3e2a;
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + uVar10;
  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + (uVar9 >> 2 | uVar9 * 0x40000000);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + uVar1;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + uVar3;
  return;
}

