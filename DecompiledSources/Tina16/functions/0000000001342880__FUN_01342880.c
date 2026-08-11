/* Ghidra address: 01342880 */
/* Ghidra symbol: FUN_01342880 */


void FUN_01342880(byte param_1,longlong *param_2,byte param_3)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined7 uVar12;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  double dVar16;
  undefined8 uVar17;
  undefined1 auStack_738 [32];
  longlong *local_718;
  char *local_710;
  undefined1 *local_708;
  undefined8 local_6f0;
  longlong *local_6e8;
  longlong *local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  longlong *local_6b8;
  longlong *local_6b0;
  longlong *local_6a8;
  longlong *local_6a0;
  longlong *local_698;
  longlong *local_690;
  undefined8 local_688;
  longlong local_680;
  longlong local_678;
  undefined1 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  longlong *local_628;
  undefined1 *local_620;
  double local_618;
  double local_610;
  double local_608;
  undefined1 local_5f9;
  longlong local_5f8;
  longlong local_5f0;
  longlong local_5e8;
  undefined1 local_5d9;
  longlong local_5d8;
  longlong local_5d0;
  longlong local_5c8;
  undefined1 local_5b9;
  longlong *local_5b8;
  longlong local_5b0;
  longlong *local_5a0;
  longlong *local_598;
  double local_590;
  double local_588;
  undefined8 local_580;
  longlong local_578;
  longlong local_570 [50];
  undefined1 local_3e0 [400];
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_239;
  byte local_238;
  char local_237;
  undefined8 local_236;
  byte local_222;
  int local_220;
  undefined1 local_21c [4];
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  char local_1fc;
  char local_1fb;
  char local_1fa;
  char local_1f9;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined1 local_1c0 [8];
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_19b;
  char local_19a;
  byte local_199;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_181;
  int local_17c [3];
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  longlong local_138;
  byte local_129;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_f4 [4];
  char local_f0 [4];
  undefined4 local_ec [2];
  int local_e4;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  longlong local_a8;
  char local_9b;
  byte local_99;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  int local_70;
  int local_6c;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  char local_2f;
  byte local_2e;
  char local_2d;
  char local_2c;
  char local_2b;
  char local_2a;
  char local_29;
  
  local_620 = auStack_738;
  local_6e8 = (longlong *)0x0;
  local_6f0 = 0;
  local_6e0 = (longlong *)0x0;
  local_6d8 = 0;
  local_6d0 = 0;
  local_6c8 = 0;
  local_6c0 = 0;
  local_6b8 = (longlong *)0x0;
  local_6a8 = (longlong *)0x0;
  local_6b0 = (longlong *)0x0;
  local_698 = (longlong *)0x0;
  local_6a0 = (longlong *)0x0;
  local_690 = (longlong *)0x0;
  local_688 = 0;
  local_660 = 0;
  local_680 = 0;
  local_668 = 0;
  local_658 = 0;
  local_650 = 0;
  local_648 = 0;
  local_640 = 0;
  local_638 = 0;
  local_630 = 0;
  local_628 = (longlong *)0x0;
  local_110 = 0;
  local_118 = 0;
  local_128 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1fc = '\x01';
  puVar1 = auStack_738;
  if (*PTR_DAT_02005828 != '\0') {
    FUN_00416ba0(&local_628,*(undefined8 *)PTR_DAT_02005010,L"\\tr_debug.log");
    local_98 = (longlong *)FUN_004d7d90(&PTR_FUN_00496830,1,local_628,0);
    puVar1 = local_620;
  }
  local_620 = puVar1;
  if (((char)param_2[0x299] == '\0') &&
     ((((*PTR_DAT_02002b78 == '\0' || (*PTR_DAT_020030c0 == '\0')) ||
       ((*(uint *)PTR_DAT_02003570 & 3) == 0)) ||
      ((cVar2 = (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x338))
                          (*(longlong **)PTR_DAT_02004c68), cVar2 == '\0' &&
       (cVar2 = (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x338))
                          (*(longlong **)PTR_DAT_02004c68), cVar2 != '\0')))))) {
    local_1fb = '\0';
  }
  else {
    local_1fb = '\x01';
  }
  local_238 = 0;
  local_248 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_250 = FUN_004b6930(&PTR_FUN_00478280,1);
  if ((*PTR_DAT_02003da8 != '\0') && (*PTR_DAT_02002b78 == '\0')) {
    FUN_017d1180(*(undefined8 *)PTR_DAT_02005010,local_250);
    iVar6 = FUN_0044fdb0(*(undefined8 *)PTR_DAT_02005010,*(undefined8 *)PTR_DAT_020049a0,0);
    if (iVar6 != 0) {
      FUN_017d1180(*(undefined8 *)PTR_DAT_020049a0,local_248);
    }
    (**(code **)(*(longlong *)param_2[0x28a] + 0x88))((longlong *)param_2[0x28a],local_250);
    (**(code **)(*(longlong *)param_2[0x28a] + 0x88))((longlong *)param_2[0x28a],local_248);
  }
  FUN_00410f20(local_248);
  FUN_00410f20(local_250);
  if (*(char *)((longlong)param_2 + 0xdef) != '\0') {
    local_238 = local_238 | 1;
  }
  if ((char)param_2[0x1be] != '\0') {
    local_238 = local_238 | 2;
  }
  if (((*(char *)((longlong)param_2 + 0xdef) == '\0') && ((char)param_2[0x1be] == '\0')) ||
     ((char)param_2[0x2a4] != '\0')) {
    local_239 = 0;
  }
  else {
    local_239 = 1;
  }
  *(undefined1 *)((longlong)param_2 + 0x337) = 1;
  if (param_1 == 4) {
    *(undefined1 *)((longlong)param_2 + 0x49c) = 0;
  }
  local_2e = 0;
  uVar12 = (undefined7)((ulonglong)param_2 >> 8);
  if ((*PTR_DAT_020052a0 == '\0') &&
     (((param_1 != 4 || (*(short *)(*(longlong *)PTR_DAT_02003c48 + 0x18) == 0)) ||
      (*(char *)(*(longlong *)PTR_DAT_02003c48 + 0x121) != '\0')))) {
    *(bool *)(param_2 + 0x66) = (double)param_2[0xf0] != 0.0;
    *(bool *)(param_2 + 0x65) = (double)param_2[0xf4] != 0.0;
    *(char *)((longlong)param_2 + 0x327) = (char)param_2[0x65];
    local_2b = '\0';
    local_1fa = '\0';
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    FUN_01b087f0(param_2,1);
    *(undefined4 *)PTR_DAT_02003f20 = 0;
    local_2c = '\0';
    local_2e = 0;
    local_2d = '\0';
    *PTR_DAT_02001790 = 0;
    if ((double)param_2[0xf2] <= 2.0) {
      local_58 = 0.0;
    }
    else {
      local_58 = (double)FUN_01d0e4e0(param_2 + 0xbb);
      local_58 = local_58 / (double)param_2[0xf2];
    }
    local_60 = (double)param_2[0x111] + local_58;
    *(undefined4 *)((longlong)param_2 + 0x120c) = 0;
    *(undefined4 *)(param_2 + 0x242) = 0;
    *(undefined4 *)((longlong)param_2 + 0x1214) = 0;
    *(undefined4 *)(param_2 + 0x243) = 0;
    *(undefined4 *)((longlong)param_2 + 0x121c) = 0;
    plVar11 = param_2 + 0xd4;
    plVar14 = local_570;
    for (lVar13 = 0x32; lVar13 != 0; lVar13 = lVar13 + -1) {
      *plVar14 = *plVar11;
      plVar11 = plVar11 + 1;
      plVar14 = plVar14 + 1;
    }
    lVar13 = FUN_00b921a0(0);
    param_2[0x1e6] = lVar13;
    FUN_00b92140(0);
    if ((char)param_2[0x2a4] == '\x03') {
      local_718 = param_2 + 0x2a3;
      local_138 = FUN_0129d610(param_2[0x14],param_2 + 0x1d3,(longlong)param_2 + 0x14d4,
                               (longlong)param_2 + 0x14f5);
    }
    if ((*(char *)((longlong)param_2 + 0x5db) == '\x02') && (local_138 != 0)) {
      cVar2 = FUN_01d07fe0(local_138,*(undefined8 *)(param_2[0x14] + 0x470),local_ec);
      if (cVar2 != '\0') {
        FUN_01b04ef0(0x10c,0x1586,param_2[0x262],0);
      }
    }
    if ((param_1 != 4) ||
       (*(undefined1 *)((longlong)param_2 + 0x49c) = 0,
       *(short *)(*(longlong *)PTR_DAT_02003c48 + 0x18) == 0)) {
      param_2[0x84] = 0;
      if (*(byte *)((longlong)param_2 + 0x5db) < 8) {
        bVar15 = ((int)CONCAT71(uVar12,1) << (*(byte *)((longlong)param_2 + 0x5db) & 0x1f) & 0x21U)
                 != 0;
      }
      else {
        bVar15 = false;
      }
      if (bVar15) {
        if (*(char *)((longlong)param_2 + 0x885) == '\x01') {
          FUN_017d9ab0(param_2[0x1b],0);
          if (*(char *)((longlong)param_2 + 0x325) == '\0') {
            FUN_01af25b0(param_2[0x1e2],0,&DAT_01348ef2,2);
            cVar2 = FUN_01b07dd0(param_2);
            if (cVar2 == '\0') {
              FUN_016f5430(param_2,5,0);
            }
            else {
              FUN_016f39b0(param_2,5,0);
            }
            FUN_01af25b0(param_2[0x1e2],0,&DAT_01348ef8,4);
            if (*(char *)((longlong)param_2 + 0x324) != '\0') {
              if (*PTR_DAT_020052b8 == '\0') {
                (**(code **)(*param_2 + 0x20))(param_2);
              }
              else {
                uVar17 = FUN_00b89270();
                FUN_00b8e520(uVar17,&local_630,0x10a);
                FUN_013a4820(*(undefined8 *)PTR_DAT_020032b8,local_630);
                FUN_0044d440();
              }
            }
          }
          else {
            FUN_01af25b0(param_2[0x1e2],1,&DAT_01348eec,0);
            FUN_016f6430(param_2,5,0);
            FUN_016f3620(param_2,0,5);
            FUN_01af25b0(param_2[0x1e2],0,&DAT_01348eee,1);
          }
          FUN_017d9ab0(param_2[0x1b],0);
        }
        else {
          if (*(char *)((longlong)param_2 + 0x885) == '\x02') {
            FUN_016f6940(param_2,5);
          }
          cVar2 = FUN_01b07dd0(param_2);
          if (cVar2 != '\0') {
            FUN_014c9240(param_2);
          }
        }
      }
      FUN_016f5cc0(param_2);
    }
    local_2f = '\x01';
  }
  if (*(longlong *)(param_2[0x1e2] + 8) != 0) {
    FUN_01af23d0(*(undefined8 *)(param_2[0x1e2] + 8),1);
  }
  param_2[0x75] = 0x3ff0000000000000;
  do {
    if ((*(double *)((longlong)param_2 + 0x695) < (double)param_2[0x75]) ||
       (*(char *)((longlong)param_2 + 0x49c) == '\x01')) {
      param_2[0x75] = (longlong)((double)param_2[0x75] - 1.0);
      if (*(longlong *)(param_2[0x1e2] + 8) != 0) {
        FUN_01af23d0(*(undefined8 *)(param_2[0x1e2] + 8),0);
      }
      if ((*(char *)((longlong)param_2 + 0x49c) == '\x01') &&
         (*(char *)(param_2[0x15] + 0x491) != '\0')) {
        plVar11 = local_570;
        plVar14 = param_2 + 0xd4;
        for (lVar13 = 0x32; lVar13 != 0; lVar13 = lVar13 + -1) {
          *plVar14 = *plVar11;
          plVar11 = plVar11 + 1;
          plVar14 = plVar14 + 1;
        }
        *(undefined1 *)(param_2[0x15] + 0x491) = 0;
      }
      if ((((param_2[0x282] == 0) && (*(char *)((longlong)param_2 + 0x49c) != '\x01')) &&
          (local_2d == '\0')) && (*(char *)((longlong)param_2 + 0x884) != '\0')) {
        if (param_1 < 8) {
          bVar15 = ((int)CONCAT71(uVar12,1) << (param_1 & 0x1f) & 0xdU) != 0;
        }
        else {
          bVar15 = false;
        }
        if (bVar15) {
          local_718 = (longlong *)param_2[0x71];
          local_710 = (char *)0x0;
          FUN_017d0c90(param_2,param_2[0x16],0,param_2[0x111]);
        }
      }
      cVar2 = FUN_01b07dd0(param_2);
      if ((cVar2 != '\0') && ((char)param_2[0x2a4] == '\0')) {
        local_718 = (longlong *)((ulonglong)local_718 & 0xffffffffffffff00);
        FUN_015f7080(param_2 + 0x18,param_2 + 0x19,1,param_2);
        if ((*(int *)((longlong)param_2 + 0xf4) != 0) &&
           ((*(uint *)((longlong)param_2 + 0xf4) & 0x20) == 0)) {
          local_210 = FUN_014cdce0(param_2[0x1d]);
          cVar2 = _SC_GetErrorStatus(local_210,&local_218);
          if (cVar2 != '\0') {
            FUN_004167a0(&local_6d8,local_218);
            FUN_01b05000(local_6d8,0);
          }
        }
        if ((*(uint *)((longlong)param_2 + 0xf4) & 2) != 0) {
          local_210 = FUN_014cdce0(param_2[0x1d]);
          _SCAMS_GetDiagramData(local_210,&local_208,&local_220,local_21c);
          if (0 < local_220) {
            FUN_014cdcf0(param_2[0x1d],&local_6e0);
            FUN_01610c20(param_2,local_6e0);
            param_2[0x72] = param_2[0x112];
          }
        }
      }
      if (*(char *)((longlong)param_2 + 0x325) == '\0') {
        FUN_01af25d0(param_2[0x1e2],4,3,param_2 + 0x72);
      }
      else {
        FUN_01af25d0(param_2[0x1e2],1,3,param_2 + 0x72);
      }
      FUN_01af2990(param_2[0x1e2],
                   (double)param_2[0x72] + ((double)param_2[0x75] - 1.0) * (double)param_2[0x71]);
      if (*PTR_DAT_020052b8 != '\0') {
        uVar17 = FUN_016ed7b0(param_2,6);
        local_718 = (longlong *)CONCAT71(local_718._1_7_,1);
        FUN_00b8fd60(&local_6f0,uVar17,2,0);
        FUN_00416ba0(&local_6e8,L" t = ",local_6f0);
        FUN_0132bb80(*(undefined8 *)PTR_DAT_02002da0,local_6e8,0);
      }
      if (param_1 == 1) {
        FUN_017d2ab0(param_2,6);
      }
      local_718 = (longlong *)CONCAT71(local_718._1_7_,1);
      FUN_016f68a0(param_2,6,local_238,local_239);
      if ((param_1 == 0) && (*(char *)((longlong)param_2 + 0x49c) == '\0')) {
        if (param_3 < 8) {
          bVar15 = ((int)CONCAT71(uVar12,1) << (param_3 & 0x1f) & 0x6cU) != 0;
        }
        else {
          bVar15 = false;
        }
        if (!bVar15) {
          FUN_012bc9f0(param_2,*(undefined1 *)((longlong)param_2 + 0xdef),param_2[0x264],
                       param_2[0x260]);
          FUN_01337840(param_2,(char)param_2[0x1be],param_2[0x264],param_2[0x260]);
        }
      }
      if (*PTR_DAT_020052b8 != '\0') {
        FUN_00414b50(&local_128,L"[TRAnalysisComplete()]");
        FUN_013a40d0(*(undefined8 *)PTR_DAT_020032b8,&local_128);
      }
      lVar13 = FUN_00b921a0(param_2[0x1e6]);
      param_2[0x1e4] = lVar13;
      if (*PTR_DAT_02005828 != '\0') {
        FUN_00410f20(local_98);
      }
      *(undefined1 *)((longlong)param_2 + 0x337) = 0;
      FUN_0165dc50(param_2[0x22]);
      *PTR_DAT_02004fa8 = 0;
      *PTR_DAT_02003b18 = 0;
LAB_01348c28:
      FUN_00414560(&local_6f0,0xf);
      FUN_00414560(&local_668,9);
      FUN_00414560(&local_1b0,2);
      FUN_00414480(&local_128);
      FUN_00414590(&local_118,2);
      return;
    }
    if ((*PTR_DAT_02003ed0 != '\0') && (local_1fa == '\0')) {
      FUN_016f8740(param_2);
    }
    if ((*(char *)(param_2[0x22] + 0xf5) == '\0') || ((char)param_2[0x1e] == '\0')) {
      uVar7 = 0;
    }
    else {
      uVar7 = (undefined4)CONCAT71(uVar12,1);
    }
    FUN_01664460(param_2[0x22],uVar7);
    if ((*PTR_DAT_020052a0 == '\0') &&
       (((param_1 != 4 || (*(short *)(*(longlong *)PTR_DAT_02003c48 + 0x18) == 0)) ||
        (*(char *)(*(longlong *)PTR_DAT_02003c48 + 0x121) != '\0')))) {
      param_2[0x84] = 0;
      FUN_01b087f0(param_2,1);
      local_60 = local_58;
      local_2f = '\x01';
      local_222 = 0;
      *(bool *)(param_2 + 0x66) = (double)param_2[0xf0] != 0.0;
      *(bool *)(param_2 + 0x65) = (double)param_2[0xf4] != 0.0;
      *(char *)((longlong)param_2 + 0x327) = (char)param_2[0x65];
      local_598 = param_2 + 0xbb;
      if (*(byte *)((longlong)param_2 + 0x5db) < 8) {
        bVar15 = ((int)CONCAT71((int7)((ulonglong)local_598 >> 8),1) <<
                  (*(byte *)((longlong)param_2 + 0x5db) & 0x1f) & 0xdeU) != 0;
      }
      else {
        bVar15 = false;
      }
      if (bVar15 || local_1fa != '\0') {
        uVar9 = (ulonglong)*(byte *)((longlong)param_2 + 0x5db);
        if (uVar9 < 3) {
          if (uVar9 == 1) {
            uVar7 = FUN_0040c770((double)param_2[0x75] - 1.0);
            local_718 = (longlong *)CONCAT44(local_718._4_4_,uVar7);
            local_710 = (char *)CONCAT71(local_710._1_7_,(char)local_598[0x86]);
            local_708 = (undefined1 *)((ulonglong)local_708 & 0xffffffffffffff00);
            lVar13 = FUN_017c58f0(local_598[0x83],local_598[0x84],local_598[0x85],
                                  *(short *)((longlong)local_598 + 0x416) + -1);
            local_598[0x19] = lVar13;
            FUN_016f5520(param_2,0);
            FUN_01340aa0(param_2,0);
          }
          else if (uVar9 == 2) {
            if (*(int *)(*(longlong *)(param_2[0x14] + 0x470) + 0x10) < 2) {
              uVar7 = FUN_0040c770((double)param_2[0x75] - 1.0);
              local_718 = (longlong *)CONCAT44(local_718._4_4_,uVar7);
              local_710 = (char *)CONCAT71(local_710._1_7_,
                                           *(undefined1 *)((longlong)local_598 + 0x54f));
              local_708 = (undefined1 *)((ulonglong)local_708 & 0xffffffffffffff00);
              local_1f8 = (double)FUN_017c58f0(*(undefined8 *)((longlong)local_598 + 0x53d),
                                               *(undefined8 *)((longlong)local_598 + 0x545),
                                               local_598[0xaa],
                                               *(short *)((longlong)local_598 + 0x54d) + -1);
              if (*(longlong *)((longlong)local_598 + 0x431) == 0) {
                FUN_004169a0(&local_638,(longlong)local_598 + 0x43d);
                local_ec[0] = (**(code **)(**(longlong **)(param_2[0x14] + 0x438) + 0xb8))
                                        (*(longlong **)(param_2[0x14] + 0x438),local_638);
                local_718 = (longlong *)CONCAT71(local_718._1_7_,1);
                FUN_00b8fd60(&local_640,local_1f8,6,0);
                FUN_004b5450(*(undefined8 *)(param_2[0x14] + 0x438),local_ec[0],local_640);
                FUN_01440040(param_2[0x14],param_2[0x262],0);
                FUN_019af810(param_2[0x14],6);
              }
              else {
                sVar5 = (**(code **)(**(longlong **)((longlong)local_598 + 0x431) + 0xf8))
                                  (*(longlong **)((longlong)local_598 + 0x431));
                if ((((sVar5 == 0xf) ||
                     (sVar5 = (**(code **)(**(longlong **)((longlong)local_598 + 0x431) + 0xf8))
                                        (*(longlong **)((longlong)local_598 + 0x431)), sVar5 == 0x10
                     )) || (((sVar5 = (**(code **)(**(longlong **)((longlong)local_598 + 0x431) +
                                                  0xf8))(*(longlong **)((longlong)local_598 + 0x431)
                                                        ), sVar5 == 0xd9 ||
                             (((sVar5 = (**(code **)(**(longlong **)((longlong)local_598 + 0x431) +
                                                    0xf8))(*(longlong **)
                                                            ((longlong)local_598 + 0x431)),
                               sVar5 == 0xda ||
                               (sVar5 = (**(code **)(**(longlong **)((longlong)local_598 + 0x431) +
                                                    0xf8))(*(longlong **)
                                                            ((longlong)local_598 + 0x431)),
                               sVar5 == 0xa4)) ||
                              (sVar5 = (**(code **)(**(longlong **)((longlong)local_598 + 0x431) +
                                                   0xf8))(*(longlong **)
                                                           ((longlong)local_598 + 0x431)),
                              sVar5 == 0xa6)))) ||
                            (sVar5 = (**(code **)(**(longlong **)((longlong)local_598 + 0x431) +
                                                 0xf8))(*(longlong **)((longlong)local_598 + 0x431))
                            , sVar5 == 0xa7)))) &&
                   ((*(char *)((longlong)local_598 + 0x439) == '\x02' &&
                    (*(char *)((longlong)local_598 + 0x43a) == '\x03')))) {
                  local_718 = &local_236;
                  local_710 = &local_237;
                  FUN_01cfde70(*(undefined8 *)((longlong)local_598 + 0x431),
                               *(undefined1 *)((longlong)local_598 + 0x439),
                               *(undefined1 *)((longlong)local_598 + 0x43a),(longlong)&local_236 + 1
                              );
                  if (local_237 == '\x04') {
                    local_1f8 = local_1f8 - 90.0;
                  }
                }
                *(double *)param_2[0x272] = local_1f8;
                FUN_01cc5c10(param_2[0x16],local_1f8);
              }
              FUN_016f5520(param_2,0);
              FUN_01340aa0(param_2,0);
            }
            else {
              FUN_012b4a50(param_2[0xb1],1);
              FUN_016f5520(param_2,0);
              FUN_01340aa0(param_2,0);
            }
          }
        }
        else if (uVar9 - 3 < 2) {
          FUN_01150d10(param_2[0xb2],param_2[0x75]);
          FUN_016f5520(param_2,0);
          FUN_01340aa0(param_2,0);
        }
        else if (uVar9 == 6) {
          if ((double)param_2[0x75] == 2.0) {
            FUN_01b05410(param_2);
            FUN_017ca500(6,param_2,0,0);
            FUN_01340aa0(param_2,0);
            FUN_016f1c10(param_2,6);
          }
        }
        else if (uVar9 == 7) {
          uVar7 = FUN_0040c770((double)param_2[0x75] - 1.0);
          local_718 = (longlong *)CONCAT44(local_718._4_4_,uVar7);
          local_710 = (char *)CONCAT71(local_710._1_7_,*(undefined1 *)((longlong)local_598 + 0x54f))
          ;
          local_708 = (undefined1 *)((ulonglong)local_708 & 0xffffffffffffff00);
          uVar17 = FUN_017c58f0(*(undefined8 *)((longlong)local_598 + 0x53d),
                                *(undefined8 *)((longlong)local_598 + 0x545),local_598[0xaa],
                                *(short *)((longlong)local_598 + 0x54d) + -1);
          FUN_016cfc70(param_2[0x14],6,uVar17,1);
          FUN_016f5520(param_2,0);
          FUN_01340aa0(param_2,0);
        }
        (**(code **)(*param_2 + 0x20))(param_2);
        if (*(char *)((longlong)param_2 + 0x885) == '\x01') {
          FUN_017d9ab0(param_2[0x1b],0);
          if (*(char *)((longlong)param_2 + 0x325) == '\0') {
            FUN_01af25b0(param_2[0x1e2],0,&DAT_01348ef2,2);
            *(undefined1 *)((longlong)param_2 + 0x326) = 0;
            cVar2 = FUN_01b07dd0(param_2);
            if (cVar2 == '\0') {
              FUN_016f5430(param_2,5,0);
            }
            else {
              FUN_016f39b0(param_2,5,0);
            }
            FUN_01af25b0(param_2[0x1e2],0,&DAT_01348f0a,5);
          }
          else {
            FUN_01af25b0(param_2[0x1e2],1,&DAT_01348eec,0);
            FUN_016f6430(param_2,5,0);
            FUN_016f3620(param_2,0,5);
            FUN_01af25b0(param_2[0x1e2],0,&DAT_01348f04,2);
          }
          FUN_017d9ab0(param_2[0x1b],0);
        }
        else if (*(char *)((longlong)param_2 + 0x885) == '\x02') {
          FUN_016f6940(param_2,5);
        }
        FUN_016f5cc0(param_2);
        if (*(char *)((longlong)param_2 + 0x325) == '\0') {
          FUN_01af25d0(param_2[0x1e2],6,4,param_2 + 0x75);
        }
        else {
          FUN_01af25d0(param_2[0x1e2],3,4,param_2 + 0x75);
        }
      }
      FUN_01b07850(param_2,param_2[0x23],param_2[0x2d]);
      FUN_01b07850(param_2,param_2[0x23],param_2[0x47]);
      FUN_01b07850(param_2,param_2[0x23],param_2[0x48]);
      FUN_01b07850(param_2,param_2[0x23],param_2[0x2e]);
      *(undefined4 *)(param_2 + 0x93) = 0;
      if ((param_1 == 4) &&
         ((*(longlong *)PTR_DAT_02003c48 == 0 ||
          (*(short *)(*(longlong *)PTR_DAT_02003c48 + 0x18) != 0)))) {
        if (*(longlong *)PTR_DAT_020038e8 != 0) {
          FUN_01cc60b0(*(undefined8 *)PTR_DAT_020038e8,0);
        }
        local_5b9 = *(char *)((longlong)param_2 + 0xed6) == '\0';
        local_5c8 = param_2[0xeb];
        local_5d0 = param_2[0xff];
        local_5d8 = local_5d0;
        if ((bool)local_5b9) {
          local_5d8 = local_5c8;
        }
        uVar17 = FUN_00b90620(param_2[0x6f],local_5d8);
        uVar17 = FUN_00b90620(0x3e112e0be826d695,uVar17);
        FUN_01b08870(param_2,uVar17);
      }
      else {
        if (param_2[0x282] != 0) {
          if ((*(char *)((longlong)param_2 + 0x335) == '\0') ||
             ((*(char *)((longlong)param_2 + 0x335) != '\0' && ((char)param_2[0x299] == '\0')))) {
            FUN_013417f0(param_2[0x282]);
          }
          if ((((*(char *)(param_2[0x282] + 0x27) == '\0') &&
               (*(char *)((longlong)param_2 + 0x884) != '\0')) && ((double)param_2[0x75] == 1.0)) &&
             (local_1fa == '\0')) {
            local_718 = (longlong *)param_2[0x112];
            local_710 = (char *)0x0;
            FUN_017d0c90(param_2,param_2[0x16],0,param_2[0x111]);
          }
        }
        if (local_1fa == '\0') {
          local_718 = (longlong *)((double)param_2[0x75] - 1.0);
          local_710 = (char *)0x0;
          local_708 = (undefined1 *)0x0;
          FUN_017ce930(param_2,0,0,0);
          if (*(char *)((longlong)param_2 + 0xed5) == '\x02') {
            FUN_0129ede0(param_2);
          }
        }
        else {
          if (param_2[0x16] != 0) {
            FUN_01cc60b0(param_2[0x16],*(undefined4 *)((longlong)param_2 + 0x691));
          }
          if (param_2[0x17] != 0) {
            FUN_01cc60b0(param_2[0x17],*(undefined4 *)((longlong)param_2 + 0x691));
          }
        }
        param_2[0x72] = 0;
        FUN_01b08870(param_2,(double)param_2[0x112] / (double)param_2[0xed]);
      }
      if ((*PTR_DAT_02002b78 != '\0') || (*(char *)((longlong)param_2 + 0x335) != '\0')) {
        FUN_017d2950(param_2,6);
        local_c0 = (double)FUN_00b90620(0,*(double *)(param_2[0x14] + 0xdd0) /
                                          (double)*(int *)((longlong)param_2 + 0x1464));
        local_b8 = local_c0;
        local_d0 = (double)FUN_00b90620(0,*(double *)(param_2[0x14] + 0xdd8) * 2.0);
        local_c8 = local_d0;
        if (*(char *)((longlong)param_2 + 0x335) == '\0') {
          local_d8 = 0.0;
        }
        else {
          local_e0 = (double)param_2[0x1ba] * 2.0;
          if ((double)param_2[0x1ba] * 2.0 < local_d0) {
            local_e0 = local_d0;
          }
          local_d8 = local_e0;
        }
      }
      if (*PTR_DAT_02002b78 != '\0') {
        if (*PTR_DAT_020052b8 == '\0') {
          FUN_019ad890(param_2[0x14],0);
        }
        else {
          local_b0 = (double)FUN_00b90620(0,*(double *)(param_2[0x14] + 0xdd0) / 180.0);
          *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f2) = 1;
        }
      }
      local_29 = '\0';
      local_2a = '\x01';
      FUN_00410f20(param_2[0x96]);
      FUN_00410f20(param_2[0x97]);
      lVar13 = FUN_01b10b30(&DAT_01af52c0,1,param_2[0x112],local_a8);
      param_2[0x96] = lVar13;
      local_718 = param_2;
      lVar13 = FUN_01b10da0(&DAT_01af5700,1,param_2[0x70],param_2[0x71]);
      param_2[0x97] = lVar13;
      local_38 = (double)FUN_0133fab0(param_2,param_1,&local_a8);
      param_2[0x6f] = (longlong)((double)param_2[0x112] * 1e-14);
      local_5d9 = *(char *)((longlong)param_2 + 0xed6) == '\0';
      local_5e8 = param_2[0xeb];
      local_5f0 = param_2[0xff];
      local_5f8 = local_5f0;
      if ((bool)local_5d9) {
        local_5f8 = local_5e8;
      }
      local_68 = (double)FUN_00b90620(param_2[0x6f],local_5f8);
      uVar7 = FUN_0040c770(((double)param_2[0xe3] * (double)param_2[0xe8] * 2.0) / 3.0);
      local_6c = FUN_00b905e0(4,uVar7);
      uVar7 = FUN_0040c770(((double)param_2[0xe3] * (double)param_2[0xe8] * 4.0) / 3.0);
      local_70 = FUN_00b905e0(10,uVar7);
      if ((local_68 < local_38) && (local_38 < (double)param_2[2])) {
        FUN_01b08870(param_2,local_38);
      }
      if ((double)param_2[2] <= local_68 && local_68 != (double)param_2[2]) {
        FUN_01b08870(param_2,local_68);
      }
      param_2[0x6d] =
           (longlong)
           ((double)param_2[0xe7] * 1000000.0 * (double)param_2[0xd8] * (double)param_2[0x6f]);
      param_2[0x70] = (longlong)((double)param_2[0x6d] * 10.0);
      param_2[0x70] = 0x3d719799812dea11;
      local_48 = (double)param_2[2];
      uVar17 = FUN_00b90620(param_2[0x6d],(double)param_2[0x112] / 1000000.0);
      lVar13 = FUN_00b90650(0x3e112e0be826d695,uVar17);
      param_2[0x6e] = lVar13;
      if (local_38 == 0.0) {
        local_40 = (double)param_2[2];
      }
      else {
        local_40 = local_38;
      }
      local_99 = 0;
      do {
        if (local_38 == 0.0) {
          FUN_01b08a40(param_2,local_99,param_2[2]);
        }
        else {
          FUN_01b08a40(param_2,local_99,local_38);
        }
        local_99 = local_99 + 1;
      } while (local_99 != 7);
      cVar2 = FUN_01b07dd0(param_2);
      if (cVar2 != '\0') {
        uVar17 = FUN_014cdce0(param_2[0x1d]);
        _set_roll_back_delta(uVar17,param_2[0x70]);
        uVar17 = FUN_014cdce0(param_2[0x1d]);
        if (((*(uint *)(param_2 + 0x1d1) & 0x10) == 0) &&
           ((*(uint *)(param_2[0x1d] + 0x22c0) & 0x10) == 0)) {
          uVar7 = (undefined4)CONCAT71((uint7)(uint3)(*(uint *)(param_2[0x1d] + 0x22c0) >> 8),1);
        }
        else {
          uVar7 = 0;
        }
        _enable_roll_back_param(uVar17,uVar7);
        uVar17 = FUN_014cdce0(param_2[0x1d]);
        _enable_roll_back(uVar17);
        uVar17 = FUN_014cdce0(param_2[0x1d]);
        _set_roll_back_settings(uVar17,*(int *)(PTR_DAT_020030c0 + 0x68) + 1,1);
        uVar17 = FUN_014cdce0(param_2[0x1d]);
        _set_digital_time(uVar17,param_2[0x72]);
        local_148 = (double)param_2[0x72];
        local_181 = 1;
        local_190 = *(undefined8 *)PTR_DAT_02002240;
        local_198 = *(undefined8 *)(PTR_DAT_02002240 + 8);
      }
      *(undefined4 *)(param_2 + 0x283) = 0;
      *(undefined4 *)((longlong)param_2 + 0x141c) = 0;
      if ((((double)param_2[0x111] == 0.0) && ((char)param_2[0x276] != '\0')) &&
         (*(char *)((longlong)param_2 + 0x885) != '\x02')) {
        local_718 = (longlong *)0x0;
        local_710 = (char *)0x0;
        local_708 = (undefined1 *)0x0;
        FUN_016f8860(param_2,param_1,6,param_2[0x72]);
        *(int *)(param_2 + 0x283) = (int)param_2[0x283] + 1;
      }
      if (*PTR_DAT_020052b8 != '\0') {
        FUN_017d1f40(param_2);
      }
    }
    else {
      FUN_013427b0(auStack_738);
      if (((*PTR_DAT_020052a0 == '\0') && (param_1 == 4)) && (*(longlong *)PTR_DAT_020038e8 != 0)) {
        FUN_01cc60b0(*(undefined8 *)PTR_DAT_020038e8,0);
      }
      *PTR_DAT_020052a0 = 0;
    }
    local_1d8 = 0.0;
    local_1fa = '\0';
    *(undefined1 *)(param_2 + 0x2a9) = 1;
    do {
      local_150 = (double)param_2[0x72] - (double)param_2[0x85];
      if (*(char *)((longlong)param_2 + 0x325) == '\0') {
        FUN_01af25d0(param_2[0x1e2],4,3,&local_150);
        FUN_01af25d0(param_2[0x1e2],5);
      }
      else {
        FUN_01af25d0(param_2[0x1e2],1,3,&local_150);
        FUN_01af25d0(param_2[0x1e2],2);
      }
      FUN_01af2990(param_2[0x1e2],local_150 + ((double)param_2[0x75] - 1.0) * (double)param_2[0x71])
      ;
      if (*(char *)((longlong)param_2 + 0x49c) == '\0') {
        if ((local_2a == '\0') || (*(char *)((longlong)param_2 + 0x324) != '\0')) {
          local_140 = FUN_00b92140(0);
          FUN_01b07850(param_2,param_2[0x2d],param_2[0x23]);
          FUN_01b07850(param_2,param_2[0x2d],param_2[0x25]);
          FUN_00409a70(param_2[0x38],param_2[0x37]);
          dVar16 = (double)FUN_00b92140(local_140);
          param_2[0x295] = (longlong)(dVar16 + (double)param_2[0x295]);
          cVar2 = FUN_01b07dd0(param_2);
          if (cVar2 != '\0') {
            local_140 = FUN_00b92140(0);
            uVar17 = FUN_014cdce0(param_2[0x1d]);
            _select_roll_back(uVar17,(double)param_2[0x72] + (double)param_2[2] +
                                     (double)param_2[0x70]);
            dVar16 = (double)FUN_00b92140(local_140);
            *(double *)PTR_DAT_02005b60 = dVar16 + *(double *)PTR_DAT_02005b60;
            if (local_1f0 <= 0.0) {
              FUN_00b90620(param_2[0x72],local_148);
              local_148 = (double)FUN_00b90650(param_2,(double)param_2[0x72] + (double)param_2[2]);
            }
            else {
              local_148 = local_1f0;
            }
            local_140 = FUN_00b92140(0);
            FUN_014c8a30(param_2);
            dVar16 = (double)FUN_00b92140(local_140);
            *(double *)PTR_DAT_02005830 = dVar16 + *(double *)PTR_DAT_02005830;
          }
        }
        else {
          local_140 = FUN_00b92140(0);
          if (*(char *)((longlong)param_2 + 0x336) != '\0') {
            FUN_01b10c50(param_2[0x96],param_2[0x72],param_2[0x112],local_a8);
          }
          FUN_0133fc70(param_2);
          dVar16 = (double)FUN_01b10ed0(param_2[0x97],0);
          if (dVar16 < (double)param_2[0x72]) {
            FUN_01b110a0(param_2[0x97],(double)param_2[0x72] + (double)param_2[0x70]);
          }
          FUN_01b07850(param_2,param_2[0x2d],param_2[0x2e]);
          FUN_01b07850(param_2,param_2[0x23],param_2[0x2d]);
          local_99 = 5;
          do {
            uVar17 = FUN_01b08a30(param_2,local_99);
            FUN_01b08a40(param_2,local_99 + 1,uVar17);
            local_99 = local_99 - 1;
          } while (local_99 != 0xff);
          FUN_01b08a40(param_2,0,param_2[2]);
          local_120 = param_2[(ulonglong)(*(byte *)((longlong)param_2 + 0x887) + 1) + 0x47];
          local_99 = *(byte *)((longlong)param_2 + 0x887);
          do {
            param_2[(ulonglong)(local_99 + 1) + 0x47] = param_2[(ulonglong)local_99 + 0x47];
            local_99 = local_99 - 1;
          } while (local_99 != 0xff);
          param_2[0x47] = local_120;
          FUN_01b07850(param_2,param_2[0x23],param_2[0x47]);
          dVar16 = (double)FUN_00b92140(local_140);
          param_2[0x295] = (longlong)(dVar16 + (double)param_2[0x295]);
          cVar2 = FUN_01b07dd0(param_2);
          if (cVar2 != '\0') {
            uVar17 = FUN_014cdce0(param_2[0x1d]);
            local_148 = (double)_get_simulation_time(uVar17);
            uVar17 = FUN_014cdce0(param_2[0x1d]);
            local_1b8 = _get_next_event_time(uVar17,&local_1c8,local_1c0);
            if (local_1b8 < 0) {
              local_1c8 = (double)param_2[0x72];
            }
            if (local_148 < 0.0) {
              local_148 = (double)param_2[0x72];
            }
            FUN_00b90620(param_2[0x72],local_148);
            dVar16 = (double)FUN_00b90650(param_2,(double)param_2[0x72] + (double)param_2[2]);
            local_1f0 = dVar16 * 1.00000000000001 + 1e-18;
            local_140 = FUN_00b92140(0);
            local_1f9 = FUN_014c8d50(param_2,6,local_1f0);
            dVar16 = (double)FUN_00b92140(local_140);
            *(double *)PTR_DAT_02005838 = dVar16 + *(double *)PTR_DAT_02005838;
            if (((DAT_01f36230 == '\0' || local_1f9 != '\0') ||
                (local_148 + (double)param_2[0x70] < (double)param_2[0x72] + (double)param_2[2])) ||
               ((local_1c8 < (double)param_2[0x72] + (double)param_2[2] + (double)param_2[0x70] ||
                (local_2f != '\0')))) {
              FUN_00b90620(param_2[0x72],local_148);
              local_148 = (double)FUN_00b90650(param_2,(double)param_2[0x72] + (double)param_2[2]);
              local_140 = FUN_00b92140(0);
              uVar17 = FUN_014cdce0(param_2[0x1d]);
              _delete_roll_backs(uVar17,(double)param_2[0x72] - (double)param_2[0x73]);
              dVar16 = (double)FUN_00b92140(local_140);
              *(double *)PTR_DAT_02005088 = dVar16 + *(double *)PTR_DAT_02005088;
              local_140 = FUN_00b92140(0);
              FUN_013423f0(param_2);
              if ((*PTR_DAT_02002b78 != '\0') && (lVar13 = FUN_014cdd20(param_2[0x1d]), lVar13 != 0)
                 ) {
                uVar17 = FUN_014cdd20(param_2[0x1d]);
                cVar2 = FUN_01565440(uVar17);
                if (cVar2 != '\0') {
                  uVar17 = FUN_014cdce0(param_2[0x1d]);
                  uVar10 = FUN_014cdd20(param_2[0x1d]);
                  cVar2 = FUN_015fa600(uVar17,uVar10);
                  if (cVar2 != '\0') {
                    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
                  }
                }
              }
              if (((*PTR_DAT_02002b78 != '\0') &&
                  (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x18e8) != '\0')) &&
                 (*(longlong *)PTR_DAT_02003610 != 0)) {
                while (((*(longlong *)PTR_DAT_02003610 != 0 &&
                        (*(char *)(*(longlong *)PTR_DAT_02003610 + 0x710) != '\0')) &&
                       (*(char *)((longlong)param_2 + 0x49c) == '\0'))) {
                  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
                }
              }
              if (((*PTR_DAT_02002b78 == '\0') || (*PTR_DAT_020030c0 == '\0')) ||
                 (((*(uint *)PTR_DAT_02003570 & 3) == 0 ||
                  (cVar2 = (**(code **)(**(longlong **)PTR_DAT_02004c68 + 800))
                                     (*(longlong **)PTR_DAT_02004c68), cVar2 != '\0')))) {
                if (local_1fb == '\0') {
                  local_1d0 = (double)param_2[0x72] + (double)param_2[2] + (double)param_2[0x70];
                }
                else if (*(int *)(param_2[0x1d] + 0x22c8) == 1) {
                  local_1d0 = (double)param_2[0x72] + (double)param_2[2] + (double)param_2[0x70];
                }
                else {
                  uVar17 = FUN_014cdce0(param_2[0x1d]);
                  local_1e8 = (double)_GetNextInstructionTime(uVar17);
                  local_1d0 = (double)FUN_00b90650((double)param_2[0x72] + (double)param_2[2],
                                                   local_1e8 + 1e-18);
                }
                dVar16 = (double)FUN_00b92140(local_140);
                *(double *)PTR_DAT_020030f0 = dVar16 + *(double *)PTR_DAT_020030f0;
                local_140 = FUN_00b92140(0);
                local_718 = (longlong *)local_17c;
                local_710 = local_f0;
                local_708 = local_f4;
                local_19a = FUN_014c9ce0(param_2,local_1d0,&local_148);
                bVar3 = FUN_01b07dd0(param_2);
                if (((((local_199 & bVar3) != 0) && (local_17c[0] == 2)) &&
                    (*PTR_DAT_02002b78 != '\0')) &&
                   ((*PTR_DAT_020030c0 != '\0' && ((*(uint *)PTR_DAT_02003570 & 3) != 0)))) {
                  (**(code **)(**(longlong **)PTR_DAT_02004c68 + 0x340))
                            (*(longlong **)PTR_DAT_02004c68,1,1);
                }
                dVar16 = (double)FUN_00b92140(local_140);
                *(double *)PTR_DAT_020045e8 = dVar16 + *(double *)PTR_DAT_020045e8;
                if (local_199 == 0) {
                  local_148 = local_1d0;
                }
                else if (local_17c[0] == 1) {
                  uVar17 = FUN_014cdce0(param_2[0x1d]);
                  FUN_01602ea0(param_2[0x15],uVar17);
                }
                uVar17 = FUN_014cdce0(param_2[0x1d]);
                local_1b8 = _get_next_event_time(uVar17,&local_1c8,local_1c0);
                if (local_1b8 < 0) {
                  local_1c8 = (double)param_2[0x72];
                }
                else {
                  FUN_01b10f10(param_2[0x97],local_1c8);
                }
                if (local_19a != '\0') {
                  if (local_148 < ((double)param_2[0x72] + (double)param_2[2]) - 1e-18) {
                    local_150 = (double)param_2[2];
                    uVar17 = FUN_00b90620(local_148 - (double)param_2[0x72],param_2[0x70]);
                    FUN_01b08870(param_2,uVar17);
                    uVar17 = FUN_00b90650(param_2[2],local_150);
                    FUN_01b08870(param_2,uVar17);
                    if ((double)param_2[2] <= local_150 * 0.25 &&
                        local_150 * 0.25 != (double)param_2[2]) {
                      FUN_01b087f0(param_2,1);
                    }
                    local_222 = 0;
                  }
                  local_140 = FUN_00b92140(0);
                  local_19b = FUN_014c8a30(param_2);
                  dVar16 = (double)FUN_00b92140(local_140);
                  *(double *)PTR_DAT_02005830 = dVar16 + *(double *)PTR_DAT_02005830;
                  goto LAB_0134533b;
                }
                uVar17 = FUN_014cdce0(param_2[0x1d]);
                FUN_015f9120(uVar17,0);
                *(undefined1 *)((longlong)param_2 + 0x49c) = 1;
              }
              else {
                *(undefined1 *)((longlong)param_2 + 0x49c) = 1;
              }
              FUN_01348e00(0,local_620);
              goto LAB_01348c28;
            }
            local_199 = 0;
          }
LAB_0134533b:
          local_120 = param_2[(ulonglong)(*(byte *)((longlong)param_2 + 0x887) + 1) + 0x37];
          local_99 = *(byte *)((longlong)param_2 + 0x887);
          do {
            param_2[(ulonglong)(local_99 + 1) + 0x37] = param_2[(ulonglong)local_99 + 0x37];
            local_99 = local_99 - 1;
          } while (local_99 != 0xff);
          param_2[0x37] = local_120;
          FUN_00409a70(param_2[0x38],param_2[0x37]);
          if (1e-09 < (double)param_2[0xf3]) {
            FUN_016f3820(param_2);
            FUN_016f3790(param_2);
          }
        }
      }
      if (((local_1fc == '\0') || (*(char *)((longlong)param_2 + 0x335) != '\0')) &&
         ((cVar2 = FUN_01b07dd0(param_2), cVar2 != '\0' &&
          (*(char *)(param_2[0x1d] + 0x23e2) != '\0')))) {
        local_578 = *(longlong *)(param_2[0x1d] + 0x23e8);
        if ((*(char *)(local_578 + 0x51a) == '\0') && (0.0003 < (double)param_2[0x72])) {
          FUN_014cecd0(local_578);
        }
        FUN_014cee50(local_578,param_2[0x72]);
      }
      FUN_01b08a40(param_2,0,param_2[2]);
      lVar13 = FUN_01b08a30(param_2,1);
      param_2[0x73] = lVar13;
      local_140 = FUN_00b92140(0);
      FUN_00daf100(param_2,param_2[2]);
      if ((*(char *)((longlong)param_2 + 0x327) != '\0') || ((char)param_2[0x65] != '\0')) {
        FUN_00daff20(param_2);
      }
      dVar16 = (double)FUN_00b92140(local_140);
      param_2[0x297] = (longlong)(dVar16 + (double)param_2[0x297]);
      if ((*(char *)((longlong)param_2 + 0x13b2) != '\0') &&
         (*(char *)((longlong)param_2 + 0x49c) != '\x01')) {
        FUN_01341210(param_2);
        if (*PTR_DAT_020052b8 != '\0') {
          FUN_017d1f40(param_2);
        }
        *(undefined1 *)((longlong)param_2 + 0x13b2) = 0;
        FUN_01b087f0(param_2,1);
        if ((*(char *)(param_2[0x22] + 0xf5) == '\0') || ((char)param_2[0x1e] == '\0')) {
          uVar7 = 0;
        }
        else {
          uVar7 = (undefined4)CONCAT71(uVar12,1);
        }
        FUN_01664460(param_2[0x22],uVar7);
      }
      if (*(char *)((longlong)param_2 + 0x325) == '\0') {
        *(bool *)((longlong)param_2 + 0x326) = local_2f == '\0';
        FUN_016f5430(param_2,6);
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
      else {
        FUN_016f6430(param_2,6,0);
        FUN_016f3620(param_2,0);
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
      if (*PTR_DAT_02005828 != '\0') {
        cVar2 = FUN_01d44bc0(*(undefined1 *)((longlong)param_2 + 0xed6));
        if (cVar2 == '\0') {
          (**(code **)(*local_98 + 0x40))(local_98,param_2[0x60]);
          (**(code **)(*local_98 + 0x18))(local_98,0x20);
        }
        else {
          (**(code **)(*local_98 + 0x40))(local_98,param_2[0x5f]);
          (**(code **)(*local_98 + 0x18))(local_98,0x20);
          (**(code **)(*local_98 + 0x30))(local_98,param_2[0x6b]);
          (**(code **)(*local_98 + 0x18))(local_98,0x20);
        }
        (**(code **)(*local_98 + 0x30))(local_98,param_2[0x72]);
        (**(code **)(*local_98 + 0x18))(local_98,0x20);
        (**(code **)(*local_98 + 0xa0))(local_98,param_2[2]);
      }
      FUN_01b07dd0(param_2);
      if (((double)param_2[0x72] == (double)param_2[0x84]) &&
         (((param_1 != 4 || (*(short *)(*(longlong *)PTR_DAT_02003c48 + 0x18) == 0)) ||
          (*(char *)(*(longlong *)PTR_DAT_02003c48 + 0x121) != '\0')))) {
        FUN_00409a70(param_2[0x38],param_2[0x39],(longlong)(*(int *)((longlong)param_2 + 0x31c) * 8)
                    );
        FUN_00409a70(param_2[0x38],param_2[0x3a]);
      }
      if (*(char *)((longlong)param_2 + 0x49c) == '\0') {
        local_140 = FUN_00b92140(0);
        param_2[0x73] = param_2[2];
        if ((local_2f == '\0') && (*(char *)((longlong)param_2 + 0x324) == '\0')) {
          local_50 = (double)FUN_016efb40(param_2,param_2[2]);
        }
        else {
          local_50 = (double)param_2[2];
        }
        if (*(char *)((longlong)param_2 + 0x324) == '\0') {
          dVar16 = (double)FUN_01b08a30(param_2,1);
          if (((dVar16 * 0.001 < (double)param_2[2] || dVar16 * 0.001 == (double)param_2[2]) &&
              ((double)param_2[0x6e] < (double)param_2[2] ||
               (double)param_2[0x6e] == (double)param_2[2])) &&
             (cVar2 = FUN_0133f360(param_2), cVar2 != '\0')) goto LAB_01345c35;
          local_129 = 1;
        }
        else {
LAB_01345c35:
          local_129 = 0;
        }
        *(int *)((longlong)param_2 + 0x120c) = *(int *)((longlong)param_2 + 0x120c) + 1;
        param_2[0x92] = param_2[0xe3];
        if (((local_129 & *(char *)((longlong)param_2 + 0x324) == '\0') == 0) ||
           ((local_50 <= (double)param_2[2] * 0.75 && ((double)param_2[0x70] < local_50)))) {
          *(int *)((longlong)param_2 + 0x1214) = *(int *)((longlong)param_2 + 0x1214) + 1;
          if (*(char *)((longlong)param_2 + 0x324) == '\0') {
            if (local_129 == 0) {
              FUN_01b087f0(param_2,1);
              *(int *)((longlong)param_2 + 0x121c) = *(int *)((longlong)param_2 + 0x121c) + 1;
              uVar17 = FUN_00b90620(param_2[0x70],(double)param_2[2] * 0.5);
              FUN_01b08870(param_2,uVar17);
            }
          }
          else {
            FUN_01b087f0(param_2,1);
            *(int *)PTR_DAT_02003f20 = *(int *)PTR_DAT_02003f20 + 1;
            *(int *)(param_2 + 0x243) = (int)param_2[0x243] + 1;
            FUN_01b08870(param_2,(double)param_2[2] * 0.25);
          }
          if (local_50 < (double)param_2[2]) {
            FUN_01b08870(param_2,local_50);
          }
          local_38 = (double)FUN_0133fab0(param_2,param_1);
          if (local_38 < (double)param_2[2]) {
            FUN_01b08870(param_2,local_38);
          }
          if (2 < *(byte *)((longlong)param_2 + 0xb)) {
            FUN_01b087f0(param_2,*(char *)((longlong)param_2 + 0xb) + -1);
          }
          dVar16 = (double)FUN_01b08a30(param_2,0);
          if (((double)param_2[2] <= dVar16 * 0.25 && dVar16 * 0.25 != (double)param_2[2]) ||
             ((double)param_2[2] <= (double)param_2[0x6d] &&
              (double)param_2[0x6d] != (double)param_2[2])) {
            FUN_01b087f0(param_2,1);
          }
          local_2a = '\0';
          local_29 = '\0';
          if (*(char *)((longlong)param_2 + 0x324) != '\0') {
            dVar16 = (double)FUN_01b08a30(param_2,1);
            if (((double)param_2[2] <= dVar16 * 0.06 && dVar16 * 0.06 != (double)param_2[2]) ||
               ((double)param_2[2] <= local_68 * 10.0 && local_68 * 10.0 != (double)param_2[2])) {
              FUN_017d9d10(param_2[0x1b],1);
            }
          }
          if ((double)param_2[2] <= local_68 && local_68 != (double)param_2[2]) {
            iVar6 = (**(code **)(*(longlong *)param_2[0x28a] + 0x28))((longlong *)param_2[0x28a]);
            if ((int)param_2[0x290] < iVar6) {
              (**(code **)(*(longlong *)param_2[0x28a] + 0x18))
                        ((longlong *)param_2[0x28a],&local_648,(int)param_2[0x290]);
              local_718 = (longlong *)0x0;
              FUN_014aeb50(local_648,0);
              FUN_0133d850(param_2,local_3e0);
              *(int *)(param_2 + 0x290) = (int)param_2[0x290] + 1;
              FUN_016f5520(param_2,0);
              FUN_01340aa0(param_2,0);
              local_1fa = '\x01';
              *(undefined1 *)(param_2[0x15] + 0x491) = 1;
            }
            else {
              param_2[0x73] = param_2[2];
              FUN_01b08870(param_2,local_68);
              local_2a = '\x01';
              param_2[0x72] = (longlong)((double)param_2[0x72] + (double)param_2[2]);
              local_38 = (double)FUN_0133fab0(param_2,param_1);
            }
            if (((*(char *)((longlong)param_2 + 0x324) != '\0') && (local_2b == '\0')) &&
               ((iVar6 = (**(code **)(*(longlong *)param_2[0x28a] + 0x28))
                                   ((longlong *)param_2[0x28a]), iVar6 == 0 ||
                (iVar6 = (**(code **)(*(longlong *)param_2[0x28a] + 0x28))
                                   ((longlong *)param_2[0x28a]), iVar6 <= (int)param_2[0x290])))) {
              lVar13 = (**(code **)(*(longlong *)param_2[0x28a] + 0x28))((longlong *)param_2[0x28a])
              ;
              if ((0 < (int)lVar13) &&
                 (lVar13 = (**(code **)(*(longlong *)param_2[0x28a] + 0x28))
                                     ((longlong *)param_2[0x28a]),
                 (int)lVar13 <= (int)param_2[0x290])) {
                plVar11 = local_570;
                plVar14 = param_2 + 0xd4;
                for (lVar13 = 0x32; lVar13 != 0; lVar13 = lVar13 + -1) {
                  *plVar14 = *plVar11;
                  plVar11 = plVar11 + 1;
                  plVar14 = plVar14 + 1;
                }
                lVar13 = param_2[0x15];
                *(undefined1 *)(lVar13 + 0x491) = 0;
              }
              if (param_3 < 8) {
                bVar15 = ((int)CONCAT71((int7)((ulonglong)lVar13 >> 8),1) << (param_3 & 0x1f) & 3U)
                         != 0;
              }
              else {
                bVar15 = false;
              }
              if (bVar15) {
                *PTR_DAT_02003f60 = 1;
                FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
                local_5a0 = (longlong *)
                            FUN_007fc180(&PTR_FUN_01339d68,1,*(undefined8 *)PTR_DAT_02004030);
                uVar17 = FUN_00b89270();
                FUN_00b8e520(uVar17,&local_658,0x147);
                FUN_0064de00(local_5a0[0xd6],local_658);
                FUN_0064cf60(local_5a0,0x1598);
                if ((*(char *)((longlong)param_2 + 0x331) == '\0') &&
                   (*(int *)((longlong)param_2 + 0x2ec) == -1)) {
                  if (param_2[0x6a] == 0) {
                    uVar17 = FUN_00b89270();
                    FUN_0041ddd0(&local_688,&LAB_01342138);
                    FUN_00b8e650(uVar17,&local_1b0);
                  }
                  else {
                    uVar17 = FUN_00b89270();
                    FUN_0041ddd0(&local_668,&PTR_PTR_01342128);
                    FUN_00b8e650(uVar17,&local_660,L"Tran.STimeStepError");
                    FUN_01b20020(&local_680,param_2[0x6a],&DAT_01348f58);
                    local_678 = local_680;
                    local_670 = 0x11;
                    FUN_00442f70(&local_1b0,local_660);
                  }
                  local_9b = '\x01';
                  FUN_00648780(&local_690,local_1b0);
                  (**(code **)(**(longlong **)(local_5a0[0xde] + 0x4d8) + 0x78))
                            (*(longlong **)(local_5a0[0xde] + 0x4d8),local_690);
                }
                else if ((*(char *)((longlong)param_2 + 0x331) == '\0') || (param_2[0x68] == 0)) {
                  local_718 = (longlong *)((ulonglong)local_718 & 0xffffffffffffff00);
                  FUN_016f0060(&local_1b0,param_2);
                  FUN_00648780(&local_6b8,local_1b0);
                  (**(code **)(**(longlong **)(local_5a0[0xde] + 0x4d8) + 0x78))
                            (*(longlong **)(local_5a0[0xde] + 0x4d8),local_6b8);
                  local_9b = param_2[0x69] != 0;
                }
                else {
                  local_78 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
                  local_80 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
                  FUN_016f0ac0(param_2,6);
                  iVar6 = (**(code **)(*local_78 + 0x28))(local_78);
                  if (0 < iVar6) {
                    FUN_004b37d0(local_78,&local_6a0);
                    FUN_00416ba0(&local_698,L"Voltage/current of device exceeds limit: ");
                    (**(code **)(**(longlong **)(local_5a0[0xde] + 0x4d8) + 0x78))
                              (*(longlong **)(local_5a0[0xde] + 0x4d8),local_698);
                  }
                  iVar6 = (**(code **)(*local_80 + 0x28))(local_80);
                  if (0 < iVar6) {
                    FUN_004b37d0(local_80,&local_6b0);
                    FUN_00416ba0(&local_6a8,L"Device failed to converge: ");
                    (**(code **)(**(longlong **)(local_5a0[0xde] + 0x4d8) + 0x78))
                              (*(longlong **)(local_5a0[0xde] + 0x4d8),local_6a8);
                  }
                  FUN_00410f20(local_78);
                  FUN_00410f20(local_80);
                  local_9b = '\x01';
                }
                if ((local_9b == '\0') && (-1 < *(int *)((longlong)param_2 + 0x2ec))) {
                  (**(code **)(**(longlong **)(local_5a0[0xde] + 0x4d8) + 0x78))
                            (*(longlong **)(local_5a0[0xde] + 0x4d8),0);
                  local_88 = FUN_0082ccd0(&PTR_FUN_00825200,1);
                  local_90 = FUN_0082ccd0(&PTR_FUN_00825200,1);
                  FUN_016f0c30(param_2,local_88,local_90);
                  local_718 = (longlong *)CONCAT71(local_718._1_7_,6);
                  FUN_0133a5c0(local_5a0,param_2);
                  FUN_00410f20(local_88);
                  FUN_00410f20(local_90);
                }
                iVar6 = (**(code **)(*local_5a0 + 0x2d0))(local_5a0);
                if (iVar6 == 3) {
                  if (*PTR_DAT_02002b78 != '\0') {
                    FUN_01c99780(*(undefined8 *)PTR_DAT_02004e40,0);
                  }
                  local_2a = '\0';
                  param_2[0x72] = (longlong)((double)param_2[0x71] + (double)param_2[0x71] / 1000.0)
                  ;
                  *(undefined1 *)((longlong)param_2 + 0x49c) = 1;
                }
                else if (iVar6 == 5) {
                  local_2b = '\x01';
                }
                FUN_00410f20(local_5a0);
                *PTR_DAT_02003f60 = 0;
                FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
              }
              else {
                FUN_00de8980(&local_650,0x147);
                FUN_01b05000(local_650,0);
              }
            }
          }
        }
        else {
          if (((*PTR_DAT_02002b78 != '\0') && (*PTR_DAT_020052b8 == '\0')) &&
             ((double)param_2[0x275] <= (double)param_2[0x72] &&
              (double)param_2[0x72] != (double)param_2[0x275])) {
            FUN_012bc3d0(param_2[0xb9],0);
          }
          if (((*PTR_DAT_02002b78 == '\0') || (*PTR_DAT_020052b8 != '\0')) ||
             ((double)param_2[0x72] < (double)param_2[0x275] ||
              (double)param_2[0x72] == (double)param_2[0x275])) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          local_718 = (longlong *)CONCAT71(local_718._1_7_,uVar4);
          FUN_016f68a0(param_2,6,local_238);
          if (((*PTR_DAT_02002b78 != '\0') && (*PTR_DAT_020052b8 == '\0')) &&
             (((double)param_2[0x275] <= (double)param_2[0x72] &&
               (double)param_2[0x72] != (double)param_2[0x275] &&
              (param_2[0x275] = (longlong)((double)param_2[0x275] + (double)param_2[0x112]),
              *PTR_DAT_02001790 == '\0')))) {
            if (param_3 < 8) {
              bVar15 = ((int)CONCAT71((int7)((ulonglong)PTR_DAT_02001790 >> 8),1) <<
                        (param_3 & 0x1f) & 3U) != 0;
            }
            else {
              bVar15 = false;
            }
            if (bVar15) {
              FUN_012bc9f0(param_2,*(undefined1 *)((longlong)param_2 + 0xdef),0);
            }
          }
          *(int *)(param_2 + 0x242) = (int)param_2[0x242] + 1;
          if (((local_222 & local_2f == '\0') != 0) &&
             (*(byte *)((longlong)param_2 + 0xb) < *(byte *)((longlong)param_2 + 0x887))) {
            FUN_01b087f0(param_2,*(char *)((longlong)param_2 + 0xb) + '\x01');
            local_50 = (double)FUN_016efb40(param_2,param_2[2]);
            if ((local_50 <= (double)param_2[2] * 1.05) || (local_50 <= (double)param_2[0x6d])) {
              FUN_01b087f0(param_2,1);
            }
          }
          local_29 = local_29 + '\x01';
          param_2[0x72] = (longlong)((double)param_2[0x72] + (double)param_2[2]);
          param_2[0x73] = param_2[2];
          if (local_2f != '\0') {
            FUN_017d9d10(param_2[0x1b],CONCAT71(uVar12,1));
          }
          local_2f = '\0';
          *(undefined4 *)PTR_DAT_02003f20 = 0;
          if ((longlong)local_6c < param_2[0x5f]) {
            if ((longlong)local_70 < param_2[0x5f]) {
              local_50 = (double)FUN_00b90650(local_50,(double)param_2[2] * 0.5);
            }
            else {
              local_50 = (double)FUN_00b90650(local_50,param_2[2]);
            }
          }
          else {
            local_50 = (double)FUN_00b90650(local_50,(double)param_2[2] * 2.0);
          }
          local_158 = (double)FUN_01b10ed0(param_2[0x97],0);
          local_168 = (double)param_2[0x72];
          local_170 = (double)param_2[0x72] + local_50;
          local_48 = local_50;
          if ((((local_158 <= local_168) ||
               (dVar16 = (double)FUN_0040c850(local_158 - local_168),
               dVar16 < (double)param_2[0x70] || dVar16 == (double)param_2[0x70])) ||
              (local_170 <= local_158)) ||
             (dVar16 = (double)FUN_0040c850(local_158 - local_170),
             dVar16 < (double)param_2[0x70] || dVar16 == (double)param_2[0x70])) {
            local_150 = local_158 - local_170;
            if (((local_150 < local_50 * 0.5) && (local_168 < local_158)) &&
               ((dVar16 = (double)FUN_0040c850(local_158 - local_168),
                (double)param_2[0x70] <= dVar16 && dVar16 != (double)param_2[0x70] &&
                (dVar16 = (double)FUN_0040c850(local_150),
                (double)param_2[0x70] <= dVar16 && dVar16 != (double)param_2[0x70])))) {
              local_50 = (double)FUN_00b90650(local_50,(local_158 - local_168) * 0.6667);
              FUN_01b087f0(param_2,1);
            }
          }
          else {
            local_48 = local_50;
            local_50 = local_158 - local_168;
            FUN_01b087f0(param_2,1);
            iVar6 = FUN_01b10f00(param_2[0x97]);
            if (((1 < iVar6) &&
                (local_160 = (double)FUN_01b10ed0(param_2[0x97],1),
                local_160 - local_158 < local_50 * 0.5)) &&
               ((double)param_2[0x70] <= local_160 - local_158 &&
                local_160 - local_158 != (double)param_2[0x70])) {
              local_50 = (double)FUN_00b90650(local_50,(local_160 - local_168) * 0.6667);
            }
          }
          local_38 = (double)FUN_0133fab0(param_2,param_1);
          local_5f9 = *(char *)((longlong)param_2 + 0xed6) == '\0';
          local_608 = (double)param_2[0xeb];
          local_610 = (double)param_2[0xff];
          local_618 = local_610;
          if ((bool)local_5f9) {
            local_618 = local_608;
          }
          if ((local_618 < local_38) && (local_38 < local_50)) {
            local_29 = '\0';
            local_50 = local_38;
            dVar16 = (double)FUN_01b08a30(param_2,0);
            if (local_50 < dVar16 * 0.25) {
              FUN_01b087f0(param_2,1);
            }
          }
          dVar16 = (double)FUN_01b08a30(param_2,0);
          if (local_50 < dVar16 * 0.25) {
            FUN_01b087f0(param_2,1);
          }
          if (local_50 < local_68) {
            local_50 = local_68;
            local_29 = '\0';
            FUN_01b087f0(param_2,1);
          }
          uVar17 = FUN_00b90650(local_50,(double)param_2[2] * 2.0);
          FUN_01b08870(param_2,uVar17);
          local_170 = (double)param_2[0x72] + (double)param_2[2];
          local_150 = local_158 - local_170;
          dVar16 = (double)FUN_0040c850(local_158 - local_170);
          if ((double)param_2[0x70] < dVar16) {
            local_222 = 1;
          }
          else {
            local_222 = 0;
            FUN_01b087f0(param_2,1);
          }
          local_2a = '\x01';
          if (local_29 == '\x02') {
            local_29 = '\0';
          }
        }
        dVar16 = (local_68 * 1.1) / 0.25;
        if (dVar16 < (double)param_2[2] || dVar16 == (double)param_2[2]) {
          dVar16 = (local_68 * 1.1) / 0.0625;
          if (dVar16 < (double)param_2[2] || dVar16 == (double)param_2[2]) {
            dVar16 = (local_68 * 1.1) / 0.015625;
            if ((double)param_2[2] <= dVar16 && dVar16 != (double)param_2[2]) {
              param_2[0x92] = (longlong)((double)param_2[0xe3] * 2.0);
            }
          }
          else {
            param_2[0x92] = (longlong)((double)param_2[0xe3] * 4.0);
          }
        }
        else {
          param_2[0x92] = (longlong)((double)param_2[0xe3] * 8.0);
        }
        dVar16 = (double)FUN_00b92140(local_140);
        param_2[0x298] = (longlong)(dVar16 + (double)param_2[0x298]);
      }
      if ((*(char *)((longlong)param_2 + 0x49c) == '\0') &&
         (((local_2a != '\0' && (*(char *)((longlong)param_2 + 0x324) == '\0')) ||
          (local_2b != '\0')))) {
        local_140 = FUN_00b92140(0);
        cVar2 = FUN_01b07dd0(param_2);
        if (cVar2 != '\0') {
          uVar17 = FUN_014cdce0(param_2[0x1d]);
          local_1e0 = (double)_get_simulation_time(uVar17);
          if (local_1d8 < local_1e0) {
            FUN_013424b0(param_2);
            local_1d8 = local_1e0;
          }
        }
        if (((*PTR_DAT_02002b78 != '\0') &&
            (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x18e8) != '\0')) &&
           ((*(longlong *)PTR_DAT_02003610 != 0 &&
            ((cVar2 = FUN_0133bad0(*(undefined8 *)PTR_DAT_02003610), cVar2 != '\0' &&
             (FUN_0133ba00(*(undefined8 *)PTR_DAT_02003610,param_2[0x72]),
             *(char *)(*(longlong *)PTR_DAT_02003610 + 0x711) != '\0')))))) {
          *(undefined1 *)(*(longlong *)PTR_DAT_02003610 + 0x710) = 1;
          *(undefined1 *)(*(longlong *)PTR_DAT_02003610 + 0x711) = 0;
        }
        dVar16 = (double)FUN_00b92140(local_140);
        plVar11 = (longlong *)PTR_DAT_020030f0;
        *(double *)PTR_DAT_020030f0 = dVar16 + *(double *)PTR_DAT_020030f0;
        if (((local_2c == '\0') && (plVar11 = param_2, 0xfa000 < (int)param_2[0x283])) &&
           (plVar11 = (longlong *)PTR_DAT_02001088, *PTR_DAT_02001088 == '\0')) {
          if (param_3 < 8) {
            uVar8 = (int)CONCAT71((int7)((ulonglong)PTR_DAT_02001088 >> 8),1) << (param_3 & 0x1f);
            plVar11 = (longlong *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),(uVar8 & 3) != 0);
          }
          else {
            plVar11 = (longlong *)0x0;
          }
          if (((char)plVar11 != '\0') &&
             (plVar11 = (longlong *)PTR_DAT_020052b8, *PTR_DAT_020052b8 == '\0')) {
            local_2c = '\x01';
            uVar17 = FUN_00b89270();
            FUN_00b8e520(uVar17,&local_6c0,0x149);
            plVar11 = (longlong *)FUN_0072d440(local_6c0,0);
            if ((int)plVar11 == 7) {
              param_2[0x72] = (longlong)((double)param_2[0x71] + (double)param_2[0x71] / 1000.0);
              param_2[0x75] = (longlong)(*(double *)((longlong)param_2 + 0x695) + 1.0);
              local_2d = '\x01';
              plVar11 = param_2;
            }
          }
        }
        if (param_1 < 8) {
          bVar15 = ((int)CONCAT71((int7)((ulonglong)plVar11 >> 8),1) << (param_1 & 0x1f) & 0x1fU) !=
                   0;
        }
        else {
          bVar15 = false;
        }
        if ((bVar15) && (0x7ffffffe < (int)param_2[0x283])) {
          param_2[0x72] = (longlong)((double)param_2[0x71] + (double)param_2[0x71] / 1000.0);
          param_2[0x75] = (longlong)(*(double *)((longlong)param_2 + 0x695) + 1.0);
          local_2d = '\x01';
          if (param_3 < 8) {
            bVar15 = ((int)CONCAT71(uVar12,1) << (param_3 & 0x1f) & 3U) != 0;
          }
          else {
            bVar15 = false;
          }
          if (bVar15) {
            uVar17 = FUN_00b89270();
            FUN_00b8e520(uVar17,&local_6d0);
            FUN_016fe2a0(local_6d0,0x1599);
          }
          else {
            FUN_00de8980(&local_6c8,0x148);
            FUN_01b05000(local_6c8,0);
          }
        }
        param_2[0x1e9] = (longlong)local_148;
        if ((((double)param_2[0x111] <= (double)param_2[0x72]) &&
            ((double)param_2[0x72] <= (double)param_2[0x71] + (double)param_2[0x6f] * 2.0)) &&
           ((char)param_2[0x276] != '\0')) {
          local_140 = FUN_00b92140(0);
          dVar16 = (double)FUN_01b08a30(param_2,1);
          if (local_58 <= dVar16) {
            if ((((double)param_2[0x111] == 0.0) && ((char)param_2[0x276] != '\0')) &&
               ((*(char *)((longlong)param_2 + 0x885) == '\x02' &&
                (((int)param_2[0x283] == 0 && (param_1 != 4)))))) {
              uVar17 = FUN_00b90650(param_2[0x71],0);
              local_718 = (longlong *)0x0;
              local_710 = (char *)0x0;
              local_708 = (undefined1 *)0x0;
              FUN_016f8860(param_2,param_1,6,uVar17);
              *(int *)(param_2 + 0x283) = (int)param_2[0x283] + 1;
            }
            uVar17 = FUN_00b90650(param_2[0x71],param_2[0x72]);
            local_718 = (longlong *)0x0;
            local_710 = (char *)0x0;
            local_708 = (undefined1 *)0x0;
            FUN_016f8860(param_2,param_1,6,uVar17);
            if (param_1 == 4) {
              uVar17 = FUN_00b90650(param_2[0x71],param_2[0x72]);
              FUN_016f85e0(param_2,6,uVar17);
            }
            *(int *)(param_2 + 0x283) = (int)param_2[0x283] + 1;
          }
          else {
            dVar16 = (double)FUN_01b08a30(param_2,2);
            if (local_58 <= dVar16) {
              dVar16 = (double)FUN_01b08a30(param_2,1);
              local_60 = ((double)param_2[0x72] - dVar16) + local_58;
            }
            else if (local_60 < (double)param_2[0x72]) {
              uVar17 = FUN_00b90650(param_2[0x71],param_2[0x72]);
              local_718 = (longlong *)0x0;
              local_710 = (char *)0x0;
              local_708 = (undefined1 *)0x0;
              FUN_016f8860(param_2,param_1,6,uVar17);
              if (param_1 == 4) {
                uVar17 = FUN_00b90650(param_2[0x71],param_2[0x72]);
                FUN_016f85e0(param_2,6,uVar17);
              }
              *(int *)(param_2 + 0x283) = (int)param_2[0x283] + 1;
              local_60 = local_60 + local_58;
            }
          }
          dVar16 = (double)FUN_00b92140(local_140);
          param_2[0x296] = (longlong)(dVar16 + (double)param_2[0x296]);
        }
        if (param_1 == 4) {
          local_2e = FUN_01331e70(*(undefined8 *)PTR_DAT_02003c48);
        }
        if (*PTR_DAT_02002b78 != '\0') {
          local_140 = FUN_00b92140(0);
          FUN_01b07850(param_2,param_2[0x23],param_2[0x29]);
          FUN_017d2e20(param_2);
          FUN_017d3110(param_2);
          uVar17 = FUN_019a45d0();
          FUN_019af4e0(uVar17);
          iVar6 = *(int *)(param_2[0x98] + 0x10);
          local_e4 = 0;
          if (-1 < iVar6 + -1) {
            do {
              local_5b0 = FUN_01d347d0(param_2[0x98],local_e4);
              FUN_01b07850(param_2,param_2[0x23],*(undefined8 *)(local_5b0 + 8));
              local_e4 = local_e4 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          if (*PTR_DAT_020052b8 != '\0') {
            FUN_013a3d80(*(undefined8 *)PTR_DAT_020032b8,1);
          }
          FUN_0135a0c0(param_2,6);
          *(undefined1 *)(*(longlong *)PTR_DAT_02004e40 + 0x1830) = 0;
          FUN_015fa560();
          dVar16 = (double)FUN_00b92140(local_140);
          param_2[0x1e5] = (longlong)(dVar16 + (double)param_2[0x1e5]);
        }
      }
      if (param_1 == 1) {
        if ((double)param_2[0x274] <= (double)param_2[0x72] &&
            (double)param_2[0x72] != (double)param_2[0x274]) {
          param_2[0x274] =
               (longlong)
               ((double)param_2[0x274] +
               (double)param_2[0x112] / (double)*(int *)((longlong)param_2 + 0x1464));
          if ((double)param_2[0x112] <= (double)param_2[0x274] &&
              (double)param_2[0x274] != (double)param_2[0x112]) {
            param_2[0x6f] = (longlong)((double)param_2[0x274] * 1e-14);
          }
          if (*PTR_DAT_02002b78 == '\0') {
            if (DAT_02107890 != 0) {
              thunk_FUN_041b2403(DAT_02107890,0x534);
            }
          }
          else {
            uVar17 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
            thunk_FUN_041b2403(uVar17,0x1237);
          }
          if ((((*PTR_DAT_020052b8 != '\0') && (*PTR_DAT_02002ec0 == '\0')) &&
              ((double)param_2[0x273] <= (double)param_2[0x72] &&
               (double)param_2[0x72] != (double)param_2[0x273])) && (local_c8 == 0.0)) {
            if ((double)param_2[0x72] <= (double)param_2[0x71] &&
                (double)param_2[0x71] != (double)param_2[0x72]) {
              FUN_01cc60b0(param_2[0x16],0);
              *(undefined4 *)(param_2 + 0x283) = 0;
              *(undefined4 *)((longlong)param_2 + 0x141c) = 0;
            }
            param_2[0x273] = (longlong)((double)param_2[0x273] + (double)param_2[0x112]);
          }
        }
        if ((*PTR_DAT_02002b78 != '\0') || (*(char *)((longlong)param_2 + 0x335) != '\0')) {
          if ((*PTR_DAT_020052b8 != '\0') && (local_b0 < (double)param_2[0x72])) {
            local_b0 = local_b0 + *(double *)(param_2[0x14] + 0xdd0) / 180.0;
            *(undefined1 *)(*(longlong *)PTR_DAT_020032b8 + 0x6f2) = 1;
          }
          if (((local_b8 < (double)param_2[0x72]) && (0.0 < local_b8)) && (local_d8 == 0.0)) {
            local_b8 = local_b8 + local_c0;
            FUN_017d2ab0(param_2,6);
            if (((*(char *)((longlong)param_2 + 0x13b7) == '\0') &&
                (local_c8 < (double)param_2[0x72])) && (0.0 < local_c8)) {
              if ((double)param_2[0x72] <= (double)param_2[0x71] &&
                  (double)param_2[0x71] != (double)param_2[0x72]) {
                uVar7 = FUN_01cc62e0(param_2[0x16],param_2[0x72],local_d0 / 2.0);
                *(undefined4 *)(param_2 + 0x283) = uVar7;
                FUN_017d2c00(param_2[0x14],6);
              }
              local_c8 = local_c8 + local_d0;
            }
          }
          if ((local_d8 < (double)param_2[0x72]) && (0.0 < local_d8)) {
            if (((param_2[0x282] != 0) &&
                ((*(char *)((longlong)param_2 + 0x49c) != '\x01' && (local_2d == '\0')))) &&
               (local_1fa == '\0')) {
              FUN_01341f10(param_2[0x282],local_e0 / 2.0);
            }
            local_d8 = local_d8 + local_e0;
          }
        }
      }
      if ((local_2e & param_1 == 4) != 0) {
        FUN_013426e0(auStack_738);
      }
      cVar2 = FUN_01af2a50(param_2[0x1e2]);
      if (cVar2 != '\0') {
        FUN_013426e0(auStack_738);
        *PTR_DAT_020052a0 = 1;
        uVar17 = FUN_0044d490(&PTR_FUN_01af33a8,1);
        FUN_004134c0(uVar17);
      }
      cVar2 = FUN_01af2a10(param_2[0x1e2]);
      if (cVar2 != '\0') {
        FUN_01341480(param_2);
        FUN_01af29f0(param_2[0x1e2],0);
      }
      if (((((param_2[0x282] != 0) && (*(char *)(param_2[0x282] + 0x79) != '\0')) &&
           (*(char *)(param_2[0x282] + 0x25) != '\0')) &&
          ((*(char *)((longlong)param_2 + 0x49c) != '\x01' && (local_2d == '\0')))) &&
         (local_1fa == '\0')) {
        FUN_01341ff0(param_2[0x282],(int)param_2[0x283]);
      }
      lVar13 = FUN_00b921a0(param_2[0x1e6]);
      param_2[0x1e4] = lVar13;
      if (*(char *)((longlong)param_2 + 0xed5) == '\x02') {
        local_590 = (double)FUN_0133dee0(param_2,&local_588);
        if (local_590 <= (double)param_2[0x72]) {
          uVar7 = FUN_0040c840((double)param_2[0x75] - 1.0);
          local_718 = (longlong *)CONCAT44(local_718._4_4_,uVar7);
          local_710 = (char *)param_2[0x2a8];
          FUN_011434d0(param_2[0x16],local_588,local_580,local_590);
          FUN_0129f2f0(param_1,param_2,local_588);
          *(int *)(param_2 + 0x29a) = (int)param_2[0x29a] + 1;
          param_2[0x2a6] =
               (longlong)((double)param_2[0x2a6] + (double)(int)param_2[0x2a7] / local_588);
          *(undefined1 *)(param_2 + 0x2a9) = 1;
        }
      }
    } while (((*(char *)((longlong)param_2 + 0x49c) != '\x01') &&
             ((double)param_2[0x72] < (double)param_2[0x71])) &&
            ((local_2e == 0 && (local_1fa == '\0'))));
    cVar2 = FUN_01b07dd0(param_2);
    if ((cVar2 != '\0') && (*(char *)((longlong)param_2 + 0x49c) == '\x01')) {
      uVar17 = FUN_014cdce0(param_2[0x1d]);
      _HDL_SetRuntimeSettings(uVar17,1);
    }
    if (local_1fa == '\0') {
      if (*PTR_DAT_02003ed0 != '\0') {
        FUN_016f8780(param_2);
      }
      param_2[0x84] = param_2[0x72];
      if (param_2[0x282] != 0) {
        plVar11 = (longlong *)param_2[0x282];
        if ((*(char *)(param_2[0x282] + 0x27) == '\0') &&
           ((*(char *)((longlong)param_2 + 0x49c) == '\x01' || (plVar11 = param_2, local_2d != '\0')
            ))) {
          uVar7 = 0;
        }
        else {
          uVar7 = (undefined4)CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
        }
        FUN_01342030(param_2[0x282],uVar7);
      }
      if ((char)param_2[0x2a4] == '\x03') {
        FUN_017cc940(param_2[0x16]);
        if (((*(char *)((longlong)param_2 + 0xed5) == '\0') ||
            (*(char *)((longlong)param_2 + 0xed5) == '\x01')) && (2 < (int)param_2[0x283])) {
          FUN_0129f6b0(param_2,param_2[0x2a5]);
        }
        if (((double)param_2[0x75] == *(double *)((longlong)param_2 + 0x695)) &&
           (*(char *)((longlong)param_2 + 0xed2) != '\0')) {
          FUN_013d2f60(param_2[0x16],0,0);
        }
      }
      if ((((*(char *)((longlong)param_2 + 0x5db) == '\x01') &&
           (*(char *)((longlong)param_2 + 0x69e) != '\0')) ||
          ((*(char *)((longlong)param_2 + 0x5db) == '\x02' &&
           (*(char *)((longlong)param_2 + 0x69f) != '\0')))) &&
         ((((double)param_2[0x75] <= *(double *)((longlong)param_2 + 0x695) &&
            *(double *)((longlong)param_2 + 0x695) != (double)param_2[0x75] &&
           (*(char *)((longlong)param_2 + 0x49c) == '\0')) && (local_2d == '\0')))) {
        cVar2 = FUN_01b07dd0(param_2);
        if (cVar2 == '\0') {
          if ((char)param_2[0x2a4] == '\x03') {
            if (*(char *)((longlong)param_2 + 0xed2) != '\0') {
              FUN_013d2f60(param_2[0x16],0,0);
            }
            local_718 = (longlong *)CONCAT71(local_718._1_7_,1);
            FUN_013d4bc0(param_2[0x1a],*(undefined2 *)((longlong)param_2 + 0x976),0,0);
            local_718 = (longlong *)0x0;
            local_710 = (char *)((ulonglong)local_710 & 0xffffffffffffff00);
            FUN_017cc020(param_2 + 0x1a,0xf);
          }
          else {
            FUN_017cc940(param_2[0x16]);
            uVar17 = FUN_013d2f60(param_2[0x16],0,0);
            if (param_1 < 8) {
              bVar15 = ((int)CONCAT71((int7)((ulonglong)uVar17 >> 8),1) << (param_1 & 0x1f) & 5U) !=
                       0;
            }
            else {
              bVar15 = false;
            }
            local_718 = (longlong *)0x0;
            local_710 = (char *)CONCAT71(local_710._1_7_,bVar15);
            FUN_017cc020(param_2 + 0x16,3);
          }
        }
        else {
          if ((char)param_2[0x2a4] == '\0') {
            local_718 = (longlong *)((ulonglong)local_718 & 0xffffffffffffff00);
            FUN_015f7080(param_2 + 0x18,param_2 + 0x19,1,param_2);
          }
          if ((char)param_2[0x2a4] == '\x03') {
            if (*(char *)((longlong)param_2 + 0xed2) != '\0') {
              FUN_013d2f60(param_2[0x16],0,0);
            }
            local_718 = (longlong *)CONCAT71(local_718._1_7_,1);
            FUN_013d4bc0(param_2[0x1a],*(undefined2 *)((longlong)param_2 + 0x976),0,0);
            local_718 = (longlong *)0x0;
            local_710 = (char *)((ulonglong)local_710 & 0xffffffffffffff00);
            FUN_017cc020(param_2 + 0x1a,0xf);
          }
          else {
            FUN_017cc940(param_2[0x16]);
            uVar17 = FUN_013e5a30(param_2[0x16],param_2[0x18],0,0);
            if (param_1 < 8) {
              bVar15 = ((int)CONCAT71((int7)((ulonglong)uVar17 >> 8),1) << (param_1 & 0x1f) & 5U) !=
                       0;
            }
            else {
              bVar15 = false;
            }
            local_718 = (longlong *)0x0;
            local_710 = (char *)CONCAT71(local_710._1_7_,bVar15);
            FUN_017cc020(param_2 + 0x16,3);
          }
        }
        local_5b8 = param_2 + 0xbb;
        if (*(byte *)((longlong)param_2 + 0x5db) < 8) {
          bVar15 = ((int)CONCAT71((int7)((ulonglong)local_5b8 >> 8),1) <<
                    (*(byte *)((longlong)param_2 + 0x5db) & 0x1f) & 0xdeU) != 0;
        }
        else {
          bVar15 = false;
        }
        if ((bVar15) && (*(char *)((longlong)param_2 + 0x5db) == '\x02')) {
          if (*(int *)(*(longlong *)(param_2[0x14] + 0x470) + 0x10) < 2) {
            if (*(longlong *)((longlong)param_2 + 0xa09) != 0) {
              iVar6 = FUN_01b07e10(param_2,*(undefined8 *)((longlong)param_2 + 0xa09));
              param_2[0x271] = *(longlong *)(param_2[0x56] + -8 + (longlong)iVar6 * 8);
              FUN_012b4370(param_2,param_2[0x271]);
            }
          }
          else {
            FUN_012b49a0(param_2[0xb1]);
          }
        }
      }
      param_2[0x75] = (longlong)((double)param_2[0x75] + 1.0);
    }
  } while( true );
}

