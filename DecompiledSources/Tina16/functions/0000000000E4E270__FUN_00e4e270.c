/* Ghidra address: 00e4e270 */
/* Ghidra symbol: FUN_00e4e270 */


void FUN_00e4e270(int *param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
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
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double unaff_XMM9_Qa;
  double dVar44;
  double unaff_XMM10_Qa;
  double dVar45;
  double dVar46;
  double unaff_XMM11_Qa;
  double dVar47;
  double dVar48;
  double unaff_XMM12_Qa;
  double unaff_XMM13_Qa;
  double dVar49;
  double dVar50;
  double unaff_XMM14_Qa;
  double dVar51;
  double dVar52;
  undefined4 uVar53;
  double local_6c8;
  double local_698;
  double local_690;
  double local_680;
  double local_678;
  double local_670;
  double local_668;
  double local_660;
  double local_658;
  double local_650;
  double local_648;
  double local_640;
  double local_638;
  double local_630;
  double local_628;
  double local_620;
  double local_610;
  double local_600;
  double local_5f8;
  double local_5f0;
  double local_5e8;
  double local_5e0;
  double local_5d8;
  double local_5d0;
  double local_5c8;
  double local_5c0;
  double local_5b8;
  double local_5b0;
  double local_5a8;
  double local_5a0;
  double local_598;
  double local_588;
  double local_568;
  double local_560;
  double local_550;
  double local_540;
  double local_538;
  double local_528;
  double local_520;
  double local_518;
  double local_510;
  double local_508;
  double local_500;
  double local_4f8;
  double local_4e8;
  double local_4e0;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  double local_4b0;
  double local_4a8;
  double local_4a0;
  double local_480;
  double local_478;
  double local_470;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  double local_410;
  double local_408;
  double local_400;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b0;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_378;
  double local_338;
  double local_330;
  double local_318;
  double local_310;
  double local_308;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2a0;
  double local_288;
  double local_278;
  double local_268;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_230;
  double local_228;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1d8;
  double local_1c8;
  double local_1c0;
  double local_1b0;
  double local_1a0;
  double local_190;
  double local_188;
  double local_150;
  double local_128;
  double local_110;
  byte local_103;
  byte local_102;
  byte local_101;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0 [19];
  
  local_5d8 = 0.0;
  local_5d0 = 0.0;
  local_5c8 = 0.0;
  local_630 = 0.0;
  local_600 = 0.0;
  local_5f0 = 0.0;
  local_5e8 = 0.0;
  local_5c0 = 0.0;
  local_5a8 = 0.0;
  local_5a0 = 0.0;
  local_5b0 = 0.0;
  local_598 = 0.0;
  local_678 = 0.0;
  local_698 = 0.0;
  local_680 = 0.0;
  local_690 = 0.0;
  local_5e0 = 0.0;
  local_250 = 0.0;
  local_110 = 0.0;
  dVar39 = 0.0;
  if (*(char *)(param_3 + 0x330) == '\0') {
LAB_00e4e463:
    if ((param_4 == 5) && ((*(byte *)(param_3 + 0x88) & 0x10) != 0)) goto LAB_00e4e485;
    bVar5 = false;
  }
  else {
    if (param_4 < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (param_4 & 0x1f) & 0xc0U) != 0;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) goto LAB_00e4e463;
LAB_00e4e485:
    bVar5 = true;
  }
  bVar1 = false;
  uVar3 = FUN_016eebb0(param_2,(short)param_1[0x4a],0);
  iVar2 = (int)uVar3;
  if ((byte)(param_4 - 8) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (param_4 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    if (param_4 != 0xc) {
      return;
    }
    if (param_1[0x51] == 0) {
      if (param_1[0x4f] == 0) {
        dVar37 = *(double *)(param_1 + 0x196);
        if (*(double *)(param_1 + 0x1f6) <= 0.0) {
          local_250 = 0.0;
        }
        else {
          local_250 = 1.0 / *(double *)(param_1 + 0x1f6);
          dVar39 = 0.0;
        }
      }
      else {
        dVar37 = *(double *)(param_1 + 0x372);
        local_250 = 0.0;
      }
    }
    else {
      local_f0 = (*(double *)(param_1 + 0x390) / *(double *)(param_1 + 0x38c)) *
                 (*(double *)(param_1 + 0x390) / *(double *)(param_1 + 0x38c));
      dVar39 = *(double *)(param_1 + 0x3b2) *
               (local_f0 * *(double *)(param_1 + 0x3ae) * *(double *)(param_1 + 0x60) + 1.0);
      local_110 = *(double *)(param_1 + 0x3b4) *
                  (local_f0 * *(double *)(param_1 + 0x3b0) * *(double *)(param_1 + 0x60) + 1.0);
      if (0.9 < local_110) {
        local_110 = 0.9;
      }
      if (dVar39 * 0.9 < local_110) {
        local_110 = dVar39 * 0.9;
      }
      if (param_1[0x4f] == 0) {
        dVar37 = *(double *)(param_1 + 0x196);
      }
      else {
        dVar37 = *(double *)(param_1 + 0x372);
      }
      dVar40 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
      if (dVar40 < 0.0) {
        dVar37 = dVar37 * ((local_110 * local_110 * dVar37) / *(double *)(param_1 + 0x21e) + 1.0);
      }
    }
    dVar40 = *(double *)(param_1 + 0x3ba);
    dVar44 = *(double *)(param_1 + 0x5e);
    if (*(char *)((longlong)param_1 + 0xf) != *(char *)((longlong)param_1 + 0xb)) {
      uVar3 = FUN_0040c760();
      FUN_016ed220(param_2,*(char *)((longlong)param_1 + 0x16d) + '\x01',uVar3,0);
    }
    if ((char)param_1[4] != (char)param_1[3]) {
      uVar3 = FUN_0040c760(dVar40 * 5.5224904e-23 * dVar37 * dVar44);
      FUN_016ed220(param_2,(char)param_1[0x5b] + '\x01',uVar3,0);
    }
    if (param_1[0x53] == 1) {
      if (*(char *)((longlong)param_1 + 0x11) != *(char *)((longlong)param_1 + 0xd)) {
        uVar3 = FUN_0040c760();
        FUN_016ed220(param_2,*(char *)((longlong)param_1 + 0x16e) + '\x01',uVar3,0);
      }
    }
    else if (param_1[0x53] == 2) {
      local_d0 = *(double *)(param_1 + 0x18a) / *(double *)(param_1 + 0x37c) + 1.0;
      local_d0 = local_d0 * local_d0;
      if (*(char *)((longlong)param_1 + 0x11) != *(char *)((longlong)param_1 + 0xd)) {
        uVar3 = FUN_0040c760();
        FUN_016ed220(param_2,*(char *)((longlong)param_1 + 0x16e) + '\x01',uVar3,0);
      }
    }
    else if ((param_1[0x53] == 3) &&
            (*(char *)((longlong)param_1 + 0x11) != *(char *)((longlong)param_1 + 0xd))) {
      uVar3 = FUN_0040c760();
      FUN_016ed220(param_2,*(char *)((longlong)param_1 + 0x16f) + '\x01',uVar3,0);
    }
    iVar2 = 5;
    if (param_1[0x4b] == 2) {
      if ((*(char *)((longlong)param_1 + 0x1265) == '\0') ||
         (*(char *)((longlong)param_1 + 0x1266) == '\0')) {
        iVar2 = 1;
      }
      else if (((*(char *)((longlong)param_1 + 0x1267) == '\0') && ((char)param_1[0x49a] == '\0'))
              || ((*(char *)((longlong)param_1 + 0x1269) == '\0' &&
                  (*(char *)((longlong)param_1 + 0x126a) == '\0')))) {
        iVar2 = 3;
      }
    }
    if (param_1[0x4b] < 1) {
      unaff_XMM12_Qa = 0.0;
      unaff_XMM10_Qa = 0.0;
      unaff_XMM11_Qa = 0.0;
      unaff_XMM13_Qa = 0.0;
      unaff_XMM14_Qa = 0.0;
    }
    else {
      if (iVar2 == 5) {
        unaff_XMM10_Qa =
             *(double *)(param_1 + 0x3ba) * 5.5224904e-23 * *(double *)(param_1 + 0x184) *
             *(double *)(param_1 + 0x5e);
        unaff_XMM11_Qa =
             *(double *)(param_1 + 0x3ba) * 5.5224904e-23 * *(double *)(param_1 + 0x188) *
             *(double *)(param_1 + 0x5e);
        unaff_XMM12_Qa =
             *(double *)(param_1 + 0x3ba) * 5.5224904e-23 * *(double *)(param_1 + 0x182) *
             *(double *)(param_1 + 0x5e);
        unaff_XMM13_Qa =
             *(double *)(param_1 + 0x3ba) * 5.5224904e-23 * *(double *)(param_1 + 0x186) *
             *(double *)(param_1 + 0x5e);
        unaff_XMM14_Qa =
             *(double *)(param_1 + 0x3ba) * 5.5224904e-23 * *(double *)(param_1 + 0x180) *
             *(double *)(param_1 + 0x5e);
      }
      if (iVar2 == 3) {
        unaff_XMM10_Qa =
             *(double *)(param_1 + 0x3ba) * 5.5224904e-23 * *(double *)(param_1 + 0x184) *
             *(double *)(param_1 + 0x5e);
        unaff_XMM11_Qa =
             *(double *)(param_1 + 0x3ba) * 5.5224904e-23 * *(double *)(param_1 + 0x188) *
             *(double *)(param_1 + 0x5e);
        unaff_XMM12_Qa =
             *(double *)(param_1 + 0x3ba) * 5.5224904e-23 * *(double *)(param_1 + 0x182) *
             *(double *)(param_1 + 0x5e);
        unaff_XMM13_Qa = 0.0;
        unaff_XMM14_Qa = 0.0;
      }
      if (iVar2 == 1) {
        unaff_XMM12_Qa =
             *(double *)(param_1 + 0x3ba) * 5.5224904e-23 * *(double *)(param_1 + 0x182) *
             *(double *)(param_1 + 0x5e);
        unaff_XMM10_Qa = 0.0;
        unaff_XMM11_Qa = 0.0;
        unaff_XMM13_Qa = 0.0;
        unaff_XMM14_Qa = 0.0;
      }
    }
    if (*(char *)((longlong)param_1 + 0x12) != *(char *)((longlong)param_1 + 0xe)) {
      uVar3 = FUN_0040c760(unaff_XMM12_Qa);
      FUN_016ed220(param_2,*(char *)((longlong)param_1 + 0x172) + '\x01',uVar3,0);
    }
    if (*(char *)((longlong)param_1 + 0x16a) != *(char *)((longlong)param_1 + 0xe)) {
      uVar3 = FUN_0040c760(unaff_XMM14_Qa);
      FUN_016ed220(param_2,(char)param_1[0x5d] + '\x01',uVar3,0);
      uVar3 = FUN_0040c760(unaff_XMM11_Qa);
      FUN_016ed220(param_2,*(char *)((longlong)param_1 + 0x171) + '\x01',uVar3,0);
    }
    if (*(char *)((longlong)param_1 + 0x169) != *(char *)((longlong)param_1 + 0xe)) {
      uVar3 = FUN_0040c760(unaff_XMM13_Qa);
      FUN_016ed220(param_2,*(char *)((longlong)param_1 + 0x173) + '\x01',uVar3,0);
      uVar3 = FUN_0040c760(unaff_XMM10_Qa);
      FUN_016ed220(param_2,(char)param_1[0x5c] + '\x01',uVar3,0);
    }
    if (param_1[0x51] == 0) {
      dVar39 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x26c));
      local_d0 = *(double *)(param_1 + 0x1fa) * dVar39 * local_250 +
                 *(double *)(param_1 + 0x60) * *(double *)(param_1 + 0x60);
      unaff_XMM9_Qa =
           *(double *)(param_1 + 0x3ba) * 5.5224904e-23 * *(double *)(param_1 + 0x5e) *
           ((*(double *)(param_1 + 0x1fa) * dVar39) / local_d0) * *(double *)(param_1 + 0x3b6);
    }
    else if (param_1[0x51] == 1) {
      dVar37 = *(double *)(param_1 + 0x22) + *(double *)(param_1 + 0x26) +
               *(double *)(param_1 + 0x24);
      local_d0 = dVar39 * (*(double *)(param_1 + 0x22) + *(double *)(param_1 + 0x26)) +
                 *(double *)(param_1 + 0x24);
      local_d8 = (local_d0 * local_d0) / *(double *)(param_1 + 0x21e);
      unaff_XMM9_Qa =
           *(double *)(param_1 + 0x3ba) * 5.5224904e-23 * *(double *)(param_1 + 0x5e) *
           (local_d8 - (local_110 * local_110 * dVar37 * dVar37) / *(double *)(param_1 + 0x21e));
    }
    if (param_1[0x52] == 0) {
      uVar3 = FUN_0040c850(*(undefined8 *)(param_1 + 0x20));
      FUN_00b90620(uVar3,0x380b38fb9daa78e4);
      dVar39 = (double)FUN_0040c2f0();
      dVar39 = (double)FUN_0040af80(*(double *)(param_1 + 0x3a4) * dVar39);
      uVar3 = FUN_016ed7f0(param_3,0xc);
      dVar37 = (double)FUN_00c42670(uVar3,*(undefined8 *)(param_1 + 0x3a0));
      unaff_XMM9_Qa =
           unaff_XMM9_Qa +
           (*(double *)(param_1 + 0x5e) * *(double *)(param_1 + 0x3a2) * dVar39) /
           (dVar37 * *(double *)(param_1 + 0x60) * *(double *)(param_1 + 0x60) *
           *(double *)(param_1 + 0x208));
    }
    else if (param_1[0x52] == 1) {
      local_4f8 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
      if (local_4f8 < 0.0) {
        local_4f8 = -local_4f8;
      }
      uVar3 = FUN_016ed7f0(param_3,0xc);
      dVar39 = (double)FUN_00e46760(local_4f8,uVar3,*(undefined8 *)(param_1 + 0x3ba),param_1);
      local_100 = *(double *)(param_1 + 0x3a8) * 1.3806226e-23 * *(double *)(param_1 + 0x3ba);
      uVar3 = FUN_016ed7f0(param_3,0xc);
      dVar37 = (double)FUN_00c42670(uVar3,*(undefined8 *)(param_1 + 0x3a0));
      dVar37 = (local_100 /
               (*(double *)(param_1 + 0x62) * *(double *)(param_1 + 0x74) *
                *(double *)(param_1 + 0x60) * dVar37 * 10000000000.0 * *(double *)(param_1 + 0x1ee)
               * *(double *)(param_1 + 0x1ee))) * *(double *)(param_1 + 0x20) *
               *(double *)(param_1 + 0x20);
      local_d0 = dVar37 + dVar39;
      if (0.0 < local_d0) {
        unaff_XMM9_Qa = unaff_XMM9_Qa + (*(double *)(param_1 + 0x5e) * dVar39 * dVar37) / local_d0;
      }
    }
    uVar3 = FUN_0040c760(unaff_XMM9_Qa);
    FUN_016ed220(param_2,(char)param_1[2] + '\x02',uVar3,0);
    if (param_1[1] < 0) {
      FUN_0040c850(*(double *)(param_1 + 0x5e) *
                   (*(double *)(param_1 + 0x25e) + *(double *)(param_1 + 0x256)));
      FUN_0040c850(*(double *)(param_1 + 0x5e) *
                   (*(double *)(param_1 + 0x264) + *(double *)(param_1 + 0x24e)));
    }
    else {
      FUN_0040c850(*(double *)(param_1 + 0x5e) *
                   (*(double *)(param_1 + 0x25e) + *(double *)(param_1 + 0x24e)));
      FUN_0040c850(*(double *)(param_1 + 0x5e) *
                   (*(double *)(param_1 + 0x264) + *(double *)(param_1 + 0x256)));
    }
    FUN_0040c850(*(double *)(param_1 + 0x5e) * *(double *)(param_1 + 0x26a));
    return;
  }
  if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
    if ((char)param_1[0x498] == '\0') {
      uVar3 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xb),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x492) = uVar3;
    }
    if (*(char *)((longlong)param_1 + 0x1261) == '\0') {
      uVar3 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xd),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x494) = uVar3;
    }
    if (*(char *)((longlong)param_1 + 0x1262) != '\0') {
      return;
    }
    uVar3 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                         *(undefined1 *)((longlong)param_1 + 0xe),(char)param_1[3],0);
    *(undefined8 *)(param_1 + 0x496) = uVar3;
    return;
  }
  if ((*(byte *)(param_3 + 0x88) & 0x40) == 0) {
    if ((*(char *)(param_3 + 0x327) == '\0') && ((*(byte *)(param_3 + 0x88) & 0x80) != 0)) {
      dVar39 = (double)FUN_01b08a30(param_3,1);
      dVar39 = *(double *)(param_3 + 0x10) / dVar39;
      uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 4,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,uVar3,0);
      local_658 = (dVar39 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 4) * 8) -
                  dVar39 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 4) * 8);
      uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 3,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 3,uVar3,0);
      local_668 = (dVar39 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 3) * 8) -
                  dVar39 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 3) * 8);
      uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 8,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 8,uVar3,0);
      local_660 = (dVar39 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 8) * 8) -
                  dVar39 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 8) * 8);
      uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 9,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 9,uVar3,0);
      local_648 = (dVar39 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 9) * 8) -
                  dVar39 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 9) * 8);
      uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 2,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 2,uVar3,0);
      local_650 = (dVar39 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 2) * 8) -
                  dVar39 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 2) * 8);
      dVar37 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 2,0);
      dVar40 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 1,dVar37 - dVar40,0);
      uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 5,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 5,uVar3,0);
      local_640 = (dVar39 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 5) * 8) -
                  dVar39 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 5) * 8);
      dVar37 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 5,0);
      dVar40 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 6,dVar37 - dVar40,0);
      uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 7,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 7,uVar3,0);
      local_638 = (dVar39 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 7) * 8) -
                  dVar39 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 7) * 8);
      uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 10,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 10,uVar3,0);
      local_628 = (dVar39 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 10) * 8) -
                  dVar39 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 10) * 8);
      uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0xb,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xb,uVar3,0);
      local_620 = (dVar39 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 0xb) * 8) -
                  dVar39 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 0xb) * 8)
      ;
      uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0x1c,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x1c,uVar3,0);
      *(double *)(param_1 + 0x2ac) =
           (dVar39 + 1.0) *
           *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 0x1c) * 8) -
           dVar39 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 0x1c) * 8);
      *(undefined8 *)(param_1 + 0x12) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 2) * 8);
      *(undefined8 *)(param_1 + 0xe) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 3) * 8);
      *(undefined8 *)(param_1 + 0x16) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 4) * 8);
      *(undefined8 *)(param_1 + 0x14) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 1) * 8);
      goto LAB_00e51daa;
    }
    if ((*(byte *)(param_3 + 0x88) & 2) != 0) {
      if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
        if (*(char *)((longlong)param_1 + 10) == '\0') {
          local_658 = 0.1;
          local_620 = 0.11;
          local_628 = -0.01;
          local_668 = (double)*param_1 * *(double *)(param_1 + 0x32) + 0.1;
          local_638 = 0.0;
          local_640 = 0.0;
          local_650 = 0.0;
          local_660 = local_668;
          local_648 = local_668;
        }
        else {
          local_650 = 0.0;
          local_668 = 0.0;
          local_658 = 0.0;
          local_660 = 0.0;
          local_648 = 0.0;
          param_1[0x2ac] = 0;
          param_1[0x2ad] = 0;
          local_628 = 0.0;
          local_620 = 0.0;
          local_638 = 0.0;
          local_640 = 0.0;
        }
      }
      else {
        local_650 = (double)*param_1 * *(double *)(param_1 + 0x496);
        local_668 = (double)*param_1 * *(double *)(param_1 + 0x494);
        local_658 = (double)*param_1 * *(double *)(param_1 + 0x492);
        if (local_658 <= 0.0) {
          if (0.0 <= local_658) {
            local_628 = 0.0;
            local_620 = 0.0;
          }
          else {
            local_620 = local_658 - 0.01;
            local_628 = 0.01;
          }
        }
        else {
          local_620 = local_658 + 0.01;
          local_628 = -0.01;
        }
        param_1[0x2ac] = 0;
        param_1[0x2ad] = 0;
        local_660 = local_668;
        local_648 = local_668;
        local_640 = local_650;
        local_638 = local_650;
      }
      goto LAB_00e51daa;
    }
    if (((*(byte *)(param_3 + 0x88) & 4) != 0) && (*(char *)((longlong)param_1 + 10) != '\0')) {
      local_650 = 0.0;
      local_668 = 0.0;
      local_658 = 0.0;
      local_660 = 0.0;
      local_648 = 0.0;
      param_1[0x2ac] = 0;
      param_1[0x2ad] = 0;
      local_628 = 0.0;
      local_620 = 0.0;
      local_638 = 0.0;
      local_640 = 0.0;
      goto LAB_00e51daa;
    }
    dVar37 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                  *(undefined1 *)((longlong)param_1 + 0xf),(char)param_1[4],0);
    dVar37 = (double)*param_1 * dVar37;
    dVar40 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                  *(undefined1 *)((longlong)param_1 + 0x11),(char)param_1[4],0);
    dVar40 = (double)*param_1 * dVar40;
    dVar44 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                  *(undefined1 *)((longlong)param_1 + 0x12),(char)param_1[4],0);
    dVar44 = (double)*param_1 * dVar44;
    local_660 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                     *(undefined1 *)((longlong)param_1 + 0xd),(char)param_1[4],0);
    local_660 = (double)*param_1 * local_660;
    local_648 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                     *(undefined1 *)((longlong)param_1 + 0x16b),(char)param_1[4],0);
    local_648 = (double)*param_1 * local_648;
    local_640 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                     *(undefined1 *)((longlong)param_1 + 0x16a),(char)param_1[4],0);
    local_640 = (double)*param_1 * local_640;
    local_638 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                     *(undefined1 *)((longlong)param_1 + 0x169),(char)param_1[4],0);
    local_638 = (double)*param_1 * local_638;
    local_628 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                                     (char)param_1[4],0);
    local_628 = (double)*param_1 * local_628;
    local_620 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                     *(undefined1 *)((longlong)param_1 + 0xb),(char)param_1[4],0);
    local_620 = (double)*param_1 * local_620;
    dVar39 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[0x5a],0,0);
    *(double *)(param_1 + 0x2ac) = (double)*param_1 * dVar39;
    dVar45 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 3,0);
    dVar47 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
    dVar19 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 8,0);
    dVar49 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
    dVar38 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 9,0);
    dVar8 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
    dVar20 = dVar44 - dVar37;
    dVar36 = local_640 - dVar37;
    dVar11 = dVar40 - dVar37;
    local_588 = local_660 - dVar37;
    dVar9 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 1,0);
    dVar9 = dVar20 - dVar9;
    dVar10 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 6,0);
    dVar51 = dVar11 - (dVar45 - dVar47);
    dVar21 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
    dVar21 = dVar37 - dVar21;
    dVar41 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 3,0);
    dVar41 = dVar40 - dVar41;
    dVar46 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 8,0);
    dVar31 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 9,0);
    dVar32 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 2,0);
    dVar32 = dVar44 - dVar32;
    dVar50 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 5,0);
    dVar16 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 7,0);
    dVar26 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 10,0);
    dVar12 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xb,0);
    dVar22 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
    dVar48 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xb,0);
    dVar39 = dVar36 - dVar10;
    if (param_1[0x4b] == 0) {
      dVar39 = dVar9;
    }
    dVar13 = local_638 - dVar16;
    if (param_1[0x4b] == 0) {
      dVar13 = dVar32;
    }
    if (param_1[1] < 0) {
      local_568 = (*(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x1c)) -
                  *(double *)(param_1 + 0x23e);
      local_540 = (((local_568 + *(double *)(param_1 + 0x1e) * dVar39 +
                     *(double *)(param_1 + 0x26) * dVar9 + *(double *)(param_1 + 0x22) * dVar51) -
                   (*(double *)(param_1 + 0x24) + *(double *)(param_1 + 0x276)) * dVar21) -
                  *(double *)(param_1 + 0x242) * dVar41) - *(double *)(param_1 + 0x244) * dVar32;
      local_560 = (((*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c)) -
                   *(double *)(param_1 + 0x23e)) - *(double *)(param_1 + 0x246)) -
                  *(double *)(param_1 + 0x216);
      dVar13 = (((((local_560 + *(double *)(param_1 + 0x1a) * dVar13 +
                   *(double *)(param_1 + 0x1e) * dVar39) -
                  (*(double *)(param_1 + 0x218) + *(double *)(param_1 + 0x24c)) * dVar9) -
                 (*(double *)(param_1 + 0x21a) + *(double *)(param_1 + 0x24a)) * dVar51) +
                ((*(double *)(param_1 + 0x21c) + *(double *)(param_1 + 0x278)) -
                *(double *)(param_1 + 0x276)) * dVar21) - *(double *)(param_1 + 0x242) * dVar41) -
               *(double *)(param_1 + 0x244) * dVar32;
      local_520 = *(double *)(param_1 + 0x25e) + *(double *)(param_1 + 0x256);
      local_508 = ((local_520 + *(double *)(param_1 + 0x260) * dVar41 +
                   *(double *)(param_1 + 600) * dVar51) - *(double *)(param_1 + 0x25a) * dVar21) +
                  *(double *)(param_1 + 0x25c) * dVar9;
      local_518 = *(double *)(param_1 + 0x264) + *(double *)(param_1 + 0x24e);
      local_4b0 = ((local_518 +
                   (*(double *)(param_1 + 0x266) + *(double *)(param_1 + 0x250)) * dVar51) -
                  *(double *)(param_1 + 0x252) * dVar21) + *(double *)(param_1 + 0x254) * dVar9;
      dVar39 = *(double *)(param_1 + 0x26a);
      dVar51 = ((*(double *)(param_1 + 0x26a) + *(double *)(param_1 + 0x26e) * dVar51) -
               *(double *)(param_1 + 0x270) * dVar21) + *(double *)(param_1 + 0x272) * dVar9;
    }
    else {
      local_568 = ((*(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x216)) -
                  *(double *)(param_1 + 0x1c)) + *(double *)(param_1 + 0x23e);
      local_540 = (local_568 - *(double *)(param_1 + 0x1e) * dVar39) +
                  (*(double *)(param_1 + 0x26) + *(double *)(param_1 + 0x218) +
                  *(double *)(param_1 + 0x244)) * dVar32 +
                  (*(double *)(param_1 + 0x22) + *(double *)(param_1 + 0x21a) +
                  *(double *)(param_1 + 0x242)) * dVar41 +
                  (*(double *)(param_1 + 0x24) + *(double *)(param_1 + 0x21c) +
                  *(double *)(param_1 + 0x240)) * dVar21;
      local_560 = (((*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c)) -
                   *(double *)(param_1 + 0x23e)) - *(double *)(param_1 + 0x246)) -
                  *(double *)(param_1 + 0x216);
      dVar13 = (((((local_560 + *(double *)(param_1 + 0x1e) * dVar39 +
                   *(double *)(param_1 + 0x1a) * dVar13) -
                  (*(double *)(param_1 + 0x218) + *(double *)(param_1 + 0x244)) * dVar32) -
                 (*(double *)(param_1 + 0x21a) + *(double *)(param_1 + 0x242)) * dVar41) -
                ((*(double *)(param_1 + 0x21c) + *(double *)(param_1 + 0x240)) -
                *(double *)(param_1 + 0x248)) * dVar21) - *(double *)(param_1 + 0x24a) * dVar51) -
               *(double *)(param_1 + 0x24c) * dVar9;
      local_520 = *(double *)(param_1 + 0x25e) + *(double *)(param_1 + 0x24e);
      local_508 = local_520 + (*(double *)(param_1 + 0x260) + *(double *)(param_1 + 0x250)) * dVar41
                  + *(double *)(param_1 + 0x252) * dVar21 + *(double *)(param_1 + 0x254) * dVar32;
      local_518 = *(double *)(param_1 + 0x264) + *(double *)(param_1 + 0x256);
      local_4b0 = local_518 + *(double *)(param_1 + 0x266) * dVar51 +
                  *(double *)(param_1 + 600) * dVar41 + *(double *)(param_1 + 0x25a) * dVar21 +
                  *(double *)(param_1 + 0x25c) * dVar32;
      dVar39 = *(double *)(param_1 + 0x26a);
      dVar51 = *(double *)(param_1 + 0x26a) + *(double *)(param_1 + 0x26e) * dVar41 +
               *(double *)(param_1 + 0x270) * dVar21 + *(double *)(param_1 + 0x272) * dVar32;
    }
    dVar14 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 10,0);
    dVar14 = *(double *)(param_1 + 0x22a) * dVar14;
    dVar23 = dVar14 + *(double *)(param_1 + 0x22a) * (local_628 - dVar26) +
             *(double *)(param_1 + 0x22e) * dVar21 + *(double *)(param_1 + 0x230) * dVar41 +
             *(double *)(param_1 + 0x234) * dVar32;
    dVar15 = *(double *)(param_1 + 0x22c) * (dVar12 - dVar22);
    dVar12 = dVar15 + *(double *)(param_1 + 0x22c) * ((local_620 - dVar37) - (dVar12 - dVar22)) +
             *(double *)(param_1 + 0x236) * dVar21 + *(double *)(param_1 + 0x238) * dVar41 +
             *(double *)(param_1 + 0x23c) * dVar32;
    lVar4 = FUN_0040c770(*(undefined8 *)(param_3 + 0x6e0));
    if (lVar4 == 0) {
LAB_00e513ad:
      if (*(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 4) * 8) < 0.0) {
        local_668 = (double)FUN_00c432f0(dVar11,dVar45 - dVar47,*(undefined8 *)(param_1 + 0x38),
                                         &local_101);
        if (local_101 != 0) {
          FUN_016e9f80(param_2,param_3,local_101,0);
        }
        local_658 = (double)FUN_00c43230(-(dVar40 - local_668),
                                         *(ulonglong *)
                                          (*(longlong *)(param_3 + 0x1b8) +
                                          (longlong)(iVar2 + 4) * 8) ^ 0x8000000000000000,&local_101
                                        );
        local_658 = -local_658;
        if (local_101 != 0) {
          FUN_016e9f80(param_2,param_3,local_101,0);
        }
        local_668 = local_668 + local_658;
        if (param_1[0x53] == 3) {
          local_588 = (double)FUN_00c432f0(local_588,dVar19 - dVar49,*(undefined8 *)(param_1 + 0x38)
                                           ,&local_101);
          if (local_101 != 0) {
            FUN_016e9f80(param_2,param_3,local_101,0);
          }
          local_660 = local_588 + local_658;
          local_648 = (double)FUN_00c432f0(local_648 - dVar37,dVar38 - dVar8,
                                           *(undefined8 *)(param_1 + 0x38),&local_101);
          if (local_101 != 0) {
            FUN_016e9f80(param_2,param_3,local_101,0);
          }
          local_648 = local_648 + local_658;
        }
        if ((param_1[0x53] == 1) || (param_1[0x53] == 2)) {
          local_660 = (double)FUN_00c432f0(local_588,dVar19 - dVar49,*(undefined8 *)(param_1 + 0x38)
                                           ,&local_101);
          if (local_101 != 0) {
            FUN_016e9f80(param_2,param_3,local_101,0);
          }
          local_660 = local_660 + local_658;
        }
        if (0 < param_1[0x4f]) {
          local_620 = (double)FUN_00c43230(-local_620,
                                           *(ulonglong *)
                                            (*(longlong *)(param_3 + 0x1b8) +
                                            (longlong)(iVar2 + 0xb) * 8) ^ 0x8000000000000000,
                                           &local_101);
          local_620 = -local_620;
          if (local_101 != 0) {
            FUN_016e9f80(param_2,param_3,local_101,0);
          }
          local_628 = (double)FUN_00c43230(local_628,
                                           *(undefined8 *)
                                            (*(longlong *)(param_3 + 0x1b8) +
                                            (longlong)(iVar2 + 10) * 8),&local_101);
          if (local_101 != 0) {
            FUN_016e9f80(param_2,param_3,local_101,0);
          }
        }
      }
      else {
        local_668 = (double)FUN_00c432f0(dVar40,*(undefined8 *)
                                                 (*(longlong *)(param_3 + 0x1b8) +
                                                 (longlong)(iVar2 + 3) * 8),
                                         *(undefined8 *)(param_1 + 0x38),&local_101);
        if (local_101 != 0) {
          FUN_016e9f80(param_2,param_3,local_101,0);
        }
        local_658 = (double)FUN_00c43230(local_668 - dVar11,
                                         *(undefined8 *)
                                          (*(longlong *)(param_3 + 0x1b8) +
                                          (longlong)(iVar2 + 4) * 8),&local_101);
        if (local_101 != 0) {
          FUN_016e9f80(param_2,param_3,local_101,0);
        }
        if (param_1[0x53] == 3) {
          local_660 = (double)FUN_00c432f0(local_660,
                                           *(undefined8 *)
                                            (*(longlong *)(param_3 + 0x1b8) +
                                            (longlong)(iVar2 + 8) * 8),
                                           *(undefined8 *)(param_1 + 0x38),&local_101);
          if (local_101 != 0) {
            FUN_016e9f80(param_2,param_3,local_101,0);
          }
          local_648 = (double)FUN_00c432f0(local_648,
                                           *(undefined8 *)
                                            (*(longlong *)(param_3 + 0x1b8) +
                                            (longlong)(iVar2 + 9) * 8),
                                           *(undefined8 *)(param_1 + 0x38),&local_101);
          if (local_101 != 0) {
            FUN_016e9f80(param_2,param_3,local_101,0);
          }
        }
        else if (((param_1[0x53] == 1) || (param_1[0x53] == 2)) &&
                (local_660 = (double)FUN_00c432f0(local_660,
                                                  *(undefined8 *)
                                                   (*(longlong *)(param_3 + 0x1b8) +
                                                   (longlong)(iVar2 + 8) * 8),
                                                  *(undefined8 *)(param_1 + 0x38),&local_101),
                local_101 != 0)) {
          FUN_016e9f80(param_2,param_3,local_101,0);
        }
        if (0 < param_1[0x4f]) {
          local_620 = (double)FUN_00c43230(local_620,
                                           *(undefined8 *)
                                            (*(longlong *)(param_3 + 0x1b8) +
                                            (longlong)(iVar2 + 0xb) * 8),&local_101);
          if (local_101 != 0) {
            FUN_016e9f80(param_2,param_3,local_101,0);
          }
          local_628 = (double)FUN_00c43230(-local_628,
                                           *(ulonglong *)
                                            (*(longlong *)(param_3 + 0x1b8) +
                                            (longlong)(iVar2 + 10) * 8) ^ 0x8000000000000000,
                                           &local_101);
          local_628 = -local_628;
          if (local_101 != 0) {
            FUN_016e9f80(param_2,param_3,local_101,0);
          }
        }
      }
      if (local_658 < 0.0) {
        local_650 = (double)FUN_00c42ff0(dVar20,*(undefined8 *)
                                                 (*(longlong *)(param_3 + 0x1b8) +
                                                 (longlong)(iVar2 + 1) * 8),0x3f9a7c24465ee362,
                                         *(undefined8 *)(param_1 + 0x34),&local_101);
        if (local_101 != 0) {
          FUN_016e9f80(param_2,param_3,local_101,0);
        }
        local_650 = local_650 + local_658;
        if (0 < param_1[0x4b]) {
          local_640 = (double)FUN_00c42ff0(dVar36,*(undefined8 *)
                                                   (*(longlong *)(param_3 + 0x1b8) +
                                                   (longlong)(iVar2 + 6) * 8),0x3f9a7c24465ee362,
                                           *(undefined8 *)(param_1 + 0x34),&local_102);
          local_640 = local_640 + local_658;
          local_638 = (double)FUN_00c42ff0(local_638 - local_658,
                                           *(double *)
                                            (*(longlong *)(param_3 + 0x1b8) +
                                            (longlong)(iVar2 + 7) * 8) -
                                           *(double *)
                                            (*(longlong *)(param_3 + 0x1b8) +
                                            (longlong)(iVar2 + 4) * 8),0x3f9a7c24465ee362,
                                           *(undefined8 *)(param_1 + 0x34),&local_103);
          local_638 = local_638 + local_658;
          local_101 = local_102 | local_103;
          if (local_101 != 0) {
            FUN_016e9f80(param_2,param_3,local_101,0);
          }
        }
      }
      else {
        local_650 = (double)FUN_00c42ff0(dVar44,*(undefined8 *)
                                                 (*(longlong *)(param_3 + 0x1b8) +
                                                 (longlong)(iVar2 + 2) * 8),0x3f9a7c24465ee362,
                                         *(undefined8 *)(param_1 + 0x34),&local_101);
        if (local_101 != 0) {
          FUN_016e9f80(param_2,param_3,local_101,0);
        }
        if (0 < param_1[0x4b]) {
          local_640 = (double)FUN_00c42ff0(local_640,
                                           *(undefined8 *)
                                            (*(longlong *)(param_3 + 0x1b8) +
                                            (longlong)(iVar2 + 5) * 8),0x3f9a7c24465ee362,
                                           *(undefined8 *)(param_1 + 0x34),&local_102);
          local_638 = (double)FUN_00c42ff0(local_638,
                                           *(undefined8 *)
                                            (*(longlong *)(param_3 + 0x1b8) +
                                            (longlong)(iVar2 + 7) * 8),0x3f9a7c24465ee362,
                                           *(undefined8 *)(param_1 + 0x34),&local_103);
          local_101 = local_102 | local_103;
          if (local_101 != 0) {
            FUN_016e9f80(param_2,param_3,local_101,0);
          }
        }
      }
      goto LAB_00e51daa;
    }
    dVar21 = (double)FUN_0040c850(dVar21);
    uVar3 = FUN_0040c850(dVar37);
    FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
    uVar7 = FUN_0040c850();
    dVar22 = (double)FUN_00b90620(uVar3,uVar7);
    if (*(double *)(param_3 + 0x3c8) * dVar22 + *(double *)(param_3 + 0x3d0) <= dVar21)
    goto LAB_00e513ad;
    dVar21 = (double)FUN_0040c850(dVar41);
    uVar3 = FUN_0040c850(dVar40);
    FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 3,0);
    uVar7 = FUN_0040c850();
    dVar41 = (double)FUN_00b90620(uVar3,uVar7);
    if (*(double *)(param_3 + 0x3c8) * dVar41 + *(double *)(param_3 + 0x3d0) <= dVar21)
    goto LAB_00e513ad;
    dVar21 = (double)FUN_0040c850(dVar32);
    uVar3 = FUN_0040c850(dVar44);
    FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 2,0);
    uVar7 = FUN_0040c850();
    dVar41 = (double)FUN_00b90620(uVar3,uVar7);
    if (*(double *)(param_3 + 0x3c8) * dVar41 + *(double *)(param_3 + 0x3d0) <= dVar21)
    goto LAB_00e513ad;
    dVar9 = (double)FUN_0040c850(dVar9);
    uVar3 = FUN_0040c850(dVar20);
    FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 1,0);
    uVar7 = FUN_0040c850();
    dVar21 = (double)FUN_00b90620(uVar3,uVar7);
    if (*(double *)(param_3 + 0x3c8) * dVar21 + *(double *)(param_3 + 0x3d0) <= dVar9)
    goto LAB_00e513ad;
    if ((param_1[0x53] != 0) && (param_1[0x53] != 1)) {
      dVar9 = (double)FUN_0040c850(local_660 - dVar46);
      uVar3 = FUN_0040c850(local_660);
      FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 8,0);
      uVar7 = FUN_0040c850();
      dVar21 = (double)FUN_00b90620(uVar3,uVar7);
      if (*(double *)(param_3 + 0x3c8) * dVar21 + *(double *)(param_3 + 0x3d0) <= dVar9)
      goto LAB_00e513ad;
    }
    if (param_1[0x53] == 3) {
      dVar9 = (double)FUN_0040c850(local_648 - dVar31);
      uVar3 = FUN_0040c850(local_648);
      FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 9,0);
      uVar7 = FUN_0040c850();
      dVar21 = (double)FUN_00b90620(uVar3,uVar7);
      if (*(double *)(param_3 + 0x3c8) * dVar21 + *(double *)(param_3 + 0x3d0) <= dVar9)
      goto LAB_00e513ad;
    }
    if (param_1[0x4b] != 0) {
      dVar9 = (double)FUN_0040c850(local_640 - dVar50);
      uVar3 = FUN_0040c850(local_640);
      FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 5,0);
      uVar7 = FUN_0040c850();
      dVar21 = (double)FUN_00b90620(uVar3,uVar7);
      if (*(double *)(param_3 + 0x3c8) * dVar21 + *(double *)(param_3 + 0x3d0) <= dVar9)
      goto LAB_00e513ad;
    }
    if (param_1[0x4b] != 0) {
      dVar9 = (double)FUN_0040c850(dVar36 - dVar10);
      uVar3 = FUN_0040c850(dVar36);
      FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 6,0);
      uVar7 = FUN_0040c850();
      dVar10 = (double)FUN_00b90620(uVar3,uVar7);
      if (*(double *)(param_3 + 0x3c8) * dVar10 + *(double *)(param_3 + 0x3d0) <= dVar9)
      goto LAB_00e513ad;
    }
    if (param_1[0x4b] != 0) {
      dVar9 = (double)FUN_0040c850(local_638 - dVar16);
      uVar3 = FUN_0040c850(local_638);
      FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 7,0);
      uVar7 = FUN_0040c850();
      dVar10 = (double)FUN_00b90620(uVar3,uVar7);
      if (*(double *)(param_3 + 0x3c8) * dVar10 + *(double *)(param_3 + 0x3d0) <= dVar9)
      goto LAB_00e513ad;
    }
    if (param_1[0x4b] != 0) {
      dVar9 = (double)FUN_0040c850(local_628 - dVar26);
      uVar3 = FUN_0040c850(local_628);
      FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 10,0);
      uVar7 = FUN_0040c850();
      dVar10 = (double)FUN_00b90620(uVar3,uVar7);
      if (*(double *)(param_3 + 0x3c8) * dVar10 + *(double *)(param_3 + 0x3d0) <= dVar9)
      goto LAB_00e513ad;
    }
    if (param_1[0x4b] != 0) {
      dVar9 = (double)FUN_0040c850(local_620 - dVar48);
      uVar3 = FUN_0040c850(local_620);
      FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xb,0);
      uVar7 = FUN_0040c850();
      dVar10 = (double)FUN_00b90620(uVar3,uVar7);
      if (*(double *)(param_3 + 0x3c8) * dVar10 + *(double *)(param_3 + 0x3d0) <= dVar9)
      goto LAB_00e513ad;
    }
    dVar9 = (double)FUN_0040c850(local_540 - local_568);
    uVar3 = FUN_0040c850(local_540);
    uVar7 = FUN_0040c850(local_568);
    dVar10 = (double)FUN_00b90620(uVar3,uVar7);
    if (*(double *)(param_3 + 0x3c8) * dVar10 + *(double *)(param_3 + 0x3d0) <= dVar9)
    goto LAB_00e513ad;
    dVar9 = (double)FUN_0040c850(dVar13 - local_560);
    uVar3 = FUN_0040c850(dVar13);
    uVar7 = FUN_0040c850(local_560);
    dVar10 = (double)FUN_00b90620(uVar3,uVar7);
    if (*(double *)(param_3 + 0x3c8) * dVar10 + *(double *)(param_3 + 0x3d0) <= dVar9)
    goto LAB_00e513ad;
    if (param_1[0x56] != 0) {
      dVar9 = (double)FUN_0040c850(local_508 - local_520);
      uVar3 = FUN_0040c850(local_508);
      uVar7 = FUN_0040c850(local_520);
      dVar10 = (double)FUN_00b90620(uVar3,uVar7);
      if (*(double *)(param_3 + 0x3c8) * dVar10 + *(double *)(param_3 + 0x3d0) <= dVar9)
      goto LAB_00e513ad;
    }
    if (param_1[0x56] != 0) {
      dVar9 = (double)FUN_0040c850(local_4b0 - local_518);
      uVar3 = FUN_0040c850(local_4b0);
      uVar7 = FUN_0040c850(local_518);
      dVar10 = (double)FUN_00b90620(uVar3,uVar7);
      if (*(double *)(param_3 + 0x3c8) * dVar10 + *(double *)(param_3 + 0x3d0) <= dVar9)
      goto LAB_00e513ad;
    }
    if (param_1[0x57] != 0) {
      dVar9 = (double)FUN_0040c850(dVar51 - dVar39);
      uVar3 = FUN_0040c850(dVar51);
      uVar7 = FUN_0040c850(dVar39);
      dVar39 = (double)FUN_00b90620(uVar3,uVar7);
      if (*(double *)(param_3 + 0x3c8) * dVar39 + *(double *)(param_3 + 0x3d0) <= dVar9)
      goto LAB_00e513ad;
    }
    if (param_1[0x4f] != 0) {
      dVar39 = (double)FUN_0040c850(dVar23 - dVar14);
      uVar3 = FUN_0040c850(dVar23);
      uVar7 = FUN_0040c850(dVar14);
      dVar9 = (double)FUN_00b90620(uVar3,uVar7);
      if (*(double *)(param_3 + 0x3c8) * dVar9 + *(double *)(param_3 + 0x3d0) <= dVar39)
      goto LAB_00e513ad;
    }
    if (param_1[0x4f] != 0) {
      dVar39 = (double)FUN_0040c850(dVar12 - dVar15);
      uVar3 = FUN_0040c850(dVar12);
      uVar7 = FUN_0040c850(dVar15);
      dVar9 = (double)FUN_00b90620(uVar3,uVar7);
      if (*(double *)(param_3 + 0x3c8) * dVar9 + *(double *)(param_3 + 0x3d0) <= dVar39)
      goto LAB_00e513ad;
    }
    local_658 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
    local_668 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 3,0);
    local_650 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 2,0);
    local_660 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 8,0);
    local_648 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 9,0);
    local_610 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 1,0);
    FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 5,0);
    local_510 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 6,0);
    local_528 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 7,0);
    FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 10,0);
    FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xb,0);
    local_5f8 = local_668 - local_658;
    local_550 = local_668 - local_650;
    local_538 = local_648 - local_650;
    if (param_1[0x4b] == 0) {
      local_528 = local_650;
    }
    if (param_1[0x4b] == 0) {
      local_510 = local_610;
    }
    local_450 = *(double *)(param_1 + 0x20);
    if ((param_4 == 6) || ((param_4 == 5 && ((*(byte *)(param_3 + 0x88) & 0x10) != 0)))) {
      bVar1 = true;
      local_678 = *(double *)(param_1 + 0x386);
      local_698 = *(double *)(param_1 + 0x388);
      local_680 = *(double *)(param_1 + 0x38a);
      dVar40 = *(double *)(param_1 + 0x2b0);
      dVar39 = *(double *)(param_1 + 0x2b2);
      dVar44 = *(double *)(param_1 + 0x2ae);
      dVar37 = *(double *)(param_1 + 0x2b4);
      goto LAB_00e64cea;
    }
  }
  else {
    local_658 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 4,0);
    local_668 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 3,0);
    local_650 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 2,0);
    local_660 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 8,0);
    local_648 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 9,0);
    local_640 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 5,0);
    local_638 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 7,0);
    local_628 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 10,0);
    local_620 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0xb,0);
    uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0x1c,0);
    *(undefined8 *)(param_1 + 0x2ac) = uVar3;
