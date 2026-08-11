/* Ghidra address: 00f4daf0 */
/* Ghidra symbol: FUN_00f4daf0 */


undefined8 *
FUN_00f4daf0(undefined8 *param_1,longlong param_2,longlong *param_3,char param_4,short *param_5)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 uVar10;
  int iVar11;
  double dVar12;
  ulonglong in_stack_fffffffffffffd68;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined4 uVar15;
  undefined8 in_stack_fffffffffffffd70;
  undefined1 *puVar16;
  undefined8 in_stack_fffffffffffffd78;
  short local_220;
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
  undefined8 local_98 [3];
  undefined8 local_80;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70 [16];
  double local_60;
  double local_58;
  int local_4c [9];
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffd70 >> 0x20);
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1c0 = 0;
  local_1c8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_190 = 0;
  local_198 = 0;
  local_180 = 0;
  local_188 = 0;
  local_170 = 0;
  local_178 = 0;
  local_160 = 0;
  local_168 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_138 = 0;
  local_140 = 0;
  local_128 = 0;
  local_130 = 0;
  local_108 = 0;
  local_118 = 0;
  local_120 = 0;
  local_110 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_80 = 0;
  uVar1 = *(undefined1 *)(param_2 + 0x12f1);
  FUN_00414480(param_1);
  *param_5 = 0;
  if ((param_4 != '\x01') || (iVar4 = FUN_017d1380(*(undefined8 *)(param_2 + 0x4c0)), iVar4 < 2))
  goto code_r0x00f4f391;
  iVar4 = FUN_017d1380(*(undefined8 *)(param_2 + 0x4c0));
  local_4c[0] = FUN_01b07e10(param_2,param_3);
  if (*(int *)(param_2 + 0x2d8) < local_4c[0]) goto code_r0x00f4f391;
  uVar10 = *(undefined8 *)(*(longlong *)(param_2 + 0x2b0) + -8 + (longlong)local_4c[0] * 8);
  uVar7 = (**(code **)(*param_3 + 0xf8))(param_3);
  uVar7 = uVar7 & 0xffff;
  if (uVar7 < 0x22) {
    if ((uVar7 == 0x21) || (uVar7 - 4 < 2)) {
LAB_00f4de7b:
      uVar5 = (**(code **)(*param_3 + 0x210))(param_3,0);
      sVar3 = (**(code **)(*param_3 + 0xf8))(param_3);
      if (sVar3 == 4) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*param_3 + 0x210))(param_3,1);
      }
      cVar2 = FUN_01b07dd0(param_2);
      if ((cVar2 != '\0') && (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x23d0) != 0)) {
        uVar5 = FUN_01566100(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x23d0),uVar5);
        sVar3 = (**(code **)(*param_3 + 0xf8))(param_3);
        if (sVar3 != 4) {
          uVar6 = FUN_01566100(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x23d0),uVar6);
        }
      }
      uVar10 = FUN_017d17e0(*(undefined8 *)(param_2 + 0x4c0),uVar5,uVar6,1,
                            in_stack_fffffffffffffd68 & 0xffffffffffffff00);
      FUN_017d1750(local_98,*(undefined8 *)(param_2 + 0x4c0),0,uVar5,uVar6);
      FUN_00b8fec0(&local_a0,uVar10,uVar1,0,0x3cd203af9ee75616);
      FUN_00416cd0(param_1,3,L"rms=",local_a0,&DAT_00f4f4dc);
      FUN_0041ddd0(&local_b0,&LAB_00f4cc78);
      FUN_00de8a20(&local_a8,L"DAskVolt",L"sDCLevel",*(undefined8 *)(param_2 + 0x1310),local_b0);
      FUN_004168b0(&local_b8,local_a8);
      FUN_00b8fec0(&local_c0,local_98[0],uVar1,0,0x3cd203af9ee75616);
      FUN_00416cd0(param_1,7,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_b8,&DAT_00f4f54c,local_c0,
                   &DAT_00f4f55c);
      sVar3 = 2;
      local_220 = 2;
      iVar11 = iVar4 + -1;
      local_4c[0] = 1;
      if (0 < iVar11) {
        do {
          FUN_017d1750(&local_60,*(undefined8 *)(param_2 + 0x4c0),local_4c[0],uVar5,uVar6);
          FUN_00f4cfc0(&local_80,param_2,local_4c[0],iVar4,uVar1);
          FUN_00de8980(&local_c8,0x13c,*(undefined8 *)(param_2 + 0x1310));
          uVar10 = FUN_00c44590(&local_60);
          FUN_00b8fec0(&local_d0,uVar10,uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,8,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_c8,local_80,
                       &DAT_00f4f54c,local_d0,&DAT_00f4f55c);
          FUN_00de8980(&local_d8,0x13d,*(undefined8 *)(param_2 + 0x1310));
          dVar12 = (double)FUN_00c445d0(&local_60);
          uVar10 = FUN_00f4ced0(dVar12 * 57.29577951308232);
          FUN_00b8fec0(&local_e0,uVar10,uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,7,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_d8,&DAT_00f4f54c,
                       local_e0,&DAT_00f4f570);
          FUN_00de8980(&local_e8,0x138,*(undefined8 *)(param_2 + 0x1310));
          FUN_00b8fec0(&local_f0,local_60,uVar1,0,0x3cd203af9ee75616);
          FUN_00b8fec0(&local_f8,local_58,uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,9,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_e8,&DAT_00f4f584,
                       local_f0,&DAT_00f4f598,local_f8,L") V\"");
          local_220 = sVar3 + 3;
          local_4c[0] = local_4c[0] + 1;
          iVar11 = iVar11 + -1;
          sVar3 = local_220;
        } while (iVar11 != 0);
      }
      *param_5 = local_220 + 0x500;
      goto code_r0x00f4f391;
    }
    if (uVar7 != 6) {
      if (uVar7 == 7) {
        cVar2 = FUN_017d1390(*(undefined8 *)(param_2 + 0x4c0));
        if ((cVar2 == '\0') && (iVar4 = FUN_017d1380(*(undefined8 *)(param_2 + 0x4c0)), iVar4 == 2))
        {
          in_stack_fffffffffffffd68 = in_stack_fffffffffffffd68 & 0xffffffffffffff00;
          FUN_017d13d0(&local_60,param_2,1,param_3,in_stack_fffffffffffffd68,CONCAT44(uVar5,1),
                       CONCAT44(uVar6,2),1,1);
          uVar15 = (undefined4)(in_stack_fffffffffffffd68 >> 0x20);
          uVar5 = (**(code **)(*param_3 + 0x210))(param_3,2);
          uVar6 = (**(code **)(*param_3 + 0x210))(param_3,3);
          cVar2 = FUN_01b07dd0(param_2);
          if ((cVar2 != '\0') && (*(longlong *)(*(longlong *)(param_2 + 0xe8) + 0x23d0) != 0)) {
            uVar5 = FUN_01566100(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x23d0),uVar5);
            uVar6 = FUN_01566100(*(undefined8 *)(*(longlong *)(param_2 + 0xe8) + 0x23d0),uVar6);
          }
          FUN_017d1750(local_70,*(undefined8 *)(param_2 + 0x4c0),1,uVar5,CONCAT44(uVar15,uVar6));
          local_60 = local_60 * 0.5;
          local_58 = -local_58 * 0.5;
          FUN_00c44720(&local_60,local_70,&local_60);
          FUN_00de8980(&local_160,0x13f,*(undefined8 *)(param_2 + 0x1310));
          FUN_00b8fec0(&local_168,local_60,uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,5,&DAT_00f4f4fc,local_160,&DAT_00f4f54c,local_168,&DAT_00f4f600);
          FUN_00de8980(&local_170,0x140,*(undefined8 *)(param_2 + 0x1310));
          FUN_00b8fec0(&local_178,local_58,uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,7,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_170,&DAT_00f4f54c,
                       local_178,L"var\"");
          FUN_00de8980(&local_180,0x141,*(undefined8 *)(param_2 + 0x1310));
          uVar10 = FUN_00c44590(&local_60);
          FUN_00b8fec0(&local_188,uVar10,uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,7,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_180,&DAT_00f4f54c,
                       local_188,&DAT_00f4f62c);
          FUN_00de8980(&local_190,0x13d,*(undefined8 *)(param_2 + 0x1310));
          dVar12 = (double)FUN_00c445d0(&local_60);
          uVar10 = FUN_00f4ced0(dVar12 * 57.29577951308232);
          FUN_00b8fec0(&local_198,uVar10,uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,7,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_190,&DAT_00f4f54c,
                       local_198,&DAT_00f4f570);
          FUN_00de8980(&local_1a0,0x142,*(undefined8 *)(param_2 + 0x1310));
          FUN_00c445d0(&local_60);
          dVar12 = (double)FUN_0040bcd0();
          lVar8 = FUN_0040c770(dVar12 * 1000.0);
          FUN_00b8fec0(&local_1a8,(double)lVar8 / 1000.0,uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,7,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_1a0,&DAT_00f4f54c,
                       local_1a8,&DAT_00f4f4fc);
          *param_5 = 0x505;
        }
        goto code_r0x00f4f391;
      }
      if (uVar7 != 8) goto code_r0x00f4f391;
