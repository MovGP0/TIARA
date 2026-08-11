/* Ghidra address: 014a8730 */
/* Ghidra symbol: FUN_014a8730 */


void FUN_014a8730(longlong *param_1,undefined8 param_2,short param_3)

{
  int iVar1;
  longlong lVar2;
  char local_1a7;
  undefined1 local_1a6;
  double local_1a5;
  undefined1 local_19d;
  undefined1 local_19c;
  undefined1 local_19b;
  undefined1 local_19a [11];
  undefined1 local_18f;
  undefined1 local_18e;
  undefined1 local_18d;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 local_17c;
  char local_174;
  undefined1 local_173;
  undefined1 local_172;
  undefined1 local_171;
  undefined1 local_170;
  char local_16f;
  undefined1 local_16e;
  double local_16d;
  undefined1 local_165 [11];
  undefined1 local_15a;
  undefined1 local_159;
  undefined1 local_158;
  undefined8 local_157;
  undefined8 local_14f;
  undefined8 local_147;
  char local_13f;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined1 local_13c;
  undefined1 local_13b;
  char local_13a;
  undefined1 local_139;
  double local_138;
  undefined1 local_130 [11];
  undefined1 local_125;
  undefined1 local_124;
  undefined1 local_123;
  undefined8 local_122;
  undefined8 local_11a;
  char local_112;
  undefined1 local_111;
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined1 local_10c;
  double local_10b;
  undefined1 local_103 [11];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined8 local_f5;
  undefined8 local_ed;
  undefined1 local_e5;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  undefined1 local_e1;
  undefined1 local_e0;
  undefined2 local_df;
  undefined1 local_dd [11];
  undefined1 local_d2;
  undefined1 local_d1;
  undefined1 local_d0;
  undefined8 local_cf;
  undefined8 local_c7;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined2 local_b9;
  undefined1 local_b7 [11];
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined8 local_a9;
  undefined8 local_a1;
  undefined1 local_99;
  undefined1 local_98;
  undefined1 local_97;
  undefined2 local_96;
  undefined1 local_94 [11];
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_86;
  undefined8 local_7e;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  undefined1 local_72 [11];
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  byte local_64;
  char local_63;
  char local_62;
  undefined2 local_61;
  undefined1 local_5f [11];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  char local_51;
  undefined1 local_50;
  double local_4f;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44 [11];
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined8 local_36;
  undefined8 local_2e;
  undefined8 local_26;
  char local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  if (param_3 == 0x19) {
    FUN_01d30f00(*param_1,&local_51,0x39);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(char *)(lVar2 + 0x495) = local_51;
      if (local_51 == '\x05') {
        *(undefined1 *)(lVar2 + 0x495) = 0;
      }
      *(undefined1 *)(lVar2 + 0x496) = local_50;
      if (local_4f < 1.0) {
        local_4f = 1.0;
      }
      *(double *)(lVar2 + 0x54f) = local_4f;
      *(undefined1 *)(lVar2 + 0x557) = local_47;
      *(undefined1 *)(lVar2 + 0x558) = local_46;
      *(undefined1 *)(lVar2 + 0x559) = local_45;
      FUN_00415020(lVar2 + 0x9ea,local_44,10);
      *(undefined1 *)(lVar2 + 0xc56) = local_39;
      *(undefined1 *)(lVar2 + 0xc57) = local_38;
      *(undefined1 *)(lVar2 + 0xc58) = local_37;
      *(undefined8 *)(lVar2 + 0xc72) = local_36;
      *(undefined8 *)(lVar2 + 0xc7a) = local_2e;
      *(undefined8 *)(lVar2 + 0xc82) = local_26;
      *(char *)(lVar2 + 0xca5) = local_1e;
      if (local_1e == '\x05') {
        *(undefined1 *)(lVar2 + 0xca5) = 4;
      }
      *(undefined1 *)(lVar2 + 0xca6) = local_1d;
      *(undefined1 *)(lVar2 + 0xca7) = local_1c;
      *(undefined1 *)(lVar2 + 0xca8) = local_1b;
      *(undefined1 *)(lVar2 + 0xca9) = local_1a;
      *(undefined1 *)(lVar2 + 0xcaa) = local_19;
    }
  }
  else if (param_3 == 0x18) {
    FUN_01d30f00(*param_1,&local_1a7,0x38);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(char *)(lVar2 + 0x495) = local_1a7;
      if (local_1a7 == '\x05') {
        *(undefined1 *)(lVar2 + 0x495) = 0;
      }
      *(undefined1 *)(lVar2 + 0x496) = local_1a6;
      if (local_1a5 < 1.0) {
        local_1a5 = 1.0;
      }
      *(double *)(lVar2 + 0x54f) = local_1a5;
      *(undefined1 *)(lVar2 + 0x557) = local_19d;
      *(undefined1 *)(lVar2 + 0x558) = local_19c;
      *(undefined1 *)(lVar2 + 0x559) = local_19b;
      FUN_00415020(lVar2 + 0x9ea,local_19a,10);
      *(undefined1 *)(lVar2 + 0xc56) = local_18f;
      *(undefined1 *)(lVar2 + 0xc57) = local_18e;
      *(undefined1 *)(lVar2 + 0xc58) = local_18d;
      *(undefined8 *)(lVar2 + 0xc72) = local_18c;
      *(undefined8 *)(lVar2 + 0xc7a) = local_184;
      *(undefined8 *)(lVar2 + 0xc82) = local_17c;
      *(char *)(lVar2 + 0xca5) = local_174;
      if (local_174 == '\x05') {
        *(undefined1 *)(lVar2 + 0xca5) = 4;
      }
      *(undefined1 *)(lVar2 + 0xca6) = local_173;
      *(undefined1 *)(lVar2 + 0xca7) = local_172;
      *(undefined1 *)(lVar2 + 0xca8) = local_171;
      *(undefined1 *)(lVar2 + 0xca9) = local_170;
    }
  }
  else if (param_3 == 0x17) {
    FUN_01d30f00(*param_1,&local_16f,0x35);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(char *)(lVar2 + 0x495) = local_16f;
      if (local_16f == '\x05') {
        *(undefined1 *)(lVar2 + 0x495) = 0;
      }
      *(undefined1 *)(lVar2 + 0x496) = local_16e;
      if (local_16d < 1.0) {
        local_16d = 1.0;
      }
      *(double *)(lVar2 + 0x54f) = local_16d;
      FUN_00415020(lVar2 + 0x9ea,local_165,10);
      *(undefined1 *)(lVar2 + 0xc56) = local_15a;
      *(undefined1 *)(lVar2 + 0xc57) = local_159;
      *(undefined1 *)(lVar2 + 0xc58) = local_158;
      *(undefined8 *)(lVar2 + 0xc72) = local_157;
      *(undefined8 *)(lVar2 + 0xc7a) = local_14f;
      *(undefined8 *)(lVar2 + 0xc82) = local_147;
      *(char *)(lVar2 + 0xca5) = local_13f;
      if (local_13f == '\x05') {
        *(undefined1 *)(lVar2 + 0xca5) = 4;
      }
      *(undefined1 *)(lVar2 + 0xca6) = local_13e;
      *(undefined1 *)(lVar2 + 0xca7) = local_13d;
      *(undefined1 *)(lVar2 + 0xca8) = local_13c;
      *(undefined1 *)(lVar2 + 0xca9) = local_13b;
    }
  }
  else if (param_3 == 0x16) {
    FUN_01d30f00(*param_1,&local_13a,0x2d);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(char *)(lVar2 + 0x495) = local_13a;
      if (local_13a == '\x05') {
        *(undefined1 *)(lVar2 + 0x495) = 0;
      }
      *(undefined1 *)(lVar2 + 0x496) = local_139;
      if (local_138 < 1.0) {
        local_138 = 1.0;
      }
      *(double *)(lVar2 + 0x54f) = local_138;
      FUN_00415020(lVar2 + 0x9ea,local_130,10);
      *(undefined1 *)(lVar2 + 0xc56) = local_125;
      *(undefined1 *)(lVar2 + 0xc57) = local_124;
      *(undefined1 *)(lVar2 + 0xc58) = local_123;
      *(undefined8 *)(lVar2 + 0xc72) = local_122;
      *(undefined8 *)(lVar2 + 0xc7a) = local_11a;
      *(char *)(lVar2 + 0xca5) = local_112;
      if (local_112 == '\x05') {
        *(undefined1 *)(lVar2 + 0xca5) = 4;
      }
      *(undefined1 *)(lVar2 + 0xca6) = local_111;
      *(undefined1 *)(lVar2 + 0xca7) = local_110;
      *(undefined1 *)(lVar2 + 0xca8) = local_10f;
      *(undefined1 *)(lVar2 + 0xca9) = local_10e;
    }
  }
  else if (param_3 == 0x15) {
    FUN_01d30f00(*param_1,&local_10d,0x2c);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(lVar2 + 0x495) = local_10d;
      if (*(char *)(lVar2 + 0x495) == '\x05') {
        *(undefined1 *)(lVar2 + 0x495) = 0;
      }
      *(undefined1 *)(lVar2 + 0x496) = local_10c;
      if (local_10b < 1.0) {
        local_10b = 1.0;
      }
      *(double *)(lVar2 + 0x54f) = local_10b;
      FUN_00415020(lVar2 + 0x9ea,local_103,10);
      *(undefined1 *)(lVar2 + 0xc56) = local_f8;
      *(undefined1 *)(lVar2 + 0xc57) = local_f7;
      *(undefined1 *)(lVar2 + 0xc58) = local_f6;
      *(undefined8 *)(lVar2 + 0xc72) = local_f5;
      *(undefined8 *)(lVar2 + 0xc7a) = local_ed;
      *(undefined1 *)(lVar2 + 0xca5) = local_e5;
      if (*(char *)(lVar2 + 0xca5) == '\x05') {
        *(undefined1 *)(lVar2 + 0xca5) = 4;
      }
      *(undefined1 *)(lVar2 + 0xca6) = local_e4;
      *(undefined1 *)(lVar2 + 0xca7) = local_e3;
      *(undefined1 *)(lVar2 + 0xca8) = local_e2;
    }
  }
  else if (param_3 == 0x14) {
    FUN_01d30f00(*param_1,&local_e1,0x26);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(lVar2 + 0x495) = local_e1;
      if (*(char *)(lVar2 + 0x495) == '\x05') {
        *(undefined1 *)(lVar2 + 0x495) = 0;
      }
      *(undefined1 *)(lVar2 + 0x496) = local_e0;
      iVar1 = FUN_00b905e0(1,local_df);
      *(double *)(lVar2 + 0x54f) = (double)iVar1;
      FUN_00415020(lVar2 + 0x9ea,local_dd,10);
      *(undefined1 *)(lVar2 + 0xc56) = local_d2;
      *(undefined1 *)(lVar2 + 0xc57) = local_d1;
      *(undefined1 *)(lVar2 + 0xc58) = local_d0;
      *(undefined8 *)(lVar2 + 0xc72) = local_cf;
      *(undefined8 *)(lVar2 + 0xc7a) = local_c7;
      *(undefined1 *)(lVar2 + 0xca5) = local_bf;
      if (*(char *)(lVar2 + 0xca5) == '\x05') {
        *(undefined1 *)(lVar2 + 0xca5) = 4;
      }
      *(undefined1 *)(lVar2 + 0xca6) = local_be;
      *(undefined1 *)(lVar2 + 0xca7) = local_bd;
      *(undefined1 *)(lVar2 + 0xca8) = local_bc;
    }
  }
  else if (param_3 == 0x13) {
    FUN_01d30f00(*param_1,&local_bb,0x23);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(lVar2 + 0x495) = local_bb;
      if (*(char *)(lVar2 + 0x495) == '\x05') {
        *(undefined1 *)(lVar2 + 0x495) = 0;
      }
      *(undefined1 *)(lVar2 + 0x496) = local_ba;
      iVar1 = FUN_00b905e0(1,local_b9);
      *(double *)(lVar2 + 0x54f) = (double)iVar1;
      FUN_00415020(lVar2 + 0x9ea,local_b7,10);
      *(undefined1 *)(lVar2 + 0xc56) = local_ac;
      *(undefined1 *)(lVar2 + 0xc57) = local_ab;
      *(undefined1 *)(lVar2 + 0xc58) = local_aa;
      *(undefined8 *)(lVar2 + 0xc72) = local_a9;
      *(undefined8 *)(lVar2 + 0xc7a) = local_a1;
      *(undefined1 *)(lVar2 + 0xca5) = local_99;
      if (*(char *)(lVar2 + 0xca5) == '\x05') {
        *(undefined1 *)(lVar2 + 0xca5) = 4;
      }
      *(undefined *)(lVar2 + 0xca6) = *PTR_DAT_020045f0;
      *(undefined *)(lVar2 + 0xca7) = *PTR_DAT_020050f8;
      *(undefined *)(lVar2 + 0xca8) = *PTR_DAT_02001798;
    }
  }
  else if (param_3 == 0x12) {
    FUN_01d30f00(*param_1,&local_98,0x22);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(lVar2 + 0x495) = local_98;
      if (*(char *)(lVar2 + 0x495) == '\x05') {
        *(undefined1 *)(lVar2 + 0x495) = 0;
      }
      *(undefined1 *)(lVar2 + 0x496) = local_97;
      iVar1 = FUN_00b905e0(1,local_96);
      *(double *)(lVar2 + 0x54f) = (double)iVar1;
      FUN_00415020(lVar2 + 0x9ea,local_94,10);
      *(undefined1 *)(lVar2 + 0xc56) = local_89;
      *(undefined1 *)(lVar2 + 0xc57) = local_88;
      *(undefined1 *)(lVar2 + 0xc58) = local_87;
      *(undefined8 *)(lVar2 + 0xc72) = local_86;
      *(undefined8 *)(lVar2 + 0xc7a) = local_7e;
      *(undefined *)(lVar2 + 0xca6) = *PTR_DAT_020045f0;
      *(undefined *)(lVar2 + 0xca7) = *PTR_DAT_020050f8;
      *(undefined *)(lVar2 + 0xca8) = *PTR_DAT_02001798;
    }
  }
  else if (param_3 == 0x11) {
    FUN_01d30f00(*param_1,&local_76,0x12);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      *(undefined1 *)(lVar2 + 0x495) = local_76;
      if (*(char *)(lVar2 + 0x495) == '\x05') {
        *(undefined1 *)(lVar2 + 0x495) = 0;
      }
      *(undefined1 *)(lVar2 + 0x496) = local_75;
      iVar1 = FUN_00b905e0(1,local_74);
      *(double *)(lVar2 + 0x54f) = (double)iVar1;
      FUN_00415020(lVar2 + 0x9ea,local_72,10);
      *(undefined1 *)(lVar2 + 0xc56) = local_67;
      *(undefined1 *)(lVar2 + 0xc57) = local_66;
      *(undefined1 *)(lVar2 + 0xc58) = local_65;
      *(undefined *)(lVar2 + 0xca6) = *PTR_DAT_020045f0;
      *(undefined *)(lVar2 + 0xca7) = *PTR_DAT_020050f8;
      *(undefined *)(lVar2 + 0xca8) = *PTR_DAT_02001798;
    }
  }
  else {
    FUN_01d30f00(*param_1,&local_64,0x13);
    iVar1 = FUN_01d31a40(*param_1);
    if (iVar1 == 0) {
      if (local_64 < 4) {
        if (local_64 == 3) {
          local_64 = 3;
        }
        else if (local_64 == 1) {
          local_64 = 0;
        }
        else if (local_64 == 2) {
          local_64 = 1;
        }
      }
      else if (local_64 == 4) {
        local_64 = 5;
      }
      else if (local_64 == 5) {
        local_64 = 6;
      }
      *(byte *)(lVar2 + 0x495) = local_64 + local_63 + -1;
      if (*(char *)(lVar2 + 0x495) == '\x05') {
        *(undefined1 *)(lVar2 + 0x495) = 0;
      }
      *(char *)(lVar2 + 0x496) = local_62 + -1;
      iVar1 = FUN_00b905e0(1,local_61);
      *(double *)(lVar2 + 0x54f) = (double)iVar1;
      FUN_00415020(lVar2 + 0x9ea,local_5f,10);
      *(undefined1 *)(lVar2 + 0xc56) = local_54;
      *(undefined1 *)(lVar2 + 0xc57) = local_53;
      *(undefined1 *)(lVar2 + 0xc58) = local_52;
      *(undefined *)(lVar2 + 0xca6) = *PTR_DAT_020045f0;
      *(undefined *)(lVar2 + 0xca7) = *PTR_DAT_020050f8;
      *(undefined *)(lVar2 + 0xca8) = *PTR_DAT_02001798;
    }
  }
  if ((*(char *)(lVar2 + 0x495) == '\0') && (1.0 < *(double *)(lVar2 + 0x54f))) {
    *(undefined8 *)(lVar2 + 0x54f) = 0x3ff0000000000000;
  }
  return;
}