LAB_00e51daa:
    local_610 = local_650 - local_658;
    local_5f8 = local_668 - local_658;
    local_550 = local_668 - local_650;
    local_538 = local_648 - local_650;
    local_528 = local_638;
    if (param_1[0x4b] == 0) {
      local_528 = local_650;
    }
    local_510 = local_640 - local_658;
    if (param_1[0x4b] == 0) {
      local_510 = local_610;
    }
    dVar39 = *(double *)(param_1 + 0x204) * *(double *)(param_1 + 0x3c8);
    if ((0.0 < *(double *)(param_1 + 400)) || (0.0 < *(double *)(param_1 + 0x18c))) {
      dVar37 = *(double *)(param_1 + 400) * *(double *)(param_1 + 0x3d8) +
               *(double *)(param_1 + 0x18c) * *(double *)(param_1 + 0x3dc) +
               *(double *)(param_1 + 0x68) * *(double *)(param_1 + 0x74) *
               *(double *)(param_1 + 0x3e0);
    }
    else {
      dVar37 = 1e-14;
    }
    if (0.0 < dVar37) {
      iVar2 = param_1[0x4c];
      if (iVar2 == 0) {
        dVar40 = (double)FUN_0040af80(local_528 / dVar39);
        local_d0 = (double)FUN_0040af80(-(*(double *)(param_1 + 0x1c2) + local_528) / dVar39);
        local_d0 = *(double *)(param_1 + 0x1be) * local_d0;
        *(double *)(param_1 + 0x1a) =
             (dVar37 * (dVar40 + local_d0)) / dVar39 + *(double *)(param_3 + 0x430);
        *(double *)(param_1 + 0x18) =
             dVar37 * (((dVar40 + *(double *)(param_1 + 0x198)) - local_d0) - 1.0) +
             *(double *)(param_3 + 0x430) * local_528;
      }
      else if (iVar2 == 1) {
        local_d8 = local_528 / dVar39;
        if (-34.0 <= local_d8) {
          if (*(double *)(param_1 + 0x19a) < local_528) {
            *(double *)(param_1 + 0x1a) =
                 *(double *)(param_1 + 0x19c) / dVar39 + *(double *)(param_3 + 0x430);
            *(double *)(param_1 + 0x18) =
                 (*(double *)(param_1 + 0x19c) - dVar37) +
                 (*(double *)(param_1 + 0x19c) / dVar39) *
                 (local_528 - *(double *)(param_1 + 0x19a)) +
                 *(double *)(param_3 + 0x430) * local_528;
          }
          else {
            dVar40 = (double)FUN_0040af80(local_d8);
            *(double *)(param_1 + 0x1a) = (dVar37 * dVar40) / dVar39 + *(double *)(param_3 + 0x430);
            *(double *)(param_1 + 0x18) =
                 dVar37 * (dVar40 - 1.0) + *(double *)(param_3 + 0x430) * local_528;
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_3 + 0x430);
          *(double *)(param_1 + 0x18) =
               dVar37 * -0.9999999999999983 + *(double *)(param_3 + 0x430) * local_528;
        }
      }
      else if (iVar2 == 2) {
        if (*(double *)(param_1 + 0x1a0) <= local_528) {
          if (*(double *)(param_1 + 0x19a) < local_528) {
            *(double *)(param_1 + 0x1a) =
                 *(double *)(param_1 + 0x19e) + *(double *)(param_3 + 0x430);
            *(double *)(param_1 + 0x18) =
                 *(double *)(param_1 + 0x19c) +
                 *(double *)(param_1 + 0x19e) * (local_528 - *(double *)(param_1 + 0x19a)) +
                 *(double *)(param_3 + 0x430) * local_528;
          }
          else {
            if (-34.0 <= local_528 / dVar39) {
              dVar40 = (double)FUN_0040af80(local_528 / dVar39);
              dVar44 = dVar40 / dVar39;
            }
            else {
              dVar40 = 1.713908431e-15;
              dVar44 = 0.0;
            }
            local_d0 = (*(double *)(param_1 + 0x1c2) + local_528) / dVar39;
            if (local_d0 <= 34.0) {
              local_d8 = (double)FUN_0040af80(-local_d0);
              local_e0 = -local_d8 / dVar39;
            }
            else {
              local_d8 = 1.713908431e-15;
              local_e0 = 0.0;
            }
            *(double *)(param_1 + 0x1a) =
                 dVar37 * (dVar44 - *(double *)(param_1 + 0x1be) * local_e0) +
                 *(double *)(param_3 + 0x430);
            *(double *)(param_1 + 0x18) =
                 dVar37 * (((dVar40 + *(double *)(param_1 + 0x198)) -
                           *(double *)(param_1 + 0x1be) * local_d8) - 1.0) +
                 *(double *)(param_3 + 0x430) * local_528;
          }
        }
        else {
          if (-34.0 <= local_528 / dVar39) {
            local_d0 = (double)FUN_0040af80(local_528 / dVar39);
            dVar39 = local_d0 / dVar39;
          }
          else {
            local_d0 = 1.713908431e-15;
            dVar39 = 0.0;
          }
          local_d0 = local_d0 - 1.0;
          local_d8 = *(double *)(param_1 + 0x1a2) +
                     *(double *)(param_1 + 0x1a4) * (local_528 - *(double *)(param_1 + 0x1a0));
          *(double *)(param_1 + 0x1a) =
               dVar39 * local_d8 + local_d0 * *(double *)(param_1 + 0x1a4) +
               *(double *)(param_3 + 0x430);
          *(double *)(param_1 + 0x18) =
               local_d0 * local_d8 + *(double *)(param_3 + 0x430) * local_528;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_3 + 0x430);
      *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x1a) * local_528;
    }
    dVar39 = *(double *)(param_1 + 0x204) * *(double *)(param_1 + 0x3ca);
    if ((0.0 < *(double *)(param_1 + 0x192)) || (0.0 < *(double *)(param_1 + 0x18e))) {
      dVar37 = *(double *)(param_1 + 0x192) * *(double *)(param_1 + 0x3da) +
               *(double *)(param_1 + 0x18e) * *(double *)(param_1 + 0x3de) +
               *(double *)(param_1 + 0x68) * *(double *)(param_1 + 0x74) *
               *(double *)(param_1 + 0x3e2);
    }
    else {
      dVar37 = 1e-14;
    }
    if (0.0 < dVar37) {
      iVar2 = param_1[0x4c];
      if (iVar2 == 0) {
        dVar40 = (double)FUN_0040af80(local_510 / dVar39);
        local_d0 = (double)FUN_0040af80(-(*(double *)(param_1 + 0x1c4) + local_510) / dVar39);
        local_d0 = *(double *)(param_1 + 0x1c0) * local_d0;
        *(double *)(param_1 + 0x1e) =
             (dVar37 * (dVar40 + local_d0)) / dVar39 + *(double *)(param_3 + 0x430);
        *(double *)(param_1 + 0x1c) =
             dVar37 * (((dVar40 + *(double *)(param_1 + 0x1a6)) - local_d0) - 1.0) +
             *(double *)(param_3 + 0x430) * local_510;
      }
      else if (iVar2 == 1) {
        local_d8 = local_510 / dVar39;
        if (-34.0 <= local_d8) {
          if (*(double *)(param_1 + 0x1a8) < local_510) {
            *(double *)(param_1 + 0x1e) =
                 *(double *)(param_1 + 0x1aa) / dVar39 + *(double *)(param_3 + 0x430);
            *(double *)(param_1 + 0x1c) =
                 (*(double *)(param_1 + 0x1aa) - dVar37) +
                 (*(double *)(param_1 + 0x1aa) / dVar39) *
                 (local_510 - *(double *)(param_1 + 0x1a8)) +
                 *(double *)(param_3 + 0x430) * local_510;
          }
          else {
            dVar40 = (double)FUN_0040af80(local_d8);
            *(double *)(param_1 + 0x1e) = (dVar37 * dVar40) / dVar39 + *(double *)(param_3 + 0x430);
            *(double *)(param_1 + 0x1c) =
                 dVar37 * (dVar40 - 1.0) + *(double *)(param_3 + 0x430) * local_510;
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_3 + 0x430);
          *(double *)(param_1 + 0x1c) =
               dVar37 * -0.9999999999999983 + *(double *)(param_3 + 0x430) * local_510;
        }
      }
      else if (iVar2 == 2) {
        if (*(double *)(param_1 + 0x1ae) <= local_510) {
          if (*(double *)(param_1 + 0x1a8) < local_510) {
            *(double *)(param_1 + 0x1e) =
                 *(double *)(param_1 + 0x1ac) + *(double *)(param_3 + 0x430);
            *(double *)(param_1 + 0x1c) =
                 *(double *)(param_1 + 0x1aa) +
                 *(double *)(param_1 + 0x1ac) * (local_510 - *(double *)(param_1 + 0x1a8)) +
                 *(double *)(param_3 + 0x430) * local_510;
          }
          else {
            if (-34.0 <= local_510 / dVar39) {
              dVar40 = (double)FUN_0040af80(local_510 / dVar39);
              dVar44 = dVar40 / dVar39;
            }
            else {
              dVar40 = 1.713908431e-15;
              dVar44 = 0.0;
            }
            local_d0 = (*(double *)(param_1 + 0x1c4) + local_510) / dVar39;
            if (local_d0 <= 34.0) {
              local_d8 = (double)FUN_0040af80(-local_d0);
              local_e0 = -local_d8 / dVar39;
            }
            else {
              local_d8 = 1.713908431e-15;
              local_e0 = 0.0;
            }
            *(double *)(param_1 + 0x1e) =
                 dVar37 * (dVar44 - *(double *)(param_1 + 0x1c0) * local_e0) +
                 *(double *)(param_3 + 0x430);
            *(double *)(param_1 + 0x1c) =
                 dVar37 * (((dVar40 + *(double *)(param_1 + 0x1a6)) -
                           *(double *)(param_1 + 0x1c0) * local_d8) - 1.0) +
                 *(double *)(param_3 + 0x430) * local_510;
          }
        }
        else {
          if (-34.0 <= local_510 / dVar39) {
            local_d0 = (double)FUN_0040af80(local_510 / dVar39);
            dVar39 = local_d0 / dVar39;
          }
          else {
            local_d0 = 1.713908431e-15;
            dVar39 = 0.0;
          }
          local_d0 = local_d0 - 1.0;
          local_d8 = *(double *)(param_1 + 0x1b0) +
                     *(double *)(param_1 + 0x1b2) * (local_510 - *(double *)(param_1 + 0x1ae));
          *(double *)(param_1 + 0x1e) =
               dVar39 * local_d8 + local_d0 * *(double *)(param_1 + 0x1b2) +
               *(double *)(param_3 + 0x430);
          *(double *)(param_1 + 0x1c) =
               local_d0 * local_d8 + *(double *)(param_3 + 0x430) * local_510;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_3 + 0x430);
      *(double *)(param_1 + 0x1c) = *(double *)(param_1 + 0x1e) * local_510;
    }
    dVar37 = *(double *)(param_1 + 0x206) * *(double *)(param_1 + 0x1c8);
    dVar40 = *(double *)(param_1 + 0x206) * *(double *)(param_1 + 0x1ca);
    dVar39 = *(double *)(param_1 + 0x206) * *(double *)(param_1 + 0x1c6);
    dVar45 = *(double *)(param_1 + 0x206) * *(double *)(param_1 + 0x1ce);
    dVar47 = *(double *)(param_1 + 0x206) * *(double *)(param_1 + 0x1d0);
    dVar44 = *(double *)(param_1 + 0x206) * *(double *)(param_1 + 0x1cc);
    if (*(double *)(param_1 + 0x1d2) * 0.001 <= *(double *)(param_1 + 0x1d2) - local_528) {
      dVar49 = 1.0 / (*(double *)(param_1 + 0x1d2) - local_528);
      dVar19 = *(double *)(param_1 + 0x1d2);
      FUN_00e4dfc0((-local_528 / dVar39) * *(double *)(param_1 + 0x1d2) * dVar49,&local_d0,
                   &local_100);
      local_308 = local_100 * (dVar19 / dVar39) * (dVar49 + local_528 * dVar49 * dVar49);
    }
    else {
      FUN_00e4dfc0((-local_528 / dVar39) * 1000.0,&local_d0,&local_100);
      local_308 = (local_100 / dVar39) * 1000.0;
    }
    if (*(double *)(param_1 + 0x1d4) * 0.001 <= *(double *)(param_1 + 0x1d4) - local_510) {
      dVar19 = 1.0 / (*(double *)(param_1 + 0x1d4) - local_510);
      dVar39 = *(double *)(param_1 + 0x1d4);
      FUN_00e4dfc0((-local_510 / dVar44) * *(double *)(param_1 + 0x1d4) * dVar19,&local_d8,
                   &local_100);
      local_258 = local_100 * (dVar39 / dVar44) * (dVar19 + local_510 * dVar19 * dVar19);
    }
    else {
      FUN_00e4dfc0((-local_510 / dVar44) * 1000.0,&local_d8,&local_100);
      local_258 = (local_100 / dVar44) * 1000.0;
    }
    if (*(double *)(param_1 + 0x1d6) * 0.001 <= *(double *)(param_1 + 0x1d6) - local_528) {
      dVar44 = 1.0 / (*(double *)(param_1 + 0x1d6) - local_528);
      dVar39 = *(double *)(param_1 + 0x1d6);
      FUN_00e4dfc0((-local_528 / dVar37) * *(double *)(param_1 + 0x1d6) * dVar44,&local_e0,
                   &local_100);
      dVar39 = local_100 * (dVar39 / dVar37) * (dVar44 + local_528 * dVar44 * dVar44);
    }
    else {
      FUN_00e4dfc0((-local_528 / dVar37) * 1000.0,&local_e0,&local_100);
      dVar39 = (local_100 / dVar37) * 1000.0;
    }
    if (*(double *)(param_1 + 0x1da) * 0.001 <= *(double *)(param_1 + 0x1da) - local_510) {
      dVar44 = 1.0 / (*(double *)(param_1 + 0x1da) - local_510);
      dVar37 = *(double *)(param_1 + 0x1da);
      FUN_00e4dfc0((-local_510 / dVar45) * *(double *)(param_1 + 0x1da) * dVar44,&local_e8,
                   &local_100);
      dVar37 = local_100 * (dVar37 / dVar45) * (dVar44 + local_510 * dVar44 * dVar44);
    }
    else {
      FUN_00e4dfc0((-local_510 / dVar45) * 1000.0,&local_e8,&local_100);
      dVar37 = (local_100 / dVar45) * 1000.0;
    }
    if (*(double *)(param_1 + 0x1dc) * 0.001 <= *(double *)(param_1 + 0x1dc) - local_528) {
      dVar45 = 1.0 / (*(double *)(param_1 + 0x1dc) - local_528);
      dVar44 = *(double *)(param_1 + 0x1dc);
      FUN_00e4dfc0((-local_528 / dVar40) * *(double *)(param_1 + 0x1dc) * dVar45,&local_f0,
                   &local_100);
      dVar40 = local_100 * (dVar44 / dVar40) * (dVar45 + local_528 * dVar45 * dVar45);
    }
    else {
      FUN_00e4dfc0((-local_528 / dVar40) * 1000.0,&local_f0,&local_100);
      dVar40 = (local_100 / dVar40) * 1000.0;
    }
    if (*(double *)(param_1 + 0x1de) * 0.001 <= *(double *)(param_1 + 0x1de) - local_510) {
      dVar45 = 1.0 / (*(double *)(param_1 + 0x1de) - local_510);
      dVar44 = *(double *)(param_1 + 0x1de);
      FUN_00e4dfc0((-local_510 / dVar47) * *(double *)(param_1 + 0x1de) * dVar45,&local_f8,
                   &local_100);
      local_100 = local_100 * (dVar44 / dVar47) * (dVar45 + local_510 * dVar45 * dVar45);
    }
    else {
      FUN_00e4dfc0((-local_510 / dVar47) * 1000.0,&local_f8,&local_100);
      local_100 = (local_100 / dVar47) * 1000.0;
    }
    *(double *)(param_1 + 0x1a) =
         *(double *)(param_1 + 0x1a) +
         *(double *)(param_1 + 0x1b4) * local_308 + *(double *)(param_1 + 0x1b8) * dVar39 +
         *(double *)(param_1 + 0x1ea) * dVar40;
    *(double *)(param_1 + 0x18) =
         *(double *)(param_1 + 0x18) -
         (*(double *)(param_1 + 0x1b4) * (local_d0 - 1.0) +
          *(double *)(param_1 + 0x1b8) * (local_e0 - 1.0) +
         *(double *)(param_1 + 0x1ea) * (local_f0 - 1.0));
    *(double *)(param_1 + 0x1e) =
         *(double *)(param_1 + 0x1e) +
         *(double *)(param_1 + 0x1b6) * local_258 + *(double *)(param_1 + 0x1ba) * dVar37 +
         *(double *)(param_1 + 0x1ec) * local_100;
    *(double *)(param_1 + 0x1c) =
         *(double *)(param_1 + 0x1c) -
         (*(double *)(param_1 + 0x1b6) * (local_d8 - 1.0) +
          *(double *)(param_1 + 0x1ba) * (local_e8 - 1.0) +
         *(double *)(param_1 + 0x1ec) * (local_f8 - 1.0));
    if (local_658 < 0.0) {
      param_1[1] = -1;
      local_4f8 = -local_658;
      local_4a8 = local_610;
    }
    else {
      param_1[1] = 1;
      local_4f8 = local_658;
      local_4a8 = local_650;
    }
    dVar39 = (local_4a8 - *(double *)(param_1 + 0x17a)) - 0.001;
    local_d0 = (double)FUN_0040c760(dVar39 * dVar39 - *(double *)(param_1 + 0x17a) * 0.004);
    if (dVar39 < 0.0) {
      local_d8 = -0.002 / (local_d0 - dVar39);
      local_4a0 = *(double *)(param_1 + 0x17a) * (local_d8 + 1.0);
      local_500 = (local_d8 * *(double *)(param_1 + 0x17a)) / local_d0;
    }
    else {
      local_4a0 = *(double *)(param_1 + 0x17a) + (dVar39 + local_d0) * 0.5;
      local_500 = (dVar39 / local_d0 + 1.0) * 0.5;
    }
    dVar39 = *(double *)(param_1 + 0x14a) * 0.95;
    dVar37 = (dVar39 - local_4a0) - 0.001;
    local_d0 = (double)FUN_0040c760(dVar37 * dVar37 + dVar39 * 0.004);
    dVar39 = dVar39 - (dVar37 + local_d0) * 0.5;
    dVar19 = local_500 * (dVar37 / local_d0 + 1.0) * 0.5;
    dVar37 = *(double *)(param_1 + 0x14a) - dVar39;
    dVar40 = (double)FUN_0040c760(dVar37);
    dVar44 = -0.5 / dVar40;
    dVar45 = (*(double *)(param_1 + 0x14e) * dVar40) / *(double *)(param_1 + 0x14c);
    dVar47 = (*(double *)(param_1 + 0x14e) / *(double *)(param_1 + 0x14c)) * dVar44;
    local_e0 = (double)FUN_0040c760(dVar45);
    dVar49 = *(double *)(param_1 + 0x152) - *(double *)(param_1 + 0x14a);
    local_d0 = *(double *)(param_1 + 0xa0) * dVar39;
    if (local_d0 < -0.5) {
      local_e8 = 1.0 / (local_d0 * 8.0 + 3.0);
      local_d0 = (local_d0 * 3.0 + 1.0) * local_e8;
      local_d8 = *(double *)(param_1 + 0xa0) * local_e8 * local_e8;
    }
    else {
      local_d0 = local_d0 + 1.0;
      local_d8 = *(double *)(param_1 + 0xa0);
    }
    dVar36 = *(double *)(param_1 + 0x214) * local_e0 * local_d0;
    dVar8 = (0.5 / local_e0) * local_d0;
    dVar20 = local_e0 * local_d8;
    dVar38 = *(double *)(param_1 + 0x214);
    local_d0 = *(double *)(param_1 + 0xa6) * dVar39;
    if (local_d0 < -0.5) {
      local_e8 = 1.0 / (local_d0 * 8.0 + 3.0);
      local_d0 = (local_d0 * 3.0 + 1.0) * local_e8;
      local_d8 = *(double *)(param_1 + 0xa6) * local_e8 * local_e8;
    }
    else {
      local_d0 = local_d0 + 1.0;
      local_d8 = *(double *)(param_1 + 0xa6);
    }
    dVar41 = *(double *)(param_1 + 0x214) * local_e0 * local_d0;
    dVar9 = (0.5 / local_e0) * local_d0;
    dVar21 = local_e0 * local_d8;
    dVar11 = *(double *)(param_1 + 0x214);
    dVar10 = (*(double *)(param_1 + 0x9e) * *(double *)(param_1 + 0x60)) / dVar36;
    if (34.0 <= dVar10) {
      dVar46 = 1.7139084316226671e-15;
      dVar38 = 0.0;
    }
    else {
      local_d0 = (double)FUN_0040af80(dVar10);
      local_d8 = local_d0 - 1.0;
      local_e0 = local_d8 * local_d8;
      local_e8 = local_e0 + local_d0 * 3.427816862e-15;
      dVar46 = local_d0 / local_e8;
      dVar38 = ((((-dVar10 * local_d0 * dVar38 * (dVar8 * dVar47 + dVar20)) / dVar36) *
                (local_e8 - local_d0 * 2.0 * (local_d8 + 1.713908431e-15))) / local_e8) / local_e8;
    }
    dVar8 = *(double *)(param_1 + 0x9c);
    dVar20 = *(double *)(param_1 + 0x9c);
    dVar36 = (*(double *)(param_1 + 0xa4) * *(double *)(param_1 + 0x62) *
             *(double *)(param_1 + 0x60)) / dVar41;
    if (34.0 <= dVar36) {
      local_f0 = 1.7139084316226671e-15;
      dVar36 = 0.0;
    }
    else {
      local_d0 = (double)FUN_0040af80(dVar36);
      dVar10 = local_d0 - 1.0;
      local_e0 = dVar10 * dVar10;
      local_e8 = local_e0 + local_d0 * 3.427816862e-15;
      local_f0 = local_d0 / local_e8;
      dVar36 = ((((-dVar36 * local_d0 * dVar11 * (dVar9 * dVar47 + dVar21)) / dVar41) *
                (local_e8 - local_d0 * 2.0 * (dVar10 + 1.713908431e-15))) / local_e8) / local_e8;
    }
    local_d8 = *(double *)(param_1 + 0xa2) * local_f0 * dVar49;
    dVar11 = *(double *)(param_1 + 0xa2);
    dVar9 = *(double *)(param_1 + 0x3b8);
    dVar10 = (double)FUN_0040c760(*(double *)(param_1 + 0x94) / *(double *)(param_1 + 0x60) + 1.0);
    local_d0 = *(double *)(param_1 + 0x170) * (dVar10 - 1.0) * *(double *)(param_1 + 0x14c) +
               (*(double *)(param_1 + 0x88) +
                *(double *)(param_1 + 0x8a) / *(double *)(param_1 + 0x60) +
               *(double *)(param_1 + 0x8c) * dVar39) * (dVar9 - 1.0);
    dVar10 = (*(double *)(param_1 + 0x1e4) * *(double *)(param_1 + 0x14a)) /
             (*(double *)(param_1 + 0x62) + *(double *)(param_1 + 0x92));
    local_e0 = *(double *)(param_1 + 0xc0) + *(double *)(param_1 + 0xc2) * dVar39;
    if (0.0001 <= local_e0) {
      local_e8 = 1.0;
    }
    else {
      local_e8 = 1.0 / (3.0 - local_e0 * 20000.0);
      local_e0 = (0.0002 - local_e0) * local_e8;
      local_e8 = local_e8 * local_e8;
    }
    local_4e0 = local_e0 * *(double *)(param_1 + 0x172);
    dVar21 = (double)FUN_0040c760(*(double *)(param_1 + 0x96) / *(double *)(param_1 + 0x60) + 1.0);
    dVar8 = ((((((double)*param_1 * *(double *)(param_1 + 0x32) +
                (*(double *)(param_1 + 0x170) * dVar40 -
                *(double *)(param_1 + 0x86) * *(double *)(param_1 + 0x14c)) * dVar21) -
               *(double *)(param_1 + 0x17c) * dVar39) - dVar8 * dVar46 * dVar49) - local_d8) +
             (*(double *)(param_1 + 0x8e) + *(double *)(param_1 + 0x90) * dVar39) * dVar10 +
            local_d0) - local_4e0 * local_4f8;
    local_4e8 = (((((dVar21 * *(double *)(param_1 + 0x170) * dVar44 - *(double *)(param_1 + 0x17c))
                   - dVar20 * dVar38 * dVar49) - dVar11 * dVar36 * dVar49) +
                 *(double *)(param_1 + 0x90) * dVar10) -
                *(double *)(param_1 + 0xc2) * local_4f8 * *(double *)(param_1 + 0x172) * local_e8) +
                *(double *)(param_1 + 0x8c) * (dVar9 - 1.0);
    local_4e0 = -local_4e0;
    *(double *)(param_1 + 0x1ee) =
         (*(double *)(param_1 + 0x204) / 1.6021917e-19) *
         (*(double *)(param_1 + 0x208) + *(double *)(param_1 + 0x1e6) / dVar45 +
         *(double *)(param_1 + 0x70));
    dVar49 = *(double *)(param_1 + 0x72) * (*(double *)(param_1 + 0x1e6) / dVar45);
    dVar20 = *(double *)(param_1 + 0x6a) + *(double *)(param_1 + 0x6e) * dVar39 +
             *(double *)(param_1 + 0x6c) * local_4f8;
    local_478 = (dVar49 + dVar20 * dVar46 + *(double *)(param_1 + 0x70)) /
                *(double *)(param_1 + 0x208);
    if (local_478 < -0.5) {
      dVar36 = 1.0 / (local_478 * 8.0 + 3.0);
      local_478 = (local_478 * 3.0 + 1.0) * dVar36;
      local_480 = (((-dVar49 / dVar45) * dVar47 + dVar20 * dVar38 +
                   *(double *)(param_1 + 0x6e) * dVar46) / *(double *)(param_1 + 0x208)) *
                  dVar36 * dVar36;
      local_4d0 = ((*(double *)(param_1 + 0x6c) * dVar46) / *(double *)(param_1 + 0x208)) *
                  dVar36 * dVar36;
    }
    else {
      local_478 = local_478 + 1.0;
      local_480 = ((-dVar49 / dVar45) * dVar47 + dVar20 * dVar38 +
                  *(double *)(param_1 + 0x6e) * dVar46) / *(double *)(param_1 + 0x208);
      local_4d0 = (*(double *)(param_1 + 0x6c) * dVar46) / *(double *)(param_1 + 0x208);
    }
    if (0.0 < *(double *)(param_1 + 0x98)) {
      if (-34.0 <= -*(double *)(param_1 + 0x9a) * local_4f8) {
        local_d8 = (double)FUN_0040af80(-*(double *)(param_1 + 0x9a) * local_4f8);
        dVar49 = -*(double *)(param_1 + 0x9a) * local_d8;
      }
      else {
        local_d8 = 1.713908431e-15;
        dVar49 = 0.0;
      }
      local_e0 = *(double *)(param_1 + 0x60) + *(double *)(param_1 + 0x98) * (local_d8 + 1.0);
      dVar38 = *(double *)(param_1 + 0x98);
      if (param_1[0x4e] < 2) {
        local_e8 = (double)FUN_0040c2f0(*(double *)(param_1 + 0x60) / local_e0);
        local_e8 = *(double *)(param_1 + 0x204) * local_e8;
        dVar49 = (-*(double *)(param_1 + 0x204) * dVar38 * dVar49) / local_e0;
      }
      else {
        local_e8 = (double)FUN_0040c2f0(*(double *)(param_1 + 0x60) / local_e0);
        local_e8 = *(double *)(param_1 + 0x206) * local_e8;
        dVar49 = (-*(double *)(param_1 + 0x206) * dVar38 * dVar49) / local_e0;
      }
      dVar8 = dVar8 - local_478 * local_e8;
      local_4e0 = local_4e0 - (local_4d0 * local_e8 + local_478 * dVar49);
      local_4e8 = local_4e8 - local_e8 * local_480;
    }
    *(double *)(param_1 + 0x38) = dVar8;
    dVar49 = *(double *)(param_1 + 0x84);
    dVar38 = *(double *)(param_1 + 0x14a);
    if (param_1[0x4d] == 0) {
      local_d0 = 1.0359431399069999e-10;
    }
    else {
      local_d0 = *(double *)(param_1 + 500) * 8.854214871e-12;
    }
    FUN_00e4e060(dVar49 + dVar38,*(undefined8 *)(param_1 + 0x82),local_d0,
                 *(undefined8 *)(param_1 + 0x208),local_668,local_a0,&local_b0);
    FUN_00e4e060(dVar49 + dVar38,*(undefined8 *)(param_1 + 0x82),local_d0,
                 *(undefined8 *)(param_1 + 0x208),local_5f8,&local_a8,&local_b8);
    dVar36 = local_a0[0];
    dVar20 = local_a8;
    dVar38 = local_b0;
    dVar49 = local_b8;
    if (param_1[1] < 1) {
      local_4c0 = local_a8;
      local_4c8 = local_b8;
    }
    else {
      local_4c0 = local_a0[0];
      local_4c8 = local_b0;
    }
    dVar11 = local_4c0 - dVar8;
    dVar9 = local_478 * *(double *)(param_1 + 0x204);
    local_100 = *(double *)(param_1 + 0x166) * dVar11;
    local_d8 = local_100 / dVar9;
    if (local_d8 <= 34.0) {
      local_d0 = local_100;
      if (-34.0 <= local_d8) {
        dVar41 = (double)FUN_0040af80(local_d8);
        local_e0 = (double)FUN_0040c2f0(dVar41 + 1.0);
        local_e0 = *(double *)(param_1 + 0x204) * local_e0;
        local_100 = local_478 * local_e0;
        local_1e8 = (*(double *)(param_1 + 0x166) * dVar41) / (dVar41 + 1.0);
        local_1f0 = local_e0 * local_480 -
                    local_1e8 * (local_4e8 + (dVar11 * local_480) / local_478);
        local_1b0 = local_e0 * local_4d0 -
                    local_1e8 * (local_4e0 + (dVar11 * local_4d0) / local_478);
        local_1e8 = local_1e8 * local_4c8;
      }
      else {
        local_100 = (double)FUN_0040c2f0(0x3ff0000000000008);
        local_100 = *(double *)(param_1 + 0x204) * local_100;
        local_1e8 = 0.0;
        local_1b0 = local_100 * local_4d0;
        local_1f0 = local_100 * local_480;
        local_100 = local_100 * local_478;
      }
    }
    else {
      local_1e8 = *(double *)(param_1 + 0x166) * local_4c8;
      local_1b0 = -local_4e0 * *(double *)(param_1 + 0x166);
      local_1f0 = -local_4e8 * *(double *)(param_1 + 0x166);
    }
    local_d0 = *(double *)(param_1 + 0x16a) - (1.0 - *(double *)(param_1 + 0x166)) * dVar11;
    local_d8 = local_d0 / dVar9;
    if (-34.0 <= local_d8) {
      if (local_d8 <= 34.0) {
        dVar41 = (double)FUN_0040af80(local_d8);
        local_e0 = *(double *)(param_1 + 0x208) / *(double *)(param_1 + 0x156);
        local_e8 = local_e0 * dVar41;
        local_f0 = (local_d0 * local_e8) / dVar9;
        local_318 = *(double *)(param_1 + 0x166) + local_478 * local_e8;
        dVar41 = (local_e0 * (*(double *)(param_1 + 0x166) - 1.0) * dVar41) /
                 *(double *)(param_1 + 0x204);
        dVar9 = (local_e8 * local_480 - dVar41 * local_4e8) - local_f0 * local_480;
        dVar46 = (local_e8 * local_4d0 - dVar41 * local_4e0) - local_f0 * local_4d0;
        dVar41 = dVar41 * local_4c8;
      }
      else {
        local_e0 = (*(double *)(param_1 + 0x208) * 583461742500000.0) / *(double *)(param_1 + 0x156)
        ;
        local_318 = *(double *)(param_1 + 0x166) + local_e0 * local_478;
        dVar41 = 0.0;
        dVar46 = local_4d0 * local_e0;
        dVar9 = local_480 * local_e0;
      }
    }
    else {
      local_e0 = (*(double *)(param_1 + 0x208) * 1.713908431e-15) / *(double *)(param_1 + 0x156);
      local_318 = *(double *)(param_1 + 0x166) + local_e0 * local_478;
      dVar41 = 0.0;
      dVar46 = local_4d0 * local_e0;
      dVar9 = local_480 * local_e0;
    }
    *(double *)(param_1 + 0x1f0) = local_100 / local_318;
    *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_1 + 0x1f0);
    dVar31 = local_318 * local_318;
    dVar32 = (local_318 * local_1e8 - local_100 * dVar41) / dVar31;
    dVar41 = (local_318 * local_1b0 - local_100 * dVar46) / dVar31;
    dVar31 = (local_318 * local_1f0 - local_100 * dVar9) / dVar31;
    local_1d8 = *(double *)(param_1 + 0x62) -
                (*(double *)(param_1 + 0xce) * *(double *)(param_1 + 0x1f0) +
                *(double *)(param_1 + 0xd0) * (dVar40 - *(double *)(param_1 + 0x14c))) * 2.0;
    local_1c8 = *(double *)(param_1 + 0xce) * -2.0;
    local_190 = *(double *)(param_1 + 0xd0) * -2.0 * dVar44;
    if (local_1d8 < 2e-08) {
      dVar9 = 1.0 / (6e-08 - local_1d8 * 2.0);
      local_1d8 = (4e-08 - local_1d8) * 2e-08 * dVar9;
      dVar9 = dVar9 * 4e-16;
      local_1c8 = local_1c8 * dVar9;
      local_190 = local_190 * dVar9;
    }
    if (param_1[0x4f] == 1) {
      local_3c0 = 0.0;
      local_378 = 0.0;
      local_398 = 0.0;
    }
    else {
      dVar50 = *(double *)(param_1 + 0xbc) * *(double *)(param_1 + 0x1f0) + 1.0;
      dVar9 = *(double *)(param_1 + 0xbc);
      local_d0 = *(double *)(param_1 + 0xbe) * (dVar40 - *(double *)(param_1 + 0x14c));
      dVar46 = *(double *)(param_1 + 0xbe);
      local_d8 = 1.0 / dVar50 + local_d0;
      local_e0 = (double)FUN_0040c760(local_d8 * local_d8 + 0.01);
      local_e0 = local_d8 + local_e0;
      dVar16 = local_d8 / (local_e0 - local_d8) + 1.0;
      local_e8 = *(double *)(param_1 + 0x134) * 0.5;
      local_3c0 = *(double *)(param_1 + 0x136) + local_e0 * local_e8;
      local_378 = local_e8 * dVar16 * ((-dVar9 / dVar50) / dVar50);
      local_398 = local_e8 * dVar16 * dVar46 * dVar44;
      if (local_3c0 <= 0.0) {
        param_1[0x1f6] = 0;
        param_1[0x1f7] = 0;
      }
      else {
        *(double *)(param_1 + 0x1f6) = (1.0 / local_3c0) * *(double *)(param_1 + 0x74);
      }
    }
    dVar9 = (*(double *)(param_1 + 0x170) * 0.5 * dVar21) / dVar40;
    local_d0 = (dVar9 + *(double *)(param_1 + 0x17c)) - *(double *)(param_1 + 0x90) * dVar10;
    dVar9 = (-dVar9 / dVar40) * dVar44;
    dVar10 = (double)FUN_0040c760(*(double *)(param_1 + 0x76) * dVar45);
    dVar21 = *(double *)(param_1 + 0x60) + dVar10 * 2.0;
    local_f0 = *(double *)(param_1 + 0x60) / dVar21;
    dVar46 = *(double *)(param_1 + 0x78) * local_f0 +
             *(double *)(param_1 + 0xd2) /
             (*(double *)(param_1 + 0x62) + *(double *)(param_1 + 0xd4));
    dVar47 = ((-dVar10 / dVar21) / dVar45) * dVar47;
    local_f8 = local_f0 * local_f0;
    local_438 = local_d0 * dVar46 + 1.0;
    local_440 = local_d0 * *(double *)(param_1 + 0x78) * local_f0 * dVar47 + dVar46 * dVar9;
    dVar45 = *(double *)(param_1 + 0x7e) * *(double *)(param_1 + 0x78) * local_f0 * local_f8;
    local_3c8 = -local_d0 * dVar45;
    *(double *)(param_1 + 0x1f8) = local_438 + local_3c8 * *(double *)(param_1 + 0x1f0);
    local_3d0 = local_440 -
                dVar45 * *(double *)(param_1 + 0x1f0) * (dVar9 + local_d0 * 3.0 * dVar47);
    if (local_438 < 0.1) {
      dVar45 = 1.0 / (3.0 - local_438 * 20.0);
      local_438 = (0.2 - local_438) * dVar45;
      local_440 = local_440 * dVar45 * dVar45;
    }
    if (*(double *)(param_1 + 0x1f8) <= 0.1 && *(double *)(param_1 + 0x1f8) != 0.1) {
      local_100 = 1.0 / (3.0 - *(double *)(param_1 + 0x1f8) * 20.0);
      *(double *)(param_1 + 0x1f8) = (0.2 - *(double *)(param_1 + 0x1f8)) * local_100;
      local_100 = local_100 * local_100;
      local_3d0 = local_3d0 * local_100;
      local_3c8 = local_3c8 * local_100;
    }
    *(undefined8 *)(param_1 + 0x38e) = *(undefined8 *)(param_1 + 0x1f8);
    local_d8 = *(double *)(param_1 + 0x80) * dVar39;
    if (local_d8 < -0.9) {
      local_d0 = 1.0 / (local_d8 + 0.8);
      local_5b8 = (local_d8 * 20.0 + 17.0) * local_d0;
      local_310 = -*(double *)(param_1 + 0x80) * local_d0 * local_d0;
    }
    else {
      local_5b8 = 1.0 / (local_d8 + 1.0);
      local_310 = -*(double *)(param_1 + 0x80) * local_5b8 * local_5b8;
    }
    local_3c8 = local_3c8 * local_5b8;
    dVar45 = local_3d0 * local_5b8 + *(double *)(param_1 + 0x1f8) * local_310;
    dVar47 = local_440 * local_5b8 + local_438 * local_310;
    *(double *)(param_1 + 0x1f8) = *(double *)(param_1 + 0x1f8) * local_5b8;
    local_438 = local_438 * local_5b8;
    if (param_1[0x4d] < 1) {
      dVar9 = 0.0;
    }
    else {
      dVar9 = (double)*param_1 * 2.0 *
              (((*(double *)(param_1 + 0x1d8) - *(double *)(param_1 + 0x1e8)) -
               *(double *)(param_1 + 0x202) * 0.5) + 0.45);
    }
    if (param_1[0x50] == 0) {
      local_d8 = *(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0xac) * dVar39;
      local_e0 = ((*(double *)(param_1 + 0x1f0) + dVar8 + dVar8) - dVar9) /
                 *(double *)(param_1 + 0x1e4);
      dVar10 = (double)FUN_0040c760(dVar8 * dVar8 + 0.0001);
      dVar46 = 1.0 / (*(double *)(param_1 + 0x1f0) + dVar10 * 2.0);
      local_100 = dVar46 * *(double *)(param_1 + 0x1e4);
      dVar21 = *(double *)(param_1 + 0xae) * local_100 * local_100 * dVar8;
      local_f8 = dVar21 * dVar8;
      local_f0 = local_e0 * (local_d8 + *(double *)(param_1 + 0xaa) * local_e0) + local_f8;
      dVar46 = local_f8 * -2.0 * dVar46;
      dVar9 = (local_d8 + *(double *)(param_1 + 0xaa) * 2.0 * local_e0) /
              *(double *)(param_1 + 0x1e4);
      dVar10 = (dVar9 + (dVar46 * dVar8) / dVar10 + dVar21) * 2.0;
      dVar8 = dVar10 * local_4e0;
      dVar10 = dVar10 * local_4e8 + *(double *)(param_1 + 0xac) * local_e0;
      dVar9 = dVar9 + dVar46;
    }
    else if (param_1[0x50] == 1) {
      local_d8 = *(double *)(param_1 + 0xac) * dVar39 + 1.0;
      local_e0 = ((*(double *)(param_1 + 0x1f0) + dVar8 + dVar8) - dVar9) /
                 *(double *)(param_1 + 0x1e4);
      local_e8 = local_e0 * (*(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0xaa) * local_e0);
      dVar10 = (double)FUN_0040c760(dVar8 * dVar8 + 0.0001);
      dVar46 = 1.0 / (*(double *)(param_1 + 0x1f0) + dVar10 * 2.0);
      local_100 = dVar46 * *(double *)(param_1 + 0x1e4);
      dVar21 = *(double *)(param_1 + 0xae) * local_100 * local_100 * dVar8;
      local_f8 = dVar21 * dVar8;
      local_f0 = local_e8 * local_d8 + local_f8;
      dVar46 = local_f8 * -2.0 * dVar46;
      dVar9 = ((*(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0xaa) * 2.0 * local_e0) *
              local_d8) / *(double *)(param_1 + 0x1e4);
      dVar10 = (dVar9 + (dVar46 * dVar8) / dVar10 + dVar21) * 2.0;
      dVar8 = dVar10 * local_4e0;
      dVar10 = dVar10 * local_4e8 + *(double *)(param_1 + 0xac) * local_e8;
      dVar9 = dVar9 + dVar46;
    }
    else if (param_1[0x50] == 2) {
      dVar10 = (*(double *)(param_1 + 0x1f0) + *(double *)(param_1 + 0x176)) /
               *(double *)(param_1 + 0x1e4);
      dVar9 = (double)FUN_0040c2f0();
      local_d0 = (double)FUN_0040af80(*(double *)(param_1 + 0xb0) * dVar9);
      dVar21 = local_d0 * *(double *)(param_1 + 0xb0);
      dVar9 = *(double *)(param_1 + 0x1e4);
      local_d8 = *(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0xac) * dVar39;
      local_e0 = dVar10 / *(double *)(param_1 + 0x1e4);
      dVar46 = (double)FUN_0040c760(dVar8 * dVar8 + 0.0001);
      dVar16 = 1.0 / (*(double *)(param_1 + 0x1f0) + dVar46 * 2.0);
      local_100 = dVar16 * *(double *)(param_1 + 0x1e4);
      dVar50 = *(double *)(param_1 + 0xae) * local_100 * local_100 * dVar8;
      local_f8 = dVar50 * dVar8;
      local_f0 = local_d0 * local_d8 + local_f8;
      dVar16 = local_f8 * -2.0 * dVar16;
      dVar9 = local_d8 * ((dVar21 / dVar10) / dVar9) + dVar16;
      dVar10 = ((dVar16 * dVar8) / dVar46 + dVar50) * 2.0;
      dVar8 = dVar10 * local_4e0;
      dVar10 = dVar10 * local_4e8 + local_d0 * *(double *)(param_1 + 0xac);
    }
    else {
      dVar8 = *(double *)(param_1 + 0x1f0);
      dVar9 = *(double *)(param_1 + 0x176);
      dVar10 = *(double *)(param_1 + 0x1e4);
      dVar21 = (double)FUN_0040c2f0();
      local_d0 = (double)FUN_0040af80(*(double *)(param_1 + 0xb0) * dVar21);
      dVar46 = local_d0 * *(double *)(param_1 + 0xb0);
      dVar21 = *(double *)(param_1 + 0x1e4);
      local_d8 = *(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0xac) * dVar39;
      dVar50 = (double)FUN_0040c2f0((*(double *)(param_1 + 0x1f0) * 0.5) /
                                    *(double *)(param_1 + 0x1f2) + 0.5);
      local_100 = (double)FUN_0040af80(*(double *)(param_1 + 0xba) * dVar50);
      dVar9 = local_d8 *
              ((((dVar46 * 1e-08) / ((((dVar8 + dVar9) * 1e-08) / dVar10) / 6.0)) / dVar21) / 6.0) +
              ((*(double *)(param_1 + 0xba) * -0.5 * (*(double *)(param_1 + 0xae) / local_100)) /
              ((*(double *)(param_1 + 0x1f0) * 0.5) / *(double *)(param_1 + 0x1f2) + 0.5)) /
              *(double *)(param_1 + 0x1f2);
      dVar8 = 0.0;
      dVar10 = local_d0 * *(double *)(param_1 + 0xac);
      local_f0 = local_d0 * local_d8 + *(double *)(param_1 + 0xae) / local_100;
    }
    if (local_f0 < -0.8) {
      dVar21 = 1.0 / (local_f0 * 10.0 + 7.0);
      dVar46 = (local_f0 + 0.6) * dVar21;
      dVar21 = dVar21 * dVar21;
      dVar9 = dVar9 * dVar21;
      dVar8 = dVar8 * dVar21;
      dVar10 = dVar10 * dVar21;
    }
    else {
      dVar46 = local_f0 + 1.0;
    }
    *(double *)(param_1 + 0x1fa) = *(double *)(param_1 + 0x140) / dVar46;
    dVar46 = -*(double *)(param_1 + 0x1fa) / dVar46;
    dVar9 = dVar46 * dVar9;
    dVar8 = dVar46 * dVar8;
    dVar46 = dVar46 * dVar10;
    dVar21 = local_1d8 * *(double *)(param_1 + 0x132) * *(double *)(param_1 + 0x208) * local_3c0;
    dVar10 = (*(double *)(param_1 + 0x132) * 2.0) / *(double *)(param_1 + 0x1fa);
    *(double *)(param_1 + 0x1fc) = dVar10 * *(double *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x38c) = *(undefined8 *)(param_1 + 0x1fc);
    local_3b0 = -*(double *)(param_1 + 0x1fc) / *(double *)(param_1 + 0x1fa);
    dVar50 = local_3b0 * dVar9;
    local_390 = local_3b0 * dVar8;
    local_3b0 = local_3b0 * dVar46;
    if (*(double *)(param_1 + 0x7a) == 0.0) {
      dVar16 = *(double *)(param_1 + 0x7c);
      local_2a0 = 0.0;
    }
    else if (*(double *)(param_1 + 0x7a) <= 0.0) {
      local_d0 = (*(double *)(param_1 + 0x7c) +
                 *(double *)(param_1 + 0x7a) * *(double *)(param_1 + 0x1f0)) - 0.0001;
      dVar26 = (double)FUN_0040c760(local_d0 * local_d0 + *(double *)(param_1 + 0x7c) * 0.0004);
      dVar16 = (local_d0 + dVar26) * 0.5;
      local_2a0 = *(double *)(param_1 + 0x7a) * 0.5 * (local_d0 / dVar26 + 1.0);
    }
    else {
      dVar16 = 1.0 - *(double *)(param_1 + 0x7c);
      local_d0 = (dVar16 - *(double *)(param_1 + 0x7a) * *(double *)(param_1 + 0x1f0)) - 0.0001;
      dVar26 = (double)FUN_0040c760(local_d0 * local_d0 + dVar16 * 0.0004);
      dVar16 = (*(double *)(param_1 + 0x7c) + dVar16) - (local_d0 + dVar26) * 0.5;
      local_2a0 = *(double *)(param_1 + 0x7a) * 0.5 * (local_d0 / dVar26 + 1.0);
    }
    dVar26 = *(double *)(param_1 + 0x1f0) + *(double *)(param_1 + 0x204) * 2.0;
    if (local_3c0 <= 0.0) {
      local_268 = local_1c8 / local_1d8;
      local_228 = local_190 / local_1d8;
    }
    else {
      local_268 = local_378 / local_3c0 + local_1c8 / local_1d8;
      local_228 = local_398 / local_3c0 + local_190 / local_1d8;
    }
    if ((local_3c0 == 0.0) && (dVar16 == 1.0)) {
      dVar22 = 1.0 / (*(double *)(param_1 + 0x1f8) * *(double *)(param_1 + 0x1fc) + dVar26);
      local_2a0 = 0.0;
      dVar12 = dVar22 * dVar22;
      local_d8 = dVar26 * dVar22;
      local_e0 = *(double *)(param_1 + 0x1fc) * dVar26;
      local_3a0 = local_e0 * dVar22;
      local_388 = local_e0 *
                  -(*(double *)(param_1 + 0x1f8) * dVar50 + *(double *)(param_1 + 0x1fc) * local_3c8
                   + 1.0) * dVar12 + local_d8 * dVar50 + *(double *)(param_1 + 0x1fc) * dVar22;
      local_240 = local_e0 * -(*(double *)(param_1 + 0x1f8) * local_390) * dVar12 +
                  local_d8 * local_390;
      local_288 = local_e0 *
                  -(*(double *)(param_1 + 0x1f8) * local_3b0 + dVar45 * *(double *)(param_1 + 0x1fc)
                   ) * dVar12 + local_d8 * local_3b0;
    }
    else {
      local_2a0 = local_2a0 / (dVar16 * dVar16);
      dVar12 = *(double *)(param_1 + 0x1f8) * dVar21;
      dVar22 = dVar26 * dVar12;
      local_f8 = dVar26 * dVar21;
      local_240 = *(double *)(param_1 + 0x1f8) * 2.0 * ((dVar12 + 1.0 / dVar16) - 1.0);
      dVar48 = ((*(double *)(param_1 + 0x1f8) * dVar12 * local_268 -
                *(double *)(param_1 + 0x1f8) * local_2a0) +
               ((dVar12 * 2.0 + 1.0 / dVar16) - 1.0) * local_3c8) * 2.0;
      dVar15 = (*(double *)(param_1 + 0x1f8) * dVar12 *
                ((2.0 / *(double *)(param_1 + 0x1f8)) * dVar45 + local_228) +
               (1.0 / dVar16 - 1.0) * dVar45) * 2.0;
      local_d0 = dVar26 * (2.0 / dVar16 - 1.0) +
                 *(double *)(param_1 + 0x1f8) * *(double *)(param_1 + 0x1fc) + dVar22 * 3.0;
      dVar51 = ((2.0 / dVar16 - dVar26 * 2.0 * local_2a0) + *(double *)(param_1 + 0x1f8) * dVar50 +
                *(double *)(param_1 + 0x1fc) * local_3c8 +
               (dVar12 + dVar22 * local_268 + local_f8 * local_3c8) * 3.0) - 1.0;
      dVar13 = *(double *)(param_1 + 0x1f8) * local_3b0 + *(double *)(param_1 + 0x1fc) * dVar45 +
               (local_f8 * dVar45 + dVar22 * local_228) * 3.0;
      dVar12 = *(double *)(param_1 + 0x1f8);
      local_d8 = dVar26 * (*(double *)(param_1 + 0x1fc) + local_f8 * 2.0);
      dVar22 = *(double *)(param_1 + 0x1fc);
      dVar23 = local_f8 * (dVar26 * 2.0 * local_268 + 4.0);
      dVar14 = local_f8 * 2.0;
      local_e0 = (double)FUN_0040c760(local_d0 * local_d0 - local_240 * 2.0 * local_d8);
      local_3a0 = (local_d0 - local_e0) / local_240;
      local_388 = ((dVar51 - ((local_d0 * dVar51 - dVar48 * local_d8) -
                             local_240 * (dVar22 + dVar26 * dVar50 + dVar23)) / local_e0) -
                  local_3a0 * dVar48) / local_240;
      local_288 = ((dVar13 - ((local_d0 * dVar13 - dVar15 * local_d8) -
                             local_240 * dVar26 * (local_3b0 + dVar14 * local_228)) / local_e0) -
                  local_3a0 * dVar15) / local_240;
      local_240 = (dVar12 * local_390 -
                  (local_d0 * dVar12 * local_390 - local_240 * dVar26 * local_390) / local_e0) /
                  local_240;
    }
    local_d0 = (local_3a0 - local_4f8) - *(double *)(param_1 + 0xb8);
    dVar12 = local_240 - 1.0;
    local_d8 = (double)FUN_0040c760(local_d0 * local_d0 +
                                    *(double *)(param_1 + 0xb8) * 4.0 * local_3a0);
    dVar22 = local_d0 / local_d8;
    local_e0 = (*(double *)(param_1 + 0xb8) * 2.0) / local_d8;
    dVar51 = dVar22 * local_388 + local_e0 * local_388;
    dVar48 = dVar22 * dVar12 + local_e0 * local_240;
    dVar22 = dVar22 * local_288 + local_e0 * local_288;
    if (local_d0 < 0.0) {
      local_e8 = (*(double *)(param_1 + 0xb8) * 2.0) / (local_d8 - local_d0);
      local_f0 = 1.0 - local_e8;
      local_f8 = (local_3a0 * local_e8) / (local_d8 - local_d0);
      *(double *)(param_1 + 0x1fe) = local_3a0 * local_f0;
      local_410 = local_388 * local_f0 + local_f8 * (dVar51 - local_388);
      local_408 = local_240 * local_f0 + local_f8 * (dVar48 - dVar12);
      local_400 = local_288 * local_f0 + local_f8 * (dVar22 - local_288);
    }
    else {
      *(double *)(param_1 + 0x1fe) = local_3a0 - (local_d0 + local_d8) * 0.5;
      local_410 = local_388 - (local_388 + dVar51) * 0.5;
      local_408 = local_240 - (dVar12 + dVar48) * 0.5;
      local_400 = local_288 - (local_288 + dVar22) * 0.5;
    }
    if (local_4f8 == 0.0) {
      param_1[0x1fe] = 0;
      param_1[0x1ff] = 0;
      local_410 = 0.0;
      local_400 = 0.0;
    }
    if (local_4f8 < *(double *)(param_1 + 0x1fe)) {
      *(double *)(param_1 + 0x1fe) = local_4f8;
    }
    dVar12 = local_4f8 - *(double *)(param_1 + 0x1fe);
    *(undefined8 *)(param_1 + 0x392) = *(undefined8 *)(param_1 + 0x1fe);
    if ((*(char *)((longlong)param_1 + 0x1263) != '\0') && (0.0 < *(double *)(param_1 + 0x118))) {
      local_d8 = *(double *)(param_1 + 0x118) /
                 (*(double *)(param_1 + 0x60) * *(double *)(param_1 + 0x1fa));
      local_e0 = (-local_d8 / (*(double *)(param_1 + 0x60) * *(double *)(param_1 + 0x1fa))) *
                 *(double *)(param_1 + 0x60);
      local_f0 = 1.0 / (dVar10 * *(double *)(param_1 + 0x150));
      local_e8 = -local_f0 / *(double *)(param_1 + 0x1fc);
      local_f8 = dVar12 * local_f0 + 1.0;
      dVar48 = 2.0 / (local_f8 * local_f8 + 1.0);
      dVar22 = 1.0 - dVar48;
      dVar48 = local_f8 * dVar48 * dVar48;
      local_100 = local_d8 * dVar22 + 1.0;
      local_1e8 = local_e0 * dVar9 * dVar22 +
                  local_d8 * dVar48 * (dVar50 * local_e8 * dVar12 - local_410 * local_f0);
      local_1b0 = local_e0 * dVar8 * dVar22 +
                  local_d8 * dVar48 * (local_390 * local_e8 * dVar12 + (1.0 - local_408) * local_f0)
      ;
      local_1f0 = local_e0 * dVar46 * dVar22 +
                  local_d8 * dVar48 * (local_3b0 * local_e8 * dVar12 - local_400 * local_f0);
      if (local_100 == 1.0) {
        local_1f0 = 0.0;
        local_1b0 = 0.0;
        local_1e8 = 0.0;
      }
      dVar50 = dVar50 * local_100 + *(double *)(param_1 + 0x1fc) * local_1e8;
      local_390 = local_390 * local_100 + *(double *)(param_1 + 0x1fc) * local_1b0;
      local_3b0 = local_3b0 * local_100 + *(double *)(param_1 + 0x1fc) * local_1f0;
      *(double *)(param_1 + 0x1fc) = *(double *)(param_1 + 0x1fc) * local_100;
      *(undefined8 *)(param_1 + 0x38c) = *(undefined8 *)(param_1 + 0x1fc);
    }
    dVar22 = 1.0 - (*(double *)(param_1 + 0x1f8) * 0.5 * local_3a0) / dVar26;
    dVar48 = (dVar21 * *(double *)(param_1 + 0x1f0)) / dVar26;
    dVar51 = dVar21 * 2.0 * dVar22;
    local_d0 = (2.0 / dVar16 + dVar21 * *(double *)(param_1 + 0x1f8)) - 1.0;
    dVar22 = (*(double *)(param_1 + 0x1fc) + local_3a0 +
             dVar21 * *(double *)(param_1 + 0x1f0) * 2.0 * dVar22) / local_d0;
    dVar23 = (((dVar50 + local_388 + dVar51 * (local_268 * *(double *)(param_1 + 0x1f0) + 1.0)) -
              dVar48 * ((*(double *)(param_1 + 0x1f8) * local_388 -
                        (*(double *)(param_1 + 0x1f8) * local_3a0) / dVar26) + local_3a0 * local_3c8
                       )) -
             dVar22 * (local_2a0 * -2.0 +
                      dVar21 * (*(double *)(param_1 + 0x1f8) * local_268 + local_3c8))) / local_d0;
    dVar24 = (((local_3b0 + local_288 + dVar51 * local_228 * *(double *)(param_1 + 0x1f0)) -
              dVar48 * (dVar45 * local_3a0 + *(double *)(param_1 + 0x1f8) * local_288)) -
             dVar22 * (dVar45 * dVar21 + dVar21 * *(double *)(param_1 + 0x1f8) * local_228)) /
             local_d0;
    dVar27 = ((local_390 + local_240) - dVar48 * *(double *)(param_1 + 0x1f8) * local_240) /
             local_d0;
    dVar21 = *(double *)(param_1 + 0x178);
    dVar48 = 1.0 / (*(double *)(param_1 + 0x20c) * 200000000.0);
    dVar16 = *(double *)(param_1 + 0x1f0);
    dVar51 = (double)FUN_0040c2f0();
    dVar51 = (double)FUN_0040af80(*(double *)(param_1 + 0x210) * 0.7 * dVar51);
    dVar13 = (*(double *)(param_1 + 0x20e) * 1.9e-09) / (dVar51 + 1.0);
    dVar25 = (*(double *)(param_1 + 0x1e6) * *(double *)(param_1 + 0x20a)) /
             (*(double *)(param_1 + 0x1e6) + *(double *)(param_1 + 0x20a) * dVar13);
    dVar14 = (dVar25 * local_1d8) / *(double *)(param_1 + 0x60);
    dVar15 = *(double *)(param_1 + 0x1fa) * dVar14;
    local_e0 = *(double *)(param_1 + 0x1fa) / *(double *)(param_1 + 0x60);
    dVar9 = dVar14 * dVar9 +
            local_e0 *
            (local_1d8 *
             ((-dVar25 * dVar25 *
              ((-dVar13 * ((*(double *)(param_1 + 0x210) * 0.7 * dVar51) /
                          ((dVar16 + dVar21) * dVar48)) * dVar48) / (dVar51 + 1.0))) /
             *(double *)(param_1 + 0x1e6)) + dVar25 * local_1c8);
    dVar21 = dVar14 * dVar46 + local_e0 * dVar25 * local_190;
    *(double *)(param_1 + 0x200) = *(double *)(param_1 + 0x1f8) / dVar26;
    dVar51 = 1.0 - *(double *)(param_1 + 0x1fe) * 0.5 * *(double *)(param_1 + 0x200);
    dVar33 = *(double *)(param_1 + 0x1f0) * dVar51;
    dVar46 = *(double *)(param_1 + 0x1fe) / *(double *)(param_1 + 0x1fc);
    dVar35 = dVar46 + 1.0;
    dVar16 = (dVar15 * dVar33) / dVar35;
    local_d0 = dVar16 * local_3c0 + 1.0;
    dVar48 = dVar16 / local_d0;
    local_d0 = (1.0 - dVar48 * local_3c0) / local_d0;
    local_d8 = dVar48 * dVar48;
    dVar51 = local_d0 *
             (((dVar15 * (*(double *)(param_1 + 0x1f0) *
                          ((((*(double *)(param_1 + 0x1f8) * local_410 -
                             (*(double *)(param_1 + 0x1f8) * *(double *)(param_1 + 0x1fe)) / dVar26)
                            + *(double *)(param_1 + 0x1fe) * local_3c8) * -0.5) / dVar26) + dVar51)
               + dVar33 * dVar9) -
              dVar16 * ((local_410 - dVar46 * dVar50) / *(double *)(param_1 + 0x1fc))) / dVar35) -
             local_d8 * local_378;
    dVar13 = local_d0 *
             (((dVar15 * *(double *)(param_1 + 0x1f0) *
                         ((*(double *)(param_1 + 0x1f8) * -0.5 * local_408) / dVar26) +
               dVar33 * dVar14 * dVar8) -
              dVar16 * ((local_408 - dVar46 * local_390) / *(double *)(param_1 + 0x1fc))) / dVar35);
    dVar46 = local_d0 *
             (((dVar15 * *(double *)(param_1 + 0x1f0) *
                         (((*(double *)(param_1 + 0x1f8) * local_400 +
                           dVar45 * *(double *)(param_1 + 0x1fe)) * -0.5) / dVar26) +
               dVar33 * dVar21) -
              dVar16 * ((local_400 - dVar46 * local_3b0) / *(double *)(param_1 + 0x1fc))) / dVar35)
             - local_d8 * local_398;
    if (0.0 < *(double *)(param_1 + 0xb2)) {
      dVar16 = (double)FUN_0040c760(*(undefined8 *)(param_1 + 0x60));
      dVar16 = (*(double *)(param_1 + 0xb2) * dVar16) / dVar26;
      dVar33 = 1.0 / (dVar16 + 1.0);
      dVar16 = (dVar33 * dVar33 * dVar16) / dVar26;
    }
    else {
      dVar33 = 1.0;
      dVar16 = 0.0;
    }
    dVar35 = *(double *)(param_1 + 0xcc) / *(double *)(param_1 + 0x1fc);
    dVar17 = dVar35 * *(double *)(param_1 + 0x1f0);
    if (dVar17 <= -0.9) {
      local_e8 = 1.0 / (dVar17 * 20.0 + 17.0);
      dVar18 = (dVar17 + 0.8) * local_e8;
      local_e8 = local_e8 * local_e8;
      dVar35 = dVar35 * (1.0 - (*(double *)(param_1 + 0x1f0) * dVar50) /
                               *(double *)(param_1 + 0x1fc)) * local_e8;
      dVar17 = dVar17 * (local_e8 / *(double *)(param_1 + 0x1fc));
      dVar34 = -dVar17 * local_3b0;
      dVar17 = -dVar17 * local_390;
    }
    else {
      dVar18 = dVar17 + 1.0;
      dVar35 = dVar35 * (1.0 - (*(double *)(param_1 + 0x1f0) * dVar50) /
                               *(double *)(param_1 + 0x1fc));
      dVar34 = (-dVar17 * local_3b0) / *(double *)(param_1 + 0x1fc);
      dVar17 = (-dVar17 * local_390) / *(double *)(param_1 + 0x1fc);
    }
    if ((*(double *)(param_1 + 0xc4) <= 1.713908431e-15) || (dVar12 <= 1e-10)) {
      local_338 = 583461742500000.0;
      dVar10 = 583461742500000.0;
      dVar52 = 0.0;
      dVar28 = 0.0;
      dVar50 = 0.0;
      local_2f0 = 0.0;
      local_330 = 0.0;
      local_278 = 0.0;
    }
    else {
      dVar28 = local_3c0 * dVar48 + 1.0;
      local_d8 = local_3a0 / dVar10;
      local_d0 = *(double *)(param_1 + 0x60) + local_d8;
      local_338 = (dVar33 * dVar18 * dVar28 * local_d0) /
                  (*(double *)(param_1 + 0xc4) * *(double *)(param_1 + 0x150));
      local_330 = local_338 *
                  (dVar16 / dVar33 + dVar35 / dVar18 +
                   (local_378 * dVar48 + local_3c0 * dVar51) / dVar28 +
                  ((local_388 - (local_d8 * dVar50) / *(double *)(param_1 + 0x60)) / dVar10) /
                  local_d0);
      local_2f0 = local_338 *
                  (dVar34 / dVar18 + (local_398 * dVar48 + local_3c0 * dVar46) / dVar28 +
                  ((local_288 - (local_d8 * local_3b0) / *(double *)(param_1 + 0x60)) / dVar10) /
                  local_d0);
      local_278 = local_338 *
                  (dVar17 / dVar18 + (local_3c0 * dVar13) / dVar28 +
                  ((local_240 - (local_d8 * local_390) / *(double *)(param_1 + 0x60)) / dVar10) /
                  local_d0);
      dVar10 = local_338 * dVar12;
      dVar50 = local_330 * dVar12 - local_410 * local_338;
      dVar52 = local_2f0 * dVar12 - local_400 * local_338;
      dVar28 = local_278 * dVar12 + (1.0 - local_408) * local_338;
    }
    if (*(double *)(param_1 + 0x174) <= 1.713908431e-15) {
      local_248 = 583461742500000.0;
      local_230 = 0.0;
      dVar45 = 0.0;
      dVar35 = 0.0;
    }
    else {
      dVar29 = *(double *)(param_1 + 0x1f8) * local_3a0;
      dVar30 = dVar26 * dVar29;
      local_d0 = dVar26 + dVar29;
      dVar42 = local_d0 * local_d0;
      local_d8 = *(double *)(param_1 + 0x174);
      local_248 = (dVar26 - dVar30 / local_d0) / local_d8;
      dVar43 = (-(dVar26 * (dVar45 * local_3a0 + *(double *)(param_1 + 0x1f8) * local_288)) /
                local_d0 +
               (dVar30 * (*(double *)(param_1 + 0x1f8) * local_288 + dVar45 * local_3a0)) / dVar42)
               / local_d8;
      dVar45 = *(double *)(param_1 + 0xc6) * dVar39;
      if (dVar45 < -0.9) {
        local_e8 = 1.0 / (dVar45 + 0.8);
        local_e0 = (dVar45 * 20.0 + 17.0) * local_e8;
        local_230 = dVar43 * local_e0 -
                    local_248 * *(double *)(param_1 + 0xc6) * local_e8 * local_e8;
        local_248 = local_248 * local_e0;
      }
      else {
        local_e0 = 1.0 / (dVar45 + 1.0);
        local_248 = local_248 * local_e0;
        local_230 = (dVar43 - local_248 * *(double *)(param_1 + 0xc6)) * local_e0;
      }
      dVar35 = ((1.0 - ((dVar26 * *(double *)(param_1 + 0x1f8) * local_388 + dVar29 +
                        dVar26 * local_3a0 * local_3c8) / local_d0 -
                       (dVar30 * (*(double *)(param_1 + 0x1f8) * local_388 + local_3a0 * local_3c8 +
                                 1.0)) / dVar42)) / local_d8) * local_e0 * dVar18 +
               local_248 * dVar35;
      local_230 = local_230 * dVar18 + local_248 * dVar34;
      dVar45 = ((-(dVar26 * *(double *)(param_1 + 0x1f8) * local_240) / local_d0 +
                (dVar30 * *(double *)(param_1 + 0x1f8) * local_240) / dVar42) / local_d8) * local_e0
               * dVar18 + local_248 * dVar17;
      local_248 = local_248 * dVar18;
    }
    dVar10 = dVar22 + dVar10;
    if (*(double *)(param_1 + 0xb6) * local_4f8 <= 34.0) {
      local_d0 = (double)FUN_0040af80(*(double *)(param_1 + 0xb6) * local_4f8);
      local_2f8 = local_d0 * *(double *)(param_1 + 0xb6);
    }
    else {
      local_d0 = 583461742500000.0;
      local_2f8 = 0.0;
    }
    if (*(double *)(param_1 + 0xb4) <= 1.713908431e-15) {
      local_150 = 583461742500000.0;
      dVar26 = 0.0;
      dVar16 = 0.0;
    }
    else {
      local_d8 = *(double *)(param_1 + 0x212) * *(double *)(param_1 + 0x60) + 1.0;
      local_150 = (local_d8 * local_d0 + 1.0) / *(double *)(param_1 + 0xb4);
      dVar16 = local_150 * dVar16;
      dVar26 = (dVar33 * local_d8 * local_2f8) / *(double *)(param_1 + 0xb4);
      local_150 = local_150 * dVar33;
    }
    if ((*(double *)(param_1 + 0xca) <= 0.0) || (*(double *)(param_1 + 200) < 0.0)) {
      local_1f8 = 583461742500000.0;
      local_188 = 0.0;
      local_1c0 = 0.0;
      local_1a0 = 0.0;
    }
    else if (dVar12 <= (*(double *)(param_1 + 200) * *(double *)(param_1 + 0x150)) / 34.0) {
      local_1f8 = (*(double *)(param_1 + 0x60) * 583461742500000.0) / *(double *)(param_1 + 0xca);
      local_188 = 0.0;
      local_1c0 = 0.0;
      local_1a0 = 0.0;
    }
    else {
      dVar33 = *(double *)(param_1 + 200);
      dVar17 = *(double *)(param_1 + 0x150);
      dVar18 = (double)FUN_0040af80();
      local_1f8 = (*(double *)(param_1 + 0x60) * dVar18) / *(double *)(param_1 + 0xca);
      local_d0 = (((dVar33 * dVar17) / dVar12) * local_1f8) / dVar12;
      local_1c0 = local_d0 * local_410;
      local_1a0 = -local_d0 * (1.0 - local_408);
      local_188 = local_d0 * local_400;
    }
    dVar33 = dVar12 / local_248;
    dVar17 = dVar33 + 1.0;
    dVar18 = dVar48 * dVar17;
    dVar34 = dVar12 / local_150;
    dVar29 = dVar34 + 1.0;
    dVar42 = dVar18 * dVar29;
    local_d0 = (double)FUN_0040c2f0(dVar10 / dVar22);
    local_d0 = local_d0 / local_338;
    dVar30 = local_d0 + 1.0;
    dVar50 = (dVar29 * (dVar17 * dVar51 - (dVar48 * (local_410 + dVar33 * dVar35)) / local_248) -
             (dVar18 * (local_410 + dVar34 * dVar16)) / local_150) * dVar30 +
             dVar42 * ((((dVar23 + dVar50) / dVar10 - dVar23 / dVar22) - local_d0 * local_330) /
                      local_338);
    dVar46 = (dVar29 * (dVar17 * dVar46 - (dVar48 * (local_400 + dVar33 * local_230)) / local_248) -
             (dVar18 * local_400) / local_150) * dVar30 +
             dVar42 * ((((dVar24 + dVar52) / dVar10 - dVar24 / dVar22) - local_d0 * local_2f0) /
                      local_338);
    dVar10 = (dVar29 * (dVar17 * dVar13 +
                       (dVar48 * (1.0 - (local_408 + dVar33 * dVar45))) / local_248) +
             (dVar18 * (1.0 - (local_408 + dVar34 * dVar26))) / local_150) * dVar30 +
             dVar42 * ((((dVar27 + dVar28) / dVar10 - dVar27 / dVar22) - local_d0 * local_278) /
                      local_338);
    dVar42 = dVar42 * dVar30;
    dVar45 = *(double *)(param_1 + 0xd6) + *(double *)(param_1 + 0xd8) * *(double *)(param_1 + 0x60)
    ;
    if ((dVar45 <= 0.0) || (*(double *)(param_1 + 0xda) <= 0.0)) {
      dVar26 = 0.0;
      dVar22 = 0.0;
      dVar16 = 0.0;
      dVar45 = 0.0;
    }
    else {
      local_d8 = dVar45 / *(double *)(param_1 + 0x60);
      if (dVar12 <= *(double *)(param_1 + 0xda) / 34.0) {
        local_e0 = local_d8 * 1.713908431e-15;
        local_d0 = local_e0 * dVar12;
        local_308 = -local_e0;
        local_2f8 = local_e0 * (1.0 - local_408);
      }
      else {
        dVar45 = *(double *)(param_1 + 0xda);
        local_d0 = (double)FUN_0040af80();
        local_d0 = local_d8 * dVar12 * local_d0;
        local_e0 = (local_d0 / dVar12) * (-dVar45 / dVar12 - 1.0);
        local_2f8 = local_e0 * (local_408 - 1.0);
        local_308 = local_e0;
      }
      local_2e8 = local_308 * local_410;
      local_308 = local_308 * local_400;
      local_e8 = dVar42 * *(double *)(param_1 + 0x1fe);
      dVar45 = local_d0 * local_e8;
      dVar22 = local_d0 * (dVar50 * *(double *)(param_1 + 0x1fe) + dVar42 * local_410) +
               local_e8 * local_2e8;
      dVar16 = local_d0 * (dVar10 * *(double *)(param_1 + 0x1fe) + dVar42 * local_408) +
               local_e8 * local_2f8 + dVar22 * dVar41;
      dVar26 = dVar22 * dVar32;
      dVar22 = (local_d0 * (dVar46 * *(double *)(param_1 + 0x1fe) + dVar42 * local_400) +
                local_e8 * local_308 + dVar22 * dVar31) * dVar19;
    }
    *(double *)(param_1 + 0x216) = dVar45;
    *(double *)(param_1 + 0x218) = dVar22;
    *(double *)(param_1 + 0x21a) = dVar26;
    *(double *)(param_1 + 0x21c) = dVar16;
    dVar12 = dVar12 / local_1f8;
    dVar45 = dVar12 + 1.0;
    dVar16 = dVar42 * dVar45;
    *(double *)(param_1 + 0x39c) =
         dVar45 * dVar50 - (dVar42 * (local_410 + dVar12 * local_1c0)) / local_1f8;
    dVar10 = dVar45 * dVar10 + (dVar42 * (1.0 - (local_408 + dVar12 * local_1a0))) / local_1f8 +
             *(double *)(param_1 + 0x39c) * dVar41;
    dVar50 = (dVar45 * dVar46 - (dVar42 * (local_400 + dVar12 * local_188)) / local_1f8) +
             *(double *)(param_1 + 0x39c) * dVar31;
    dVar45 = *(double *)(param_1 + 0x39c);
    *(double *)(param_1 + 0x39c) =
         (dVar16 * local_410 + *(double *)(param_1 + 0x1fe) * dVar45) * dVar32;
    dVar46 = dVar16 * (local_408 + local_410 * dVar41) + *(double *)(param_1 + 0x1fe) * dVar10;
    dVar26 = (dVar16 * (local_400 + local_410 * dVar31) + *(double *)(param_1 + 0x1fe) * dVar50) *
             dVar19;
    local_450 = dVar16 * *(double *)(param_1 + 0x1fe);
    if (((char)param_1[0x499] != '\0') && (0.0 < *(double *)(param_1 + 0x130))) {
      dVar13 = ((1.0 / *(double *)(param_1 + 0x60)) / dVar14) / *(double *)(param_1 + 0x1f0);
      local_100 = -dVar13 / *(double *)(param_1 + 0x1f0);
      dVar12 = *(double *)(param_1 + 0x39c);
      dVar22 = local_450 * local_100;
      dVar48 = local_450 * local_100;
      dVar51 = local_450 * local_100;
      local_d0 = (local_450 * dVar13) /
                 (*(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x142));
      if (local_d0 <= 0.0) {
        dVar23 = 1.0;
        dVar12 = 0.0;
        dVar22 = 0.0;
        dVar48 = 0.0;
      }
      else {
        dVar23 = (double)FUN_0040c2f0(local_d0);
        local_d8 = (double)FUN_0040af80(dVar23 * 6.0);
        local_d8 = local_d8 + 1.0;
        local_e0 = ((local_d8 - 1.0) * 6.0) / (local_450 * dVar13);
        dVar23 = (double)FUN_0040c2f0(local_d8);
        dVar23 = (double)FUN_0040af80(dVar23 / 6.0);
        dVar23 = 1.0 / dVar23;
        local_e8 = (dVar23 * -0.16666666666666666) / local_d8;
        dVar12 = local_e8 * local_e0 * (dVar12 * dVar13 + dVar22 * dVar32);
        dVar22 = local_e8 * local_e0 * (dVar46 * dVar13 + dVar48 * dVar41);
        dVar48 = local_e8 * local_e0 * (dVar26 * dVar13 + dVar51 * dVar31);
      }
      *(double *)(param_1 + 0x39c) = *(double *)(param_1 + 0x39c) * dVar23;
      *(double *)(param_1 + 0x39c) = *(double *)(param_1 + 0x39c) + local_450 * dVar12;
      dVar26 = dVar26 * dVar23 + local_450 * dVar48;
      dVar46 = dVar46 * dVar23 + local_450 * dVar22;
      local_450 = local_450 * dVar23;
    }
    *(double *)(param_1 + 0x24) = dVar46;
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_1 + 0x39c);
    *(double *)(param_1 + 0x26) = dVar26;
    *(double *)(param_1 + 0x21e) = dVar16;
    if (*(double *)(param_1 + 0x21e) <= 1e-09) {
      param_1[0x21e] = -0x17d9296b;
      param_1[0x21f] = 0x3e112e0b;
    }
    if (((1 < param_1[0x53]) || (param_1[0x54] != 0)) || (param_1[0x55] != 0)) {
      dVar46 = *(double *)(param_1 + 0x116) * *(double *)(param_1 + 0x204);
      *(double *)(param_1 + 0x220) = *(double *)(param_1 + 0x114) * (dVar46 * dVar15 + dVar16);
      *(double *)(param_1 + 0x222) =
           *(double *)(param_1 + 0x114) * ((dVar14 * dVar8 + dVar9 * dVar41) * dVar46 + dVar10);
      *(double *)(param_1 + 0x224) =
           *(double *)(param_1 + 0x114) * ((dVar21 + dVar9 * dVar31) * dVar46 + dVar50) * dVar19;
      *(double *)(param_1 + 0x226) =
           *(double *)(param_1 + 0x114) * (dVar9 * dVar46 + dVar45) * dVar32;
      if (*(double *)(param_1 + 0x74) != 1.0) {
        *(double *)(param_1 + 0x220) = *(double *)(param_1 + 0x220) * *(double *)(param_1 + 0x74);
        *(double *)(param_1 + 0x226) = *(double *)(param_1 + 0x226) * *(double *)(param_1 + 0x74);
        *(double *)(param_1 + 0x222) = *(double *)(param_1 + 0x222) * *(double *)(param_1 + 0x74);
        *(double *)(param_1 + 0x224) = *(double *)(param_1 + 0x224) * *(double *)(param_1 + 0x74);
      }
      if (param_1[0x53] == 2) {
        local_100 = *(double *)(param_1 + 0x18a) * *(double *)(param_1 + 0x18a);
        dVar45 = *(double *)(param_1 + 0x18a) + *(double *)(param_1 + 0x220);
        *(double *)(param_1 + 0x220) =
             (*(double *)(param_1 + 0x18a) * *(double *)(param_1 + 0x220)) / dVar45;
        dVar45 = (local_100 / dVar45) / dVar45;
        *(double *)(param_1 + 0x226) = *(double *)(param_1 + 0x226) * dVar45;
        *(double *)(param_1 + 0x222) = *(double *)(param_1 + 0x222) * dVar45;
        *(double *)(param_1 + 0x224) = *(double *)(param_1 + 0x224) * dVar45;
      }
      *(double *)(param_1 + 0x228) =
           -(*(double *)(param_1 + 0x226) + *(double *)(param_1 + 0x222) +
            *(double *)(param_1 + 0x224));
    }
    if (param_1[0x4f] < 1) {
      param_1[0x22a] = 0;
      param_1[0x22b] = 0;
      param_1[0x230] = 0;
      param_1[0x231] = 0;
      param_1[0x22e] = 0;
      param_1[0x22f] = 0;
      param_1[0x234] = 0;
      param_1[0x235] = 0;
      param_1[0x232] = 0;
      param_1[0x233] = 0;
      param_1[0x22c] = 0;
      param_1[0x22d] = 0;
      param_1[0x238] = 0;
      param_1[0x239] = 0;
      param_1[0x236] = 0;
      param_1[0x237] = 0;
      param_1[0x23c] = 0;
      param_1[0x23d] = 0;
      param_1[0x23a] = 0;
      param_1[0x23b] = 0;
    }
    else {
      dVar45 = local_668 - *(double *)(param_1 + 0x154);
      local_b0 = (double)FUN_0040c760(dVar45 * dVar45 + 0.0001);
      local_a0[0] = (dVar45 + local_b0) * 0.5;
      local_b0 = local_a0[0] / local_b0;
      dVar8 = *(double *)(param_1 + 0xbc) * local_a0[0] + 1.0;
      dVar9 = ((-*(double *)(param_1 + 0xbc) / dVar8) / dVar8) * local_b0;
      local_d0 = -*(double *)(param_1 + 0xbe) * local_650;
      dVar45 = *(double *)(param_1 + 0xbe);
      local_d8 = 1.0 / dVar8 + local_d0;
      local_e0 = (double)FUN_0040c760(local_d8 * local_d8 + 0.01);
      local_e0 = local_d8 + local_e0;
      dVar8 = local_e0 / (local_e0 - local_d8);
      local_e8 = *(double *)(param_1 + 0x13a) * 0.5;
      *(double *)(param_1 + 0x22a) =
           *(double *)(param_1 + 0x194) /
           (*(double *)(param_1 + 0x194) * (*(double *)(param_1 + 0x13e) + local_e0 * local_e8) +
           1.0);
      dVar10 = -*(double *)(param_1 + 0x22a) * *(double *)(param_1 + 0x22a) *
               local_e8 * dVar8 * dVar9;
      dVar21 = -*(double *)(param_1 + 0x22a) * *(double *)(param_1 + 0x22a) *
               local_e8 * dVar8 * -dVar45;
      dVar45 = local_5f8 - *(double *)(param_1 + 0x154);
      local_b8 = (double)FUN_0040c760(dVar45 * dVar45 + 0.0001);
      local_a8 = (dVar45 + local_b8) * 0.5;
      local_b8 = local_a8 / local_b8;
      dVar8 = *(double *)(param_1 + 0xbc) * local_a8 + 1.0;
      dVar9 = ((-*(double *)(param_1 + 0xbc) / dVar8) / dVar8) * local_b8;
      local_d0 = -*(double *)(param_1 + 0xbe) * local_610;
      dVar45 = *(double *)(param_1 + 0xbe);
      local_d8 = 1.0 / dVar8 + local_d0;
      local_e0 = (double)FUN_0040c760(local_d8 * local_d8 + 0.01);
      local_e0 = local_d8 + local_e0;
      dVar8 = local_e0 / (local_e0 - local_d8);
      local_e8 = *(double *)(param_1 + 0x138) * 0.5;
      *(double *)(param_1 + 0x22c) =
           *(double *)(param_1 + 0x196) /
           (*(double *)(param_1 + 0x196) * (*(double *)(param_1 + 0x13c) + local_e0 * local_e8) +
           1.0);
      dVar9 = -*(double *)(param_1 + 0x22c) * *(double *)(param_1 + 0x22c) *
              local_e8 * dVar8 * dVar9;
      dVar45 = -*(double *)(param_1 + 0x22c) * *(double *)(param_1 + 0x22c) *
               local_e8 * dVar8 * -dVar45;
      *(double *)(param_1 + 0x22e) = local_628 * 0.0;
      *(double *)(param_1 + 0x230) = local_628 * dVar10;
      *(double *)(param_1 + 0x232) = local_628 * -(dVar10 + dVar21 + 0.0);
      *(double *)(param_1 + 0x234) = local_628 * dVar21;
      local_d8 = local_620 - local_658;
      *(double *)(param_1 + 0x236) = local_d8 * -(dVar9 + dVar45 + 0.0);
      *(double *)(param_1 + 0x238) = local_d8 * dVar9;
      *(double *)(param_1 + 0x23a) = local_d8 * 0.0;
      *(double *)(param_1 + 0x23c) = local_d8 * dVar45;
    }
    if (param_1[0x4d] == 0) {
      local_5b8 = *(double *)(param_1 + 0x1e4) * 3.0;
    }
    else {
      local_5b8 = (*(double *)(param_1 + 0x1e0) * *(double *)(param_1 + 0x1e4)) /
                  *(double *)(param_1 + 0x1e2);
    }
    if (param_1[0x4d] == 0) {
      local_d0 = (local_658 - dVar36) - *(double *)(param_1 + 0xe2);
    }
    else {
      local_d0 = ((local_658 - dVar36) - *(double *)(param_1 + 0xe2)) + *(double *)(param_1 + 0x154)
      ;
    }
    local_d0 = local_d0 / local_5b8;
    local_b0 = dVar38;
    local_a0[0] = dVar36;
    if (((*(double *)(param_1 + 0xdc) <= 0.0) || (*(double *)(param_1 + 0xde) <= 0.0)) ||
       ((local_d0 <= 0.0 || ((*(double *)(param_1 + 0xe0) <= 0.0 || (0.0 < local_610)))))) {
      param_1[0x23e] = 0;
      param_1[0x23f] = 0;
      param_1[0x244] = 0;
      param_1[0x245] = 0;
      param_1[0x242] = 0;
      param_1[0x243] = 0;
      param_1[0x240] = 0;
      param_1[0x241] = 0;
    }
    else {
      dVar45 = 1.0 / local_5b8;
      local_d8 = *(double *)(param_1 + 0xde) / local_d0;
      if (100.0 <= local_d8) {
        *(double *)(param_1 + 0x23e) =
             *(double *)(param_1 + 0xdc) * *(double *)(param_1 + 0x68) * 3.720075976e-44;
        *(double *)(param_1 + 0x240) = *(double *)(param_1 + 0x23e) * dVar45;
        *(double *)(param_1 + 0x242) = *(double *)(param_1 + 0x23e) * -dVar38 * dVar45;
        *(double *)(param_1 + 0x23e) = *(double *)(param_1 + 0x23e) * local_d0;
      }
      else {
        dVar8 = (double)FUN_0040af80(-local_d8);
        *(double *)(param_1 + 0x23e) =
             *(double *)(param_1 + 0xdc) * *(double *)(param_1 + 0x68) * local_d0 * dVar8;
        local_e0 = (*(double *)(param_1 + 0x23e) * (local_d8 + 1.0)) / local_d0;
        *(double *)(param_1 + 0x240) = local_e0 * dVar45;
        *(double *)(param_1 + 0x242) = local_e0 * -dVar38 * dVar45;
      }
      local_e8 = local_610 * local_610;
      local_f0 = -local_610 * local_e8;
      local_f8 = *(double *)(param_1 + 0xe0) + local_f0;
      dVar45 = local_f0 / local_f8;
      dVar38 = ((*(double *)(param_1 + 0xe0) * 3.0 * local_e8) / local_f8) / local_f8;
      *(double *)(param_1 + 0x240) =
           *(double *)(param_1 + 0x240) * dVar45 + *(double *)(param_1 + 0x23e) * dVar38;
      *(double *)(param_1 + 0x242) = *(double *)(param_1 + 0x242) * dVar45;
      *(double *)(param_1 + 0x244) = -*(double *)(param_1 + 0x23e) * dVar38;
      *(double *)(param_1 + 0x23e) = *(double *)(param_1 + 0x23e) * dVar45;
      if (param_1[0x4d] == 0) {
        local_d0 = (-local_658 - dVar20) - *(double *)(param_1 + 0xea);
      }
      else {
        local_d0 = ((-local_658 - dVar20) - *(double *)(param_1 + 0xea)) +
                   *(double *)(param_1 + 0x154);
      }
      local_d0 = local_d0 / local_5b8;
      local_b8 = dVar49;
      local_a8 = dVar20;
      if ((((*(double *)(param_1 + 0xe4) <= 0.0) || (*(double *)(param_1 + 0xe6) <= 0.0)) ||
          (local_d0 <= 0.0)) || ((*(double *)(param_1 + 0xe8) <= 0.0 || (0.0 < local_650)))) {
        param_1[0x246] = 0;
        param_1[0x247] = 0;
        param_1[0x248] = 0;
        param_1[0x249] = 0;
        param_1[0x24a] = 0;
        param_1[0x24b] = 0;
        param_1[0x24c] = 0;
        param_1[0x24d] = 0;
      }
      else {
        dVar45 = 1.0 / local_5b8;
        local_d8 = *(double *)(param_1 + 0xe6) / local_d0;
        if (100.0 <= local_d8) {
          *(double *)(param_1 + 0x246) =
               *(double *)(param_1 + 0xe4) * *(double *)(param_1 + 0x68) * 3.720075976e-44;
          *(double *)(param_1 + 0x248) = *(double *)(param_1 + 0x246) * dVar45;
          *(double *)(param_1 + 0x24a) = *(double *)(param_1 + 0x246) * -dVar49 * dVar45;
          *(double *)(param_1 + 0x246) = *(double *)(param_1 + 0x246) * local_d0;
        }
        else {
          dVar38 = (double)FUN_0040af80(-local_d8);
          *(double *)(param_1 + 0x246) =
               *(double *)(param_1 + 0xe4) * *(double *)(param_1 + 0x68) * local_d0 * dVar38;
          local_e0 = (*(double *)(param_1 + 0x246) * (local_d8 + 1.0)) / local_d0;
          *(double *)(param_1 + 0x248) = local_e0 * dVar45;
          *(double *)(param_1 + 0x24a) = local_e0 * -dVar49 * dVar45;
        }
        local_e8 = local_650 * local_650;
        local_f0 = -local_650 * local_e8;
        local_f8 = *(double *)(param_1 + 0xe8) + local_f0;
        dVar45 = local_f0 / local_f8;
        dVar49 = ((*(double *)(param_1 + 0xe8) * 3.0 * local_e8) / local_f8) / local_f8;
        *(double *)(param_1 + 0x248) =
             *(double *)(param_1 + 0x248) * dVar45 + *(double *)(param_1 + 0x246) * dVar49;
        *(double *)(param_1 + 0x24a) = *(double *)(param_1 + 0x24a) * dVar45;
        *(double *)(param_1 + 0x24c) = -*(double *)(param_1 + 0x246) * dVar49;
        *(double *)(param_1 + 0x246) = *(double *)(param_1 + 0x246) * dVar45;
      }
      if ((param_1[0x56] != 0) || (param_1[0x57] != 0)) {
        local_5e0 = *(double *)(param_1 + 0x17e);
        dVar45 = ((local_5e0 - local_4c0) + dVar39) - 0.02;
        if (0.0 < local_5e0) {
          local_5b8 = (double)FUN_0040c760(dVar45 * dVar45 + local_5e0 * 0.08);
        }
        else {
          local_5b8 = (double)FUN_0040c760(dVar45 * dVar45 - local_5e0 * 0.08);
        }
        local_d0 = (dVar45 / local_5b8 + 1.0) * 0.5;
        dVar45 = local_5e0 - (dVar45 + local_5b8) * 0.5;
        dVar49 = local_d0 * local_4c8;
        dVar38 = -local_d0;
        local_5d8 = local_5e0 - dVar45;
        local_5d0 = -dVar49;
        local_5c8 = local_d0;
        if (local_5d8 < 0.0) {
          local_5d8 = 0.0;
          local_5d0 = 0.0;
          local_5c8 = 0.0;
        }
        local_5b8 = *(double *)(param_1 + 0x170) * 0.5;
        local_e0 = ((local_4c0 - dVar45) - dVar39) - *(double *)(param_1 + 0x1f0);
        if (*(double *)(param_1 + 0x170) == 0.0) {
          local_630 = 0.0;
          local_600 = 0.0;
          local_5f0 = 0.0;
          local_5e8 = 0.0;
        }
        else if (0.0 <= local_e0) {
          local_d0 = (double)FUN_0040c760(local_5b8 * local_5b8 + local_e0);
          local_d8 = local_5b8 / local_d0;
          local_630 = *(double *)(param_1 + 0x170) * (local_d0 - local_5b8);
          local_600 = local_d8 * ((local_4c8 - dVar49) - dVar32);
          local_5f0 = -local_d8 * dVar41;
          local_5e8 = -local_d8 * (dVar38 + dVar31 + 1.0);
        }
        else {
          local_630 = -local_e0;
          local_600 = -local_4c8 + dVar49 + dVar32;
          local_5e8 = dVar38 + dVar31 + 1.0;
          local_5f0 = dVar41;
        }
        local_630 = local_630 + *(double *)(param_1 + 0x1f0);
        local_600 = local_600 + dVar32;
        local_5f0 = local_5f0 + dVar41;
        local_5e8 = local_5e8 + dVar31;
      }
      if (param_1[0x4e] < 2) {
        local_250 = *(double *)(param_1 + 0x204);
      }
      else {
        local_250 = *(double *)(param_1 + 0x206);
      }
      if (param_1[0x56] < 1) {
        param_1[0x24e] = 0;
        param_1[0x24f] = 0;
        param_1[0x250] = 0;
        param_1[0x251] = 0;
        param_1[0x252] = 0;
        param_1[0x253] = 0;
        param_1[0x254] = 0;
        param_1[0x255] = 0;
        param_1[0x256] = 0;
        param_1[599] = 0;
        param_1[600] = 0;
        param_1[0x259] = 0;
        param_1[0x25a] = 0;
        param_1[0x25b] = 0;
        param_1[0x25c] = 0;
        param_1[0x25d] = 0;
        param_1[0x25e] = 0;
        param_1[0x25f] = 0;
        param_1[0x260] = 0;
        param_1[0x261] = 0;
        param_1[0x262] = 0;
        param_1[0x263] = 0;
        param_1[0x264] = 0;
        param_1[0x265] = 0;
        param_1[0x266] = 0;
        param_1[0x267] = 0;
        param_1[0x268] = 0;
        param_1[0x269] = 0;
      }
      else {
        dVar45 = local_250 * *(double *)(param_1 + 0x10a);
        if (param_1[0x56] == 1) {
          local_598 = (local_4c0 - (double)*param_1 * *(double *)(param_1 + 0x32)) / dVar45;
          if (34.0 < local_598) {
            local_5c0 = local_4c0 - (double)*param_1 * *(double *)(param_1 + 0x32);
            local_5a8 = local_4c8;
            local_5a0 = 0.0;
            local_5b0 = 0.0;
          }
        }
        else if ((param_1[0x56] == 2) &&
                (local_598 = (local_4c0 - *(double *)(param_1 + 0x38)) / dVar45, 34.0 < local_598))
        {
          local_5c0 = local_4c0 - *(double *)(param_1 + 0x38);
          local_5a8 = local_4c8;
          local_5a0 = -local_4e0;
          local_5b0 = -local_4e8;
        }
        if (-34.0 <= local_598) {
          if ((-34.0 <= local_598) && (local_598 <= 34.0)) {
            dVar49 = (double)FUN_0040af80(local_598);
            local_5c0 = (double)FUN_0040c2f0(dVar49 + 1.0);
            local_5c0 = dVar45 * local_5c0;
            if (param_1[0x56] == 1) {
              local_5a0 = 0.0;
              local_5b0 = 0.0;
            }
            else if (param_1[0x56] == 2) {
              local_5a0 = -local_4c8 * local_4e0;
              local_5b0 = -local_4c8 * local_4e8;
            }
            local_5a8 = (dVar49 / (dVar49 + 1.0)) * local_4c8;
          }
        }
        else {
          local_5c0 = (double)FUN_0040c2f0(0x3ff0000000000008);
          local_5c0 = dVar45 * local_5c0;
          local_5a8 = 0.0;
          local_5a0 = 0.0;
          local_5b0 = 0.0;
        }
        local_d8 = local_4c0 * local_5c0;
        dVar45 = *(double *)(param_1 + 0x15a);
        dVar49 = *(double *)(param_1 + 0x15c);
        local_e0 = *(double *)(param_1 + 0xec) * *(double *)(param_1 + 0xf0) -
                   *(double *)(param_1 + 0xee);
        local_e8 = *(double *)(param_1 + 0xee) * *(double *)(param_1 + 0xf0);
        local_f0 = dVar49 * ((*(double *)(param_1 + 0xec) + local_e0 * local_630) -
                            local_e8 * local_630 * local_630);
        if (local_f0 <= 34.0) {
          if (-34.0 <= local_f0) {
            local_f8 = (double)FUN_0040af80(local_f0);
            dVar38 = local_f8 * dVar49 * (local_e0 - local_e8 * 2.0 * local_630);
            dVar8 = dVar38 * local_5f0;
            dVar49 = dVar38 * local_5e8;
            dVar38 = dVar38 * local_600;
          }
          else {
            local_f8 = 1.713908431e-15;
            dVar38 = 0.0;
            dVar8 = 0.0;
            dVar49 = 0.0;
          }
        }
        else {
          local_f8 = 583461742500000.0;
          dVar38 = 0.0;
          dVar8 = 0.0;
          dVar49 = 0.0;
        }
        dVar20 = dVar45 * local_d8 * local_f8;
        dVar38 = dVar45 * (local_d8 * dVar38 +
                          local_f8 * (local_4c8 * local_5c0 + local_4c0 * local_5a8));
        dVar8 = dVar45 * (local_d8 * dVar8 + local_f8 * local_4c0 * local_5a0);
        dVar45 = dVar45 * (local_d8 * dVar49 + local_f8 * local_4c0 * local_5b0);
        if (*(char *)((longlong)param_1 + 0x126b) == '\0') {
          dVar36 = *(double *)(param_1 + 0x1f0) + 1e-20;
          dVar49 = ((*(double *)(param_1 + 0x15c) * *(double *)(param_1 + 0x1e4)) / dVar36) / dVar36
          ;
          dVar10 = -dVar49 / dVar36;
          dVar49 = dVar49 * (1.0 - (*(double *)(param_1 + 0x1fe) * 0.5) / dVar36);
          dVar36 = dVar10 * ((local_410 - (*(double *)(param_1 + 0x1fe) * 3.0) / dVar36) * 0.5 + 2.0
                            );
          dVar9 = dVar10 * 0.5 * local_408;
          dVar10 = dVar10 * 0.5 * local_400;
        }
        else {
          dVar49 = *(double *)(param_1 + 0x112);
          dVar36 = 0.0;
          dVar9 = 0.0;
          dVar10 = 0.0;
        }
        dVar21 = -dVar49 * *(double *)(param_1 + 0x1fe);
        dVar36 = -*(double *)(param_1 + 0x1fe) * dVar36 - dVar49 * local_410;
        dVar41 = (-*(double *)(param_1 + 0x1fe) * dVar9 - dVar49 * local_408) + dVar36 * dVar41;
        dVar32 = dVar36 * dVar32;
        dVar9 = ((-*(double *)(param_1 + 0x1fe) * dVar10 - dVar49 * local_400) + dVar36 * dVar31) *
                dVar19;
        dVar49 = dVar21 * dVar21 + 0.0002;
        dVar36 = dVar21 * 2.0;
        if (dVar21 <= 34.0) {
          if (-34.0 <= dVar21) {
            local_318 = (double)FUN_0040af80(dVar21);
            dVar46 = local_318 * dVar32;
            dVar31 = local_318 * dVar41;
            dVar10 = local_318 * dVar9;
          }
          else {
            local_318 = 1.713908431e-15;
            dVar46 = 0.0;
            dVar31 = 0.0;
            dVar10 = 0.0;
          }
        }
        else {
          local_318 = 583461742500000.0;
          dVar46 = 0.0;
          dVar31 = 0.0;
          dVar10 = 0.0;
        }
        dVar50 = ((local_318 + -0.9999) - dVar21) / dVar49;
        *(double *)(param_1 + 0x24e) = dVar20 * dVar50;
        local_d0 = local_318 - 1.0001;
        local_100 = (dVar21 * local_318 - local_d0) / dVar49;
        *(double *)(param_1 + 0x256) = dVar20 * local_100;
        *(double *)(param_1 + 0x250) =
             dVar38 * dVar50 + dVar20 * (((dVar46 - dVar32) - dVar50 * dVar36 * dVar32) / dVar49);
        *(double *)(param_1 + 0x252) =
             dVar8 * dVar50 + dVar20 * (((dVar31 - dVar41) - dVar50 * dVar36 * dVar41) / dVar49);
        *(double *)(param_1 + 0x254) =
             (dVar45 * dVar50 + dVar20 * (((dVar10 - dVar9) - dVar50 * dVar36 * dVar9) / dVar49)) *
             dVar19;
        *(double *)(param_1 + 600) =
             dVar38 * local_100 +
             dVar20 * (((dVar32 * local_318 + (dVar21 - 1.0) * dVar46) - local_100 * dVar36 * dVar32
                       ) / dVar49);
        *(double *)(param_1 + 0x25a) =
             dVar8 * local_100 +
             dVar20 * (((dVar41 * local_318 + (dVar21 - 1.0) * dVar31) - local_100 * dVar36 * dVar41
                       ) / dVar49);
        *(double *)(param_1 + 0x25c) =
             (dVar45 * local_100 +
             dVar20 * (((dVar9 * local_318 + (dVar21 - 1.0) * dVar10) - local_100 * dVar36 * dVar9)
                      / dVar49)) * dVar19;
        dVar45 = local_668 - (*(double *)(param_1 + 0x154) + *(double *)(param_1 + 0x11a));
        local_a0[0] = (double)FUN_0040c760(dVar45 * dVar45 + 0.0001);
        local_b0 = dVar45 / local_a0[0];
        local_d8 = local_668 * local_a0[0];
        dVar38 = local_668 * local_b0 + local_a0[0];
        dVar45 = *(double *)(param_1 + 0x15e);
        dVar49 = *(double *)(param_1 + 0x164);
        local_e0 = *(double *)(param_1 + 0xf2) * *(double *)(param_1 + 0xf6) -
                   *(double *)(param_1 + 0xf4);
        local_e8 = *(double *)(param_1 + 0xf4) * *(double *)(param_1 + 0xf6);
        local_f0 = dVar49 * ((*(double *)(param_1 + 0xf2) + local_e0 * local_a0[0]) -
                            local_e8 * local_a0[0] * local_a0[0]);
        if (local_f0 <= 34.0) {
          if (-34.0 <= local_f0) {
            local_f8 = (double)FUN_0040af80(local_f0);
            dVar8 = local_f8 * dVar49 * (local_e0 - local_e8 * 2.0 * local_a0[0]) * local_b0;
          }
          else {
            local_f8 = 1.713908431e-15;
            dVar8 = 0.0;
          }
        }
        else {
          local_f8 = 583461742500000.0;
          dVar8 = 0.0;
        }
        *(double *)(param_1 + 0x25e) = dVar45 * local_d8 * local_f8;
        dVar45 = dVar45 * (local_d8 * dVar8 + local_f8 * dVar38);
        local_5b8 = local_5f8 - (*(double *)(param_1 + 0x154) + *(double *)(param_1 + 0x11a));
        local_a8 = (double)FUN_0040c760(local_5b8 * local_5b8 + 0.0001);
        local_b8 = local_5b8 / local_a8;
        local_d8 = local_5f8 * local_a8;
        dVar8 = local_5f8 * local_b8 + local_a8;
        dVar38 = *(double *)(param_1 + 0x160);
        local_e0 = *(double *)(param_1 + 0xf8) * *(double *)(param_1 + 0xfc) -
                   *(double *)(param_1 + 0xfa);
        local_e8 = *(double *)(param_1 + 0xfa) * *(double *)(param_1 + 0xfc);
        local_f0 = dVar49 * ((*(double *)(param_1 + 0xf8) + local_e0 * local_a8) -
                            local_e8 * local_a8 * local_a8);
        if (local_f0 <= 34.0) {
          if (-34.0 <= local_f0) {
            local_f8 = (double)FUN_0040af80(local_f0);
            dVar49 = local_f8 * dVar49 * (local_e0 - local_e8 * 2.0 * local_a8) * local_b8;
          }
          else {
            local_f8 = 1.713908431e-15;
            dVar49 = 0.0;
          }
        }
        else {
          local_f8 = 583461742500000.0;
          dVar49 = 0.0;
        }
        *(double *)(param_1 + 0x264) = dVar38 * local_d8 * local_f8;
        dVar38 = dVar38 * (local_d8 * dVar49 + local_f8 * dVar8);
        *(double *)(param_1 + 0x260) = dVar45;
        *(double *)(param_1 + 0x262) = -dVar45;
        *(double *)(param_1 + 0x266) = dVar38;
        *(double *)(param_1 + 0x268) = -dVar38;
      }
      if (param_1[0x57] < 1) {
        param_1[0x26a] = 0;
        param_1[0x26b] = 0;
        param_1[0x26e] = 0;
        param_1[0x26f] = 0;
        param_1[0x270] = 0;
        param_1[0x271] = 0;
        param_1[0x274] = 0;
        param_1[0x275] = 0;
        param_1[0x272] = 0;
        param_1[0x273] = 0;
      }
      else {
        dVar45 = local_250 * *(double *)(param_1 + 0x10c);
        local_5c0 = -local_4c0 + dVar39 + local_5e0;
        dVar49 = local_5c0 / dVar45;
        local_d0 = local_5c0;
        if (dVar49 <= 34.0) {
          if (-34.0 <= dVar49) {
            local_5b0 = (double)FUN_0040af80(dVar49);
            local_5c0 = (double)FUN_0040c2f0(local_5b0 + 1.0);
            local_5c0 = dVar45 * local_5c0;
            local_5b0 = local_5b0 / (local_5b0 + 1.0);
            local_5a8 = -local_5b0 * local_4c8;
          }
          else {
            local_5c0 = (double)FUN_0040c2f0(0x3ff0000000000008);
            local_5c0 = dVar45 * local_5c0;
            local_5a8 = 0.0;
            local_5b0 = 0.0;
          }
        }
        else {
          local_5a8 = -local_4c8;
          local_5b0 = 1.0;
        }
        local_d8 = (local_4c0 - dVar39) * local_5c0;
        dVar45 = *(double *)(param_1 + 0x62) * 4.97232e-07 * *(double *)(param_1 + 0x60) *
                 *(double *)(param_1 + 0x158);
        dVar49 = *(double *)(param_1 + 0x1e4) * -745669000000.0;
        local_e0 = *(double *)(param_1 + 0xfe) * *(double *)(param_1 + 0x102) -
                   *(double *)(param_1 + 0x100);
        local_e8 = *(double *)(param_1 + 0x100) * *(double *)(param_1 + 0x102);
        local_f0 = dVar49 * ((*(double *)(param_1 + 0xfe) + local_e0 * local_5d8) -
                            local_e8 * local_5d8 * local_5d8);
        if (local_f0 <= 34.0) {
          if (-34.0 <= local_f0) {
            local_f8 = (double)FUN_0040af80(local_f0);
            dVar38 = local_f8 * dVar49 * (local_e0 - local_e8 * 2.0 * local_5d8);
            local_5c8 = dVar38 * local_5c8;
            dVar38 = dVar38 * local_5d0;
          }
          else {
            local_f8 = 1.713908431e-15;
            dVar38 = 0.0;
            local_5c8 = 0.0;
          }
        }
        else {
          local_f8 = 583461742500000.0;
          dVar38 = 0.0;
          local_5c8 = 0.0;
        }
        dVar9 = dVar45 * local_d8 * local_f8;
        dVar38 = local_d8 * dVar38;
        dVar36 = local_f8 * (local_4c8 * local_5c0 + (local_4c0 - dVar39) * local_5a8);
        local_5c8 = local_d8 * local_5c8;
        dVar8 = local_f8 * (-local_5c0 + (local_4c0 - dVar39) * local_5b0);
        local_5b8 = local_250 * *(double *)(param_1 + 0x10e);
        local_5c0 = local_630 - *(double *)(param_1 + 0x110);
        dVar20 = local_5c0 / local_5b8;
        local_d0 = local_5c0;
        if (dVar20 <= 34.0) {
          if (-34.0 <= dVar20) {
            local_5a8 = (double)FUN_0040af80(dVar20);
            local_5c0 = (double)FUN_0040c2f0(local_5a8 + 1.0);
            local_5c0 = local_5b8 * local_5c0;
            local_5a8 = local_5a8 / (local_5a8 + 1.0);
            local_5a0 = local_5a8 * local_5f0;
            local_5b0 = local_5a8 * local_5e8;
            local_5a8 = local_5a8 * local_600;
          }
          else {
            local_5c0 = (double)FUN_0040c2f0(0x3ff0000000000008);
            local_5c0 = local_5b8 * local_5c0;
            local_5a8 = 0.0;
            local_5a0 = 0.0;
            local_5b0 = 0.0;
          }
        }
        else {
          local_5a8 = local_600;
          local_5a0 = local_5f0;
          local_5b0 = local_5e8;
        }
        local_d8 = (local_4c0 - dVar39) * local_5c0;
        dVar20 = dVar45 * 0.7561;
        local_e0 = *(double *)(param_1 + 0x104) * *(double *)(param_1 + 0x108) -
                   *(double *)(param_1 + 0x106);
        local_e8 = *(double *)(param_1 + 0x106) * *(double *)(param_1 + 0x108);
        local_f0 = dVar49 * 1.31724 *
                   ((*(double *)(param_1 + 0x104) + local_e0 * local_630) -
                   local_e8 * local_630 * local_630);
        if (local_f0 <= 34.0) {
          if (-34.0 <= local_f0) {
            local_f8 = (double)FUN_0040af80(local_f0);
            dVar49 = local_f8 * dVar49 * 1.31724 * (local_e0 - local_e8 * 2.0 * local_630);
            local_5f0 = dVar49 * local_5f0;
            local_5e8 = dVar49 * local_5e8;
            dVar49 = dVar49 * local_600;
          }
          else {
            local_f8 = 1.713908431e-15;
            dVar49 = 0.0;
            local_5f0 = 0.0;
            local_5e8 = 0.0;
          }
        }
        else {
          local_f8 = 583461742500000.0;
          dVar49 = 0.0;
          local_5f0 = 0.0;
          local_5e8 = 0.0;
        }
        *(double *)(param_1 + 0x26a) = dVar20 * local_d8 * local_f8 + dVar9;
        *(double *)(param_1 + 0x26e) =
             dVar20 * (local_d8 * dVar49 +
                      local_f8 * (local_4c8 * local_5c0 + (local_4c0 - dVar39) * local_5a8)) +
             dVar45 * (dVar38 + dVar36);
        *(double *)(param_1 + 0x270) =
             dVar20 * (local_d8 * local_5f0 + local_f8 * (local_4c0 - dVar39) * local_5a0);
        *(double *)(param_1 + 0x272) =
             (dVar20 * (local_d8 * local_5e8 +
                       local_f8 * (-local_5c0 + (local_4c0 - dVar39) * local_5b0)) +
             dVar45 * (local_5c8 + dVar8)) * dVar19;
      }
    }
    if (*(double *)(param_1 + 0x74) != 1.0) {
      local_450 = local_450 * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x24) = *(double *)(param_1 + 0x24) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x22) = *(double *)(param_1 + 0x22) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x26) = *(double *)(param_1 + 0x26) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x21e) = *(double *)(param_1 + 0x21e) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x218) = *(double *)(param_1 + 0x218) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x21a) = *(double *)(param_1 + 0x21a) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x21c) = *(double *)(param_1 + 0x21c) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x216) = *(double *)(param_1 + 0x216) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x23e) = *(double *)(param_1 + 0x23e) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x240) = *(double *)(param_1 + 0x240) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x242) = *(double *)(param_1 + 0x242) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x244) = *(double *)(param_1 + 0x244) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x246) = *(double *)(param_1 + 0x246) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x248) = *(double *)(param_1 + 0x248) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x24a) = *(double *)(param_1 + 0x24a) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x24c) = *(double *)(param_1 + 0x24c) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x24e) = *(double *)(param_1 + 0x24e) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x250) = *(double *)(param_1 + 0x250) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x252) = *(double *)(param_1 + 0x252) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x254) = *(double *)(param_1 + 0x254) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x256) = *(double *)(param_1 + 0x256) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 600) = *(double *)(param_1 + 600) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x25a) = *(double *)(param_1 + 0x25a) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x25c) = *(double *)(param_1 + 0x25c) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x25e) = *(double *)(param_1 + 0x25e) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x260) = *(double *)(param_1 + 0x260) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x262) = *(double *)(param_1 + 0x262) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x264) = *(double *)(param_1 + 0x264) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x266) = *(double *)(param_1 + 0x266) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x268) = *(double *)(param_1 + 0x268) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x26a) = *(double *)(param_1 + 0x26a) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x26e) = *(double *)(param_1 + 0x26e) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x270) = *(double *)(param_1 + 0x270) * *(double *)(param_1 + 0x74);
      *(double *)(param_1 + 0x272) = *(double *)(param_1 + 0x272) * *(double *)(param_1 + 0x74);
    }
    *(double *)(param_1 + 0x276) =
         -(*(double *)(param_1 + 0x240) + *(double *)(param_1 + 0x242) +
          *(double *)(param_1 + 0x244));
    *(double *)(param_1 + 0x278) =
         -(*(double *)(param_1 + 0x248) + *(double *)(param_1 + 0x24a) +
          *(double *)(param_1 + 0x24c));
    *(double *)(param_1 + 0x274) =
         -(*(double *)(param_1 + 0x26e) + *(double *)(param_1 + 0x270) +
          *(double *)(param_1 + 0x272));
    *(double *)(param_1 + 0x27a) =
         -(*(double *)(param_1 + 0x250) + *(double *)(param_1 + 0x252) +
          *(double *)(param_1 + 0x254));
    *(double *)(param_1 + 0x27c) =
         -(*(double *)(param_1 + 600) + *(double *)(param_1 + 0x25a) + *(double *)(param_1 + 0x25c))
    ;
    *(double *)(param_1 + 0x20) = local_450;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    if (param_1[0x51] == 0) {
      *(double *)(param_1 + 0x1f8) = local_438 * *(double *)(param_1 + 0x12e);
      dVar45 = *(double *)(param_1 + 0x1f0) / *(double *)(param_1 + 0x1f8);
      dVar49 = (dVar45 - local_4f8) - 0.02;
      dVar38 = (double)FUN_0040c760(dVar49 * dVar49 + dVar45 * 0.08);
      if (dVar49 < 0.0) {
        dVar8 = 0.04 / (dVar38 - dVar49);
        local_e8 = 1.0 - dVar8;
        local_f0 = (dVar45 * dVar8) / (dVar38 - dVar49);
        *(double *)(param_1 + 0x1fe) = dVar45 * local_e8;
      }
      else {
        *(double *)(param_1 + 0x1fe) = dVar45 - (dVar49 + dVar38) * 0.5;
      }
      if (local_4f8 == 0.0) {
        param_1[0x1fe] = 0;
        param_1[0x1ff] = 0;
      }
      local_5b8 = *(double *)(param_1 + 0x1f8) * *(double *)(param_1 + 0x1fe);
      local_d0 = ((*(double *)(param_1 + 0x1f0) - local_5b8 * 0.5) + 1e-20) * 12.0;
      local_d8 = *(double *)(param_1 + 0x1fe) / local_d0;
      local_e0 = local_5b8 * local_d8;
      *(double *)(param_1 + 0x26c) =
           dVar25 * *(double *)(param_1 + 0x66) * *(double *)(param_1 + 0x74) *
           *(double *)(param_1 + 100) *
           ((*(double *)(param_1 + 0x1f0) - local_5b8 * 0.5) +
           *(double *)(param_1 + 0x1f8) * local_e0);
    }
    if ((*(double *)(param_1 + 0x162) <= 0.0 && *(double *)(param_1 + 0x162) != 0.0) || (!bVar5)) {
      local_678 = 0.0;
      local_680 = 0.0;
      local_698 = 0.0;
      param_1[0x27e] = 0;
      param_1[0x27f] = 0;
      param_1[0x280] = 0;
      param_1[0x281] = 0;
      param_1[0x282] = 0;
      param_1[0x283] = 0;
      param_1[0x284] = 0;
      param_1[0x285] = 0;
      param_1[0x286] = 0;
      param_1[0x287] = 0;
      param_1[0x288] = 0;
      param_1[0x289] = 0;
      param_1[0x28a] = 0;
      param_1[0x28b] = 0;
      param_1[0x28c] = 0;
      param_1[0x28d] = 0;
      param_1[0x28e] = 0;
      param_1[0x28f] = 0;
      param_1[0x290] = 0;
      param_1[0x291] = 0;
      param_1[0x292] = 0;
      param_1[0x293] = 0;
      param_1[0x294] = 0;
      param_1[0x295] = 0;
      param_1[0x296] = 0;
      param_1[0x297] = 0;
      param_1[0x298] = 0;
      param_1[0x299] = 0;
      param_1[0x29a] = 0;
      param_1[0x29b] = 0;
      param_1[0x29c] = 0;
      param_1[0x29d] = 0;
      param_1[0x29e] = 0;
      param_1[0x29f] = 0;
      param_1[0x2a0] = 0;
      param_1[0x2a1] = 0;
      param_1[0x2a2] = 0;
      param_1[0x2a3] = 0;
      param_1[0x2a4] = 0;
      param_1[0x2a5] = 0;
      param_1[0x2a6] = 0;
      param_1[0x2a7] = 0;
    }
    else {
      if (param_1[0x58] == 0) {
        if (0.0 <= dVar39) {
          local_4a8 = *(double *)(param_1 + 0x14a) - dVar37;
          dVar39 = dVar19 * 1.0;
        }
        else {
          dVar39 = 1.0;
        }
        dVar37 = *(double *)(param_1 + 0x124);
        dVar45 = local_4c0 -
                 (dVar37 + *(double *)(param_1 + 0x14a) + *(double *)(param_1 + 0x170) * dVar40);
        dVar40 = *(double *)(param_1 + 0x170) * dVar44 * dVar19;
        dVar44 = *(double *)(param_1 + 0x208) * *(double *)(param_1 + 0x66) *
                 *(double *)(param_1 + 100) * *(double *)(param_1 + 0x74);
        local_678 = (local_4c0 - local_4a8) - dVar37;
        if (0.0 < local_678) {
          if (0.0 < dVar45) {
            dVar39 = dVar44 / 3.0;
            dVar49 = dVar39 * 2.0;
            dVar38 = 1.0 / (local_438 * *(double *)(param_1 + 0x12e));
            dVar8 = dVar45 * dVar38;
            dVar47 = -(dVar8 * *(double *)(param_1 + 0x12e) * dVar47 * dVar19 + dVar40) * dVar38;
            if (*(double *)(param_1 + 0x162) <= 0.5) {
              if (0.5 < *(double *)(param_1 + 0x162) || *(double *)(param_1 + 0x162) == 0.5) {
                if (local_4f8 < dVar8) {
                  dVar45 = dVar45 / dVar8;
                  local_d0 = dVar8 * 2.0 - local_4f8;
                  local_d8 = local_4f8 / (local_d0 * 3.0);
                  local_e0 = local_d8 * local_4f8;
                  local_e8 = dVar44 * 0.25 * dVar45;
                  local_678 = dVar44 * (((local_4c0 - dVar37) - *(double *)(param_1 + 0x14a)) -
                                       (local_4f8 - local_e0) * 0.5);
                  local_f0 = local_e0 / local_d0;
                  *(double *)(param_1 + 0x27e) = dVar44 * (1.0 - local_f0 * dVar38) * local_4c8;
                  *(double *)(param_1 + 0x282) = dVar44 * ((local_d8 + local_f0 * 0.5) - 0.5);
                  *(double *)(param_1 + 0x280) =
                       -(*(double *)(param_1 + 0x27e) + *(double *)(param_1 + 0x282) +
                        -dVar44 * local_f0 * dVar47);
                  local_f8 = 1.0 / dVar8;
                  local_680 = -local_e8 * (local_d0 + local_e0);
                  local_698 = -(local_678 + local_680 + local_680);
                  dVar39 = (local_d0 + local_e0) * dVar44 * 0.25;
                  local_5b8 = local_e8 * (local_f0 * 2.0 - 2.0);
                  *(double *)(param_1 + 0x284) =
                       (local_5b8 * dVar38 - dVar39 * local_f8 * (1.0 - dVar45 * dVar38)) *
                       local_4c8;
                  *(double *)(param_1 + 0x288) = local_e8 * (1.0 - (local_d8 * 2.0 + local_f0));
                  *(double *)(param_1 + 0x286) =
                       -(*(double *)(param_1 + 0x284) +
                         (local_5b8 * dVar47 - dVar39 * -local_f8 * (dVar40 + dVar45 * dVar47)) +
                        *(double *)(param_1 + 0x288));
                  *(double *)(param_1 + 0x28a) =
                       -(*(double *)(param_1 + 0x27e) + *(double *)(param_1 + 0x284) * 2.0);
                  *(double *)(param_1 + 0x28e) =
                       -(*(double *)(param_1 + 0x282) + *(double *)(param_1 + 0x288) * 2.0);
                  *(double *)(param_1 + 0x28c) =
                       -(*(double *)(param_1 + 0x280) + *(double *)(param_1 + 0x286) * 2.0);
                }
                else {
                  local_678 = dVar44 * (((local_4c0 - dVar37) - *(double *)(param_1 + 0x14a)) -
                                       dVar8 / 3.0);
                  local_698 = -(local_678 + -dVar49 * dVar45);
                  local_680 = -dVar49 * dVar45 * 0.5;
                  *(double *)(param_1 + 0x27e) = dVar39 * (3.0 - dVar38) * local_4c8;
                  local_d8 = -dVar39 * dVar47;
                  *(double *)(param_1 + 0x280) = -(*(double *)(param_1 + 0x27e) + local_d8);
                  param_1[0x282] = 0;
                  param_1[0x283] = 0;
                  *(double *)(param_1 + 0x284) = -dVar39 * local_4c8;
                  param_1[0x288] = 0;
                  param_1[0x289] = 0;
                  local_e8 = dVar39 * dVar40;
                  *(double *)(param_1 + 0x286) = -(local_e8 + *(double *)(param_1 + 0x284));
                  *(double *)(param_1 + 0x28a) =
                       -(*(double *)(param_1 + 0x27e) - dVar49 * local_4c8);
                  local_e0 = -(local_d8 + dVar49 * dVar40);
                  *(double *)(param_1 + 0x28c) = -(*(double *)(param_1 + 0x28a) + local_e0);
                  param_1[0x28e] = 0;
                  param_1[0x28f] = 0;
                  local_d0 = dVar8 / 3.0;
                }
              }
              else if (local_4f8 < dVar8) {
                dVar45 = dVar45 / dVar8;
                local_d0 = dVar8 * 2.0 - local_4f8;
                local_d8 = local_4f8 / (local_d0 * 3.0);
                local_e0 = local_d8 * local_4f8;
                dVar39 = dVar44 * 0.25;
                local_e8 = dVar39 * dVar45;
                local_678 = dVar44 * (((local_4c0 - dVar37) - *(double *)(param_1 + 0x14a)) -
                                     (local_4f8 - local_e0) * 0.5);
                local_f0 = local_e0 / local_d0;
                *(double *)(param_1 + 0x27e) = dVar44 * (1.0 - local_f0 * dVar38) * local_4c8;
                *(double *)(param_1 + 0x282) = dVar44 * ((local_d8 + local_f0 * 0.5) - 0.5);
                *(double *)(param_1 + 0x280) =
                     -(*(double *)(param_1 + 0x27e) + *(double *)(param_1 + 0x282) +
                      -dVar44 * local_f0 * dVar47);
                dVar37 = (1.0 / dVar8) * (1.0 - dVar45 * dVar38);
                dVar40 = -(1.0 / dVar8) * (dVar40 + dVar45 * dVar47);
                local_f8 = (dVar8 * 8.0 * dVar8 - dVar8 * 6.0 * local_4f8) +
                           local_4f8 * 1.2 * local_4f8;
                dVar44 = local_d8 / local_d0;
                dVar45 = (local_4f8 - local_d0) - dVar44 * local_f8;
                local_680 = local_e8 * dVar45;
                dVar45 = dVar45 * dVar39;
                dVar19 = local_e8 *
                         (2.0 - ((dVar44 / local_d0) * 4.0 * local_f8 -
                                dVar44 * (dVar8 * 16.0 - local_4f8 * 6.0)));
                *(double *)(param_1 + 0x284) = (dVar45 * dVar37 - dVar19 * dVar38) * local_4c8;
                dVar45 = dVar45 * dVar40 - dVar19 * dVar47;
                *(double *)(param_1 + 0x288) =
                     local_e8 *
                     (2.0 - ((1.0 / (local_d0 * 3.0 * local_d0) + (dVar44 / local_d0) * 2.0) *
                             local_f8 - dVar44 * (dVar8 * 6.0 - local_4f8 * 2.4)));
                *(double *)(param_1 + 0x286) =
                     -(*(double *)(param_1 + 0x284) + dVar45 + *(double *)(param_1 + 0x288));
                dVar44 = (local_d0 + local_e0) * 2.0;
                local_698 = -(local_678 - local_e8 * dVar44);
                dVar44 = dVar44 * dVar39;
                local_5b8 = local_e8 * 4.0 * (1.0 - local_f0);
                dVar39 = (-dVar44 * dVar37 - local_5b8 * dVar38) * local_4c8 -
                         *(double *)(param_1 + 0x284);
                local_100 = local_e8 * -4.0 * ((local_d8 + local_f0 * 0.5) - 0.5) -
                            *(double *)(param_1 + 0x288);
                *(double *)(param_1 + 0x28a) =
                     -(*(double *)(param_1 + 0x27e) + *(double *)(param_1 + 0x284) + dVar39);
                *(double *)(param_1 + 0x28e) =
                     -(*(double *)(param_1 + 0x282) + *(double *)(param_1 + 0x288) + local_100);
                *(double *)(param_1 + 0x28c) =
                     -(*(double *)(param_1 + 0x280) + *(double *)(param_1 + 0x286) +
                      -(local_100 + ((-dVar44 * dVar40 - dVar45) - local_5b8 * dVar47) + dVar39));
              }
              else {
                local_678 = dVar44 * (((local_4c0 - dVar37) - *(double *)(param_1 + 0x14a)) -
                                     dVar8 / 3.0);
                local_698 = -(local_678 + -dVar49 * dVar45);
                local_680 = -dVar49 * dVar45 * 0.4;
                *(double *)(param_1 + 0x27e) = dVar39 * (3.0 - dVar38) * local_4c8;
                local_d8 = -dVar39 * dVar47;
                *(double *)(param_1 + 0x280) = -(*(double *)(param_1 + 0x27e) + local_d8);
                param_1[0x282] = 0;
                param_1[0x283] = 0;
                *(double *)(param_1 + 0x284) = -(dVar49 * 0.4) * local_4c8;
                param_1[0x288] = 0;
                param_1[0x289] = 0;
                local_e8 = dVar49 * 0.4 * dVar40;
                *(double *)(param_1 + 0x286) = -(local_e8 + *(double *)(param_1 + 0x284));
                *(double *)(param_1 + 0x28a) = -(*(double *)(param_1 + 0x27e) - dVar49 * local_4c8);
                local_e0 = -(local_d8 + dVar49 * dVar40);
                *(double *)(param_1 + 0x28c) = -(*(double *)(param_1 + 0x28a) + local_e0);
                param_1[0x28e] = 0;
                param_1[0x28f] = 0;
                local_d0 = dVar8 / 3.0;
              }
            }
            else if (local_4f8 < dVar8) {
              dVar45 = dVar45 / dVar8;
              local_d0 = dVar8 * 2.0 - local_4f8;
              local_d8 = local_4f8 / (local_d0 * 3.0);
              local_e0 = local_d8 * local_4f8;
              dVar39 = dVar44 * 0.25;
              local_e8 = dVar39 * dVar45;
              dVar19 = (local_4f8 * 2.0 - local_d0) - local_e0 * 3.0;
              dVar49 = (local_e0 - local_d0) - local_4f8 * 2.0;
              local_678 = dVar44 * (((local_4c0 - dVar37) - *(double *)(param_1 + 0x14a)) -
                                   (local_4f8 - local_e0) * 0.5);
              local_680 = local_e8 * dVar19;
              local_698 = -(local_678 + local_680 + local_e8 * dVar49);
              local_f0 = local_e0 / local_d0;
              *(double *)(param_1 + 0x27e) = dVar44 * (1.0 - local_f0 * dVar38) * local_4c8;
              *(double *)(param_1 + 0x282) = dVar44 * ((local_d8 + local_f0 * 0.5) - 0.5);
              *(double *)(param_1 + 0x280) =
                   -(*(double *)(param_1 + 0x27e) + -dVar44 * local_f0 * dVar47 +
                    *(double *)(param_1 + 0x282));
              local_f8 = 1.0 / dVar8;
              dVar37 = local_f8 * (1.0 - dVar45 * dVar38);
              dVar40 = -local_f8 * (dVar40 + dVar45 * dVar47);
              dVar19 = dVar19 * dVar39;
              dVar49 = dVar49 * dVar39;
              dVar39 = local_e8 * 2.0 * (1.0 - local_f0 * 3.0);
              *(double *)(param_1 + 0x284) = (dVar19 * dVar37 - dVar39 * dVar38) * local_4c8;
              *(double *)(param_1 + 0x288) = local_e8 * (3.0 - (local_d8 * 6.0 + local_f0 * 3.0));
              *(double *)(param_1 + 0x286) =
                   -(*(double *)(param_1 + 0x284) + (dVar19 * dVar40 - dVar39 * dVar47) +
                    *(double *)(param_1 + 0x288));
              dVar39 = local_e8 * 2.0 * (local_f0 + 1.0);
              local_100 = (dVar49 * dVar37 - dVar39 * dVar38) * local_4c8;
              dVar37 = local_e8 * ((local_d8 * 2.0 + local_f0) - 1.0);
              local_5b8 = -(local_100 + (dVar49 * dVar40 - dVar39 * dVar47) + dVar37);
              *(double *)(param_1 + 0x28a) =
                   -(*(double *)(param_1 + 0x27e) + *(double *)(param_1 + 0x284) + local_100);
              *(double *)(param_1 + 0x28e) =
                   -(*(double *)(param_1 + 0x282) + *(double *)(param_1 + 0x288) + dVar37);
              *(double *)(param_1 + 0x28c) =
                   -(*(double *)(param_1 + 0x280) + *(double *)(param_1 + 0x286) + local_5b8);
            }
            else {
              local_678 = dVar44 * (((local_4c0 - dVar37) - *(double *)(param_1 + 0x14a)) -
                                   dVar8 / 3.0);
              local_698 = -(local_678 + -dVar49 * dVar45);
              local_680 = 0.0;
              *(double *)(param_1 + 0x27e) = dVar39 * (3.0 - dVar38) * local_4c8;
              local_d8 = -dVar39 * dVar47;
              *(double *)(param_1 + 0x280) = -(*(double *)(param_1 + 0x27e) + local_d8);
              param_1[0x282] = 0;
              param_1[0x283] = 0;
              param_1[0x284] = 0;
              param_1[0x285] = 0;
              param_1[0x288] = 0;
              param_1[0x289] = 0;
              param_1[0x286] = 0;
              param_1[0x287] = 0;
              *(double *)(param_1 + 0x28a) = -(*(double *)(param_1 + 0x27e) - dVar49 * local_4c8);
              local_e0 = -(local_d8 + dVar49 * dVar40);
              *(double *)(param_1 + 0x28c) = -(*(double *)(param_1 + 0x28a) + local_e0);
              param_1[0x28e] = 0;
              param_1[0x28f] = 0;
              local_d0 = dVar8 / 3.0;
            }
          }
          else {
            local_d0 = *(double *)(param_1 + 0x170) * 0.5;
            local_d8 = (double)FUN_0040c760(local_d0 * local_d0 + local_678);
            local_678 = dVar44 * *(double *)(param_1 + 0x170) * (local_d8 - local_d0);
            local_698 = -local_678;
            local_680 = 0.0;
            local_5b8 = (dVar44 * local_d0) / local_d8;
            *(double *)(param_1 + 0x27e) = local_5b8 * local_4c8;
            param_1[0x282] = 0;
            param_1[0x283] = 0;
            *(double *)(param_1 + 0x280) = local_5b8 * (dVar39 - local_4c8);
            param_1[0x284] = 0;
            param_1[0x285] = 0;
            param_1[0x288] = 0;
            param_1[0x289] = 0;
            param_1[0x286] = 0;
            param_1[0x287] = 0;
            *(ulonglong *)(param_1 + 0x28a) = *(ulonglong *)(param_1 + 0x27e) ^ 0x8000000000000000;
            param_1[0x28e] = 0;
            param_1[0x28f] = 0;
            *(ulonglong *)(param_1 + 0x28c) = *(ulonglong *)(param_1 + 0x280) ^ 0x8000000000000000;
          }
        }
        else {
          local_678 = dVar44 * local_678;
          local_698 = -local_678;
          local_680 = 0.0;
          *(double *)(param_1 + 0x27e) = dVar44 * local_4c8;
          param_1[0x282] = 0;
          param_1[0x283] = 0;
          *(double *)(param_1 + 0x280) = dVar44 * (dVar39 - local_4c8);
          param_1[0x284] = 0;
          param_1[0x285] = 0;
          param_1[0x288] = 0;
          param_1[0x289] = 0;
          param_1[0x286] = 0;
          param_1[0x287] = 0;
          *(double *)(param_1 + 0x28a) = -dVar44 * local_4c8;
          param_1[0x28e] = 0;
          param_1[0x28f] = 0;
          *(ulonglong *)(param_1 + 0x28c) = *(ulonglong *)(param_1 + 0x280) ^ 0x8000000000000000;
        }
      }
      else {
        if (0.0 <= dVar39) {
          dVar39 = *(double *)(param_1 + 0x14a) - dVar37;
        }
        dVar37 = *(double *)(param_1 + 0x208) * *(double *)(param_1 + 0x66) *
                 *(double *)(param_1 + 100) * *(double *)(param_1 + 0x74);
        if (param_1[0x59] == 0) {
          local_478 = local_478 * *(double *)(param_1 + 0x12a);
          local_4d0 = *(double *)(param_1 + 0x12a) * local_4d0;
          local_480 = *(double *)(param_1 + 0x12a) * local_480;
          local_5b8 = *(double *)(param_1 + 0x204) * local_478;
          dVar40 = (dVar11 - *(double *)(param_1 + 300)) / local_5b8;
          if (dVar40 <= 34.0) {
            if (-34.0 <= dVar40) {
              local_470 = (double)FUN_0040af80();
              dVar40 = (double)FUN_0040c2f0(local_470 + 1.0);
              *(double *)(param_1 + 0x1f0) = local_5b8 * dVar40;
              local_470 = local_470 / (local_470 + 1.0);
              local_448 = -local_470 *
                          (local_4e0 +
                          ((dVar11 - *(double *)(param_1 + 300)) / local_478) * local_4d0) +
                          (*(double *)(param_1 + 0x1f0) / local_478) * local_4d0;
              local_458 = -local_470 *
                          (local_4e8 +
                          ((dVar11 - *(double *)(param_1 + 300)) / local_478) * local_480) +
                          (*(double *)(param_1 + 0x1f0) / local_478) * local_480;
              local_470 = local_470 * local_4c8;
            }
            else {
              dVar40 = (double)FUN_0040c2f0(0x3ff0000000000008);
              *(double *)(param_1 + 0x1f0) = local_5b8 * dVar40;
              local_470 = 0.0;
              local_458 = (*(double *)(param_1 + 0x1f0) / local_478) * local_480;
              local_448 = (*(double *)(param_1 + 0x1f0) / local_478) * local_4d0;
            }
          }
          else {
            *(double *)(param_1 + 0x1f0) = dVar11 - *(double *)(param_1 + 300);
            local_470 = local_4c8;
            local_448 = -local_4e0;
            local_458 = -local_4e8;
          }
        }
        else {
          local_5b8 = local_478 * *(double *)(param_1 + 0x204);
          local_d0 = *(double *)(param_1 + 0x168) * dVar11;
          local_d8 = local_d0 / local_5b8;
          if (local_d8 <= 34.0) {
            if (-34.0 <= local_d8) {
              dVar40 = (double)FUN_0040af80(local_d8);
              local_e0 = (double)FUN_0040c2f0(dVar40 + 1.0);
              local_e0 = *(double *)(param_1 + 0x204) * local_e0;
              local_100 = local_478 * local_e0;
              local_1e8 = (*(double *)(param_1 + 0x168) * dVar40) / (dVar40 + 1.0);
              local_1f0 = local_e0 * local_480 -
                          local_1e8 * (local_4e8 + (dVar11 * local_480) / local_478);
              local_1b0 = local_e0 * local_4d0 -
                          local_1e8 * (local_4e0 + (dVar11 * local_4d0) / local_478);
              local_1e8 = local_1e8 * local_4c8;
            }
            else {
              local_100 = (double)FUN_0040c2f0(0x3ff0000000000008);
              local_100 = *(double *)(param_1 + 0x204) * local_100;
              local_1e8 = 0.0;
              local_1b0 = local_100 * local_4d0;
              local_1f0 = local_100 * local_480;
              local_100 = local_100 * local_478;
            }
          }
          else {
            local_1e8 = *(double *)(param_1 + 0x168) * local_4c8;
            local_1b0 = -local_4e0 * *(double *)(param_1 + 0x168);
            local_1f0 = -local_4e8 * *(double *)(param_1 + 0x168);
            local_100 = local_d0;
          }
          local_d0 = *(double *)(param_1 + 0x16c) - (1.0 - *(double *)(param_1 + 0x168)) * dVar11;
          local_d8 = local_d0 / local_5b8;
          if (-34.0 <= local_d8) {
            if (local_d8 <= 34.0) {
              dVar40 = (double)FUN_0040af80(local_d8);
              local_e0 = *(double *)(param_1 + 0x208) / *(double *)(param_1 + 0x156);
              local_e8 = local_e0 * dVar40;
              local_f0 = (local_d0 * local_e8) / local_5b8;
              local_318 = *(double *)(param_1 + 0x168) + local_478 * local_e8;
              dVar40 = (local_e0 * (*(double *)(param_1 + 0x168) - 1.0) * dVar40) /
                       *(double *)(param_1 + 0x204);
              local_480 = (local_e8 * local_480 - dVar40 * local_4e8) - local_f0 * local_480;
              local_4d0 = (local_e8 * local_4d0 - dVar40 * local_4e0) - local_f0 * local_4d0;
              dVar40 = dVar40 * local_4c8;
            }
            else {
              local_e0 = (*(double *)(param_1 + 0x208) * 583461742500000.0) /
                         *(double *)(param_1 + 0x156);
              local_318 = *(double *)(param_1 + 0x168) + local_e0 * local_478;
              dVar40 = 0.0;
              local_4d0 = local_4d0 * local_e0;
              local_480 = local_480 * local_e0;
            }
          }
          else {
            local_e0 = (*(double *)(param_1 + 0x208) * 1.713908431e-15) /
                       *(double *)(param_1 + 0x156);
            local_318 = *(double *)(param_1 + 0x168) + local_e0 * local_478;
            dVar40 = 0.0;
            local_4d0 = local_4d0 * local_e0;
            local_480 = local_480 * local_e0;
          }
          *(double *)(param_1 + 0x1f0) = local_100 / local_318;
          local_458 = local_318 * local_318;
          local_470 = (local_318 * local_1e8 - local_100 * dVar40) / local_458;
          local_448 = (local_318 * local_1b0 - local_100 * local_4d0) / local_458;
          local_458 = (local_318 * local_1f0 - local_100 * local_480) / local_458;
        }
        if (param_1[0x58] == 1) {
          dVar40 = *(double *)(param_1 + 0x17e);
          dVar44 = ((dVar40 - local_4c0) + dVar39) - 0.02;
          if (0.0 < dVar40) {
            local_5b8 = (double)FUN_0040c760(dVar44 * dVar44 + dVar40 * 0.08);
          }
          else {
            local_5b8 = (double)FUN_0040c760(dVar44 * dVar44 - dVar40 * 0.08);
          }
          local_d0 = (dVar44 / local_5b8 + 1.0) * 0.5;
          dVar38 = dVar40 - (dVar44 + local_5b8) * 0.5;
          dVar8 = local_d0 * local_4c8;
          dVar20 = -local_d0;
          dVar49 = dVar37 * (dVar38 - dVar40);
          dVar40 = dVar37 * dVar8;
          dVar44 = dVar37 * dVar20 * 1.0;
          dVar45 = *(double *)(param_1 + 0x170) * 0.5;
          local_e0 = ((local_4c0 - dVar38) - dVar39) - *(double *)(param_1 + 0x1f0);
          if (*(double *)(param_1 + 0x170) == 0.0) {
            local_d0 = 0.0;
            local_d8 = 0.0;
          }
          else if (0.0 <= local_e0) {
            local_d0 = (double)FUN_0040c760(dVar45 * dVar45 + local_e0);
            local_d8 = (dVar37 * dVar45) / local_d0;
          }
          else {
            local_d0 = dVar45 + local_e0 / *(double *)(param_1 + 0x170);
            local_d8 = dVar37;
          }
          dVar39 = dVar37 * *(double *)(param_1 + 0x170) * (local_d0 - dVar45);
          dVar41 = local_d8 * ((local_4c8 - dVar8) - local_470);
          dVar45 = -local_d8;
          dVar38 = -local_d8 * (dVar20 * 1.0 + 1.0 + local_458);
          local_438 = local_438 * *(double *)(param_1 + 0x12e);
          dVar47 = *(double *)(param_1 + 0x12e) * dVar47;
          dVar21 = *(double *)(param_1 + 0x1f0) / local_438;
          dVar8 = (dVar21 - local_4f8) - 0.02;
          dVar20 = 1.0 / local_438;
          dVar36 = (-dVar21 * dVar47) / local_438;
          dVar11 = (double)FUN_0040c760(dVar8 * dVar8 + dVar21 * 0.08);
          dVar10 = (dVar8 + 0.04) / dVar11;
          dVar9 = dVar10 * dVar36;
          dVar10 = dVar10 * dVar20;
          if (dVar8 < 0.0) {
            dVar31 = 0.04 / (dVar11 - dVar8);
            dVar46 = 1.0 - dVar31;
            dVar31 = (dVar21 * dVar31) / (dVar11 - dVar8);
            dVar21 = dVar21 * dVar46;
            dVar20 = dVar20 * dVar46 + dVar31 * (dVar10 - dVar20);
            dVar8 = dVar31 * (-dVar8 / dVar11 + 1.0);
            dVar36 = dVar36 * (dVar46 - dVar31) + dVar31 * dVar9;
          }
          else {
            dVar21 = dVar21 - (dVar8 + dVar11) * 0.5;
            dVar20 = (dVar20 - dVar10) * 0.5;
            dVar8 = (1.0 - -dVar8 / dVar11) * 0.5;
            dVar36 = (dVar36 - dVar9) * 0.5;
          }
          if (local_4f8 == 0.0) {
            dVar21 = 0.0;
            dVar20 = 0.0;
            dVar36 = 0.0;
          }
          local_5b8 = local_438 * dVar21;
          local_d0 = ((*(double *)(param_1 + 0x1f0) - local_5b8 * 0.5) + 1e-20) * 12.0;
          local_d8 = dVar21 / local_d0;
          local_e0 = local_5b8 * local_d8;
          dVar46 = 1.0 - local_d8 * 12.0 * local_d8 * local_438;
          local_f0 = (local_5b8 * 6.0 * (*(double *)(param_1 + 0x1f0) * 4.0 - local_5b8)) /
                     (local_d0 * local_d0) - 0.5;
          dVar11 = local_d8 * 12.0 * local_d8 * *(double *)(param_1 + 0x1f0);
          local_678 = dVar37 * ((*(double *)(param_1 + 0x1f0) - dVar21 * 0.5) + local_e0);
          dVar9 = dVar37 * (dVar46 + local_f0 * dVar20);
          dVar10 = dVar37 * local_f0 * dVar8 + dVar9 * local_448;
          dVar31 = dVar37 * (local_f0 * dVar36 + dVar11 * dVar47) + dVar9 * local_458;
          dVar32 = 1.0 - local_438;
          local_698 = dVar37 * dVar32 * (dVar21 * 0.5 - local_e0);
          local_e8 = -dVar32 * (dVar46 - 1.0);
          local_f0 = -dVar32 * local_f0;
          local_f8 = -(dVar32 * dVar11 + (dVar21 * 0.5 - local_e0));
          dVar11 = dVar37 * (local_e8 + local_f0 * dVar20);
          dVar46 = dVar37 * local_f0 * dVar8 + dVar11 * local_448;
          dVar32 = dVar37 * (local_f0 * dVar36 + local_f8 * dVar47) + dVar11 * local_458;
          if (*(double *)(param_1 + 0x162) <= 0.5) {
            if (0.5 < *(double *)(param_1 + 0x162) || *(double *)(param_1 + 0x162) == 0.5) {
              local_6c8 = (local_678 + local_698) * -0.5;
              dVar20 = (dVar9 * local_470 + dVar11 * local_470) * -0.5;
              dVar37 = (dVar31 + dVar32) * -0.5;
              dVar8 = (dVar10 + dVar46) * -0.5;
            }
            else {
              local_d0 = local_d0 / 12.0;
              local_d8 = (dVar37 * 0.5) / (local_d0 * local_d0);
              local_e0 = *(double *)(param_1 + 0x1f0) *
                         ((local_5b8 * 2.0 * local_5b8) / 3.0 +
                         *(double *)(param_1 + 0x1f0) *
                         (*(double *)(param_1 + 0x1f0) - (local_5b8 * 4.0) / 3.0)) -
                         (local_5b8 * 2.0 * local_5b8 * local_5b8) / 15.0;
              local_6c8 = -local_d8 * local_e0;
              dVar37 = *(double *)(param_1 + 0x1f0) * 1.3333333333333333 *
                       (*(double *)(param_1 + 0x1f0) - local_5b8) + local_5b8 * 0.4 * local_5b8;
              local_e8 = (local_6c8 * -2.0) / local_d0 -
                         local_d8 *
                         (*(double *)(param_1 + 0x1f0) *
                          (*(double *)(param_1 + 0x1f0) * 3.0 - (local_5b8 * 8.0) / 3.0) +
                         (local_5b8 * 2.0 * local_5b8) / 3.0);
              local_f0 = (local_6c8 / local_d0 + local_d8 * dVar37) * local_438;
              local_f8 = (local_6c8 / local_d0) * dVar21 + local_d8 * dVar37 * dVar21;
              dVar20 = local_e8 + local_f0 * dVar20;
              dVar8 = local_f0 * dVar8 + dVar20 * local_448;
              dVar37 = local_f0 * dVar36 + local_f8 * dVar47 + dVar20 * local_458;
              dVar20 = dVar20 * local_470;
            }
          }
          else {
            local_d0 = local_d0 + local_d0;
            local_6c8 = -dVar37 * ((*(double *)(param_1 + 0x1f0) * 0.5 + local_5b8 * 0.25) -
                                  (local_5b8 * local_5b8) / local_d0);
            dVar50 = (*(double *)(param_1 + 0x1f0) * 4.0 - local_5b8) / (local_d0 * local_d0);
            local_e8 = -((local_5b8 * 24.0 * local_5b8) / (local_d0 * local_d0) + 0.5);
            local_f0 = -(local_438 * 0.25 - local_438 * 12.0 * local_5b8 * dVar50);
            local_f8 = -(dVar21 * 0.25 - local_5b8 * 12.0 * dVar21 * dVar50);
            dVar20 = dVar37 * (local_e8 + local_f0 * dVar20);
            dVar8 = dVar37 * local_f0 * dVar8 + dVar20 * local_448;
            dVar37 = dVar37 * (local_f0 * dVar36 + local_f8 * dVar47) + dVar20 * local_458;
            dVar20 = dVar20 * local_470;
          }
          local_678 = local_678 + dVar49 + dVar39;
          local_698 = local_698 - (dVar49 + dVar39);
          local_680 = -(local_678 + local_698 + local_6c8);
          dVar39 = dVar40 + dVar41 + dVar9 * local_470;
          dVar10 = dVar45 * local_448 + dVar10;
          dVar41 = (dVar11 * local_470 - dVar40) - dVar41;
          dVar46 = dVar46 - dVar45 * local_448;
          dVar40 = (dVar44 + dVar38 + dVar31) * dVar19;
          dVar44 = ((dVar32 - dVar44) - dVar38) * dVar19;
          *(double *)(param_1 + 0x27e) = dVar39;
          *(double *)(param_1 + 0x280) = -(dVar39 + dVar10 + dVar40);
          *(double *)(param_1 + 0x282) = dVar10;
          *(double *)(param_1 + 0x284) = -(dVar39 + dVar41 + dVar20);
          *(double *)(param_1 + 0x286) =
               dVar39 + dVar10 + dVar40 + dVar41 + dVar46 + dVar44 + dVar20 + dVar8 +
               dVar37 * dVar19;
          *(double *)(param_1 + 0x288) = -(dVar10 + dVar46 + dVar8);
          *(double *)(param_1 + 0x28a) = dVar41;
          *(double *)(param_1 + 0x28c) = -(dVar41 + dVar46 + dVar44);
          *(double *)(param_1 + 0x28e) = dVar46;
        }
        else if (param_1[0x58] == 2) {
          dVar40 = ((*(double *)(param_1 + 0x17e) - local_4c0) + dVar39) - 0.02;
          if (0.0 < *(double *)(param_1 + 0x17e)) {
            local_5b8 = (double)FUN_0040c760(dVar40 * dVar40 + *(double *)(param_1 + 0x17e) * 0.08);
          }
          else {
            local_5b8 = (double)FUN_0040c760(dVar40 * dVar40 - *(double *)(param_1 + 0x17e) * 0.08);
          }
          local_d0 = (dVar40 / local_5b8 + 1.0) * 0.5;
          dVar45 = *(double *)(param_1 + 0x17e) - (dVar40 + local_5b8) * 0.5;
          dVar49 = local_d0 * local_4c8;
          dVar8 = -local_d0;
          dVar40 = *(double *)(param_1 + 0x20a);
          dVar38 = *(double *)(param_1 + 0x20c) * 100000000.0;
          dVar44 = ((local_4c0 - *(double *)(param_1 + 0x17e)) / dVar38) *
                   *(double *)(param_1 + 0x126);
          if ((dVar44 <= -34.0) || (34.0 <= dVar44)) {
            if (-34.0 < dVar44) {
              dVar44 = *(double *)(param_1 + 0x16e) * 583461742500000.0;
              dVar20 = 0.0;
              local_128 = 0.0;
            }
            else {
              dVar44 = *(double *)(param_1 + 0x16e) * 1.713908431e-15;
              dVar20 = 0.0;
              local_128 = 0.0;
            }
          }
          else {
            dVar44 = (double)FUN_0040af80(dVar44);
            dVar44 = *(double *)(param_1 + 0x16e) * dVar44;
            dVar20 = *(double *)(param_1 + 0x126) * dVar44 * (-1.0 / dVar38);
            local_128 = *(double *)(param_1 + 0x126) * dVar44 * (local_4c8 / dVar38);
          }
          dVar11 = (*(double *)(param_1 + 0x16e) - dVar44) - *(double *)(param_1 + 0x20c) * 0.001;
          dVar44 = (double)FUN_0040c760(dVar11 * dVar11 +
                                        *(double *)(param_1 + 0x20c) * 0.001 * 4.0 *
                                        *(double *)(param_1 + 0x16e));
          dVar36 = *(double *)(param_1 + 0x16e) - (dVar11 + dVar44) * 0.5;
          local_d0 = (dVar11 / dVar44 + 1.0) * 0.5;
          dVar44 = *(double *)(param_1 + 0x1e6) / dVar36;
          local_d8 = dVar40 / (dVar40 + dVar44);
          dVar9 = local_d8 * dVar44;
          dVar44 = local_d8 * local_d8 * (-dVar44 / dVar36);
          dVar20 = dVar44 * dVar20 * local_d0;
          dVar44 = dVar44 * local_128 * local_d0;
          dVar36 = (dVar37 * dVar9) / *(double *)(param_1 + 0x208);
          dVar10 = dVar36 * (dVar45 - *(double *)(param_1 + 0x17e));
          dVar11 = *(double *)(param_1 + 0x170) * 0.5;
          local_e0 = ((local_4c0 - dVar45) - dVar39) - *(double *)(param_1 + 0x1f0);
          if (*(double *)(param_1 + 0x170) == 0.0) {
            local_d0 = 0.0;
            local_d8 = 0.0;
          }
          else if (0.0 <= local_e0) {
            local_d0 = (double)FUN_0040c760(dVar11 * dVar11 + local_e0);
            local_d8 = (dVar36 * dVar11) / local_d0;
          }
          else {
            local_d0 = dVar11 + local_e0 / *(double *)(param_1 + 0x170);
            local_d8 = dVar36;
          }
          dVar39 = dVar36 * *(double *)(param_1 + 0x170) * (local_d0 - dVar11);
          dVar21 = local_d8 * ((local_4c8 - dVar49) - local_470);
          dVar45 = -local_d8;
          dVar11 = -local_d8;
          if (0.0 < *(double *)(param_1 + 0x170)) {
            dVar41 = *(double *)(param_1 + 0x128) * *(double *)(param_1 + 0x204) *
                     *(double *)(param_1 + 0x170) * *(double *)(param_1 + 0x170);
            local_5b8 = *(double *)(param_1 + 0x170) * *(double *)(param_1 + 0x14c);
          }
          else {
            dVar41 = *(double *)(param_1 + 0x128) * 0.25 * *(double *)(param_1 + 0x204);
            local_5b8 = *(double *)(param_1 + 0x14c) * 0.5;
          }
          local_d0 = local_5b8 * 2.0 + *(double *)(param_1 + 0x1f0);
          dVar46 = (double)FUN_0040c2f0((local_d0 * *(double *)(param_1 + 0x1f0)) / dVar41 + 1.0);
          dVar46 = (*(double *)(param_1 + 0x1f0) - *(double *)(param_1 + 0x204) * dVar46) - 0.001;
          dVar41 = 1.0 - (*(double *)(param_1 + 0x204) * 2.0 * (local_d0 - local_5b8)) /
                         (dVar41 + local_d0 * *(double *)(param_1 + 0x1f0));
          local_d0 = (double)FUN_0040c760(dVar46 * dVar46 + *(double *)(param_1 + 0x1f0) * 0.004);
          dVar51 = (dVar46 + local_d0) * 0.5;
          dVar22 = (dVar41 + (dVar46 * dVar41 + 0.002) / local_d0) * 0.5;
          dVar41 = *(double *)(param_1 + 0x1f0);
          dVar46 = *(double *)(param_1 + 0x178);
          dVar31 = (double)FUN_0040c2f0();
          dVar31 = (double)FUN_0040af80(*(double *)(param_1 + 0x210) * 0.7 * dVar31);
          local_d8 = (*(double *)(param_1 + 0x210) * 0.7 * dVar31) /
                     (((dVar41 + dVar46) / (dVar38 + dVar38)) * (dVar38 + dVar38));
          local_d0 = (*(double *)(param_1 + 0x20e) * 1.9e-09) / (dVar31 + 1.0);
          dVar46 = (-local_d0 * local_d8) / (dVar31 + 1.0);
          dVar38 = *(double *)(param_1 + 0x1e6) / local_d0;
          dVar40 = dVar40 / (dVar40 + dVar38);
          dVar48 = dVar40 * dVar38;
          local_d0 = -dVar38 / local_d0;
          dVar40 = dVar40 * dVar40 * local_d0;
          dVar38 = dVar40 * dVar46 * local_448;
          dVar41 = dVar40 * dVar46 * local_458;
          dVar40 = dVar40 * dVar46 * local_470;
          dVar37 = (dVar37 * dVar48) / *(double *)(param_1 + 0x208);
          local_438 = local_438 * *(double *)(param_1 + 0x12e);
          dVar47 = *(double *)(param_1 + 0x12e) * dVar47;
          dVar12 = dVar51 / local_438;
          dVar46 = (dVar12 - local_4f8) - 0.02;
          dVar31 = dVar22 / local_438;
          dVar32 = (-dVar12 * dVar47) / local_438;
          dVar50 = (double)FUN_0040c760(dVar46 * dVar46 + dVar12 * 0.08);
          dVar26 = (dVar46 + 0.04) / dVar50;
          dVar16 = dVar26 * dVar32;
          dVar26 = dVar26 * dVar31;
          if (dVar46 < 0.0) {
            dVar14 = 0.04 / (dVar50 - dVar46);
            dVar13 = 1.0 - dVar14;
            dVar14 = (dVar12 * dVar14) / (dVar50 - dVar46);
            dVar12 = dVar12 * dVar13;
            dVar31 = dVar31 * dVar13 + dVar14 * (dVar26 - dVar31);
            dVar46 = dVar14 * (-dVar46 / dVar50 + 1.0);
            dVar32 = dVar32 * (dVar13 - dVar14) + dVar14 * dVar16;
          }
          else {
            dVar12 = dVar12 - (dVar46 + dVar50) * 0.5;
            dVar31 = (dVar31 - dVar26) * 0.5;
            dVar46 = (1.0 - -dVar46 / dVar50) * 0.5;
            dVar32 = (dVar32 - dVar16) * 0.5;
          }
          if (local_4f8 == 0.0) {
            dVar12 = 0.0;
            dVar31 = 0.0;
            dVar32 = 0.0;
          }
          local_5b8 = local_438 * dVar12;
          local_d8 = ((dVar51 - local_5b8 * 0.5) + 1e-20) * 12.0;
          local_e0 = local_5b8 / local_d8;
          local_e8 = 1.0 - local_e0 * 12.0 * local_e0;
          local_f0 = local_438 *
                     ((local_5b8 * 6.0 * (dVar51 * 4.0 - local_5b8)) / (local_d8 * local_d8) - 0.5);
          local_f8 = (local_f0 * dVar12) / local_438;
          local_678 = dVar37 * (dVar51 - local_5b8 * (0.5 - local_e0));
          dVar26 = local_678 / dVar48;
          dVar50 = dVar37 * (local_e8 * dVar22 + local_f0 * dVar31);
          dVar16 = dVar37 * local_f0 * dVar46 + dVar50 * local_448 + dVar26 * dVar38;
          dVar23 = dVar37 * (local_f0 * dVar32 + local_f8 * dVar47) + dVar50 * local_458 +
                   dVar26 * dVar41;
          dVar50 = dVar50 * local_470 + dVar26 * dVar40;
          dVar26 = 1.0 - local_438;
          dVar13 = (dVar26 * 12.0 * local_5b8 * local_5b8) / (local_d8 * local_d8 * local_438);
          local_100 = dVar13 * dVar22;
          dVar14 = (-dVar26 * local_f0) / local_438;
          dVar15 = local_5b8 / local_d8;
          local_698 = dVar37 * dVar26 * (dVar12 * 0.5 - (local_5b8 * dVar12) / local_d8);
          dVar26 = local_698 / dVar48;
          dVar24 = dVar37 * (local_100 + dVar14 * dVar31);
          if (*(double *)(param_1 + 0x162) <= 0.5) {
            if (0.5 < *(double *)(param_1 + 0x162) || *(double *)(param_1 + 0x162) == 0.5) {
              local_6c8 = local_678 * -0.5;
              dVar31 = dVar50 * -0.5;
              dVar22 = dVar16 * -0.5;
              dVar25 = dVar23 * -0.5;
            }
            else {
              local_d8 = local_d8 / 12.0;
              local_e0 = (dVar37 * 0.5) / (local_d8 * local_d8);
              local_e8 = dVar51 * ((local_5b8 * 2.0 * local_5b8) / 3.0 +
                                  dVar51 * (dVar51 - (local_5b8 * 4.0) / 3.0)) -
                         (local_5b8 * 2.0 * local_5b8 * local_5b8) / 15.0;
              local_6c8 = -local_e0 * local_e8;
              dVar48 = local_6c8 / dVar48;
              local_f0 = (local_6c8 * -2.0) / local_d8 -
                         local_e0 *
                         (dVar51 * (dVar51 * 3.0 - (local_5b8 * 8.0) / 3.0) +
                         (local_5b8 * 2.0 * local_5b8) / 3.0);
              local_f8 = local_438 *
                         (local_6c8 / local_d8 +
                         local_e0 *
                         (dVar51 * 1.3333333333333333 * (dVar51 - local_5b8) +
                         local_5b8 * 0.4 * local_5b8));
              dVar31 = local_f0 * dVar22 + local_f8 * dVar31;
              dVar22 = dVar31 * local_448 + local_f8 * dVar46 + dVar48 * dVar38;
              dVar25 = dVar31 * local_458 + local_f8 * dVar32 +
                       ((local_f8 * dVar12) / local_438) * dVar47 + dVar48 * dVar41;
              dVar31 = dVar31 * local_470 + dVar48 * dVar40;
            }
          }
          else {
            local_6c8 = -dVar37 * ((dVar51 / 2.0 + local_5b8 / 4.0) -
                                  (local_5b8 * 0.5 * local_5b8) / local_d8);
            dVar48 = local_6c8 / dVar48;
            local_d8 = local_d8 + local_d8;
            local_e0 = local_d8 * local_d8;
            local_f8 = -(0.25 - (local_5b8 * 12.0 * (dVar51 * 4.0 - local_5b8)) / local_e0);
            local_e8 = -((local_5b8 * 24.0 * local_5b8) / local_e0 + 0.5) * dVar22;
            local_f0 = local_f8 * local_438;
            local_f8 = local_f8 * dVar12;
            dVar31 = dVar37 * (local_e8 + local_f0 * dVar31);
            dVar22 = dVar37 * local_f0 * dVar46 + dVar31 * local_448 + dVar48 * dVar38;
            dVar25 = dVar37 * (local_f0 * dVar32 + local_f8 * dVar47) + dVar31 * local_458 +
                     dVar48 * dVar41;
            dVar31 = dVar31 * local_470 + dVar48 * dVar40;
          }
          local_678 = local_678 + ((dVar10 + dVar39) - local_698);
          local_698 = local_698 - (dVar10 + dVar39);
          local_680 = -(local_678 + local_698 + local_6c8);
          dVar40 = ((dVar24 * local_470 + dVar26 * dVar40) -
                   (dVar36 * dVar49 + (dVar10 / dVar9) * dVar44)) -
                   (dVar21 + (dVar39 / dVar9) * dVar44);
          dVar44 = (dVar37 * dVar14 * dVar46 + dVar24 * local_448 + dVar26 * dVar38) -
                   dVar45 * local_448;
          dVar37 = ((dVar37 * (dVar14 * dVar32 +
                              -((dVar13 * dVar51) / local_438 + dVar12 * (0.5 - dVar15)) * dVar47) +
                     dVar24 * local_458 + dVar26 * dVar41) -
                   (dVar36 * dVar8 * 1.0 + (dVar10 / dVar9) * dVar20)) -
                   (dVar11 * (dVar8 * 1.0 + 1.0 + local_458) + (dVar39 / dVar9) * dVar20);
          dVar50 = dVar50 - dVar40;
          dVar16 = dVar16 - dVar44;
          dVar39 = (dVar23 - dVar37) * dVar19;
          dVar37 = dVar37 * dVar19;
          *(double *)(param_1 + 0x27e) = dVar50;
          *(double *)(param_1 + 0x280) = -(dVar50 + dVar16 + dVar39);
          *(double *)(param_1 + 0x282) = dVar16;
          *(double *)(param_1 + 0x284) = -(dVar50 + dVar40 + dVar31);
          *(double *)(param_1 + 0x286) =
               dVar50 + dVar16 + dVar39 + dVar40 + dVar44 + dVar37 + dVar31 + dVar22 +
               dVar25 * dVar19;
          *(double *)(param_1 + 0x288) = -(dVar16 + dVar44 + dVar22);
          *(double *)(param_1 + 0x28a) = dVar40;
          *(double *)(param_1 + 0x28c) = -(dVar40 + dVar44 + dVar37);
          *(double *)(param_1 + 0x28e) = dVar44;
          local_d0 = dVar51;
        }
      }
      *(double *)(param_1 + 0x290) =
           (-*(double *)(param_1 + 0x27e) - *(double *)(param_1 + 0x284)) -
           *(double *)(param_1 + 0x28a);
      *(double *)(param_1 + 0x294) =
           (-*(double *)(param_1 + 0x282) - *(double *)(param_1 + 0x288)) -
           *(double *)(param_1 + 0x28e);
      *(double *)(param_1 + 0x292) =
           (-*(double *)(param_1 + 0x280) - *(double *)(param_1 + 0x286)) -
           *(double *)(param_1 + 0x28c);
      *(double *)(param_1 + 0x296) =
           (-*(double *)(param_1 + 0x282) - *(double *)(param_1 + 0x27e)) -
           *(double *)(param_1 + 0x280);
      *(double *)(param_1 + 0x29a) =
           (-*(double *)(param_1 + 0x288) - *(double *)(param_1 + 0x284)) -
           *(double *)(param_1 + 0x286);
      *(double *)(param_1 + 0x29c) =
           (-*(double *)(param_1 + 0x28a) - *(double *)(param_1 + 0x28e)) -
           *(double *)(param_1 + 0x28c);
      *(double *)(param_1 + 0x298) =
           (-*(double *)(param_1 + 0x296) - *(double *)(param_1 + 0x29a)) -
           *(double *)(param_1 + 0x29c);
      *(double *)(param_1 + 0x386) = local_678;
      *(double *)(param_1 + 0x388) = local_698;
      *(double *)(param_1 + 0x38a) = local_680;
      if ((0 < param_1[0x54]) || (0 < param_1[0x55])) {
        local_670 = -(local_698 + local_678);
        *(double *)(param_1 + 0x2a2) =
             -(*(double *)(param_1 + 0x27e) + *(double *)(param_1 + 0x28a));
        *(double *)(param_1 + 0x29e) =
             -(*(double *)(param_1 + 0x282) + *(double *)(param_1 + 0x28e));
        *(double *)(param_1 + 0x2a0) =
             -(*(double *)(param_1 + 0x280) + *(double *)(param_1 + 0x28c));
        *(double *)(param_1 + 0x2a4) =
             -(*(double *)(param_1 + 0x2a2) + *(double *)(param_1 + 0x29e) +
              *(double *)(param_1 + 0x2a0));
        local_d0 = *(double *)(param_1 + 0x220) /
                   (*(double *)(param_1 + 0x208) * *(double *)(param_1 + 0x66) *
                    *(double *)(param_1 + 0x74) * *(double *)(param_1 + 100));
        *(double *)(param_1 + 0x2a6) = local_d0 * 1e-09;
        if (0 < param_1[0x55]) {
          *(double *)(param_1 + 0x1bc) = 1.0 / local_d0;
        }
        uVar53 = 0;
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x18,local_670,0);
        if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
          uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x18,0);
          uVar53 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0x18,uVar3,0);
        }
        if (0 < param_1[0x54]) {
          FUN_00dafac0(param_2,param_3,local_c8,local_c0,0,
                       CONCAT44(uVar53,*(ushort *)(param_1 + 0x4a) + 0x18),0,1);
        }
      }
    }
    if (bVar5) {
      dVar19 = *(double *)(param_1 + 0x3e6) * *(double *)(param_1 + 0x192);
      dVar49 = *(double *)(param_1 + 0x3e4) * *(double *)(param_1 + 400);
      dVar38 = *(double *)(param_1 + 0x3ea) * *(double *)(param_1 + 0x18e);
      dVar8 = *(double *)(param_1 + 0x3ee) * *(double *)(param_1 + 0x68) *
              *(double *)(param_1 + 0x74);
      dVar20 = *(double *)(param_1 + 1000) * *(double *)(param_1 + 0x18c);
      dVar36 = *(double *)(param_1 + 0x3ec) * *(double *)(param_1 + 0x68) *
               *(double *)(param_1 + 0x74);
      dVar39 = *(double *)(param_1 + 0x3cc);
      dVar37 = *(double *)(param_1 + 0x3d0);
      dVar40 = *(double *)(param_1 + 0x3d4);
      dVar44 = *(double *)(param_1 + 0x3ce);
      dVar45 = *(double *)(param_1 + 0x3d2);
      dVar47 = *(double *)(param_1 + 0x3d6);
      if (local_528 == 0.0) {
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x14,0,0);
        *(double *)(param_1 + 0x2a8) = dVar49 + dVar20 + dVar36;
      }
      else if (0.0 <= local_528) {
        local_5b8 = dVar49 + dVar20 + dVar36;
        local_d0 = local_528 *
                   ((dVar49 * dVar39) / *(double *)(param_1 + 0x3bc) +
                    (dVar20 * dVar37) / *(double *)(param_1 + 0x3be) +
                   (dVar36 * dVar40) / *(double *)(param_1 + 0x3c0));
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x14,
                     local_528 * (local_5b8 + local_d0 * 0.5),0);
        *(double *)(param_1 + 0x2a8) = local_5b8 + local_d0;
      }
      else {
        if (dVar49 <= 0.0) {
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x14,0,0);
          param_1[0x2a8] = 0;
          param_1[0x2a9] = 0;
        }
        else {
          dVar11 = 1.0 - local_528 / *(double *)(param_1 + 0x3bc);
          if (dVar39 == 0.5) {
            dVar9 = (double)FUN_0040c760(dVar11);
            dVar9 = 1.0 / dVar9;
          }
          else {
            dVar9 = (double)FUN_0040c2f0(dVar11);
            dVar9 = (double)FUN_0040af80(-dVar39 * dVar9);
          }
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x14,
                       (*(double *)(param_1 + 0x3bc) * dVar49 * (1.0 - dVar11 * dVar9)) /
                       (1.0 - dVar39),0);
          *(double *)(param_1 + 0x2a8) = dVar49 * dVar9;
        }
        if (0.0 < dVar20) {
          dVar39 = 1.0 - local_528 / *(double *)(param_1 + 0x3be);
          if (dVar37 == 0.5) {
            dVar49 = (double)FUN_0040c760(dVar39);
            dVar49 = 1.0 / dVar49;
          }
          else {
            dVar49 = (double)FUN_0040c2f0(dVar39);
            dVar49 = (double)FUN_0040af80(-dVar37 * dVar49);
          }
          dVar11 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x14,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x14,
                       dVar11 + (*(double *)(param_1 + 0x3be) * dVar20 * (1.0 - dVar39 * dVar49)) /
                                (1.0 - dVar37),0);
          *(double *)(param_1 + 0x2a8) = *(double *)(param_1 + 0x2a8) + dVar20 * dVar49;
        }
        if (0.0 < dVar36) {
          dVar39 = 1.0 - local_528 / *(double *)(param_1 + 0x3c0);
          if (dVar40 == 0.5) {
            dVar37 = (double)FUN_0040c760(dVar39);
            dVar37 = 1.0 / dVar37;
          }
          else {
            dVar37 = (double)FUN_0040c2f0(dVar39);
            dVar37 = (double)FUN_0040af80(-dVar40 * dVar37);
          }
          dVar49 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x14,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x14,
                       dVar49 + (*(double *)(param_1 + 0x3c0) * dVar36 * (1.0 - dVar39 * dVar37)) /
                                (1.0 - dVar40),0);
          *(double *)(param_1 + 0x2a8) = *(double *)(param_1 + 0x2a8) + dVar36 * dVar37;
        }
      }
      if (local_510 == 0.0) {
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x16,0,0);
        *(double *)(param_1 + 0x2aa) = dVar19 + dVar38 + dVar8;
      }
      else if (0.0 <= local_510) {
        local_5b8 = dVar19 + dVar38 + dVar8;
        local_d0 = local_510 *
                   ((dVar19 * dVar44) / *(double *)(param_1 + 0x3c2) +
                    (dVar38 * dVar45) / *(double *)(param_1 + 0x3c4) +
                   (dVar8 * dVar47) / *(double *)(param_1 + 0x3c6));
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x16,
                     local_510 * (local_5b8 + local_d0 * 0.5),0);
        *(double *)(param_1 + 0x2aa) = local_5b8 + local_d0;
      }
      else {
        if (dVar19 <= 0.0) {
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x16,0,0);
          param_1[0x2aa] = 0;
          param_1[0x2ab] = 0;
        }
        else {
          dVar39 = 1.0 - local_510 / *(double *)(param_1 + 0x3c2);
          if (dVar44 == 0.5) {
            dVar37 = (double)FUN_0040c760(dVar39);
            dVar37 = 1.0 / dVar37;
          }
          else {
            dVar37 = (double)FUN_0040c2f0(dVar39);
            dVar37 = (double)FUN_0040af80(-dVar44 * dVar37);
          }
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x14,
                       (*(double *)(param_1 + 0x3c2) * dVar19 * (1.0 - dVar39 * dVar37)) /
                       (1.0 - dVar44),0);
          *(double *)(param_1 + 0x2aa) = dVar19 * dVar37;
        }
        if (0.0 < dVar38) {
          dVar39 = 1.0 - local_510 / *(double *)(param_1 + 0x3c4);
          if (dVar45 == 0.5) {
            dVar37 = (double)FUN_0040c760(dVar39);
            dVar37 = 1.0 / dVar37;
          }
          else {
            dVar37 = (double)FUN_0040c2f0(dVar39);
            dVar37 = (double)FUN_0040af80(-dVar45 * dVar37);
          }
          dVar40 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x16,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x16,
                       dVar40 + (*(double *)(param_1 + 0x3c4) * dVar38 * (1.0 - dVar39 * dVar37)) /
                                (1.0 - dVar45),0);
          *(double *)(param_1 + 0x2aa) = *(double *)(param_1 + 0x2aa) + dVar38 * dVar37;
        }
        if (0.0 < dVar8) {
          dVar39 = 1.0 - local_510 / *(double *)(param_1 + 0x3c6);
          if (dVar47 == 0.5) {
            dVar37 = (double)FUN_0040c760(dVar39);
            dVar37 = 1.0 / dVar37;
          }
          else {
            dVar37 = (double)FUN_0040c2f0(dVar39);
            dVar37 = (double)FUN_0040af80(-dVar47 * dVar37);
          }
          dVar40 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x16,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x16,
                       dVar40 + (*(double *)(param_1 + 0x3c6) * dVar8 * (1.0 - dVar39 * dVar37)) /
                                (1.0 - dVar47),0);
          *(double *)(param_1 + 0x2aa) = *(double *)(param_1 + 0x2aa) + dVar8 * dVar37;
        }
      }
    }
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,local_658,0);
    *(double *)(param_1 + 0x16) = local_658;
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 3,local_668,0);
    *(double *)(param_1 + 0xe) = local_668;
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 2,local_650,0);
    *(double *)(param_1 + 0x12) = local_650;
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 1,local_610,0);
    *(double *)(param_1 + 0x14) = local_610;
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 8,local_660,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 9,local_648,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 5,local_640,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 6,local_640 - local_658,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 7,local_638,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 10,local_628,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xb,local_620,0);
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x1c,
                 *(undefined8 *)(param_1 + 0x2ac),0);
    if (bVar5) {
      dVar39 = local_5f8;
      dVar37 = local_668;
      if (param_1[0x53] == 3) {
        dVar39 = local_648 - local_658;
        dVar37 = local_648;
      }
      if (param_1[0x58] == 0) {
        dVar40 = *(double *)(param_1 + 0x144);
        dVar39 = *(double *)(param_1 + 0x144) * dVar39;
        dVar44 = *(double *)(param_1 + 0x146);
        dVar37 = *(double *)(param_1 + 0x146) * dVar37;
      }
      else {
        dVar40 = dVar39 + 0.02;
        local_d0 = (double)FUN_0040c760(dVar40 * dVar40 + 0.08);
        local_d8 = (dVar40 - local_d0) * 0.5;
        local_e0 = *(double *)(param_1 + 0x66) * *(double *)(param_1 + 0x11e);
        local_e8 = (double)FUN_0040c760(1.0 - (local_d8 * 4.0) / *(double *)(param_1 + 0x122));
        dVar40 = (*(double *)(param_1 + 0x144) + local_e0) -
                 local_e0 * (1.0 - 1.0 / local_e8) * (0.5 - (dVar40 * 0.5) / local_d0);
        dVar39 = (*(double *)(param_1 + 0x144) + local_e0) * dVar39 -
                 local_e0 * (local_d8 + *(double *)(param_1 + 0x122) * 0.5 * (local_e8 - 1.0));
        local_5b8 = dVar37 + 0.02;
        local_d0 = (double)FUN_0040c760(local_5b8 * local_5b8 + 0.08);
        local_d8 = (local_5b8 - local_d0) * 0.5;
        local_e0 = *(double *)(param_1 + 0x66) * *(double *)(param_1 + 0x11c);
        local_e8 = (double)FUN_0040c760(1.0 - (local_d8 * 4.0) / *(double *)(param_1 + 0x120));
        dVar44 = (*(double *)(param_1 + 0x146) + local_e0) -
                 local_e0 * (1.0 - 1.0 / local_e8) * (0.5 - (local_5b8 * 0.5) / local_d0);
        dVar37 = (*(double *)(param_1 + 0x146) + local_e0) * dVar37 -
                 local_e0 * (local_d8 + *(double *)(param_1 + 0x120) * 0.5 * (local_e8 - 1.0));
      }
      if (*(double *)(param_1 + 0x74) != 1.0) {
        dVar40 = dVar40 * *(double *)(param_1 + 0x74);
        dVar44 = dVar44 * *(double *)(param_1 + 0x74);
        dVar39 = dVar39 * *(double *)(param_1 + 0x74);
        dVar37 = dVar37 * *(double *)(param_1 + 0x74);
      }
      *(double *)(param_1 + 0x2b0) = dVar40;
      *(double *)(param_1 + 0x2b2) = dVar39;
      *(double *)(param_1 + 0x2ae) = dVar44;
      *(double *)(param_1 + 0x2b4) = dVar37;
LAB_00e64cea:
      dVar45 = (double)FUN_01b08a00(param_3,0);
      if (param_1[1] < 1) {
        if (param_1[0x54] == 0) {
          local_6c8 = local_680 - dVar37;
          if (param_1[0x53] == 3) {
            *(double *)(param_1 + 0x2da) = (dVar40 + dVar44 + *(double *)(param_1 + 0x148)) * dVar45
            ;
            *(double *)(param_1 + 0x2ce) = -dVar40 * dVar45;
            *(double *)(param_1 + 0x2d0) = -dVar44 * dVar45;
            *(double *)(param_1 + 0x2d2) = -*(double *)(param_1 + 0x148) * dVar45;
            *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_1 + 0x2ce);
            *(undefined8 *)(param_1 + 0x2d6) = *(undefined8 *)(param_1 + 0x2d0);
            *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x2d2);
            *(double *)(param_1 + 0x2be) = *(double *)(param_1 + 0x27e) * dVar45;
            *(double *)(param_1 + 0x2c2) = *(double *)(param_1 + 0x280) * dVar45;
            *(double *)(param_1 + 0x2c0) = *(double *)(param_1 + 0x282) * dVar45;
            *(double *)(param_1 + 0x2c4) =
                 -(*(double *)(param_1 + 0x2be) + *(double *)(param_1 + 0x2c2) +
                  *(double *)(param_1 + 0x2c0));
            *(double *)(param_1 + 0x306) =
                 -(*(double *)(param_1 + 0x27e) + *(double *)(param_1 + 0x28a) +
                  *(double *)(param_1 + 0x284)) * dVar45;
            *(double *)(param_1 + 0x312) = *(double *)(param_1 + 0x284) * dVar45;
            *(double *)(param_1 + 0x31e) = *(double *)(param_1 + 0x28a) * dVar45;
            local_690 = dVar39 + dVar37 + *(double *)(param_1 + 0x148) * local_538;
            local_698 = local_698 - *(double *)(param_1 + 0x148) * local_538;
            dVar39 = local_678 + local_690 + local_698;
          }
          else {
            *(double *)(param_1 + 0x2be) =
                 (*(double *)(param_1 + 0x27e) + dVar40 + dVar44 + *(double *)(param_1 + 0x148)) *
                 dVar45;
            *(double *)(param_1 + 0x2c2) = (*(double *)(param_1 + 0x280) - dVar40) * dVar45;
            *(double *)(param_1 + 0x2c0) = (*(double *)(param_1 + 0x282) - dVar44) * dVar45;
            *(double *)(param_1 + 0x2c4) =
                 -(*(double *)(param_1 + 0x2be) + *(double *)(param_1 + 0x2c2) +
                  *(double *)(param_1 + 0x2c0));
            *(double *)(param_1 + 0x306) =
                 -(*(double *)(param_1 + 0x27e) + *(double *)(param_1 + 0x28a) +
                   *(double *)(param_1 + 0x284) + dVar40) * dVar45;
            *(double *)(param_1 + 0x312) = (*(double *)(param_1 + 0x284) - dVar44) * dVar45;
            *(double *)(param_1 + 0x31e) =
                 (*(double *)(param_1 + 0x28a) - *(double *)(param_1 + 0x148)) * dVar45;
            param_1[0x2d8] = 0;
            param_1[0x2d9] = 0;
            param_1[0x2d6] = 0;
            param_1[0x2d7] = 0;
            param_1[0x2d4] = 0;
            param_1[0x2d5] = 0;
            local_678 = local_678 + dVar39 + dVar37 + *(double *)(param_1 + 0x148) * local_550;
            local_698 = local_698 - *(double *)(param_1 + 0x148) * local_550;
            dVar39 = local_678 + local_698;
          }
          local_680 = -(dVar39 + local_6c8);
          *(double *)(param_1 + 0x304) =
               ((*(double *)(param_1 + 0x2aa) + dVar40) -
               (*(double *)(param_1 + 0x280) + *(double *)(param_1 + 0x28c) +
               *(double *)(param_1 + 0x286))) * dVar45;
          *(double *)(param_1 + 0x308) =
               -(*(double *)(param_1 + 0x282) + *(double *)(param_1 + 0x28e) +
                *(double *)(param_1 + 0x288)) * dVar45;
          *(double *)(param_1 + 0x310) = *(double *)(param_1 + 0x286) * dVar45;
          *(double *)(param_1 + 0x316) =
               (*(double *)(param_1 + 0x288) + *(double *)(param_1 + 0x2a8) + dVar44) * dVar45;
          if (param_1[0x4b] == 0) {
            *(double *)(param_1 + 0x30a) =
                 -(*(double *)(param_1 + 0x306) + *(double *)(param_1 + 0x304) +
                   *(double *)(param_1 + 0x308) + *(double *)(param_1 + 0x2d4));
            *(double *)(param_1 + 0x318) =
                 -(*(double *)(param_1 + 0x312) + *(double *)(param_1 + 0x310) +
                   *(double *)(param_1 + 0x316) + *(double *)(param_1 + 0x2d6));
            *(double *)(param_1 + 0x31c) =
                 (*(double *)(param_1 + 0x28c) - *(double *)(param_1 + 0x2aa)) * dVar45;
            *(double *)(param_1 + 800) =
                 (*(double *)(param_1 + 0x28e) - *(double *)(param_1 + 0x2a8)) * dVar45;
            param_1[0x336] = 0;
            param_1[0x337] = 0;
            param_1[0x338] = 0;
            param_1[0x339] = 0;
          }
          else {
            *(double *)(param_1 + 0x30a) =
                 -(*(double *)(param_1 + 0x306) + *(double *)(param_1 + 0x304) +
                   *(double *)(param_1 + 0x308) + *(double *)(param_1 + 0x2d4)) +
                 *(double *)(param_1 + 0x2aa) * dVar45;
            *(double *)(param_1 + 0x318) =
                 -(*(double *)(param_1 + 0x288) + *(double *)(param_1 + 0x284) +
                  *(double *)(param_1 + 0x286)) * dVar45;
            *(double *)(param_1 + 0x31c) = *(double *)(param_1 + 0x28c) * dVar45;
            *(double *)(param_1 + 800) = *(double *)(param_1 + 0x28e) * dVar45;
            *(double *)(param_1 + 0x336) = -*(double *)(param_1 + 0x2aa) * dVar45;
            *(double *)(param_1 + 0x338) = -*(double *)(param_1 + 0x2a8) * dVar45;
          }
          *(double *)(param_1 + 0x326) =
               -(*(double *)(param_1 + 0x31e) + *(double *)(param_1 + 0x31c) +
                 *(double *)(param_1 + 800) + *(double *)(param_1 + 0x2d8));
          param_1[0x2c6] = 0;
          param_1[0x2c7] = 0;
          param_1[0x2ca] = 0;
          param_1[0x2cb] = 0;
          param_1[0x2c8] = 0;
          param_1[0x2c9] = 0;
          param_1[0x2cc] = 0;
          param_1[0x2cd] = 0;
          param_1[0x302] = -0x66666666;
          param_1[0x303] = 0x3fd99999;
          param_1[0x300] = 0x33333333;
          param_1[0x301] = 0x3fe33333;
          param_1[0x2e2] = 0;
          param_1[0x2e3] = 0;
          param_1[0x2e0] = 0;
          param_1[0x2e1] = 0;
          param_1[0x2de] = 0;
          param_1[0x2df] = 0;
          param_1[0x2dc] = 0;
          param_1[0x2dd] = 0;
          param_1[0x2ea] = 0;
          param_1[0x2eb] = 0;
          param_1[0x2e8] = 0;
          param_1[0x2e9] = 0;
          param_1[0x2e6] = 0;
          param_1[0x2e7] = 0;
          param_1[0x2e4] = 0;
          param_1[0x2e5] = 0;
        }
        else {
          dVar47 = *(double *)(param_1 + 0x208) * *(double *)(param_1 + 0x66) *
                   *(double *)(param_1 + 0x74) * *(double *)(param_1 + 100);
          local_5b8 = (*(double *)(param_1 + 0x2ac) * 1e-09) / dVar47;
          *(double *)(param_1 + 0x2cc) = local_5b8 * *(double *)(param_1 + 0x226);
          *(double *)(param_1 + 0x2c6) = local_5b8 * *(double *)(param_1 + 0x222);
          *(double *)(param_1 + 0x2c8) = local_5b8 * *(double *)(param_1 + 0x228);
          *(double *)(param_1 + 0x2ca) = local_5b8 * *(double *)(param_1 + 0x224);
          *(double *)(param_1 + 0x344) = dVar45 * 1e-09;
          *(double *)(param_1 + 0x328) = *(double *)(param_1 + 0x2a2) * dVar45;
          *(double *)(param_1 + 0x32a) = *(double *)(param_1 + 0x2a0) * dVar45;
          *(double *)(param_1 + 0x32c) = *(double *)(param_1 + 0x29e) * dVar45;
          *(double *)(param_1 + 0x32e) = *(double *)(param_1 + 0x2a4) * dVar45;
          dVar19 = (double)FUN_0040c850(local_670);
          if (dVar47 * 1e-05 < dVar19) {
            *(double *)(param_1 + 0x302) = local_680 / local_670;
            *(double *)(param_1 + 0x2ea) =
                 (*(double *)(param_1 + 0x288) -
                 *(double *)(param_1 + 0x302) *
                 (*(double *)(param_1 + 0x288) +
                 -(*(double *)(param_1 + 0x282) + *(double *)(param_1 + 0x288) +
                  *(double *)(param_1 + 0x28e)))) / local_670;
            *(double *)(param_1 + 0x2e6) =
                 (*(double *)(param_1 + 0x284) -
                 *(double *)(param_1 + 0x302) *
                 (*(double *)(param_1 + 0x284) +
                 -(*(double *)(param_1 + 0x27e) + *(double *)(param_1 + 0x284) +
                  *(double *)(param_1 + 0x28a)))) / local_670;
            *(double *)(param_1 + 0x2e4) =
                 (*(double *)(param_1 + 0x286) -
                 *(double *)(param_1 + 0x302) *
                 (*(double *)(param_1 + 0x286) +
                 -(*(double *)(param_1 + 0x280) + *(double *)(param_1 + 0x286) +
                  *(double *)(param_1 + 0x28c)))) / local_670;
            *(double *)(param_1 + 0x2e8) =
                 -(*(double *)(param_1 + 0x2e4) + *(double *)(param_1 + 0x2e6) +
                  *(double *)(param_1 + 0x2ea));
          }
          else {
            if (0.5 < *(double *)(param_1 + 0x162) || *(double *)(param_1 + 0x162) == 0.5) {
              if (*(double *)(param_1 + 0x162) <= 0.5) {
                param_1[0x302] = 0;
                param_1[0x303] = 0x3fe00000;
              }
              else {
                param_1[0x302] = 0;
                param_1[0x303] = 0;
              }
            }
            else {
              param_1[0x302] = -0x66666666;
              param_1[0x303] = 0x3fd99999;
            }
            param_1[0x2ea] = 0;
            param_1[0x2eb] = 0;
            param_1[0x2e8] = 0;
            param_1[0x2e9] = 0;
            param_1[0x2e6] = 0;
            param_1[0x2e7] = 0;
            param_1[0x2e4] = 0;
            param_1[0x2e5] = 0;
          }
          *(double *)(param_1 + 0x300) = 1.0 - *(double *)(param_1 + 0x302);
          *(ulonglong *)(param_1 + 0x2dc) = *(ulonglong *)(param_1 + 0x2e4) ^ 0x8000000000000000;
          *(ulonglong *)(param_1 + 0x2de) = *(ulonglong *)(param_1 + 0x2e6) ^ 0x8000000000000000;
          *(ulonglong *)(param_1 + 0x2e2) = *(ulonglong *)(param_1 + 0x2ea) ^ 0x8000000000000000;
          *(double *)(param_1 + 0x2e0) =
               -(*(double *)(param_1 + 0x2dc) + *(double *)(param_1 + 0x2de) +
                *(double *)(param_1 + 0x2e2));
          if (param_1[0x53] == 3) {
            *(double *)(param_1 + 0x2da) = (dVar40 + dVar44 + *(double *)(param_1 + 0x148)) * dVar45
            ;
            *(double *)(param_1 + 0x2ce) = -dVar40 * dVar45;
            *(double *)(param_1 + 0x2d0) = -dVar44 * dVar45;
            *(double *)(param_1 + 0x2d2) = -*(double *)(param_1 + 0x148) * dVar45;
            *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_1 + 0x2ce);
            *(undefined8 *)(param_1 + 0x2d6) = *(undefined8 *)(param_1 + 0x2d0);
            *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x2d2);
            param_1[0x31e] = 0;
            param_1[799] = 0;
            param_1[0x312] = 0;
            param_1[0x313] = 0;
            param_1[0x306] = 0;
            param_1[0x307] = 0;
            param_1[0x2c2] = 0;
            param_1[0x2c3] = 0;
            param_1[0x2c0] = 0;
            param_1[0x2c1] = 0;
            param_1[0x2be] = 0;
            param_1[0x2bf] = 0;
            param_1[0x2c4] = 0;
            param_1[0x2c5] = 0;
            local_698 = *(double *)(param_1 + 0x148) * local_538;
            local_690 = dVar39 + dVar37 + local_698;
            local_678 = 0.0;
          }
          else {
            *(double *)(param_1 + 0x2be) = (dVar40 + dVar44 + *(double *)(param_1 + 0x148)) * dVar45
            ;
            *(double *)(param_1 + 0x2c2) = -dVar40 * dVar45;
            *(double *)(param_1 + 0x2c0) = -dVar44 * dVar45;
            *(double *)(param_1 + 0x2c4) = -*(double *)(param_1 + 0x148) * dVar45;
            *(undefined8 *)(param_1 + 0x306) = *(undefined8 *)(param_1 + 0x2c2);
            *(undefined8 *)(param_1 + 0x312) = *(undefined8 *)(param_1 + 0x2c0);
            *(undefined8 *)(param_1 + 0x31e) = *(undefined8 *)(param_1 + 0x2c4);
            param_1[0x2d8] = 0;
            param_1[0x2d9] = 0;
            param_1[0x2d6] = 0;
            param_1[0x2d7] = 0;
            param_1[0x2d4] = 0;
            param_1[0x2d5] = 0;
            local_698 = *(double *)(param_1 + 0x148) * local_550;
            local_678 = dVar39 + dVar37 + local_698;
          }
          local_680 = -dVar39;
          local_698 = -local_698;
          local_6c8 = -dVar37;
          *(double *)(param_1 + 0x304) = (*(double *)(param_1 + 0x2aa) + dVar40) * dVar45;
          param_1[0x310] = 0;
          param_1[0x311] = 0;
          param_1[0x308] = 0;
          param_1[0x309] = 0;
          *(double *)(param_1 + 0x316) = (*(double *)(param_1 + 0x2a8) + dVar44) * dVar45;
          if (param_1[0x4b] == 0) {
            *(double *)(param_1 + 0x30a) =
                 -(*(double *)(param_1 + 0x306) + *(double *)(param_1 + 0x304) +
                  *(double *)(param_1 + 0x2d4));
            *(double *)(param_1 + 0x318) =
                 -(*(double *)(param_1 + 0x312) + *(double *)(param_1 + 0x316) +
                  *(double *)(param_1 + 0x2d6));
            *(double *)(param_1 + 0x31c) = -*(double *)(param_1 + 0x2aa) * dVar45;
            *(double *)(param_1 + 800) = -*(double *)(param_1 + 0x2a8) * dVar45;
            param_1[0x336] = 0;
            param_1[0x337] = 0;
            param_1[0x338] = 0;
            param_1[0x339] = 0;
          }
          else {
            param_1[800] = 0;
            param_1[0x321] = 0;
            param_1[0x31c] = 0;
            param_1[0x31d] = 0;
            param_1[0x318] = 0;
            param_1[0x319] = 0;
            param_1[0x30a] = 0;
            param_1[0x30b] = 0;
            *(double *)(param_1 + 0x336) = -*(double *)(param_1 + 0x2aa) * dVar45;
            *(double *)(param_1 + 0x338) = -*(double *)(param_1 + 0x2a8) * dVar45;
          }
          *(double *)(param_1 + 0x326) =
               -(*(double *)(param_1 + 0x31c) + *(double *)(param_1 + 0x31e) +
                 *(double *)(param_1 + 800) + *(double *)(param_1 + 0x2d8));
        }
      }
      else if (param_1[0x54] == 0) {
        local_680 = local_680 - dVar39;
        if (param_1[0x53] == 3) {
          *(double *)(param_1 + 0x2da) = (dVar40 + dVar44 + *(double *)(param_1 + 0x148)) * dVar45;
          *(double *)(param_1 + 0x2ce) = -dVar40 * dVar45;
          *(double *)(param_1 + 0x2d0) = -dVar44 * dVar45;
          *(double *)(param_1 + 0x2d2) = -*(double *)(param_1 + 0x148) * dVar45;
          *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_1 + 0x2ce);
          *(undefined8 *)(param_1 + 0x2d6) = *(undefined8 *)(param_1 + 0x2d0);
          *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x2d2);
          *(double *)(param_1 + 0x2be) = *(double *)(param_1 + 0x27e) * dVar45;
          *(double *)(param_1 + 0x2c2) = *(double *)(param_1 + 0x282) * dVar45;
          *(double *)(param_1 + 0x2c0) = *(double *)(param_1 + 0x280) * dVar45;
          *(double *)(param_1 + 0x2c4) =
               -(*(double *)(param_1 + 0x2be) + *(double *)(param_1 + 0x2c2) +
                *(double *)(param_1 + 0x2c0));
          *(double *)(param_1 + 0x306) = *(double *)(param_1 + 0x284) * dVar45;
          *(double *)(param_1 + 0x312) =
               -(*(double *)(param_1 + 0x27e) + *(double *)(param_1 + 0x28a) +
                *(double *)(param_1 + 0x284)) * dVar45;
          *(double *)(param_1 + 0x31e) = *(double *)(param_1 + 0x28a) * dVar45;
          local_690 = dVar39 + dVar37 + *(double *)(param_1 + 0x148) * local_538;
          local_698 = local_698 - *(double *)(param_1 + 0x148) * local_538;
          dVar39 = local_678 + local_690 + local_698;
        }
        else {
          *(double *)(param_1 + 0x2be) =
               (*(double *)(param_1 + 0x27e) + dVar40 + dVar44 + *(double *)(param_1 + 0x148)) *
               dVar45;
          *(double *)(param_1 + 0x2c2) = (*(double *)(param_1 + 0x282) - dVar40) * dVar45;
          *(double *)(param_1 + 0x2c0) = (*(double *)(param_1 + 0x280) - dVar44) * dVar45;
          *(double *)(param_1 + 0x2c4) =
               -(*(double *)(param_1 + 0x2be) + *(double *)(param_1 + 0x2c2) +
                *(double *)(param_1 + 0x2c0));
          *(double *)(param_1 + 0x306) = (*(double *)(param_1 + 0x284) - dVar40) * dVar45;
          *(double *)(param_1 + 0x312) =
               -(*(double *)(param_1 + 0x27e) + *(double *)(param_1 + 0x28a) +
                 *(double *)(param_1 + 0x284) + dVar44) * dVar45;
          *(double *)(param_1 + 0x31e) =
               (*(double *)(param_1 + 0x28a) - *(double *)(param_1 + 0x148)) * dVar45;
          param_1[0x2d8] = 0;
          param_1[0x2d9] = 0;
          param_1[0x2d6] = 0;
          param_1[0x2d7] = 0;
          param_1[0x2d4] = 0;
          param_1[0x2d5] = 0;
          local_678 = local_678 + dVar39 + dVar37 + *(double *)(param_1 + 0x148) * local_550;
          local_698 = local_698 - *(double *)(param_1 + 0x148) * local_550;
          dVar39 = local_678 + local_698;
        }
        local_6c8 = -(dVar39 + local_680);
        *(double *)(param_1 + 0x304) =
             (*(double *)(param_1 + 0x288) + *(double *)(param_1 + 0x2aa) + dVar40) * dVar45;
        *(double *)(param_1 + 0x308) = *(double *)(param_1 + 0x286) * dVar45;
        *(double *)(param_1 + 0x310) =
             -(*(double *)(param_1 + 0x282) + *(double *)(param_1 + 0x28e) +
              *(double *)(param_1 + 0x288)) * dVar45;
        *(double *)(param_1 + 0x316) =
             ((*(double *)(param_1 + 0x2a8) + dVar44) -
             (*(double *)(param_1 + 0x280) + *(double *)(param_1 + 0x28c) +
             *(double *)(param_1 + 0x286))) * dVar45;
        if (param_1[0x4b] == 0) {
          *(double *)(param_1 + 0x30a) =
               -(*(double *)(param_1 + 0x306) + *(double *)(param_1 + 0x304) +
                 *(double *)(param_1 + 0x308) + *(double *)(param_1 + 0x2d4));
          *(double *)(param_1 + 0x318) =
               -(*(double *)(param_1 + 0x312) + *(double *)(param_1 + 0x310) +
                 *(double *)(param_1 + 0x316) + *(double *)(param_1 + 0x2d6));
          *(double *)(param_1 + 0x31c) =
               (*(double *)(param_1 + 0x28e) - *(double *)(param_1 + 0x2aa)) * dVar45;
          *(double *)(param_1 + 800) =
               (*(double *)(param_1 + 0x28c) - *(double *)(param_1 + 0x2a8)) * dVar45;
          param_1[0x336] = 0;
          param_1[0x337] = 0;
          param_1[0x338] = 0;
          param_1[0x339] = 0;
        }
        else {
          *(double *)(param_1 + 0x30a) =
               -(*(double *)(param_1 + 0x288) + *(double *)(param_1 + 0x284) +
                *(double *)(param_1 + 0x286)) * dVar45;
          *(double *)(param_1 + 0x318) =
               -(*(double *)(param_1 + 0x312) + *(double *)(param_1 + 0x310) +
                 *(double *)(param_1 + 0x316) + *(double *)(param_1 + 0x2d6)) +
               *(double *)(param_1 + 0x2a8) * dVar45;
          *(double *)(param_1 + 0x31c) = *(double *)(param_1 + 0x28e) * dVar45;
          *(double *)(param_1 + 800) = *(double *)(param_1 + 0x28c) * dVar45;
          *(double *)(param_1 + 0x336) = -*(double *)(param_1 + 0x2aa) * dVar45;
          *(double *)(param_1 + 0x338) = -*(double *)(param_1 + 0x2a8) * dVar45;
        }
        *(double *)(param_1 + 0x326) =
             -(*(double *)(param_1 + 0x31c) + *(double *)(param_1 + 0x31e) +
               *(double *)(param_1 + 800) + *(double *)(param_1 + 0x2d8));
        param_1[0x2c6] = 0;
        param_1[0x2c7] = 0;
        param_1[0x2ca] = 0;
        param_1[0x2cb] = 0;
        param_1[0x2c8] = 0;
        param_1[0x2c9] = 0;
        param_1[0x2cc] = 0;
        param_1[0x2cd] = 0;
        param_1[0x302] = 0x33333333;
        param_1[0x303] = 0x3fe33333;
        param_1[0x300] = -0x66666666;
        param_1[0x301] = 0x3fd99999;
        param_1[0x2e2] = 0;
        param_1[0x2e3] = 0;
        param_1[0x2e0] = 0;
        param_1[0x2e1] = 0;
        param_1[0x2de] = 0;
        param_1[0x2df] = 0;
        param_1[0x2dc] = 0;
        param_1[0x2dd] = 0;
        param_1[0x2ea] = 0;
        param_1[0x2eb] = 0;
        param_1[0x2e8] = 0;
        param_1[0x2e9] = 0;
        param_1[0x2e6] = 0;
        param_1[0x2e7] = 0;
        param_1[0x2e4] = 0;
        param_1[0x2e5] = 0;
      }
      else {
        dVar47 = *(double *)(param_1 + 0x208) * *(double *)(param_1 + 0x66) *
                 *(double *)(param_1 + 0x74) * *(double *)(param_1 + 100);
        local_5b8 = (*(double *)(param_1 + 0x2ac) * 1e-09) / dVar47;
        *(double *)(param_1 + 0x2cc) = local_5b8 * *(double *)(param_1 + 0x226);
        *(double *)(param_1 + 0x2c8) = local_5b8 * *(double *)(param_1 + 0x222);
        *(double *)(param_1 + 0x2c6) = local_5b8 * *(double *)(param_1 + 0x228);
        *(double *)(param_1 + 0x2ca) = local_5b8 * *(double *)(param_1 + 0x224);
        *(double *)(param_1 + 0x344) = dVar45 * 1e-09;
        *(double *)(param_1 + 0x328) = *(double *)(param_1 + 0x2a2) * dVar45;
        *(double *)(param_1 + 0x32a) = *(double *)(param_1 + 0x29e) * dVar45;
        *(double *)(param_1 + 0x32c) = *(double *)(param_1 + 0x2a0) * dVar45;
        *(double *)(param_1 + 0x32e) = *(double *)(param_1 + 0x2a4) * dVar45;
        dVar19 = (double)FUN_0040c850(local_670);
        if (dVar47 * 1e-05 < dVar19) {
          *(double *)(param_1 + 0x300) = local_680 / local_670;
          *(double *)(param_1 + 0x2dc) =
               (*(double *)(param_1 + 0x288) -
               *(double *)(param_1 + 0x300) *
               (*(double *)(param_1 + 0x288) +
               -(*(double *)(param_1 + 0x282) + *(double *)(param_1 + 0x288) +
                *(double *)(param_1 + 0x28e)))) / local_670;
          *(double *)(param_1 + 0x2de) =
               (*(double *)(param_1 + 0x284) -
               *(double *)(param_1 + 0x300) *
               (*(double *)(param_1 + 0x284) +
               -(*(double *)(param_1 + 0x27e) + *(double *)(param_1 + 0x284) +
                *(double *)(param_1 + 0x28a)))) / local_670;
          *(double *)(param_1 + 0x2e2) =
               (*(double *)(param_1 + 0x286) -
               *(double *)(param_1 + 0x300) *
               (*(double *)(param_1 + 0x286) +
               -(*(double *)(param_1 + 0x280) + *(double *)(param_1 + 0x286) +
                *(double *)(param_1 + 0x28c)))) / local_670;
          *(double *)(param_1 + 0x2e0) =
               -(*(double *)(param_1 + 0x2dc) + *(double *)(param_1 + 0x2de) +
                *(double *)(param_1 + 0x2e2));
        }
        else {
          if (0.5 < *(double *)(param_1 + 0x162) || *(double *)(param_1 + 0x162) == 0.5) {
            if (*(double *)(param_1 + 0x162) <= 0.5) {
              param_1[0x300] = 0;
              param_1[0x301] = 0x3fe00000;
            }
            else {
              param_1[0x300] = 0;
              param_1[0x301] = 0;
            }
          }
          else {
            param_1[0x300] = -0x66666666;
            param_1[0x301] = 0x3fd99999;
          }
          param_1[0x2e2] = 0;
          param_1[0x2e3] = 0;
          param_1[0x2e0] = 0;
          param_1[0x2e1] = 0;
          param_1[0x2de] = 0;
          param_1[0x2df] = 0;
          param_1[0x2dc] = 0;
          param_1[0x2dd] = 0;
        }
        *(double *)(param_1 + 0x302) = 1.0 - *(double *)(param_1 + 0x300);
        *(ulonglong *)(param_1 + 0x2e4) = *(ulonglong *)(param_1 + 0x2dc) ^ 0x8000000000000000;
        *(ulonglong *)(param_1 + 0x2e6) = *(ulonglong *)(param_1 + 0x2de) ^ 0x8000000000000000;
        *(ulonglong *)(param_1 + 0x2ea) = *(ulonglong *)(param_1 + 0x2e2) ^ 0x8000000000000000;
        *(double *)(param_1 + 0x2e8) =
             -(*(double *)(param_1 + 0x2e4) + *(double *)(param_1 + 0x2e6) +
              *(double *)(param_1 + 0x2ea));
        if (param_1[0x53] == 3) {
          *(double *)(param_1 + 0x2da) = (dVar40 + dVar44 + *(double *)(param_1 + 0x148)) * dVar45;
          *(double *)(param_1 + 0x2ce) = -dVar40 * dVar45;
          *(double *)(param_1 + 0x2d0) = -dVar44 * dVar45;
          *(double *)(param_1 + 0x2d2) = -*(double *)(param_1 + 0x148) * dVar45;
          *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_1 + 0x2ce);
          *(undefined8 *)(param_1 + 0x2d6) = *(undefined8 *)(param_1 + 0x2d0);
          *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x2d2);
          param_1[0x31e] = 0;
          param_1[799] = 0;
          param_1[0x312] = 0;
          param_1[0x313] = 0;
          param_1[0x306] = 0;
          param_1[0x307] = 0;
          param_1[0x2c2] = 0;
          param_1[0x2c3] = 0;
          param_1[0x2c0] = 0;
          param_1[0x2c1] = 0;
          param_1[0x2be] = 0;
          param_1[0x2bf] = 0;
          param_1[0x2c4] = 0;
          param_1[0x2c5] = 0;
          local_690 = dVar39 + dVar37 + *(double *)(param_1 + 0x148) * local_538;
          local_678 = 0.0;
          local_698 = -(*(double *)(param_1 + 0x148) * local_538);
          local_6c8 = local_690 + local_698 + -dVar39;
        }
        else {
          *(double *)(param_1 + 0x2be) = (dVar40 + dVar44 + *(double *)(param_1 + 0x148)) * dVar45;
          *(double *)(param_1 + 0x2c2) = -dVar40 * dVar45;
          *(double *)(param_1 + 0x2c0) = -dVar44 * dVar45;
          *(double *)(param_1 + 0x2c4) = -*(double *)(param_1 + 0x148) * dVar45;
          *(undefined8 *)(param_1 + 0x306) = *(undefined8 *)(param_1 + 0x2c2);
          *(undefined8 *)(param_1 + 0x312) = *(undefined8 *)(param_1 + 0x2c0);
          *(undefined8 *)(param_1 + 0x31e) = *(undefined8 *)(param_1 + 0x2c4);
          param_1[0x2d8] = 0;
          param_1[0x2d9] = 0;
          param_1[0x2d6] = 0;
          param_1[0x2d7] = 0;
          param_1[0x2d4] = 0;
          param_1[0x2d5] = 0;
          local_678 = dVar39 + dVar37 + *(double *)(param_1 + 0x148) * local_550;
          local_698 = -(*(double *)(param_1 + 0x148) * local_550);
          local_6c8 = local_678 + local_698 + -dVar39;
        }
        local_680 = -dVar39;
        local_6c8 = -local_6c8;
        *(double *)(param_1 + 0x304) = (*(double *)(param_1 + 0x2aa) + dVar40) * dVar45;
        param_1[0x310] = 0;
        param_1[0x311] = 0;
        param_1[0x308] = 0;
        param_1[0x309] = 0;
        *(double *)(param_1 + 0x316) = (*(double *)(param_1 + 0x2a8) + dVar44) * dVar45;
        if (param_1[0x4b] == 0) {
          *(double *)(param_1 + 0x30a) =
               -(*(double *)(param_1 + 0x306) + *(double *)(param_1 + 0x304) +
                *(double *)(param_1 + 0x2d4));
          *(double *)(param_1 + 0x318) =
               -(*(double *)(param_1 + 0x312) + *(double *)(param_1 + 0x316) +
                *(double *)(param_1 + 0x2d6));
          *(double *)(param_1 + 0x31c) = -*(double *)(param_1 + 0x2aa) * dVar45;
          *(double *)(param_1 + 800) = -*(double *)(param_1 + 0x2a8) * dVar45;
          param_1[0x336] = 0;
          param_1[0x337] = 0;
          param_1[0x338] = 0;
          param_1[0x339] = 0;
        }
        else {
          param_1[800] = 0;
          param_1[0x321] = 0;
          param_1[0x31c] = 0;
          param_1[0x31d] = 0;
          param_1[0x318] = 0;
          param_1[0x319] = 0;
          param_1[0x30a] = 0;
          param_1[0x30b] = 0;
          *(double *)(param_1 + 0x336) = -*(double *)(param_1 + 0x2aa) * dVar45;
          *(double *)(param_1 + 0x338) = -*(double *)(param_1 + 0x2a8) * dVar45;
        }
        *(double *)(param_1 + 0x326) =
             -(*(double *)(param_1 + 0x31c) + *(double *)(param_1 + 0x31e) +
               *(double *)(param_1 + 800) + *(double *)(param_1 + 0x2d8));
      }
      if (0 < param_1[0x54]) {
        uVar53 = 0;
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x1a,
                     *(double *)(param_1 + 0x2ac) * 1e-09,0);
        if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
          uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x1a,0);
          uVar53 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0x1a,uVar3,0);
        }
        FUN_00dafac0(param_2,param_3,local_c8,local_c0,0,
                     CONCAT44(uVar53,*(ushort *)(param_1 + 0x4a) + 0x1a),0,1);
      }
      if (!bVar1) {
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xe,local_678,0);
        dVar39 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x16,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x10,local_680 - dVar39,0);
        dVar39 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x14,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x1d,local_6c8 - dVar39,0);
        if (param_1[0x53] == 3) {
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x12,local_690,0);
        }
        if (param_1[0x4b] == 0) {
          dVar39 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x16,0);
          dVar37 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x14,0);
          uVar53 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xc,
                       local_698 + dVar39 + dVar37,0);
        }
        else {
          uVar53 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xc,local_698,0);
        }
        if (!bVar5) goto LAB_00e67645;
        if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
          uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xc,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0xc,uVar3,0);
          uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xe,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0xe,uVar3,0);
          uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x10,0);
          uVar53 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0x10,uVar3,0);
          if (param_1[0x53] == 3) {
            uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x12,0);
            uVar53 = 0;
            FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0x12,uVar3,0);
          }
          if (0 < param_1[0x4b]) {
            uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x14,0);
            FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0x14,uVar3,0);
            uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x16,0);
            uVar53 = 0;
            FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0x16,uVar3,0);
          }
        }
        uVar3 = CONCAT44(uVar53,*(ushort *)(param_1 + 0x4a) + 0xc);
        FUN_00dafac0(param_2,param_3,local_c8,local_c0,0,uVar3,0,1);
        uVar3 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),*(ushort *)(param_1 + 0x4a) + 0xe);
        FUN_00dafac0(param_2,param_3,local_c8,local_c0,0,uVar3,0,1);
        uVar3 = CONCAT44((int)((ulonglong)uVar3 >> 0x20),*(ushort *)(param_1 + 0x4a) + 0x10);
        FUN_00dafac0(param_2,param_3,local_c8,local_c0,0,uVar3,0,1);
        uVar53 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if (param_1[0x53] == 3) {
          uVar3 = CONCAT44(uVar53,*(ushort *)(param_1 + 0x4a) + 0x12);
          FUN_00dafac0(param_2,param_3,local_c8,local_c0,0,uVar3,0,1);
          uVar53 = (undefined4)((ulonglong)uVar3 >> 0x20);
        }
        if (0 < param_1[0x4b]) {
          FUN_00dafac0(param_2,param_3,local_c8,local_c0,0,
                       CONCAT44(uVar53,*(ushort *)(param_1 + 0x4a) + 0x14),0,1);
          FUN_00dafac0(param_2,param_3,local_c8,local_c0,0,*(ushort *)(param_1 + 0x4a) + 0x16,0,1);
        }
      }
      dVar39 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xf,0);
      dVar37 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xd,0);
      dVar40 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x11,0);
      *(double *)(param_1 + 0x34e) =
           (dVar39 - *(double *)(param_1 + 0x2be) * local_550) +
           *(double *)(param_1 + 0x2c2) * local_610 + *(double *)(param_1 + 0x2c0) * local_650;
      *(double *)(param_1 + 0x352) =
           ((((dVar40 - *(double *)(param_1 + 0x306) * local_550) -
             *(double *)(param_1 + 0x2d4) * local_538) +
            (*(double *)(param_1 + 0x304) + *(double *)(param_1 + 0x336)) * local_610) -
           *(double *)(param_1 + 0x336) * local_510) + *(double *)(param_1 + 0x308) * local_650;
      *(double *)(param_1 + 0x350) =
           ((dVar37 - *(double *)(param_1 + 0x31e) * local_550) -
           *(double *)(param_1 + 0x2d8) * local_538) + *(double *)(param_1 + 0x31c) * local_610 +
           *(double *)(param_1 + 800) * local_650;
      if (param_1[0x53] == 3) {
        dVar39 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x13,0);
        *(double *)(param_1 + 0x35c) =
             (dVar39 + *(double *)(param_1 + 0x2ce) * local_610 +
             *(double *)(param_1 + 0x2d0) * local_650) - *(double *)(param_1 + 0x2da) * local_538;
      }
      else {
        param_1[0x35c] = 0;
        param_1[0x35d] = 0;
      }
      if (0 < param_1[0x4b]) {
        dVar39 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x15,0);
        *(double *)(param_1 + 0x360) = dVar39 + *(double *)(param_1 + 0x338) * local_528;
        dVar39 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x17,0);
        *(double *)(param_1 + 0x35e) = dVar39 + *(double *)(param_1 + 0x336) * local_510;
      }
      if (0 < param_1[0x54]) {
        local_5b8 = (*(double *)(param_1 + 0x2cc) * local_550 -
                    *(double *)(param_1 + 0x2c8) * local_610) -
                    *(double *)(param_1 + 0x2c6) * local_650;
        *(double *)(param_1 + 0x34e) = *(double *)(param_1 + 0x34e) + local_5b8;
        local_d0 = *(double *)(param_1 + 0x2ac) * *(double *)(param_1 + 0x2a6);
        *(double *)(param_1 + 0x352) =
             *(double *)(param_1 + 0x352) -
             (*(double *)(param_1 + 0x300) * local_5b8 +
             local_d0 *
             ((*(double *)(param_1 + 0x2de) * local_550 - *(double *)(param_1 + 0x2dc) * local_610)
             - *(double *)(param_1 + 0x2e2) * local_650));
        dVar39 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x1b,0);
        *(double *)(param_1 + 0x398) =
             dVar39 - *(double *)(param_1 + 0x344) * *(double *)(param_1 + 0x2ac);
        dVar39 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x19,0);
        *(double *)(param_1 + 0x396) =
             (dVar39 - ((*(double *)(param_1 + 0x328) * local_550 -
                        *(double *)(param_1 + 0x32a) * local_610) -
                       *(double *)(param_1 + 0x32c) * local_650)) + local_5b8;
      }
      if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
        uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xd,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0xd,uVar3,0);
        uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xf,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0xf,uVar3,0);
        uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x11,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0x11,uVar3,0);
        if (param_1[0x53] == 3) {
          uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x13,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0x13,uVar3,0);
        }
        if (0 < param_1[0x4b]) {
          uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x15,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0x15,uVar3,0);
          uVar3 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0x17,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0x17,uVar3,0);
        }
      }
      goto LAB_00e681cf;
    }
  }