LAB_00f4ed9e:
      pcVar9 = (char *)FUN_01cfde70(param_3,4,0,&local_71,&local_72,&local_73);
      if (*pcVar9 == '\0') {
        puVar13 = &local_72;
        puVar16 = &local_73;
        uVar10 = FUN_01b05ad0(uVar10,1,0,&local_71,puVar13,puVar16);
        uVar5 = (undefined4)((ulonglong)puVar16 >> 0x20);
        FUN_01d350f0(*(undefined8 *)(param_2 + 0x4c0),uVar10,local_4c);
        FUN_017d13d0(&local_60,param_2,local_4c[0],param_3,(ulonglong)puVar13 & 0xffffffffffffff00,
                     CONCAT44(uVar5,1),CONCAT44(uVar6,2),1,1);
        dVar12 = (double)FUN_00c44590(&local_60);
        if (dVar12 != 0.0) {
          FUN_00c44790(PTR_DAT_02003900,&local_60,&local_60);
          FUN_00c44500(&local_60,PTR_DAT_02002618,&local_60);
          FUN_00de8980(&local_1b0,0x143,*(undefined8 *)(param_2 + 0x1310));
          uVar10 = FUN_00c44590(&local_60);
          FUN_00b8fec0(&local_1b8,uVar10,uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,7,&DAT_00f4f4fc,local_1b0,&DAT_00f4f54c,local_1b8,&DAT_00f4f640,
                       &DAT_00f4f650,&DAT_00f4f4fc);
          FUN_00de8980(&local_1c0,0x13d,*(undefined8 *)(param_2 + 0x1310));
          dVar12 = (double)FUN_00c445d0(&local_60);
          uVar10 = FUN_00f4ced0(dVar12 * 57.29577951308232);
          FUN_00b8fec0(&local_1c8,uVar10,uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,7,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_1c0,&DAT_00f4f54c,
                       local_1c8,&DAT_00f4f570);
          FUN_00de8980(&local_1d0,0x13a,*(undefined8 *)(param_2 + 0x1310));
          FUN_00b8fec0(&local_1d8,local_60,uVar1,0,0x3cd203af9ee75616);
          FUN_00b8fec0(&local_1e0,local_58,uVar1,0,0x3cd203af9ee75616);
          FUN_00416cd0(param_1,0xb,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_1d0,&DAT_00f4f584,
                       local_1d8,&DAT_00f4f598,local_1e0,&DAT_00f4f660,&DAT_00f4f650,&DAT_00f4f4fc);
          *param_5 = 0x503;
          dVar12 = (double)FUN_00c44590(&local_60);
          if (dVar12 != 0.0) {
            FUN_00c44790(PTR_DAT_02002618,&local_60,&local_60);
            FUN_00de8980(&local_1e8,0x144,*(undefined8 *)(param_2 + 0x1310));
            uVar10 = FUN_00c44590(&local_60);
            FUN_00b8fec0(&local_1f0,uVar10,uVar1,0,0x3cd203af9ee75616);
            FUN_00416cd0(param_1,7,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_1e8,&DAT_00f4f54c,
                         local_1f0,&DAT_00f4f674);
            FUN_00de8980(&local_1f8,0x13d,*(undefined8 *)(param_2 + 0x1310));
            dVar12 = (double)FUN_00c445d0(&local_60);
            uVar10 = FUN_00f4ced0(dVar12 * 57.29577951308232);
            FUN_00b8fec0(&local_200,uVar10,uVar1,0,0x3cd203af9ee75616);
            FUN_00416cd0(param_1,7,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_1f8,&DAT_00f4f54c,
                         local_200,&DAT_00f4f570);
            FUN_00de8980(&local_208,0x13b,*(undefined8 *)(param_2 + 0x1310));
            FUN_00b8fec0(&local_210,local_60,uVar1,0,0x3cd203af9ee75616);
            FUN_00b8fec0(&local_218,local_58,uVar1,0,0x3cd203af9ee75616);
            FUN_00416cd0(param_1,9,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_208,&DAT_00f4f584,
                         local_210,&DAT_00f4f598,local_218,L") S\"");
            *param_5 = 0x606;
          }
        }
      }
      goto code_r0x00f4f391;
    }
  }
  else if (uVar7 != 0x22) {
    if (uVar7 == 0x62) goto LAB_00f4ed9e;
    if (uVar7 != 0x77) goto code_r0x00f4f391;
    goto LAB_00f4de7b;
  }
  puVar13 = &local_72;
  pcVar9 = (char *)FUN_01cfde70(param_3,3,0,&local_71,puVar13,&local_73);
  if (*pcVar9 == '\0') {
    uVar7 = CONCAT44((int)((ulonglong)puVar13 >> 0x20),1);
    uVar10 = FUN_01397060(param_2,param_3,0,1,uVar7,2,1,1);
    FUN_017d13d0(local_98,param_2,0,param_3,uVar7 & 0xffffffffffffff00,1,2,1,1);
    FUN_00b8fec0(&local_100,uVar10,uVar1,0,0x3cd203af9ee75616);
    FUN_00416cd0(param_1,3,L"rms=",local_100,&DAT_00f4f5c4);
    FUN_0041ddd0(&local_110,&LAB_00f4cc78);
    FUN_00de8a20(&local_108,L"DAskVolt",L"sDCLevel",*(undefined8 *)(param_2 + 0x1310),local_110);
    FUN_004168b0(&local_118,local_108);
    FUN_00b8fec0(&local_120,local_98[0],uVar1,0,0x3cd203af9ee75616);
    puVar14 = &DAT_00f4f4fc;
    FUN_00416cd0(param_1,7,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_118,&DAT_00f4f54c,local_120,
                 &DAT_00f4f5d4);
    sVar3 = 2;
    local_220 = 2;
    iVar11 = iVar4 + -1;
    local_4c[0] = 1;
    if (0 < iVar11) {
      do {
        FUN_017d13d0(&local_60,param_2,local_4c[0],param_3,(ulonglong)puVar14 & 0xffffffffffffff00,1
                     ,2,1,1);
        FUN_00f4cfc0(&local_80,param_2,local_4c[0],iVar4,uVar1);
        FUN_00de8980(&local_128,0x13c,*(undefined8 *)(param_2 + 0x1310));
        uVar10 = FUN_00c44590(&local_60);
        FUN_00b8fec0(&local_130,uVar10,uVar1,0,0x3cd203af9ee75616);
        FUN_00416cd0(param_1,8,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_128,local_80,&DAT_00f4f54c
                     ,local_130,&DAT_00f4f5d4);
        FUN_00de8980(&local_138,0x13d,*(undefined8 *)(param_2 + 0x1310));
        dVar12 = (double)FUN_00c445d0(&local_60);
        uVar10 = FUN_00f4ced0(dVar12 * 57.29577951308232);
        FUN_00b8fec0(&local_140,uVar10,uVar1,0,0x3cd203af9ee75616);
        FUN_00416cd0(param_1,7,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_138,&DAT_00f4f54c,
                     local_140,&DAT_00f4f570);
        FUN_00de8980(&local_148,0x139,*(undefined8 *)(param_2 + 0x1310));
        FUN_00b8fec0(&local_150,local_60,uVar1,0,0x3cd203af9ee75616);
        FUN_00b8fec0(&local_158,local_58,uVar1,0,0x3cd203af9ee75616);
        puVar14 = &DAT_00f4f4fc;
        FUN_00416cd0(param_1,9,*param_1,&DAT_00f4f4ec,&DAT_00f4f4fc,local_148,&DAT_00f4f584,
                     local_150,&DAT_00f4f598,local_158,L") A\"");
        local_220 = sVar3 + 3;
        local_4c[0] = local_4c[0] + 1;
        iVar11 = iVar11 + -1;
        sVar3 = local_220;
      } while (iVar11 != 0);
    }
    *param_5 = local_220 + 0x500;
  }
code_r0x00f4f391:
  FUN_00414560(&local_218,0x22);
  FUN_00414520(&local_108);
  FUN_00414560(&local_100,0xb);
  FUN_00414520(&local_a8);
  FUN_00414480(&local_a0);
  FUN_00414480(&local_80);
  return param_1;
}