LAB_00e67645:
  param_1[0x352] = 0;
  param_1[0x353] = 0;
  param_1[0x350] = 0;
  param_1[0x351] = 0;
  param_1[0x34e] = 0;
  param_1[0x34f] = 0;
  param_1[0x360] = 0;
  param_1[0x361] = 0;
  param_1[0x35e] = 0;
  param_1[0x35f] = 0;
  param_1[0x398] = 0;
  param_1[0x399] = 0;
  param_1[0x396] = 0;
  param_1[0x397] = 0;
  param_1[0x30a] = 0;
  param_1[0x30b] = 0;
  param_1[0x308] = 0;
  param_1[0x309] = 0;
  param_1[0x304] = 0;
  param_1[0x305] = 0;
  param_1[0x306] = 0;
  param_1[0x307] = 0;
  param_1[0x318] = 0;
  param_1[0x319] = 0;
  param_1[0x316] = 0;
  param_1[0x317] = 0;
  param_1[0x310] = 0;
  param_1[0x311] = 0;
  param_1[0x312] = 0;
  param_1[0x313] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c0] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = 0;
  param_1[0x2be] = 0;
  param_1[0x2bf] = 0;
  param_1[0x326] = 0;
  param_1[0x327] = 0;
  param_1[800] = 0;
  param_1[0x321] = 0;
  param_1[0x31e] = 0;
  param_1[799] = 0;
  param_1[0x31c] = 0;
  param_1[0x31d] = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d3] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2da] = 0;
  param_1[0x2db] = 0;
  param_1[0x35c] = 0;
  param_1[0x35d] = 0;
  param_1[0x2d8] = 0;
  param_1[0x2d9] = 0;
  param_1[0x2d6] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  param_1[0x338] = 0;
  param_1[0x339] = 0;
  param_1[0x336] = 0;
  param_1[0x337] = 0;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  param_1[0x32c] = 0;
  param_1[0x32d] = 0;
  param_1[0x32a] = 0;
  param_1[0x32b] = 0;
  param_1[0x328] = 0;
  param_1[0x329] = 0;
  param_1[0x344] = 0;
  param_1[0x345] = 0;
  param_1[0x2c6] = 0;
  param_1[0x2c7] = 0;
  param_1[0x2ca] = 0;
  param_1[0x2cb] = 0;
  param_1[0x2c8] = 0;
  param_1[0x2c9] = 0;
  param_1[0x2cc] = 0;
  param_1[0x2cd] = 0;
  if (param_1[1] < 1) {
    uVar3 = 0x3fe3333333333333;
  }
  else {
    uVar3 = 0x3fd999999999999a;
  }
  *(undefined8 *)(param_1 + 0x300) = uVar3;
  *(double *)(param_1 + 0x302) = 1.0 - *(double *)(param_1 + 0x300);
  param_1[0x2e2] = 0;
  param_1[0x2e3] = 0;
  param_1[0x2e0] = 0;
  param_1[0x2e1] = 0;
  param_1[0x2de] = 0;
  param_1[0x2df] = 0;
  param_1[0x2dc] = 0;
  param_1[0x2dd] = 0;
  param_1[0x2ea] = 0;
  param_1[0x2eb] = 0;
  param_1[0x2e8] = 0;
  param_1[0x2e9] = 0;
  param_1[0x2e6] = 0;
  param_1[0x2e7] = 0;
  param_1[0x2e4] = 0;
  param_1[0x2e5] = 0;
  if (param_1[0x54] < 1) {
    param_1[0x2a6] = 0;
    param_1[0x2a7] = 0;
  }
  else {
    *(double *)(param_1 + 0x2a6) =
         (*(double *)(param_1 + 0x220) /
         (*(double *)(param_1 + 0x208) * *(double *)(param_1 + 0x66) * *(double *)(param_1 + 0x74) *
         *(double *)(param_1 + 100))) * 1e-09;
  }
LAB_00e681cf:
  if (param_1[1] < 0) {
    *(ulonglong *)(param_1 + 0x39c) = *(ulonglong *)(param_1 + 0x22) ^ 0x8000000000000000;
    *(ulonglong *)(param_1 + 0x39a) = *(ulonglong *)(param_1 + 0x26) ^ 0x8000000000000000;
    param_1[0x2f4] = 0;
    param_1[0x2f5] = 0;
    *(double *)(param_1 + 0x2f6) = -(*(double *)(param_1 + 0x39c) + *(double *)(param_1 + 0x39a));
    *(double *)(param_1 + 0x354) =
         (double)-*param_1 *
         (local_450 + *(double *)(param_1 + 0x24) * local_658 +
          *(double *)(param_1 + 0x39c) * local_5f8 + *(double *)(param_1 + 0x39a) * local_610);
    *(double *)(param_1 + 0x34c) =
         (double)*param_1 *
         (((*(double *)(param_1 + 0x216) + *(double *)(param_1 + 0x246) +
           (*(double *)(param_1 + 0x21c) + *(double *)(param_1 + 0x248)) * local_658) -
          (*(double *)(param_1 + 0x21a) + *(double *)(param_1 + 0x24a)) * local_5f8) -
         (*(double *)(param_1 + 0x218) + *(double *)(param_1 + 0x24c)) * local_610);
    *(double *)(param_1 + 0x34a) =
         (double)*param_1 *
         (((*(double *)(param_1 + 0x23e) - *(double *)(param_1 + 0x240) * local_658) -
          *(double *)(param_1 + 0x242) * local_668) - *(double *)(param_1 + 0x244) * local_650);
    *(ulonglong *)(param_1 + 0x322) = *(ulonglong *)(param_1 + 0x21c) ^ 0x8000000000000000;
    *(double *)(param_1 + 0x324) =
         *(double *)(param_1 + 0x21c) + *(double *)(param_1 + 0x21a) + *(double *)(param_1 + 0x218);
    param_1[0x30c] = 0;
    param_1[0x30d] = 0;
    param_1[0x33a] = 0;
    param_1[0x33b] = 0;
    param_1[0x30e] = 0;
    param_1[0x30f] = 0;
    param_1[0x330] = 0;
    param_1[0x331] = 0;
    *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_1 + 0x21a);
    *(undefined8 *)(param_1 + 0x334) = *(undefined8 *)(param_1 + 0x21c);
    *(undefined8 *)(param_1 + 0x31a) = *(undefined8 *)(param_1 + 0x218);
    *(double *)(param_1 + 0x332) =
         -(*(double *)(param_1 + 0x314) + *(double *)(param_1 + 0x334) +
          *(double *)(param_1 + 0x31a));
    if (param_1[0x56] < 1) {
      param_1[0x364] = 0;
      param_1[0x365] = 0;
      param_1[0x2f2] = 0;
      param_1[0x2f3] = 0;
      param_1[0x2f0] = 0;
      param_1[0x2f1] = 0;
      param_1[0x2ee] = 0;
      param_1[0x2ef] = 0;
      param_1[0x2ec] = 0;
      param_1[0x2ed] = 0;
      param_1[0x366] = 0;
      param_1[0x367] = 0;
      param_1[0x2fe] = 0;
      param_1[0x2ff] = 0;
      param_1[0x2fc] = 0;
      param_1[0x2fd] = 0;
      param_1[0x2fa] = 0;
      param_1[0x2fb] = 0;
      param_1[0x2f8] = 0;
      param_1[0x2f9] = 0;
    }
    else {
      *(double *)(param_1 + 0x2ec) = *(double *)(param_1 + 0x260) + *(double *)(param_1 + 600);
      *(undefined8 *)(param_1 + 0x2ee) = *(undefined8 *)(param_1 + 0x27c);
      *(double *)(param_1 + 0x2f0) = *(double *)(param_1 + 0x262) + *(double *)(param_1 + 0x25a);
      *(undefined8 *)(param_1 + 0x2f2) = *(undefined8 *)(param_1 + 0x25c);
      *(double *)(param_1 + 0x364) =
           (double)*param_1 *
           (((((*(double *)(param_1 + 0x25e) + *(double *)(param_1 + 0x256)) -
              *(double *)(param_1 + 0x260) * local_668) - *(double *)(param_1 + 600) * local_5f8) +
            *(double *)(param_1 + 0x25a) * local_658) - *(double *)(param_1 + 0x25c) * local_610);
      *(double *)(param_1 + 0x2f8) = *(double *)(param_1 + 0x266) + *(double *)(param_1 + 0x250);
      *(double *)(param_1 + 0x2fa) = *(double *)(param_1 + 0x268) + *(double *)(param_1 + 0x27a);
      *(undefined8 *)(param_1 + 0x2fc) = *(undefined8 *)(param_1 + 0x252);
      *(undefined8 *)(param_1 + 0x2fe) = *(undefined8 *)(param_1 + 0x254);
      *(double *)(param_1 + 0x366) =
           (double)*param_1 *
           ((((*(double *)(param_1 + 0x264) + *(double *)(param_1 + 0x24e)) -
             (*(double *)(param_1 + 0x266) + *(double *)(param_1 + 0x250)) * local_5f8) +
            *(double *)(param_1 + 0x252) * local_658) - *(double *)(param_1 + 0x254) * local_610);
    }
    if (param_1[0x57] < 1) {
      param_1[0x362] = 0;
      param_1[0x363] = 0;
      param_1[0x342] = 0;
      param_1[0x343] = 0;
      param_1[0x33e] = 0;
      param_1[0x33f] = 0;
      param_1[0x33c] = 0;
      param_1[0x33d] = 0;
      param_1[0x340] = 0;
      param_1[0x341] = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x26e);
      *(undefined8 *)(param_1 + 0x33c) = *(undefined8 *)(param_1 + 0x274);
      *(undefined8 *)(param_1 + 0x33e) = *(undefined8 *)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x342) = *(undefined8 *)(param_1 + 0x272);
      *(double *)(param_1 + 0x362) =
           (double)*param_1 *
           (((*(double *)(param_1 + 0x26a) - *(double *)(param_1 + 0x26e) * local_5f8) +
            *(double *)(param_1 + 0x270) * local_658) - *(double *)(param_1 + 0x272) * local_610);
    }
    if ((param_1[0x56] == 0) && (param_1[0x57] == 0)) {
      param_1[0x394] = 0;
      param_1[0x395] = 0;
      param_1[700] = 0;
      param_1[0x2bd] = 0;
      param_1[0x2ba] = 0;
      param_1[699] = 0;
      param_1[0x2b8] = 0;
      param_1[0x2b9] = 0;
      param_1[0x2b6] = 0;
      param_1[0x2b7] = 0;
    }
    else {
      *(double *)(param_1 + 0x2b6) =
           *(double *)(param_1 + 0x2ec) + *(double *)(param_1 + 0x2f8) +
           *(double *)(param_1 + 0x340);
      *(double *)(param_1 + 0x2b8) =
           *(double *)(param_1 + 0x2ee) + *(double *)(param_1 + 0x2fa) +
           *(double *)(param_1 + 0x33c);
      *(double *)(param_1 + 0x2ba) =
           *(double *)(param_1 + 0x2f0) + *(double *)(param_1 + 0x2fc) +
           *(double *)(param_1 + 0x33e);
      *(double *)(param_1 + 700) =
           *(double *)(param_1 + 0x2f2) + *(double *)(param_1 + 0x2fe) +
           *(double *)(param_1 + 0x342);
      *(double *)(param_1 + 0x394) =
           *(double *)(param_1 + 0x364) + *(double *)(param_1 + 0x366) +
           *(double *)(param_1 + 0x362);
    }
    if (param_1[0x53] == 2) {
      local_5b8 = local_660 - local_668;
    }
    else if (param_1[0x53] == 3) {
      local_5b8 = local_648 - local_668;
    }
    if (param_1[0x53] < 2) {
      param_1[0x380] = 0;
      param_1[0x381] = 0;
      param_1[900] = 0;
      param_1[0x385] = 0;
      param_1[0x382] = 0;
      param_1[899] = 0;
      param_1[0x37e] = 0;
      param_1[0x37f] = 0;
      param_1[0x37c] = 0;
      param_1[0x37d] = 0;
      param_1[0x356] = 0;
      param_1[0x357] = 0;
    }
    else {
      *(double *)(param_1 + 0x37e) = *(double *)(param_1 + 0x228) * local_5b8;
      *(double *)(param_1 + 0x382) = *(double *)(param_1 + 0x226) * local_5b8;
      *(double *)(param_1 + 900) = *(double *)(param_1 + 0x222) * local_5b8;
      *(double *)(param_1 + 0x380) = *(double *)(param_1 + 0x224) * local_5b8;
      *(double *)(param_1 + 0x356) =
           -((*(double *)(param_1 + 0x226) * local_5f8 - *(double *)(param_1 + 0x228) * local_658) +
            *(double *)(param_1 + 0x224) * local_610);
      *(double *)(param_1 + 0x382) = *(double *)(param_1 + 0x382) - *(double *)(param_1 + 0x220);
      *(undefined8 *)(param_1 + 0x37c) = *(undefined8 *)(param_1 + 0x220);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x39c) = *(undefined8 *)(param_1 + 0x22);
    *(undefined8 *)(param_1 + 0x39a) = *(undefined8 *)(param_1 + 0x26);
    *(double *)(param_1 + 0x2f4) = *(double *)(param_1 + 0x39c) + *(double *)(param_1 + 0x39a);
    param_1[0x2f6] = 0;
    param_1[0x2f7] = 0;
    *(double *)(param_1 + 0x354) =
         (double)*param_1 *
         (((local_450 - *(double *)(param_1 + 0x24) * local_658) -
          *(double *)(param_1 + 0x39c) * local_668) - *(double *)(param_1 + 0x39a) * local_650);
    *(double *)(param_1 + 0x34a) =
         (double)*param_1 *
         ((((*(double *)(param_1 + 0x216) + *(double *)(param_1 + 0x23e)) -
           (*(double *)(param_1 + 0x21c) + *(double *)(param_1 + 0x240)) * local_658) -
          (*(double *)(param_1 + 0x21a) + *(double *)(param_1 + 0x242)) * local_668) -
         (*(double *)(param_1 + 0x218) + *(double *)(param_1 + 0x244)) * local_650);
    *(double *)(param_1 + 0x34c) =
         (double)*param_1 *
         (((*(double *)(param_1 + 0x246) + *(double *)(param_1 + 0x248) * local_658) -
          *(double *)(param_1 + 0x24a) * local_5f8) - *(double *)(param_1 + 0x24c) * local_610);
    *(ulonglong *)(param_1 + 0x324) = *(ulonglong *)(param_1 + 0x21c) ^ 0x8000000000000000;
    *(double *)(param_1 + 0x322) =
         *(double *)(param_1 + 0x21c) + *(double *)(param_1 + 0x21a) + *(double *)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x30c) = *(undefined8 *)(param_1 + 0x21a);
    *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)(param_1 + 0x21c);
    *(undefined8 *)(param_1 + 0x30e) = *(undefined8 *)(param_1 + 0x218);
    *(double *)(param_1 + 0x33a) =
         -(*(double *)(param_1 + 0x30c) + *(double *)(param_1 + 0x330) +
          *(double *)(param_1 + 0x30e));
    param_1[0x314] = 0;
    param_1[0x315] = 0;
    param_1[0x332] = 0;
    param_1[0x333] = 0;
    param_1[0x31a] = 0;
    param_1[0x31b] = 0;
    param_1[0x334] = 0;
    param_1[0x335] = 0;
    if (param_1[0x56] < 1) {
      param_1[0x364] = 0;
      param_1[0x365] = 0;
      param_1[0x2f2] = 0;
      param_1[0x2f3] = 0;
      param_1[0x2f0] = 0;
      param_1[0x2f1] = 0;
      param_1[0x2ee] = 0;
      param_1[0x2ef] = 0;
      param_1[0x2ec] = 0;
      param_1[0x2ed] = 0;
      param_1[0x366] = 0;
      param_1[0x367] = 0;
      param_1[0x2fe] = 0;
      param_1[0x2ff] = 0;
      param_1[0x2fc] = 0;
      param_1[0x2fd] = 0;
      param_1[0x2fa] = 0;
      param_1[0x2fb] = 0;
      param_1[0x2f8] = 0;
      param_1[0x2f9] = 0;
    }
    else {
      *(double *)(param_1 + 0x2ec) = *(double *)(param_1 + 0x260) + *(double *)(param_1 + 0x250);
      *(undefined8 *)(param_1 + 0x2ee) = *(undefined8 *)(param_1 + 0x252);
      *(double *)(param_1 + 0x2f0) = *(double *)(param_1 + 0x262) + *(double *)(param_1 + 0x27a);
      *(undefined8 *)(param_1 + 0x2f2) = *(undefined8 *)(param_1 + 0x254);
      *(double *)(param_1 + 0x364) =
           (double)*param_1 *
           ((((*(double *)(param_1 + 0x25e) + *(double *)(param_1 + 0x24e)) -
             *(double *)(param_1 + 0x2ec) * local_668) - *(double *)(param_1 + 0x252) * local_658) -
           *(double *)(param_1 + 0x254) * local_650);
      *(double *)(param_1 + 0x2f8) = *(double *)(param_1 + 0x266) + *(double *)(param_1 + 600);
      *(double *)(param_1 + 0x2fa) = *(double *)(param_1 + 0x268) + *(double *)(param_1 + 0x25a);
      *(undefined8 *)(param_1 + 0x2fc) = *(undefined8 *)(param_1 + 0x27c);
      *(undefined8 *)(param_1 + 0x2fe) = *(undefined8 *)(param_1 + 0x25c);
      *(double *)(param_1 + 0x366) =
           (double)*param_1 *
           (((((*(double *)(param_1 + 0x264) + *(double *)(param_1 + 0x256)) -
              *(double *)(param_1 + 0x266) * local_5f8) - *(double *)(param_1 + 600) * local_668) -
            *(double *)(param_1 + 0x25a) * local_658) - *(double *)(param_1 + 0x25c) * local_650);
    }
    if (param_1[0x57] < 1) {
      param_1[0x362] = 0;
      param_1[0x363] = 0;
      param_1[0x342] = 0;
      param_1[0x343] = 0;
      param_1[0x33e] = 0;
      param_1[0x33f] = 0;
      param_1[0x33c] = 0;
      param_1[0x33d] = 0;
      param_1[0x340] = 0;
      param_1[0x341] = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x340) = *(undefined8 *)(param_1 + 0x26e);
      *(undefined8 *)(param_1 + 0x33c) = *(undefined8 *)(param_1 + 0x270);
      *(undefined8 *)(param_1 + 0x33e) = *(undefined8 *)(param_1 + 0x274);
      *(undefined8 *)(param_1 + 0x342) = *(undefined8 *)(param_1 + 0x272);
      *(double *)(param_1 + 0x362) =
           (double)*param_1 *
           (((*(double *)(param_1 + 0x26a) - *(double *)(param_1 + 0x26e) * local_668) -
            *(double *)(param_1 + 0x270) * local_658) - *(double *)(param_1 + 0x272) * local_650);
    }
    if ((param_1[0x56] == 0) && (param_1[0x57] == 0)) {
      param_1[0x394] = 0;
      param_1[0x395] = 0;
      param_1[700] = 0;
      param_1[0x2bd] = 0;
      param_1[0x2ba] = 0;
      param_1[699] = 0;
      param_1[0x2b8] = 0;
      param_1[0x2b9] = 0;
      param_1[0x2b6] = 0;
      param_1[0x2b7] = 0;
    }
    else {
      *(double *)(param_1 + 0x2b6) =
           *(double *)(param_1 + 0x2ec) + *(double *)(param_1 + 0x2f8) +
           *(double *)(param_1 + 0x340);
      *(double *)(param_1 + 0x2b8) =
           *(double *)(param_1 + 0x2ee) + *(double *)(param_1 + 0x2fa) +
           *(double *)(param_1 + 0x33c);
      *(double *)(param_1 + 0x2ba) =
           *(double *)(param_1 + 0x2f0) + *(double *)(param_1 + 0x2fc) +
           *(double *)(param_1 + 0x33e);
      *(double *)(param_1 + 700) =
           *(double *)(param_1 + 0x2f2) + *(double *)(param_1 + 0x2fe) +
           *(double *)(param_1 + 0x342);
      *(double *)(param_1 + 0x394) =
           *(double *)(param_1 + 0x364) + *(double *)(param_1 + 0x366) +
           *(double *)(param_1 + 0x362);
    }
    if (param_1[0x53] == 2) {
      local_5b8 = local_660 - local_668;
    }
    else if (param_1[0x53] == 3) {
      local_5b8 = local_648 - local_668;
    }
    if (param_1[0x53] < 2) {
      param_1[0x380] = 0;
      param_1[0x381] = 0;
      param_1[900] = 0;
      param_1[0x385] = 0;
      param_1[0x382] = 0;
      param_1[899] = 0;
      param_1[0x37e] = 0;
      param_1[0x37f] = 0;
      param_1[0x37c] = 0;
      param_1[0x37d] = 0;
      param_1[0x356] = 0;
      param_1[0x357] = 0;
    }
    else {
      *(double *)(param_1 + 0x37e) = *(double *)(param_1 + 0x222) * local_5b8;
      *(double *)(param_1 + 0x382) = *(double *)(param_1 + 0x226) * local_5b8;
      *(double *)(param_1 + 900) = *(double *)(param_1 + 0x228) * local_5b8;
      *(double *)(param_1 + 0x380) = *(double *)(param_1 + 0x224) * local_5b8;
      *(double *)(param_1 + 0x356) =
           -(*(double *)(param_1 + 0x222) * local_658 + *(double *)(param_1 + 0x226) * local_668 +
            *(double *)(param_1 + 0x224) * local_650);
      *(double *)(param_1 + 0x382) = *(double *)(param_1 + 0x382) - *(double *)(param_1 + 0x220);
      *(undefined8 *)(param_1 + 0x37c) = *(undefined8 *)(param_1 + 0x220);
    }
  }
  if (param_1[0x4f] == 1) {
    *(double *)(param_1 + 0x358) =
         (double)*param_1 *
         (*(double *)(param_1 + 0x22e) * local_658 + *(double *)(param_1 + 0x230) * local_668 +
         *(double *)(param_1 + 0x234) * local_650);
    *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x22a);
    *(undefined8 *)(param_1 + 0x36a) = *(undefined8 *)(param_1 + 0x22e);
    *(undefined8 *)(param_1 + 0x36c) = *(undefined8 *)(param_1 + 0x230);
    *(double *)(param_1 + 0x36e) = *(double *)(param_1 + 0x232) - *(double *)(param_1 + 0x368);
    *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x234);
    *(double *)(param_1 + 0x35a) =
         (double)-*param_1 *
         (*(double *)(param_1 + 0x236) * local_658 + *(double *)(param_1 + 0x238) * local_668 +
         *(double *)(param_1 + 0x23c) * local_650);
    *(undefined8 *)(param_1 + 0x372) = *(undefined8 *)(param_1 + 0x22c);
    *(double *)(param_1 + 0x374) = *(double *)(param_1 + 0x236) - *(double *)(param_1 + 0x372);
    *(undefined8 *)(param_1 + 0x376) = *(undefined8 *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_1 + 0x23a);
    *(undefined8 *)(param_1 + 0x37a) = *(undefined8 *)(param_1 + 0x23c);
  }
  else {
    param_1[0x358] = 0;
    param_1[0x359] = 0;
    param_1[0x370] = 0;
    param_1[0x371] = 0;
    param_1[0x36e] = 0;
    param_1[0x36f] = 0;
    param_1[0x36c] = 0;
    param_1[0x36d] = 0;
    param_1[0x36a] = 0;
    param_1[0x36b] = 0;
    param_1[0x368] = 0;
    param_1[0x369] = 0;
    param_1[0x35a] = 0;
    param_1[0x35b] = 0;
    param_1[0x37a] = 0;
    param_1[0x37b] = 0;
    param_1[0x378] = 0;
    param_1[0x379] = 0;
    param_1[0x376] = 0;
    param_1[0x377] = 0;
    param_1[0x374] = 0;
    param_1[0x375] = 0;
    param_1[0x372] = 0;
    param_1[0x373] = 0;
  }
  if (*param_1 < 1) {
    *(double *)(param_1 + 0x348) =
         -(*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x1a) * local_528);
    *(double *)(param_1 + 0x346) =
         -(*(double *)(param_1 + 0x1c) - *(double *)(param_1 + 0x1e) * local_510);
    *(ulonglong *)(param_1 + 0x34e) = *(ulonglong *)(param_1 + 0x34e) ^ 0x8000000000000000;
    *(ulonglong *)(param_1 + 0x352) = *(ulonglong *)(param_1 + 0x352) ^ 0x8000000000000000;
    *(ulonglong *)(param_1 + 0x350) = *(ulonglong *)(param_1 + 0x350) ^ 0x8000000000000000;
    *(ulonglong *)(param_1 + 0x356) = *(ulonglong *)(param_1 + 0x356) ^ 0x8000000000000000;
    if (0 < param_1[0x54]) {
      *(ulonglong *)(param_1 + 0x398) = *(ulonglong *)(param_1 + 0x398) ^ 0x8000000000000000;
      *(ulonglong *)(param_1 + 0x396) = *(ulonglong *)(param_1 + 0x396) ^ 0x8000000000000000;
    }
    if (0 < param_1[0x4b]) {
      *(ulonglong *)(param_1 + 0x360) = *(ulonglong *)(param_1 + 0x360) ^ 0x8000000000000000;
      *(ulonglong *)(param_1 + 0x35e) = *(ulonglong *)(param_1 + 0x35e) ^ 0x8000000000000000;
    }
    if (param_1[0x53] == 3) {
      *(ulonglong *)(param_1 + 0x35c) = *(ulonglong *)(param_1 + 0x35c) ^ 0x8000000000000000;
    }
  }
  else {
    *(double *)(param_1 + 0x348) =
         *(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x1a) * local_528;
    *(double *)(param_1 + 0x346) =
         *(double *)(param_1 + 0x1c) - *(double *)(param_1 + 0x1e) * local_510;
  }
  return;
}

