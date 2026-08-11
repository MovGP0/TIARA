/* Ghidra address: 00dbfa80 */
/* Ghidra symbol: FUN_00dbfa80 */


void FUN_00dbfa80(int *param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
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
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double unaff_XMM8_Qa;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  undefined4 uVar64;
  char local_3e2;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double local_2f8;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_258;
  double local_248;
  double local_240;
  double local_228;
  double local_218;
  double local_1f8;
  double local_1e0;
  double local_198;
  double local_188;
  double local_180;
  double local_170;
  double local_150;
  double local_148;
  double local_130;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined1 local_b9;
  undefined1 local_b8 [8];
  undefined1 local_b0 [160];
  
  bVar1 = false;
  uVar4 = FUN_016eebb0(param_2,(short)param_1[0x4a],0);
  if ((byte)(param_4 - 8) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (param_4 - 8 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    if (param_4 != 0xc) {
      return;
    }
    iVar2 = param_1[0x4e];
    if (iVar2 == 1) {
LAB_00dccbe7:
      dVar8 = (double)FUN_0040c850(*(double *)(param_1 + 0x1ac) + *(double *)(param_1 + 0x24) +
                                   *(double *)(param_1 + 0x26));
      unaff_XMM8_Qa = (*(double *)(param_1 + 0x6a) * 1.10449808e-22 * dVar8) / 3.0;
    }
    else if (iVar2 == 2) {
LAB_00dccc2e:
      dVar8 = (double)FUN_0040c850(*(double *)(param_1 + 0x54) /
                                   (*(double *)(param_1 + 0x134) * *(double *)(param_1 + 0x134)));
      unaff_XMM8_Qa =
           *(double *)(param_1 + 0x6a) * 5.5224904e-23 * *(double *)(param_1 + 0x62) * dVar8;
    }
    else {
      if (iVar2 == 3) goto LAB_00dccbe7;
      if (iVar2 == 4) goto LAB_00dccc2e;
    }
    iVar2 = param_1[0x4e];
    if (iVar2 != 1) {
      if (iVar2 - 2U < 2) {
        local_3e0 = *(double *)(param_1 + 0xe);
        local_3b8 = *(double *)(param_1 + 0x16);
        if (local_3b8 < 0.0) {
          local_3b8 = -local_3b8;
          local_3e0 = local_3e0 + local_3b8;
        }
        if (local_3e0 < *(double *)(param_1 + 0x60) + 0.1) {
          dVar8 = *(double *)(param_1 + 0x128);
          dVar47 = *(double *)(param_1 + 0x6a);
          uVar4 = FUN_016ed7f0(param_3,0xc);
          dVar9 = (double)FUN_00c42670(uVar4,*(undefined8 *)(param_1 + 0x10c));
          dVar9 = ((dVar8 * 8.62e-05 * dVar47) /
                  (*(double *)(param_1 + 0x136) * *(double *)(param_1 + 0x134) * dVar9 * 4e+36)) *
                  *(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x20);
          uVar4 = FUN_016ed7f0(param_3,0xc);
          dVar8 = (double)FUN_00dbd0a0(*(double *)(param_1 + 0x60) + 0.1,local_3b8,uVar4,
                                       *(undefined8 *)(param_1 + 0x6a),param_1);
          dVar47 = dVar9 + dVar8;
          if (0.0 < dVar47) {
            unaff_XMM8_Qa = unaff_XMM8_Qa + (dVar8 * dVar9) / dVar47;
          }
        }
        else {
          uVar4 = FUN_016ed7f0(param_3,0xc);
          dVar8 = (double)FUN_00dbd0a0(local_3e0,local_3b8,uVar4,*(undefined8 *)(param_1 + 0x6a),
                                       param_1);
          unaff_XMM8_Qa = unaff_XMM8_Qa + dVar8;
        }
        goto LAB_00dccf29;
      }
      if (iVar2 != 4) goto LAB_00dccf29;
    }
    uVar4 = FUN_0040c850(*(undefined8 *)(param_1 + 0x20));
    FUN_00b90620(uVar4,0x380b38fb9daa78e4);
    dVar8 = (double)FUN_0040c2f0();
    dVar8 = (double)FUN_0040af80(*(double *)(param_1 + 0x10a) * dVar8);
    uVar4 = FUN_016ed7f0(param_3,0xc);
    dVar47 = (double)FUN_00c42670(uVar4,*(undefined8 *)(param_1 + 0x10c));
    unaff_XMM8_Qa =
         unaff_XMM8_Qa +
         (*(double *)(param_1 + 0x10e) * dVar8) /
         (dVar47 * *(double *)(param_1 + 0x134) * *(double *)(param_1 + 0x134) *
         *(double *)(param_1 + 0x130));
LAB_00dccf29:
    dVar8 = (double)FUN_0040c760(unaff_XMM8_Qa);
    FUN_016ed220(param_2,(char)param_1[2] + '\x02',dVar8 * *(double *)(param_1 + 0x162),0);
    return;
  }
  if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
    if ((char)param_1[0x1bc] == '\0') {
      uVar4 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xb),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x1b6) = uVar4;
    }
    if (*(char *)((longlong)param_1 + 0x6f1) == '\0') {
      uVar4 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                           *(undefined1 *)((longlong)param_1 + 0xd),(char)param_1[3],0);
      *(undefined8 *)(param_1 + 0x1b8) = uVar4;
    }
    if (*(char *)((longlong)param_1 + 0x6f2) != '\0') {
      return;
    }
    uVar4 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                         *(undefined1 *)((longlong)param_1 + 0xe),(char)param_1[3],0);
    *(undefined8 *)(param_1 + 0x1ba) = uVar4;
    return;
  }
  if ((*(byte *)(param_3 + 0x88) & 0x40) == 0) {
    if ((*(char *)(param_3 + 0x327) == '\0') && ((*(byte *)(param_3 + 0x88) & 0x80) != 0)) {
      dVar8 = (double)FUN_01b08a30(param_3,1);
      dVar8 = *(double *)(param_3 + 0x10) / dVar8;
      uVar7 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0xd,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xd,uVar7,0);
      iVar2 = (int)uVar4;
      local_3d8 = (dVar8 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 0xd) * 8) -
                  dVar8 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 0xd) * 8);
      uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0xc,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xc,uVar4,0);
      local_3e0 = (dVar8 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 0xc) * 8) -
                  dVar8 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 0xc) * 8);
      uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0xb,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xb,uVar4,0);
      local_3b8 = (dVar8 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 0xb) * 8) -
                  dVar8 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 0xb) * 8);
      dVar47 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xd,0);
      dVar9 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xb,0);
      FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xe,dVar47 - dVar9,0);
      local_3c0 = (dVar8 + 1.0) *
                  *(double *)(*(longlong *)(param_3 + 0x1c0) + (longlong)(iVar2 + 9) * 8) -
                  dVar8 * *(double *)(*(longlong *)(param_3 + 0x1c8) + (longlong)(iVar2 + 9) * 8);
      *(undefined8 *)(param_1 + 0x12) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0xd) * 8);
      *(undefined8 *)(param_1 + 0xe) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0xc) * 8);
      *(undefined8 *)(param_1 + 0x16) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0xb) * 8);
      *(undefined8 *)(param_1 + 0x14) =
           *(undefined8 *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(iVar2 + 0xe) * 8);
      goto LAB_00dc0b00;
    }
    if ((*(byte *)(param_3 + 0x88) & 2) != 0) {
      if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
        if (*(char *)((longlong)param_1 + 10) == '\0') {
          iVar2 = FUN_01b05600(param_2,*(undefined1 *)((longlong)param_1 + 0xe));
          iVar3 = FUN_01b05600(param_2,(char)param_1[3]);
          if (iVar2 == iVar3) {
LAB_00dc0229:
            local_3d8 = 0.0;
          }
          else {
            iVar2 = FUN_01b05600(param_2,*(undefined1 *)((longlong)param_1 + 0xe));
            iVar3 = FUN_01b05600(param_2,*(undefined1 *)((longlong)param_1 + 0xb));
            if (iVar2 == iVar3) goto LAB_00dc0229;
            local_3d8 = -0.1;
          }
          local_3e0 = (double)*param_1 * *(double *)(param_1 + 0x32) + 0.1;
          iVar2 = FUN_01b05600(param_2,*(undefined1 *)((longlong)param_1 + 0xb));
          iVar3 = FUN_01b05600(param_2,*(undefined1 *)((longlong)param_1 + 0xd));
          local_3b8 = local_3e0;
          if (iVar2 != iVar3) {
            local_3b8 = 0.1;
          }
          local_3c0 = 0.0;
        }
        else {
          local_3d8 = 0.0;
          local_3e0 = 0.0;
          local_3b8 = 0.0;
          local_3c0 = 0.0;
        }
      }
      else {
        local_3d8 = (double)*param_1 * *(double *)(param_1 + 0x1ba);
        local_3e0 = (double)*param_1 * *(double *)(param_1 + 0x1b8);
        local_3b8 = (double)*param_1 * *(double *)(param_1 + 0x1b6);
        local_3c0 = 0.0;
      }
      goto LAB_00dc0b00;
    }
    if (((*(byte *)(param_3 + 0x88) & 4) != 0) && (*(char *)((longlong)param_1 + 10) != '\0')) {
      local_3d8 = 0.0;
      local_3e0 = 0.0;
      local_3b8 = 0.0;
      local_3c0 = 0.0;
      goto LAB_00dc0b00;
    }
    dVar53 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                  *(undefined1 *)((longlong)param_1 + 0xe),(char)param_1[4],0);
    dVar53 = (double)*param_1 * dVar53;
    dVar43 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                  *(undefined1 *)((longlong)param_1 + 0xd),(char)param_1[4],0);
    dVar43 = (double)*param_1 * dVar43;
    dVar52 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                  *(undefined1 *)((longlong)param_1 + 0xf),(char)param_1[4],0);
    dVar52 = (double)*param_1 * dVar52;
    local_3c0 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[0x4f],0,
                                     0);
    local_3c0 = (double)*param_1 * local_3c0;
    dVar50 = dVar53 - dVar52;
    dVar10 = dVar43 - dVar52;
    dVar8 = *(double *)(param_1 + 0xe);
    dVar47 = *(double *)(param_1 + 0x16);
    dVar27 = dVar53 - *(double *)(param_1 + 0x12);
    dVar48 = dVar50 - *(double *)(param_1 + 0x14);
    dVar9 = *(double *)(param_1 + 0xe);
    dVar29 = dVar52 - *(double *)(param_1 + 0x16);
    if (param_1[1] < 0) {
      dVar11 = ((*(double *)(param_1 + 0x20) -
                (*(double *)(param_1 + 0x1e) - *(double *)(param_1 + 0x26)) * dVar48) -
               *(double *)(param_1 + 0x22) * (dVar10 - (dVar8 - dVar47))) +
               *(double *)(param_1 + 0x24) * dVar29;
    }
    else {
      dVar11 = (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x1e) * dVar48) +
               *(double *)(param_1 + 0x26) * dVar27 + *(double *)(param_1 + 0x22) * (dVar43 - dVar9)
               + *(double *)(param_1 + 0x24) * dVar29;
    }
    dVar28 = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c) +
             *(double *)(param_1 + 0x1e) * dVar48 + *(double *)(param_1 + 0x1a) * dVar27;
    lVar5 = FUN_0040c770(*(undefined8 *)(param_3 + 0x6e0));
    if (lVar5 == 0) {
LAB_00dc0925:
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x60);
      if (*(double *)(param_1 + 0x16) < 0.0) {
        local_3e0 = (double)FUN_00c432f0(dVar10,dVar8 - dVar47,*(undefined8 *)(param_1 + 0x38),
                                         &local_b9);
        local_3b8 = (double)FUN_00c43230(-(dVar43 - local_3e0),
                                         *(ulonglong *)(param_1 + 0x16) ^ 0x8000000000000000,
                                         &local_b9);
        local_3b8 = -local_3b8;
        local_3e0 = local_3e0 + local_3b8;
      }
      else {
        local_3e0 = (double)FUN_00c432f0(dVar43,*(undefined8 *)(param_1 + 0xe),
                                         *(undefined8 *)(param_1 + 0x38),&local_b9);
        local_3b8 = (double)FUN_00c43230(local_3e0 - dVar10,*(undefined8 *)(param_1 + 0x16),
                                         &local_b9);
      }
      if (local_3b8 < 0.0) {
        local_3d8 = (double)FUN_00c42ff0(dVar50,*(undefined8 *)(param_1 + 0x14),0x3f9a7c24465ee362,
                                         *(undefined8 *)(param_1 + 0x34),&local_b9);
        local_3d8 = local_3d8 + local_3b8;
        FUN_016e9f80(param_2,param_3,local_b9,0);
      }
      else {
        local_3d8 = (double)FUN_00c42ff0(dVar53,*(undefined8 *)(param_1 + 0x12),0x3f9a7c24465ee362,
                                         *(undefined8 *)(param_1 + 0x34),&local_b9);
        FUN_016e9f80(param_2,param_3,local_b9,0);
      }
      goto LAB_00dc0b00;
    }
    dVar27 = (double)FUN_0040c850(dVar27);
    uVar4 = FUN_0040c850(dVar53);
    uVar7 = FUN_0040c850(*(undefined8 *)(param_1 + 0x12));
    dVar56 = (double)FUN_00b90620(uVar4,uVar7);
    if (*(double *)(param_3 + 0x3c8) * dVar56 + *(double *)(param_3 + 0x3d0) <= dVar27)
    goto LAB_00dc0925;
    dVar27 = (double)FUN_0040c850(dVar48);
    uVar4 = FUN_0040c850(dVar50);
    uVar7 = FUN_0040c850(*(undefined8 *)(param_1 + 0x14));
    dVar48 = (double)FUN_00b90620(uVar4,uVar7);
    if (*(double *)(param_3 + 0x3c8) * dVar48 + *(double *)(param_3 + 0x3d0) <= dVar27)
    goto LAB_00dc0925;
    dVar9 = (double)FUN_0040c850(dVar43 - dVar9);
    uVar4 = FUN_0040c850(dVar43);
    uVar7 = FUN_0040c850(*(undefined8 *)(param_1 + 0xe));
    dVar27 = (double)FUN_00b90620(uVar4,uVar7);
    if (*(double *)(param_3 + 0x3c8) * dVar27 + *(double *)(param_3 + 0x3d0) <= dVar9)
    goto LAB_00dc0925;
    dVar9 = (double)FUN_0040c850(dVar29);
    uVar4 = FUN_0040c850(dVar52);
    uVar7 = FUN_0040c850(*(undefined8 *)(param_1 + 0x16));
    dVar52 = (double)FUN_00b90620(uVar4,uVar7);
    if (*(double *)(param_3 + 0x3c8) * dVar52 + *(double *)(param_3 + 0x3d0) <= dVar9)
    goto LAB_00dc0925;
    dVar9 = (double)FUN_0040c850(dVar11 - *(double *)(param_1 + 0x20));
    uVar4 = FUN_0040c850(dVar11);
    uVar7 = FUN_0040c850(*(undefined8 *)(param_1 + 0x20));
    dVar52 = (double)FUN_00b90620(uVar4,uVar7);
    if (*(double *)(param_3 + 0x3c8) * dVar52 + *(double *)(param_3 + 0x3d8) <= dVar9)
    goto LAB_00dc0925;
    uVar4 = FUN_0040c850(dVar28);
    uVar7 = FUN_0040c850(*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c));
    dVar52 = (double)FUN_00b90620(uVar4,uVar7);
    dVar9 = *(double *)(param_3 + 0x3d8);
    dVar27 = (double)FUN_0040c850(dVar28 - (*(double *)(param_1 + 0x18) +
                                           *(double *)(param_1 + 0x1c)));
    if (*(double *)(param_3 + 0x3c8) * (dVar52 + dVar9) <= dVar27) goto LAB_00dc0925;
    local_3d8 = *(double *)(param_1 + 0x12);
    local_3d0 = *(double *)(param_1 + 0x14);
    local_3e0 = *(double *)(param_1 + 0xe);
    local_3b8 = *(double *)(param_1 + 0x16);
    FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 7,0);
    local_3c8 = local_3e0 - local_3b8;
    local_3a8 = local_3e0 - local_3d8;
    local_218 = (double)param_1[1] * (*(double *)(param_1 + 0x20) + *(double *)(param_1 + 0x1c));
    if ((param_4 == 6) || ((param_4 == 5 && ((*(byte *)(param_3 + 0x88) & 0x10) != 0)))) {
      bVar1 = true;
      goto LAB_00dcac8e;
    }
  }
  else {
    local_3d8 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0xd,0);
    local_3e0 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0xc,0);
    local_3b8 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 0xb,0);
    local_3c0 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 9,0);
LAB_00dc0b00:
    local_3d0 = local_3d8 - local_3b8;
    local_3c8 = local_3e0 - local_3b8;
    local_3a8 = local_3e0 - local_3d8;
    if ((0.0 < *(double *)(param_1 + 0x15a)) || (0.0 < *(double *)(param_1 + 0x15e))) {
      dVar8 = *(double *)(param_1 + 0x15a) * *(double *)(param_1 + 0x122) +
              *(double *)(param_1 + 0x15e) * *(double *)(param_1 + 0x126);
    }
    else {
      dVar8 = 1e-14;
    }
    dVar47 = *(double *)(param_1 + 0x12e) * *(double *)(param_1 + 0x124);
    if (0.0 < dVar8) {
      if (0.5 <= local_3d8) {
        dVar9 = (double)FUN_0040af80(0.5 / dVar47);
        dVar53 = (dVar8 * dVar9) / dVar47;
        *(double *)(param_1 + 0x1a) = dVar53 + *(double *)(param_3 + 0x430);
        *(double *)(param_1 + 0x18) =
             dVar8 * (dVar9 - 1.0) + dVar53 * (local_3d8 - 0.5) +
             *(double *)(param_3 + 0x430) * local_3d8;
      }
      else {
        dVar9 = (double)FUN_0040af80(local_3d8 / dVar47);
        *(double *)(param_1 + 0x1a) = (dVar8 * dVar9) / dVar47 + *(double *)(param_3 + 0x430);
        *(double *)(param_1 + 0x18) =
             dVar8 * (dVar9 - 1.0) + *(double *)(param_3 + 0x430) * local_3d8;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_3 + 0x430);
      *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x1a) * local_3d8;
    }
    if ((0.0 < *(double *)(param_1 + 0x15c)) || (0.0 < *(double *)(param_1 + 0x160))) {
      dVar8 = *(double *)(param_1 + 0x15c) * *(double *)(param_1 + 0x122) +
              *(double *)(param_1 + 0x160) * *(double *)(param_1 + 0x126);
    }
    else {
      dVar8 = 1e-14;
    }
    if (0.0 < dVar8) {
      if (0.5 <= local_3d0) {
        dVar9 = (double)FUN_0040af80(0.5 / dVar47);
        dVar47 = (dVar8 * dVar9) / dVar47;
        *(double *)(param_1 + 0x1e) = dVar47 + *(double *)(param_3 + 0x430);
        *(double *)(param_1 + 0x1c) =
             dVar8 * (dVar9 - 1.0) + dVar47 * (local_3d0 - 0.5) +
             *(double *)(param_3 + 0x430) * local_3d0;
      }
      else {
        dVar9 = (double)FUN_0040af80(local_3d0 / dVar47);
        *(double *)(param_1 + 0x1e) = (dVar8 * dVar9) / dVar47 + *(double *)(param_3 + 0x430);
        *(double *)(param_1 + 0x1c) =
             dVar8 * (dVar9 - 1.0) + *(double *)(param_3 + 0x430) * local_3d0;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_3 + 0x430);
      *(double *)(param_1 + 0x1c) = *(double *)(param_1 + 0x1e) * local_3d0;
    }
    if (local_3b8 < 0.0) {
      param_1[1] = -1;
      local_388 = -local_3b8;
      local_308 = local_3d0;
      local_2f8 = local_3c8;
    }
    else {
      param_1[1] = 1;
      local_388 = local_3b8;
      local_2f8 = local_3e0;
      local_308 = local_3d8;
    }
    if (*(char *)(param_3 + 0x330) == '\0') {
LAB_00dc0f72:
      if ((param_4 == 5) && ((*(byte *)(param_3 + 0x88) & 0x10) != 0)) goto LAB_00dc0f91;
      local_3e2 = '\0';
    }
    else {
      if (param_4 < 8) {
        bVar6 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (param_4 & 0x1f) & 0xc0U) != 0;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) goto LAB_00dc0f72;
LAB_00dc0f91:
      local_3e2 = '\x01';
    }
    dVar8 = (local_308 - *(double *)(param_1 + 0x150)) - 0.001;
    dVar47 = (double)FUN_0040c760(dVar8 * dVar8 - *(double *)(param_1 + 0x150) * 0.004);
    local_328 = *(double *)(param_1 + 0x150) + (dVar8 + dVar47) * 0.5;
    dVar8 = (dVar8 / dVar47 + 1.0) * 0.5;
    if (local_328 < local_308) {
      local_328 = local_308;
    }
    if (local_328 <= 0.0) {
      local_310 = *(double *)(param_1 + 0x152) - local_328;
      local_320 = -1.0;
      local_338 = (double)FUN_0040c760(local_310);
      local_340 = -0.5 / local_338;
    }
    else {
      local_320 = *(double *)(param_1 + 0x152) / (*(double *)(param_1 + 0x152) + local_328);
      local_310 = *(double *)(param_1 + 0x152) * local_320;
      local_320 = -local_320 * local_320;
      local_338 = *(double *)(param_1 + 0x13e) / (*(double *)(param_1 + 0x152) + local_328 * 0.5);
      local_340 = (local_338 * -0.5 * local_338) / *(double *)(param_1 + 0x13e);
    }
    dVar52 = (*(double *)(param_1 + 0x140) * local_338) / *(double *)(param_1 + 0x13c);
    dVar53 = (*(double *)(param_1 + 0x140) / *(double *)(param_1 + 0x13c)) * local_340;
    local_3b0 = *(double *)(param_1 + 0x134);
    dVar47 = *(double *)(param_1 + 0x12e);
    dVar9 = (double)FUN_0040c760(dVar52);
    dVar43 = *(double *)(param_1 + 0x14e) - *(double *)(param_1 + 0x152);
    local_280 = *(double *)(param_1 + 0xac) * local_328;
    if (local_280 < -0.5) {
      local_1f8 = 1.0 / (local_280 * 8.0 + 3.0);
      local_280 = (local_280 * 3.0 + 1.0) * local_1f8;
      local_1f8 = *(double *)(param_1 + 0xac) * local_1f8 * local_1f8;
    }
    else {
      local_280 = local_280 + 1.0;
      local_1f8 = *(double *)(param_1 + 0xac);
    }
    dVar48 = *(double *)(param_1 + 0x132) * dVar9 * local_280;
    dVar10 = (0.5 / dVar9) * local_280;
    dVar27 = dVar9 * local_1f8;
    dVar50 = *(double *)(param_1 + 0x132);
    local_280 = *(double *)(param_1 + 0xb2) * local_328;
    if (local_280 < -0.5) {
      local_1f8 = 1.0 / (local_280 * 8.0 + 3.0);
      local_280 = (local_280 * 3.0 + 1.0) * local_1f8;
      local_1f8 = *(double *)(param_1 + 0xb2) * local_1f8 * local_1f8;
    }
    else {
      local_280 = local_280 + 1.0;
      local_1f8 = *(double *)(param_1 + 0xb2);
    }
    dVar56 = *(double *)(param_1 + 0x132) * dVar9 * local_280;
    dVar28 = dVar9 * local_1f8;
    dVar29 = *(double *)(param_1 + 0x132);
    dVar11 = (*(double *)(param_1 + 0xaa) * -0.5 * local_3b0) / dVar48;
    if (dVar11 <= -34.0) {
      dVar61 = 1.7139084310000058e-15;
      dVar50 = 0.0;
    }
    else {
      dVar12 = (double)FUN_0040af80(dVar11);
      dVar61 = dVar12 * (dVar12 * 2.0 + 1.0);
      dVar50 = (dVar12 * 4.0 + 1.0) *
               (-dVar11 / dVar48) * dVar12 * dVar50 * (dVar10 * dVar53 + dVar27);
    }
    dVar10 = *(double *)(param_1 + 0xa8);
    dVar27 = *(double *)(param_1 + 0xa8);
    dVar48 = (*(double *)(param_1 + 0xb0) * -0.5 * *(double *)(param_1 + 0x136) * local_3b0) /
             dVar56;
    if (dVar48 <= -34.0) {
      local_1f8 = 1.7139084310000058e-15;
      local_d0 = 0.0;
    }
    else {
      dVar11 = (double)FUN_0040af80(dVar48);
      local_1f8 = dVar11 * (dVar11 * 2.0 + 1.0);
      local_d0 = (dVar11 * 4.0 + 1.0) *
                 (-dVar48 / dVar56) * dVar11 *
                 dVar29 * ((0.5 / dVar9) * local_280 * dVar53 + dVar28);
    }
    dVar9 = *(double *)(param_1 + 0xae);
    dVar48 = *(double *)(param_1 + 0xae);
    dVar29 = *(double *)(param_1 + 0x68);
    dVar11 = (double)FUN_0040c760(*(double *)(param_1 + 0xa6) / local_3b0 + 1.0);
    dVar28 = (*(double *)(param_1 + 0x102) * *(double *)(param_1 + 0x152)) /
             (*(double *)(param_1 + 0x136) + *(double *)(param_1 + 0xa4));
    local_1e0 = *(double *)(param_1 + 0xd4) + *(double *)(param_1 + 0xd6) * local_328;
    if (0.0001 <= local_1e0) {
      local_180 = 1.0;
    }
    else {
      local_180 = 1.0 / (3.0 - local_1e0 * 20000.0);
      local_1e0 = (0.0002 - local_1e0) * local_180;
      local_180 = local_180 * local_180;
    }
    dVar11 = ((((((double)*param_1 * *(double *)(param_1 + 0x32) +
                 *(double *)(param_1 + 0x9c) * (local_338 - *(double *)(param_1 + 0x13c))) -
                *(double *)(param_1 + 0x9e) * local_328) - dVar10 * dVar61 * dVar43) -
              dVar9 * local_1f8 * dVar43) +
              (*(double *)(param_1 + 0xa0) + *(double *)(param_1 + 0xa2) * local_328) * dVar28 +
             *(double *)(param_1 + 0x9c) * (dVar11 - 1.0) * *(double *)(param_1 + 0x13c) +
             (*(double *)(param_1 + 0xfc) + *(double *)(param_1 + 0xfe) / local_3b0 +
             *(double *)(param_1 + 0x100) * local_328) * (dVar29 - 1.0)) -
             local_1e0 * *(double *)(param_1 + 0x142) * local_388;
    *(double *)(param_1 + 0x60) = dVar11;
    dVar9 = (((((*(double *)(param_1 + 0x9c) * local_340 - *(double *)(param_1 + 0x9e)) -
               dVar27 * dVar50 * dVar43) - dVar48 * local_d0 * dVar43) +
             *(double *)(param_1 + 0xa2) * dVar28) -
            *(double *)(param_1 + 0xd6) * local_388 * *(double *)(param_1 + 0x142) * local_180) +
            *(double *)(param_1 + 0x100) * (dVar29 - 1.0);
    dVar10 = -(local_1e0 * *(double *)(param_1 + 0x142));
    dVar43 = (*(double *)(param_1 + 0xd2) * 1.0359431399069999e-10) / dVar52;
    dVar27 = *(double *)(param_1 + 0xda) + *(double *)(param_1 + 0xdc) * local_328 +
             *(double *)(param_1 + 0xde) * local_388;
    local_2e8 = (dVar43 + dVar27 * dVar61 + *(double *)(param_1 + 0xd8)) /
                *(double *)(param_1 + 0x130);
    if (local_2e8 < -0.5) {
      dVar48 = 1.0 / (local_2e8 * 8.0 + 3.0);
      local_2e8 = (local_2e8 * 3.0 + 1.0) * dVar48;
      local_2d0 = (((-dVar43 / dVar52) * dVar53 + dVar27 * dVar50 +
                   *(double *)(param_1 + 0xdc) * dVar61) / *(double *)(param_1 + 0x130)) *
                  dVar48 * dVar48;
      local_2c0 = ((*(double *)(param_1 + 0xde) * dVar61) / *(double *)(param_1 + 0x130)) *
                  dVar48 * dVar48;
    }
    else {
      local_2e8 = local_2e8 + 1.0;
      local_2d0 = ((-dVar43 / dVar52) * dVar53 + dVar27 * dVar50 +
                  *(double *)(param_1 + 0xdc) * dVar61) / *(double *)(param_1 + 0x130);
      local_2c0 = (*(double *)(param_1 + 0xde) * dVar61) / *(double *)(param_1 + 0x130);
    }
    if (((*(double *)(param_1 + 0xec) <= 1e+18) ||
        (1e+25 < *(double *)(param_1 + 0xec) || *(double *)(param_1 + 0xec) == 1e+25)) ||
       (local_2f8 <= *(double *)(param_1 + 0x156) + *(double *)(param_1 + 0x152))) {
      local_318 = local_2f8;
      local_348 = 1.0;
    }
    else {
      dVar43 = (*(double *)(param_1 + 0xec) * 1.6597795004309342e-23) /
               (*(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x130));
      dVar50 = (double)FUN_0040c760(((local_2f8 -
                                     (*(double *)(param_1 + 0x156) + *(double *)(param_1 + 0x152)))
                                    * 2.0) / dVar43 + 1.0);
      dVar27 = dVar43 * (dVar50 - 1.0);
      dVar43 = 1.07 - (dVar27 * 0.5 * dVar27) / dVar43;
      dVar27 = (double)FUN_0040c760(dVar43 * dVar43 + 0.224);
      local_318 = local_2f8 - (1.12 - (dVar43 + dVar27) * 0.5);
      local_348 = 1.0 - (0.5 - 0.5 / dVar50) * (dVar43 / dVar27 + 1.0);
    }
    local_360 = local_318 - dVar11;
    dVar27 = local_2e8 * 2.0 * dVar47;
    dVar43 = local_360 / dVar27;
    dVar50 = (*(double *)(param_1 + 0xd0) * 2.0 - local_360) / dVar27;
    if (dVar43 <= 34.0) {
      if (dVar50 <= 34.0) {
        local_350 = (double)FUN_0040af80(dVar43);
        dVar48 = (double)FUN_0040c2f0(local_350 + 1.0);
        dVar48 = dVar27 * dVar48;
        dVar28 = local_350 / (local_350 + 1.0);
        dVar56 = local_360 / local_2e8;
        dVar61 = local_360 / local_2e8;
        dVar29 = (double)FUN_0040af80(dVar50);
        dVar29 = (-*(double *)(param_1 + 0x130) / (dVar47 * *(double *)(param_1 + 0x14c))) * dVar29;
        dVar27 = 1.0 - dVar27 * dVar29;
        local_360 = dVar48 / dVar27;
        local_368 = dVar27 * dVar27;
        local_378 = ((dVar27 * dVar28 - dVar48 * dVar29) / local_368) * local_348;
        local_370 = (dVar27 * (-dVar28 * (dVar10 + dVar61 * local_2c0) +
                              (dVar48 / local_2e8) * local_2c0) -
                    dVar48 * (-dVar29 * (dVar10 - dVar47 * 2.0 * dVar50 * local_2c0) +
                             ((dVar27 - 1.0) / local_2e8) * local_2c0)) / local_368;
        local_368 = (dVar27 * (-dVar28 * (dVar9 + dVar56 * local_2d0) +
                              (dVar48 / local_2e8) * local_2d0) -
                    dVar48 * (-dVar29 * (dVar9 - dVar47 * 2.0 * dVar50 * local_2d0) +
                             ((dVar27 - 1.0) / local_2e8) * local_2d0)) / local_368;
      }
      else {
        dVar50 = (local_360 - *(double *)(param_1 + 0xd0)) / (local_2e8 * dVar47);
        local_350 = (double)FUN_0040af80();
        local_360 = ((dVar47 * *(double *)(param_1 + 0x14c)) / *(double *)(param_1 + 0x130)) *
                    local_350;
        local_378 = local_360 / (local_2e8 * dVar47);
        local_370 = -local_378 * (dVar10 + dVar50 * dVar47 * local_2c0);
        local_368 = -local_378 * (dVar9 + dVar50 * dVar47 * local_2d0);
        local_378 = local_378 * local_348;
      }
    }
    else {
      local_378 = local_348;
      local_370 = -dVar10;
      local_368 = -dVar9;
    }
    local_2b8 = *(double *)(param_1 + 0x136) -
                (*(double *)(param_1 + 0xcc) * local_360 +
                *(double *)(param_1 + 0xce) * (local_338 - *(double *)(param_1 + 0x13c))) * 2.0;
    local_228 = *(double *)(param_1 + 0xcc) * -2.0;
    local_240 = *(double *)(param_1 + 0xce) * -2.0 * local_340;
    if (local_2b8 < 2e-08) {
      dVar50 = 1.0 / (6e-08 - local_2b8 * 2.0);
      local_2b8 = (4e-08 - local_2b8) * 2e-08 * dVar50;
      dVar50 = dVar50 * dVar50 * 4e-16;
      local_228 = local_228 * dVar50;
      local_240 = local_240 * dVar50;
    }
    dVar50 = *(double *)(param_1 + 0xca) * local_360 +
             *(double *)(param_1 + 200) * (local_338 - *(double *)(param_1 + 0x13c));
    if (dVar50 < -0.9) {
      dVar27 = 1.0 / (dVar50 * 20.0 + 17.0);
      local_288 = *(double *)(param_1 + 0x158) * (dVar50 + 0.8) * dVar27;
      local_290 = *(double *)(param_1 + 0x158) * *(double *)(param_1 + 0xca) * dVar27 * dVar27;
      local_298 = *(double *)(param_1 + 0x158) * *(double *)(param_1 + 200) * local_340 *
                  dVar27 * dVar27;
    }
    else {
      local_288 = *(double *)(param_1 + 0x158) * (dVar50 + 1.0);
      local_290 = *(double *)(param_1 + 0x158) * *(double *)(param_1 + 0xca);
      local_298 = *(double *)(param_1 + 0x158) * *(double *)(param_1 + 200) * local_340;
    }
    dVar50 = (*(double *)(param_1 + 0x9c) * 0.5) / local_338;
    dVar27 = (-dVar50 / local_338) * local_340;
    dVar48 = (double)FUN_0040c760(*(double *)(param_1 + 0x104) * dVar52);
    dVar29 = local_3b0 + dVar48 * 2.0;
    dVar56 = local_3b0 / dVar29;
    dVar28 = *(double *)(param_1 + 0xba) * dVar56 +
             *(double *)(param_1 + 0xbe) /
             (*(double *)(param_1 + 0x136) + *(double *)(param_1 + 0xc0));
    dVar53 = ((-dVar48 / dVar29) / dVar52) * dVar53;
    local_2e0 = dVar50 * dVar28 + 1.0;
    local_2d8 = dVar50 * *(double *)(param_1 + 0xba) * dVar56 * dVar53 + dVar28 * dVar27;
    dVar48 = *(double *)(param_1 + 0xbc) * *(double *)(param_1 + 0xba) * dVar56 * dVar56 * dVar56;
    dVar52 = -dVar50 * dVar48;
    local_2b0 = local_2e0 + dVar52 * local_360;
    local_258 = local_2d8 - dVar48 * local_360 * (dVar27 + dVar50 * 3.0 * dVar53);
    if (local_2e0 < 0.1) {
      dVar53 = 1.0 / (3.0 - local_2e0 * 20.0);
      local_2e0 = (0.2 - local_2e0) * dVar53;
      local_2d8 = local_2d8 * dVar53 * dVar53;
    }
    if (local_2b0 < 0.1) {
      dVar53 = 1.0 / (3.0 - local_2b0 * 20.0);
      local_2b0 = (0.2 - local_2b0) * dVar53;
      local_258 = local_258 * dVar53 * dVar53;
    }
    dVar53 = *(double *)(param_1 + 0xc2) * local_328;
    if (dVar53 < -0.9) {
      local_198 = 1.0 / (dVar53 + 0.8);
      local_2a8 = (dVar53 * 20.0 + 17.0) * local_198;
      local_198 = -*(double *)(param_1 + 0xc2) * local_198 * local_198;
    }
    else {
      local_2a8 = 1.0 / (dVar53 + 1.0);
      local_198 = -*(double *)(param_1 + 0xc2) * local_2a8 * local_2a8;
    }
    dVar52 = dVar52 * local_2a8;
    dVar53 = local_258 * local_2a8 + local_2b0 * local_198;
    dVar50 = local_2d8 * local_2a8 + local_2e0 * local_198;
    local_2b0 = local_2b0 * local_2a8;
    local_2e0 = local_2e0 * local_2a8;
    if (param_1[0x4b] == 1) {
      dVar27 = *(double *)(param_1 + 0xb4) + *(double *)(param_1 + 0xb8) * local_328;
      dVar29 = (local_360 + dVar11 + dVar11) / *(double *)(param_1 + 0x102);
      dVar28 = dVar29 * (dVar27 + *(double *)(param_1 + 0xb6) * dVar29);
      dVar27 = (dVar27 + *(double *)(param_1 + 0xb6) * 2.0 * dVar29) / *(double *)(param_1 + 0x102);
      dVar48 = dVar27 * 2.0 * dVar10;
      dVar29 = dVar27 * 2.0 * dVar9 + *(double *)(param_1 + 0xb8) * dVar29;
    }
    else if (param_1[0x4b] == 2) {
      dVar28 = (local_360 / *(double *)(param_1 + 0x102)) *
               (*(double *)(param_1 + 0xb4) + *(double *)(param_1 + 0xb8) * local_328 +
               (*(double *)(param_1 + 0xb6) * local_360) / *(double *)(param_1 + 0x102));
      dVar27 = (*(double *)(param_1 + 0xb4) + *(double *)(param_1 + 0xb8) * local_328 +
               (*(double *)(param_1 + 0xb6) * 2.0 * local_360) / *(double *)(param_1 + 0x102)) /
               *(double *)(param_1 + 0x102);
      dVar48 = 0.0;
      dVar29 = (local_360 * *(double *)(param_1 + 0xb8)) / *(double *)(param_1 + 0x102);
    }
    else {
      dVar27 = *(double *)(param_1 + 0xb8) * local_328 + 1.0;
      dVar48 = (local_360 + dVar11 + dVar11) / *(double *)(param_1 + 0x102);
      dVar29 = dVar48 * (*(double *)(param_1 + 0xb4) + *(double *)(param_1 + 0xb6) * dVar48);
      dVar28 = dVar29 * dVar27;
      dVar27 = ((*(double *)(param_1 + 0xb4) + *(double *)(param_1 + 0xb6) * 2.0 * dVar48) * dVar27)
               / *(double *)(param_1 + 0x102);
      dVar48 = dVar27 * 2.0 * dVar10;
      dVar29 = dVar27 * 2.0 * dVar9 + *(double *)(param_1 + 0xb8) * dVar29;
    }
    if (dVar28 < -0.8) {
      dVar56 = 1.0 / (dVar28 * 10.0 + 7.0);
      dVar28 = (dVar28 + 0.6) * dVar56;
      dVar56 = dVar56 * dVar56;
      dVar27 = dVar27 * dVar56;
      dVar48 = dVar48 * dVar56;
      dVar29 = dVar29 * dVar56;
    }
    else {
      dVar28 = dVar28 + 1.0;
    }
    dVar39 = *(double *)(param_1 + 0x148) / dVar28;
    *(double *)(param_1 + 0x62) = dVar39;
    dVar28 = -dVar39 / dVar28;
    dVar54 = local_2b8 * *(double *)(param_1 + 0x14a) * *(double *)(param_1 + 0x130) * local_288;
    dVar60 = (*(double *)(param_1 + 0x14a) * 2.0) / dVar39;
    dVar56 = dVar60 * local_3b0;
    dVar13 = -dVar56 / dVar39;
    dVar61 = dVar13 * dVar28 * dVar27;
    dVar12 = dVar13 * dVar28 * dVar48;
    dVar13 = dVar13 * dVar28 * dVar29;
    if (*(double *)(param_1 + 0xc4) == 0.0) {
      dVar31 = *(double *)(param_1 + 0xc6);
      local_130 = 0.0;
    }
    else if (*(double *)(param_1 + 0xc4) <= 0.0) {
      dVar57 = (*(double *)(param_1 + 0xc6) + *(double *)(param_1 + 0xc4) * local_360) - 0.0001;
      dVar35 = (double)FUN_0040c760(dVar57 * dVar57 + *(double *)(param_1 + 0xc6) * 0.0004);
      dVar31 = (dVar57 + dVar35) * 0.5;
      local_130 = *(double *)(param_1 + 0xc4) * 0.5 * (dVar57 / dVar35 + 1.0);
    }
    else {
      dVar31 = 1.0 - *(double *)(param_1 + 0xc6);
      dVar57 = (dVar31 - *(double *)(param_1 + 0xc4) * local_360) - 0.0001;
      dVar35 = (double)FUN_0040c760(dVar57 * dVar57 + dVar31 * 0.0004);
      dVar31 = (*(double *)(param_1 + 0xc6) + dVar31) - (dVar57 + dVar35) * 0.5;
      local_130 = *(double *)(param_1 + 0xc4) * 0.5 * (dVar57 / dVar35 + 1.0);
    }
    dVar35 = local_360 + dVar47 * 2.0;
    if (local_288 <= 0.0) {
      local_120 = local_228 / local_2b8;
      dVar57 = local_240 / local_2b8;
    }
    else {
      local_120 = local_290 / local_288 + local_228 / local_2b8;
      dVar57 = local_298 / local_288 + local_240 / local_2b8;
    }
    if ((local_288 == 0.0) && (dVar31 == 1.0)) {
      dVar30 = 1.0 / (local_2b0 * dVar56 + dVar35);
      local_130 = 0.0;
      dVar14 = dVar30 * dVar30;
      dVar15 = dVar35 * dVar30;
      dVar16 = dVar56 * dVar35;
      local_100 = dVar16 * dVar30;
      dVar30 = dVar16 * -(local_2b0 * dVar61 + dVar56 * dVar52 + 1.0) * dVar14 + dVar15 * dVar61 +
               dVar56 * dVar30;
      dVar62 = dVar16 * -(local_2b0 * dVar12) * dVar14 + dVar15 * dVar12;
      dVar14 = dVar16 * -(local_2b0 * dVar13 + dVar53 * dVar56) * dVar14 + dVar15 * dVar13;
    }
    else {
      local_130 = local_130 / (dVar31 * dVar31);
      dVar30 = local_2b0 * dVar54;
      dVar14 = dVar35 * dVar30;
      dVar19 = dVar35 * dVar54;
      dVar62 = local_2b0 * 2.0 * ((dVar30 + 1.0 / dVar31) - 1.0);
      dVar15 = ((local_2b0 * dVar30 * local_120 - local_2b0 * local_130) +
               ((dVar30 * 2.0 + 1.0 / dVar31) - 1.0) * dVar52) * 2.0;
      dVar18 = (local_2b0 * dVar30 * ((2.0 / local_2b0) * dVar53 + dVar57) +
               (1.0 / dVar31 - 1.0) * dVar53) * 2.0;
      dVar36 = dVar35 * (2.0 / dVar31 - 1.0) + local_2b0 * dVar56 + dVar14 * 3.0;
      dVar30 = ((2.0 / dVar31 - dVar35 * 2.0 * local_130) + local_2b0 * dVar61 + dVar56 * dVar52 +
               (dVar30 + dVar14 * local_120 + dVar19 * dVar52) * 3.0) - 1.0;
      dVar14 = local_2b0 * dVar13 + dVar56 * dVar53 + (dVar19 * dVar53 + dVar14 * dVar57) * 3.0;
      dVar16 = dVar35 * (dVar56 + dVar19 * 2.0);
      dVar17 = (double)FUN_0040c760(dVar36 * dVar36 - dVar62 * 2.0 * dVar16);
      local_100 = (dVar36 - dVar17) / dVar62;
      dVar30 = ((dVar30 - ((dVar36 * dVar30 - dVar15 * dVar16) -
                          dVar62 * (dVar56 + dVar35 * dVar61 +
                                   dVar19 * (dVar35 * 2.0 * local_120 + 4.0))) / dVar17) -
               local_100 * dVar15) / dVar62;
      dVar14 = ((dVar14 - ((dVar36 * dVar14 - dVar18 * dVar16) -
                          dVar62 * dVar35 * (dVar13 + dVar19 * 2.0 * dVar57)) / dVar17) -
               local_100 * dVar18) / dVar62;
      dVar62 = (local_2b0 * dVar12 -
               (dVar36 * local_2b0 * dVar12 - dVar62 * dVar35 * dVar12) / dVar17) / dVar62;
    }
    *(double *)(param_1 + 100) = local_100;
    dVar15 = (local_100 - local_388) - *(double *)(param_1 + 0xea);
    dVar16 = (double)FUN_0040c760(dVar15 * dVar15 + *(double *)(param_1 + 0xea) * 4.0 * local_100);
    dVar17 = dVar15 / dVar16;
    dVar18 = (*(double *)(param_1 + 0xea) * 2.0) / dVar16;
    local_248 = local_100 - (dVar15 + dVar16) * 0.5;
    local_150 = dVar30 - (dVar30 + dVar17 * dVar30 + dVar18 * dVar30) * 0.5;
    dVar15 = dVar62 - ((dVar62 - 1.0) + dVar17 * (dVar62 - 1.0) + dVar18 * dVar62) * 0.5;
    dVar16 = dVar14 - (dVar14 + dVar17 * dVar14 + dVar18 * dVar14) * 0.5;
    dVar17 = 1.0 - (local_2b0 * 0.5 * local_100) / dVar35;
    dVar18 = (dVar54 * local_360) / dVar35;
    dVar36 = dVar54 * 2.0 * dVar17;
    dVar31 = (2.0 / dVar31 + dVar54 * local_2b0) - 1.0;
    dVar17 = (dVar56 + local_100 + dVar54 * local_360 * 2.0 * dVar17) / dVar31;
    if (local_388 < local_248) {
      local_248 = local_388;
    }
    dVar19 = local_388 - local_248;
    if ((*(double *)(param_1 + 0xe0) <= 0.0) || (dVar19 <= 1e-10)) {
      dVar49 = 583461742500000.0;
      dVar60 = 0.0;
      dVar51 = 0.0;
      dVar33 = 0.0;
    }
    else {
      dVar32 = 1.0 / (*(double *)(param_1 + 0xe0) * local_2b0 * *(double *)(param_1 + 0x154));
      dVar20 = local_360 / dVar56;
      dVar33 = local_3b0 * (local_2b0 + dVar20);
      dVar21 = dVar32 * dVar33;
      dVar49 = dVar21 * dVar19;
      dVar51 = (dVar32 * local_3b0 * ((1.0 - dVar20 * dVar61) / dVar56 + dVar52) * dVar19 -
               dVar21 * local_150) + dVar33 * dVar19 * (-dVar32 / local_2b0) * dVar52;
      dVar33 = ((-dVar32 / local_2b0) * dVar53 * dVar33 +
               dVar32 * local_3b0 * (dVar53 - (dVar20 * dVar13) / dVar56)) * dVar19 -
               dVar21 * dVar16;
      dVar60 = dVar32 * ((-dVar20 * dVar12) / dVar60) * dVar19 + dVar21 * (1.0 - dVar15);
    }
    if (*(double *)(param_1 + 0x144) <= 0.0) {
      dVar21 = 583461742500000.0;
      dVar20 = 0.0;
      dVar32 = 0.0;
      dVar22 = 0.0;
    }
    else {
      dVar32 = local_2b0 * local_100;
      dVar22 = dVar35 * dVar32;
      dVar58 = dVar35 + dVar32;
      dVar34 = dVar58 * dVar58;
      dVar20 = *(double *)(param_1 + 0x144);
      dVar21 = (dVar35 - dVar22 / dVar58) / dVar20;
      dVar32 = (1.0 - ((dVar35 * local_2b0 * dVar30 + dVar32 + dVar35 * local_100 * dVar52) / dVar58
                      - (dVar22 * (local_2b0 * dVar30 + local_100 * dVar52 + 1.0)) / dVar34)) /
               dVar20;
      dVar63 = (-(dVar35 * (dVar53 * local_100 + local_2b0 * dVar14)) / dVar58 +
               (dVar22 * (local_2b0 * dVar14 + dVar53 * local_100)) / dVar34) / dVar20;
      dVar20 = (-(dVar35 * local_2b0 * dVar62) / dVar58 + (dVar22 * local_2b0 * dVar62) / dVar34) /
               dVar20;
      dVar22 = *(double *)(param_1 + 0xe2) * local_328;
      if (dVar22 < -0.9) {
        dVar58 = 1.0 / (dVar22 + 0.8);
        dVar34 = (dVar22 * 20.0 + 17.0) * dVar58;
        dVar32 = dVar32 * dVar34;
        dVar22 = dVar63 * dVar34 - dVar21 * *(double *)(param_1 + 0xe2) * dVar58 * dVar58;
        dVar20 = dVar20 * dVar34;
        dVar21 = dVar21 * dVar34;
      }
      else {
        dVar34 = 1.0 / (dVar22 + 1.0);
        dVar21 = dVar21 * dVar34;
        dVar32 = dVar32 * dVar34;
        dVar22 = (dVar63 - dVar21 * *(double *)(param_1 + 0xe2)) * dVar34;
        dVar20 = dVar20 * dVar34;
      }
    }
    local_188 = *(double *)(param_1 + 0xe8) / dVar56;
    dVar34 = local_188 * local_360;
    if (dVar34 <= -0.9) {
      dVar58 = 1.0 / (dVar34 * 20.0 + 17.0);
      local_2a8 = (dVar34 + 0.8) * dVar58;
      local_188 = local_188 * (1.0 - (local_360 * dVar61) / dVar56) * dVar58 * dVar58;
      dVar34 = (dVar34 * dVar58 * dVar58) / dVar56;
      local_198 = -dVar34 * dVar13;
      dVar34 = -dVar34 * dVar12;
    }
    else {
      local_2a8 = dVar34 + 1.0;
      local_188 = local_188 * (1.0 - (local_360 * dVar61) / dVar56);
      local_198 = (-dVar34 * dVar13) / dVar56;
      dVar34 = (-dVar34 * dVar12) / dVar56;
    }
    dVar58 = dVar49 * dVar49;
    dVar63 = dVar21 * dVar21;
    dVar59 = dVar49 + dVar21;
    dVar21 = (dVar49 * dVar21) / dVar59;
    dVar59 = dVar59 * dVar59;
    dVar49 = dVar17 + local_2a8 * dVar21;
    if (*(double *)(param_1 + 0xe6) <= 0.0) {
      local_118 = 583461742500000.0;
      local_108 = 0.0;
      local_e8 = 0.0;
      dVar24 = 0.0;
    }
    else if (dVar19 <= (*(double *)(param_1 + 0xe4) * *(double *)(param_1 + 0x154)) / 34.0) {
      local_118 = (local_3b0 * 583461742500000.0) / *(double *)(param_1 + 0xe6);
      local_108 = 0.0;
      local_e8 = 0.0;
      dVar24 = 0.0;
    }
    else {
      dVar24 = *(double *)(param_1 + 0xe4);
      dVar25 = *(double *)(param_1 + 0x154);
      dVar23 = (double)FUN_0040af80();
      local_118 = (local_3b0 * dVar23) / *(double *)(param_1 + 0xe6);
      dVar24 = (((dVar24 * dVar25) / dVar19) * local_118) / dVar19;
      local_108 = dVar24 * local_150;
      local_e8 = -dVar24 * (1.0 - dVar15);
      dVar24 = dVar24 * dVar16;
    }
    dVar25 = (*(double *)(param_1 + 0x130) * local_2b8) / local_3b0;
    dVar39 = dVar39 * dVar25;
    dVar44 = 1.0 - (local_2b0 * 0.5 * local_248) / dVar35;
    dVar45 = local_360 * dVar44;
    dVar23 = local_248 / dVar56;
    dVar55 = dVar23 + 1.0;
    dVar26 = (dVar39 * dVar45) / dVar55;
    dVar40 = dVar26 * local_288 + 1.0;
    dVar41 = local_248 / dVar40;
    dVar42 = dVar26 * dVar41;
    dVar37 = dVar19 / dVar49;
    dVar38 = dVar37 + 1.0;
    dVar46 = dVar42 * dVar38;
    dVar61 = dVar38 * ((dVar26 * local_150 +
                       dVar41 * (((dVar39 * (local_360 *
                                             ((((local_2b0 * local_150 -
                                                (local_2b0 * local_248) / dVar35) +
                                               local_248 * dVar52) * -0.5) / dVar35) + dVar44) +
                                  dVar45 * (dVar25 * dVar28 * dVar27 +
                                           (dVar39 * local_228) / local_2b8)) -
                                 dVar26 * ((local_150 - dVar23 * dVar61) / dVar56)) / dVar55)) /
                       dVar40 - ((dVar42 * dVar26) / dVar40) * local_290) -
             (dVar42 * (local_150 +
                       dVar37 * ((((dVar61 + dVar30 + dVar36 * (local_120 * local_360 + 1.0)) -
                                  dVar18 * ((local_2b0 * dVar30 - (local_2b0 * local_100) / dVar35)
                                           + local_100 * dVar52)) -
                                 dVar17 * (local_130 * -2.0 +
                                          dVar54 * (local_2b0 * local_120 + dVar52))) / dVar31 +
                                 dVar21 * local_188 +
                                local_2a8 * ((dVar58 * dVar32 + dVar63 * dVar51) / dVar59)))) /
             dVar49;
    dVar12 = dVar38 * ((dVar26 * dVar15 +
                       dVar41 * (((dVar39 * local_360 * ((local_2b0 * -0.5 * dVar15) / dVar35) +
                                  dVar45 * dVar25 * dVar28 * dVar48) -
                                 dVar26 * ((dVar15 - dVar23 * dVar12) / dVar56)) / dVar55)) / dVar40
                      ) +
             (dVar42 * (1.0 - (dVar15 + dVar37 * (((dVar12 + dVar62) - dVar18 * local_2b0 * dVar62)
                                                  / dVar31 + dVar21 * dVar34 +
                                                 local_2a8 *
                                                 ((dVar58 * dVar20 + dVar63 * dVar60) / dVar59)))))
             / dVar49;
    dVar29 = dVar38 * (((dVar26 * dVar16 +
                        dVar41 * (((dVar39 * local_360 *
                                             (((local_2b0 * dVar16 + dVar53 * local_248) * -0.5) /
                                             dVar35) +
                                   dVar45 * (dVar25 * dVar28 * dVar29 +
                                            (dVar39 * local_240) / local_2b8)) -
                                  dVar26 * ((dVar16 - dVar23 * dVar13) / dVar56)) / dVar55)) -
                       dVar42 * local_298 * dVar26) / dVar40) -
             (dVar42 * (dVar16 + dVar37 * ((((dVar13 + dVar14 + dVar36 * dVar57 * local_360) -
                                            dVar18 * (dVar53 * local_100 + local_2b0 * dVar14)) -
                                           dVar17 * (dVar53 * dVar54 + dVar54 * local_2b0 * dVar57))
                                           / dVar31 + dVar21 * local_198 +
                                          local_2a8 * ((dVar58 * dVar22 + dVar63 * dVar33) / dVar59)
                                          ))) / dVar49;
    dVar27 = dVar19 / local_118;
    dVar48 = dVar27 + 1.0;
    local_218 = dVar46 * dVar48;
    *(double *)(param_1 + 0x1ac) =
         dVar48 * dVar61 - (dVar46 * (local_150 + dVar27 * local_108)) / local_118;
    dVar53 = *(double *)(param_1 + 0x1ac);
    dVar52 = *(double *)(param_1 + 0x1ac);
    *(double *)(param_1 + 0x1ac) = *(double *)(param_1 + 0x1ac) * local_378;
    if ((*(double *)(param_1 + 0xee) <= 0.0) || (*(double *)(param_1 + 0xf0) <= 0.0)) {
      dVar28 = 0.0;
      dVar56 = 0.0;
      dVar13 = 0.0;
      dVar61 = 0.0;
    }
    else {
      dVar28 = *(double *)(param_1 + 0xee);
      if (dVar19 <= *(double *)(param_1 + 0xf0) / 34.0) {
        local_148 = (dVar28 / local_3b0) * 1.713908431e-15;
        local_280 = local_148 * dVar19;
        local_170 = -local_148;
        local_148 = local_148 * (1.0 - dVar15);
      }
      else {
        dVar56 = *(double *)(param_1 + 0xf0);
        local_280 = (double)FUN_0040af80();
        local_280 = (dVar28 / local_3b0) * dVar19 * local_280;
        local_170 = (local_280 / dVar19) * (-dVar56 / dVar19 - 1.0);
        local_148 = -local_170 * (1.0 - dVar15);
      }
      local_150 = local_170 * local_150;
      local_170 = local_170 * dVar16;
      dVar28 = local_280 * dVar46;
      dVar13 = local_280 * dVar61 + dVar46 * local_150;
      dVar56 = local_280 * dVar12 + dVar46 * local_148 + dVar13 * local_370;
      dVar61 = dVar13 * local_378;
      dVar13 = (local_280 * dVar29 + dVar46 * local_170 + dVar13 * local_368) * dVar8;
    }
    *(double *)(param_1 + 0x24) =
         dVar48 * dVar12 + (dVar46 * (1.0 - (dVar15 + dVar27 * local_e8))) / local_118 +
         dVar53 * local_370;
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_1 + 0x1ac);
    *(double *)(param_1 + 0x26) =
         ((dVar48 * dVar29 - (dVar46 * (dVar16 + dVar27 * dVar24)) / local_118) + dVar52 * local_368
         ) * dVar8;
    *(double *)(param_1 + 0x6c) = dVar13;
    *(double *)(param_1 + 0x6e) = dVar61;
    *(double *)(param_1 + 0x70) = dVar56;
    *(double *)(param_1 + 0x7c) =
         dVar28 - (dVar13 * local_328 + dVar56 * local_388 + dVar61 * local_2f8);
    *(double *)(param_1 + 0x54) =
         -*(double *)(param_1 + 0x130) * local_2b8 * local_3b0 *
         local_360 * (1.0 - (local_2b0 * 0.5 * local_248) / dVar35);
    if ((*(double *)(param_1 + 0xf2) <= 0.0 && *(double *)(param_1 + 0xf2) != 0.0) ||
       (local_3e2 == '\0')) {
      local_3a0 = 0.0;
      local_380 = 0.0;
      local_390 = 0.0;
      param_1[0x7e] = 0;
      param_1[0x7f] = 0;
      param_1[0x80] = 0;
      param_1[0x81] = 0;
      param_1[0x82] = 0;
      param_1[0x83] = 0;
      param_1[0x84] = 0;
      param_1[0x85] = 0;
      param_1[0x86] = 0;
      param_1[0x87] = 0;
      param_1[0x88] = 0;
      param_1[0x89] = 0;
      param_1[0x8a] = 0;
      param_1[0x8b] = 0;
      param_1[0x8c] = 0;
      param_1[0x8d] = 0;
      param_1[0x8e] = 0;
      param_1[0x8f] = 0;
      param_1[0x90] = 0;
      param_1[0x91] = 0;
      param_1[0x92] = 0;
      param_1[0x93] = 0;
      param_1[0x94] = 0;
      param_1[0x95] = 0;
      param_1[0x96] = 0;
      param_1[0x97] = 0;
      param_1[0x7a] = 0;
      param_1[0x7b] = 0;
    }
    else if (param_1[0x4c] == 0) {
      if (0.0 <= local_328) {
        local_328 = *(double *)(param_1 + 0x152) - local_310;
        local_398 = -local_320;
      }
      else {
        local_328 = local_308;
        local_398 = 1.0;
      }
      dVar8 = *(double *)(param_1 + 0x106);
      dVar53 = local_318 -
               (dVar8 + *(double *)(param_1 + 0x152) + *(double *)(param_1 + 0x9c) * local_338);
      local_340 = *(double *)(param_1 + 0x9c) * local_340;
      dVar47 = *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x13a) *
               *(double *)(param_1 + 0x138);
      dVar9 = (local_318 - local_328) - dVar8;
      if (0.0 < dVar9) {
        if (0.0 < dVar53) {
          dVar52 = dVar47 / 3.0;
          dVar10 = dVar52 * 2.0;
          local_2e0 = local_2e0 * *(double *)(param_1 + 0x146);
          dVar9 = dVar53 / local_2e0;
          dVar43 = local_348 / local_2e0;
          local_2e0 = -(dVar9 * *(double *)(param_1 + 0x146) * dVar50 + local_340) / local_2e0;
          if (*(double *)(param_1 + 0xf2) <= 0.5) {
            if (0.5 < *(double *)(param_1 + 0xf2) || *(double *)(param_1 + 0xf2) == 0.5) {
              if (local_388 < dVar9) {
                dVar53 = dVar53 / dVar9;
                dVar52 = dVar9 * 2.0 - local_388;
                dVar27 = local_388 / (dVar52 * 3.0);
                dVar50 = dVar27 * local_388;
                dVar10 = dVar47 * 0.25 * dVar53;
                local_3a0 = dVar47 * (((local_318 - dVar8) - *(double *)(param_1 + 0x152)) -
                                     (local_388 - dVar50) * 0.5);
                dVar48 = dVar50 / dVar52;
                *(double *)(param_1 + 0x7e) = dVar47 * (1.0 - dVar48 * dVar43) * local_348;
                *(double *)(param_1 + 0x82) = dVar47 * ((dVar27 + dVar48 * 0.5) - 0.5);
                *(double *)(param_1 + 0x80) =
                     -(*(double *)(param_1 + 0x7e) + *(double *)(param_1 + 0x82) +
                      -dVar47 * dVar48 * local_2e0);
                local_380 = -dVar10 * (dVar52 + dVar50);
                local_390 = -(local_3a0 + local_380 + local_380);
                dVar8 = (dVar52 + dVar50) * dVar47 * 0.25;
                dVar47 = dVar10 * (dVar48 * 2.0 - 2.0);
                *(double *)(param_1 + 0x84) =
                     (dVar47 * dVar43 - dVar8 * (1.0 / dVar9) * (1.0 - dVar53 * dVar43)) * local_348
                ;
                *(double *)(param_1 + 0x88) = dVar10 * (1.0 - (dVar27 * 2.0 + dVar48));
                *(double *)(param_1 + 0x86) =
                     -(*(double *)(param_1 + 0x84) +
                       (dVar47 * local_2e0 -
                       dVar8 * -(1.0 / dVar9) * (local_340 + dVar53 * local_2e0)) +
                      *(double *)(param_1 + 0x88));
                *(double *)(param_1 + 0x8a) =
                     -(*(double *)(param_1 + 0x7e) + *(double *)(param_1 + 0x84) * 2.0);
                *(double *)(param_1 + 0x8e) =
                     -(*(double *)(param_1 + 0x82) + *(double *)(param_1 + 0x88) * 2.0);
                *(double *)(param_1 + 0x8c) =
                     -(*(double *)(param_1 + 0x80) + *(double *)(param_1 + 0x86) * 2.0);
              }
              else {
                local_3a0 = dVar47 * (((local_318 - dVar8) - *(double *)(param_1 + 0x152)) -
                                     dVar9 / 3.0);
                local_390 = -(local_3a0 + -dVar10 * dVar53);
                local_380 = -dVar10 * dVar53 * 0.5;
                *(double *)(param_1 + 0x7e) = dVar52 * (3.0 - dVar43) * local_348;
                *(double *)(param_1 + 0x80) = -(*(double *)(param_1 + 0x7e) + -dVar52 * local_2e0);
                param_1[0x82] = 0;
                param_1[0x83] = 0;
                *(double *)(param_1 + 0x84) = -dVar52 * local_348;
                param_1[0x88] = 0;
                param_1[0x89] = 0;
                *(double *)(param_1 + 0x86) = -(dVar52 * local_340 + *(double *)(param_1 + 0x84));
                *(double *)(param_1 + 0x8a) = -(*(double *)(param_1 + 0x7e) - dVar10 * local_348);
                *(double *)(param_1 + 0x8c) =
                     -(*(double *)(param_1 + 0x8a) + -(-dVar52 * local_2e0 + dVar10 * local_340));
                param_1[0x8e] = 0;
                param_1[0x8f] = 0;
              }
            }
            else if (local_388 < dVar9) {
              dVar53 = dVar53 / dVar9;
              dVar52 = dVar9 * 2.0 - local_388;
              dVar29 = local_388 / (dVar52 * 3.0);
              dVar50 = dVar29 * local_388;
              dVar10 = dVar47 * 0.25;
              dVar27 = dVar10 * dVar53;
              local_3a0 = dVar47 * (((local_318 - dVar8) - *(double *)(param_1 + 0x152)) -
                                   (local_388 - dVar50) * 0.5);
              dVar56 = dVar50 / dVar52;
              *(double *)(param_1 + 0x7e) = dVar47 * (1.0 - dVar56 * dVar43) * local_348;
              *(double *)(param_1 + 0x82) = dVar47 * ((dVar29 + dVar56 * 0.5) - 0.5);
              *(double *)(param_1 + 0x80) =
                   -(*(double *)(param_1 + 0x7e) + *(double *)(param_1 + 0x82) +
                    -dVar47 * dVar56 * local_2e0);
              dVar48 = (1.0 / dVar9) * (1.0 - dVar53 * dVar43);
              dVar11 = -(1.0 / dVar9) * (local_340 + dVar53 * local_2e0);
              dVar61 = (dVar9 * 8.0 * dVar9 - dVar9 * 6.0 * local_388) + local_388 * 1.2 * local_388
              ;
              dVar53 = dVar29 / dVar52;
              dVar8 = (local_388 - dVar52) - dVar53 * dVar61;
              local_380 = dVar27 * dVar8;
              dVar8 = dVar8 * dVar10;
              dVar47 = dVar27 * (2.0 - ((dVar53 / dVar52) * 4.0 * dVar61 -
                                       dVar53 * (dVar9 * 16.0 - local_388 * 6.0)));
              *(double *)(param_1 + 0x84) = (dVar8 * dVar48 - dVar47 * dVar43) * local_348;
              dVar28 = dVar8 * dVar11 - dVar47 * local_2e0;
              *(double *)(param_1 + 0x88) =
                   dVar27 * (2.0 - ((1.0 / (dVar52 * 3.0 * dVar52) + (dVar53 / dVar52) * 2.0) *
                                    dVar61 - dVar53 * (dVar9 * 6.0 - local_388 * 2.4)));
              *(double *)(param_1 + 0x86) =
                   -(*(double *)(param_1 + 0x84) + dVar28 + *(double *)(param_1 + 0x88));
              dVar8 = (dVar52 + dVar50) * 2.0;
              local_390 = -(local_3a0 - dVar27 * dVar8);
              dVar8 = dVar8 * dVar10;
              dVar47 = dVar27 * 4.0 * (1.0 - dVar56);
              local_348 = ((-dVar8 * dVar48 - *(double *)(param_1 + 0x84)) - dVar47 * dVar43) *
                          local_348;
              dVar8 = (-dVar8 * dVar11 - dVar28) - dVar47 * local_2e0;
              *(double *)(param_1 + 0x8a) =
                   -(*(double *)(param_1 + 0x7e) + *(double *)(param_1 + 0x84) + local_348);
              *(double *)(param_1 + 0x8e) =
                   -(*(double *)(param_1 + 0x82) + *(double *)(param_1 + 0x88) + dVar8);
              *(double *)(param_1 + 0x8c) =
                   -(*(double *)(param_1 + 0x80) + *(double *)(param_1 + 0x86) +
                    -((dVar27 * -4.0 * ((dVar29 + dVar56 * 0.5) - 0.5) - *(double *)(param_1 + 0x88)
                      ) + dVar8 + local_348));
            }
            else {
              local_3a0 = dVar47 * (((local_318 - dVar8) - *(double *)(param_1 + 0x152)) -
                                   dVar9 / 3.0);
              local_390 = -(local_3a0 + -dVar10 * dVar53);
              local_380 = -dVar10 * dVar53 * 0.4;
              *(double *)(param_1 + 0x7e) = dVar52 * (3.0 - dVar43) * local_348;
              *(double *)(param_1 + 0x80) = -(*(double *)(param_1 + 0x7e) + -dVar52 * local_2e0);
              param_1[0x82] = 0;
              param_1[0x83] = 0;
              *(double *)(param_1 + 0x84) = -(dVar10 * 0.4) * local_348;
              param_1[0x88] = 0;
              param_1[0x89] = 0;
              *(double *)(param_1 + 0x86) =
                   -(dVar10 * 0.4 * local_340 + *(double *)(param_1 + 0x84));
              *(double *)(param_1 + 0x8a) = -(*(double *)(param_1 + 0x7e) - dVar10 * local_348);
              *(double *)(param_1 + 0x8c) =
                   -(*(double *)(param_1 + 0x8a) + -(-dVar52 * local_2e0 + dVar10 * local_340));
              param_1[0x8e] = 0;
              param_1[0x8f] = 0;
            }
          }
          else if (local_388 < dVar9) {
            dVar53 = dVar53 / dVar9;
            dVar50 = dVar9 * 2.0 - local_388;
            dVar11 = local_388 / (dVar50 * 3.0);
            dVar10 = dVar11 * local_388;
            dVar27 = dVar47 * 0.25;
            dVar29 = dVar27 * dVar53;
            dVar52 = (local_388 * 2.0 - dVar50) - dVar10 * 3.0;
            dVar48 = (dVar10 - dVar50) - local_388 * 2.0;
            local_3a0 = dVar47 * (((local_318 - dVar8) - *(double *)(param_1 + 0x152)) -
                                 (local_388 - dVar10) * 0.5);
            local_380 = dVar29 * dVar52;
            local_390 = -(local_3a0 + local_380 + dVar29 * dVar48);
            dVar10 = dVar10 / dVar50;
            *(double *)(param_1 + 0x7e) = dVar47 * (1.0 - dVar10 * dVar43) * local_348;
            *(double *)(param_1 + 0x82) = dVar47 * ((dVar11 + dVar10 * 0.5) - 0.5);
            *(double *)(param_1 + 0x80) =
                 -(*(double *)(param_1 + 0x7e) + -dVar47 * dVar10 * local_2e0 +
                  *(double *)(param_1 + 0x82));
            dVar47 = (1.0 / dVar9) * (1.0 - dVar53 * dVar43);
            dVar9 = -(1.0 / dVar9) * (local_340 + dVar53 * local_2e0);
            dVar52 = dVar52 * dVar27;
            dVar48 = dVar48 * dVar27;
            dVar8 = dVar29 * 2.0 * (1.0 - dVar10 * 3.0);
            *(double *)(param_1 + 0x84) = (dVar52 * dVar47 - dVar8 * dVar43) * local_348;
            *(double *)(param_1 + 0x88) = dVar29 * (3.0 - (dVar11 * 6.0 + dVar10 * 3.0));
            *(double *)(param_1 + 0x86) =
                 -(*(double *)(param_1 + 0x84) + (dVar52 * dVar9 - dVar8 * local_2e0) +
                  *(double *)(param_1 + 0x88));
            dVar8 = dVar29 * 2.0 * (dVar10 + 1.0);
            local_348 = (dVar48 * dVar47 - dVar8 * dVar43) * local_348;
            dVar29 = dVar29 * ((dVar11 * 2.0 + dVar10) - 1.0);
            *(double *)(param_1 + 0x8a) =
                 -(*(double *)(param_1 + 0x7e) + *(double *)(param_1 + 0x84) + local_348);
            *(double *)(param_1 + 0x8e) =
                 -(*(double *)(param_1 + 0x82) + *(double *)(param_1 + 0x88) + dVar29);
            *(double *)(param_1 + 0x8c) =
                 -(*(double *)(param_1 + 0x80) + *(double *)(param_1 + 0x86) +
                  -(local_348 + (dVar48 * dVar9 - dVar8 * local_2e0) + dVar29));
          }
          else {
            local_3a0 = dVar47 * (((local_318 - dVar8) - *(double *)(param_1 + 0x152)) - dVar9 / 3.0
                                 );
            local_390 = -(local_3a0 + -dVar10 * dVar53);
            local_380 = 0.0;
            *(double *)(param_1 + 0x7e) = dVar52 * (3.0 - dVar43) * local_348;
            *(double *)(param_1 + 0x80) = -(*(double *)(param_1 + 0x7e) + -dVar52 * local_2e0);
            param_1[0x82] = 0;
            param_1[0x83] = 0;
            param_1[0x84] = 0;
            param_1[0x85] = 0;
            param_1[0x88] = 0;
            param_1[0x89] = 0;
            param_1[0x86] = 0;
            param_1[0x87] = 0;
            *(double *)(param_1 + 0x8a) = -(*(double *)(param_1 + 0x7e) - dVar10 * local_348);
            *(double *)(param_1 + 0x8c) =
                 -(*(double *)(param_1 + 0x8a) + -(-dVar52 * local_2e0 + dVar10 * local_340));
            param_1[0x8e] = 0;
            param_1[0x8f] = 0;
          }
        }
        else {
          dVar53 = *(double *)(param_1 + 0x9c) * 0.5;
          dVar8 = (double)FUN_0040c760(dVar53 * dVar53 + dVar9);
          local_3a0 = dVar47 * *(double *)(param_1 + 0x9c) * (dVar8 - dVar53);
          local_390 = -local_3a0;
          local_380 = 0.0;
          dVar8 = (dVar47 * dVar53) / dVar8;
          *(double *)(param_1 + 0x7e) = dVar8 * local_348;
          param_1[0x82] = 0;
          param_1[0x83] = 0;
          *(double *)(param_1 + 0x80) = dVar8 * (local_398 - local_348);
          param_1[0x84] = 0;
          param_1[0x85] = 0;
          param_1[0x88] = 0;
          param_1[0x89] = 0;
          param_1[0x86] = 0;
          param_1[0x87] = 0;
          *(ulonglong *)(param_1 + 0x8a) = *(ulonglong *)(param_1 + 0x7e) ^ 0x8000000000000000;
          param_1[0x8e] = 0;
          param_1[0x8f] = 0;
          *(ulonglong *)(param_1 + 0x8c) = *(ulonglong *)(param_1 + 0x80) ^ 0x8000000000000000;
        }
      }
      else {
        local_3a0 = dVar47 * dVar9;
        local_390 = -local_3a0;
        local_380 = 0.0;
        *(double *)(param_1 + 0x7e) = dVar47 * local_348;
        param_1[0x82] = 0;
        param_1[0x83] = 0;
        *(double *)(param_1 + 0x80) = dVar47 * (local_398 - local_348);
        param_1[0x84] = 0;
        param_1[0x85] = 0;
        param_1[0x88] = 0;
        param_1[0x89] = 0;
        param_1[0x86] = 0;
        param_1[0x87] = 0;
        *(double *)(param_1 + 0x8a) = -dVar47 * local_348;
        param_1[0x8e] = 0;
        param_1[0x8f] = 0;
        *(ulonglong *)(param_1 + 0x8c) = *(ulonglong *)(param_1 + 0x80) ^ 0x8000000000000000;
      }
    }
    else {
      if (0.0 <= local_328) {
        local_328 = *(double *)(param_1 + 0x152) - local_310;
        local_320 = -local_320;
      }
      else {
        local_320 = 1.0;
      }
      dVar53 = *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x13a) *
               *(double *)(param_1 + 0x138);
      dVar27 = (dVar11 - *(double *)(param_1 + 0x152)) - *(double *)(param_1 + 0x9c) * local_338;
      dVar52 = dVar9 - *(double *)(param_1 + 0x9c) * local_340;
      if ((-34.0 < dVar43) && (dVar43 < 34.0)) {
        local_378 = local_350 * local_350;
        local_360 = (double)FUN_0040c2f0(local_378 + 1.0);
        local_360 = local_2e8 * dVar47 * local_360;
        local_378 = local_378 / (local_378 + 1.0);
        local_370 = -local_378 * (dVar10 + ((local_318 - dVar11) / local_2e8) * local_2c0) +
                    (local_360 / local_2e8) * local_2c0;
        local_368 = -local_378 * (dVar9 + ((local_318 - dVar11) / local_2e8) * local_2d0) +
                    (local_360 / local_2e8) * local_2d0;
        local_378 = local_378 * local_348;
      }
      if (param_1[0x4c] == 1) {
        dVar47 = ((local_318 - local_328) - dVar27) - local_360;
        if (0.0 < dVar47) {
          dVar43 = *(double *)(param_1 + 0x9c) * 0.5;
          dVar47 = (double)FUN_0040c760(dVar43 * dVar43 + dVar47);
          dVar9 = (dVar53 * dVar43) / dVar47;
          local_3a0 = dVar53 * *(double *)(param_1 + 0x9c) * (dVar47 - dVar43);
          dVar47 = dVar9 * (local_348 - local_378);
          dVar43 = -dVar9 * (dVar10 + local_370);
          dVar9 = -dVar9 * (dVar52 + local_320 + local_368);
        }
        else {
          local_3a0 = dVar53 * dVar47;
          dVar47 = dVar53 * (local_348 - local_378);
          dVar43 = -dVar53 * (dVar10 + local_370);
          dVar9 = -dVar53 * (dVar52 + local_320 + local_368);
        }
        dVar52 = -local_3a0;
        local_2a8 = dVar53 / 3.0;
        local_2e0 = local_2e0 * *(double *)(param_1 + 0x146);
        dVar50 = *(double *)(param_1 + 0x146) * dVar50;
        dVar10 = local_360 / local_2e0;
        if (local_388 <= dVar10) {
          dVar48 = local_2e0 * local_388;
          dVar11 = ((local_360 - dVar48 * 0.5) + 1e-20) * 12.0;
          dVar10 = local_388 / dVar11;
          dVar29 = dVar48 * dVar10;
          dVar61 = dVar10 * -12.0 * dVar10 * local_2e0;
          dVar13 = ((dVar48 * 6.0 * (local_360 * 4.0 - dVar48)) / dVar11) / dVar11 - 0.5;
          dVar12 = dVar10 * 12.0 * dVar10 * dVar50 * local_360;
          local_3a0 = local_3a0 + dVar53 * ((local_360 - local_388 * 0.5) + dVar29);
          dVar27 = dVar53 * (dVar61 + 1.0);
          dVar28 = dVar53 * dVar12 + dVar27 * local_368;
          dVar56 = dVar53 * dVar13 + dVar27 * local_370;
          dVar27 = dVar27 * local_378;
          local_390 = dVar52 + dVar53 * (1.0 - local_2e0) * (local_388 * 0.5 - dVar29);
          dVar10 = -dVar53 * (1.0 - local_2e0) * dVar61;
          dVar52 = -dVar53 * ((1.0 - local_2e0) * dVar12 + (local_388 * 0.5 - dVar29) * dVar50) +
                   dVar10 * local_368;
          dVar29 = -dVar53 * (1.0 - local_2e0) * dVar13 + dVar10 * local_370;
          dVar10 = dVar10 * local_378;
          if (*(double *)(param_1 + 0xf2) <= 0.5) {
            if (0.5 < *(double *)(param_1 + 0xf2) || *(double *)(param_1 + 0xf2) == 0.5) {
              dVar61 = (local_3a0 + local_390) * -0.5;
              local_378 = (dVar27 + dVar10) * -0.5;
              local_368 = (dVar28 + dVar52) * -0.5;
              local_2a8 = (dVar56 + dVar29) * -0.5;
            }
            else {
              dVar11 = dVar11 / 12.0;
              dVar12 = (dVar53 * 0.5) / (dVar11 * dVar11);
              dVar61 = -dVar12 * (local_360 *
                                  ((dVar48 * 2.0 * dVar48) / 3.0 +
                                  local_360 * (local_360 - (dVar48 * 4.0) / 3.0)) -
                                 (dVar48 * 2.0 * dVar48 * dVar48) / 15.0);
              dVar13 = local_360 * 1.3333333333333333 * (local_360 - dVar48) + dVar48 * 0.4 * dVar48
              ;
              dVar48 = (dVar61 * -2.0) / dVar11 -
                       dVar12 * (local_360 * (local_360 * 3.0 - (dVar48 * 8.0) / 3.0) +
                                (dVar48 * 2.0 * dVar48) / 3.0);
              local_368 = ((dVar61 / dVar11) * local_388 + dVar12 * dVar13 * local_388) * dVar50 +
                          dVar48 * local_368;
              local_2a8 = (dVar61 / dVar11 + dVar12 * dVar13) * local_2e0 + dVar48 * local_370;
              local_378 = dVar48 * local_378;
            }
          }
          else {
            dVar11 = dVar11 + dVar11;
            dVar61 = -dVar53 * ((local_360 * 0.5 + dVar48 * 0.25) - (dVar48 * dVar48) / dVar11);
            dVar12 = -dVar53 * ((((dVar48 * 24.0 * local_388) / dVar11) / dVar11) * local_2e0 + 0.5)
            ;
            local_368 = -dVar53 * (local_388 * 0.25 * dVar50 -
                                  (((dVar48 * 12.0 * local_388) / dVar11) / dVar11) *
                                  (local_360 * 4.0 - dVar48) * dVar50) + dVar12 * local_368;
            local_2a8 = -dVar53 * (local_2e0 * 0.25 -
                                  (((local_2e0 * 12.0 * dVar48) / dVar11) / dVar11) *
                                  (local_360 * 4.0 - dVar48)) + dVar12 * local_370;
            local_378 = dVar12 * local_378;
          }
        }
        else {
          dVar50 = (-dVar10 * dVar50) / local_2e0;
          local_3a0 = local_3a0 + dVar53 * (local_360 - dVar10 / 3.0);
          dVar27 = dVar53 * (1.0 - (1.0 / local_2e0) / 3.0);
          dVar28 = dVar53 * (-dVar50 / 3.0) + dVar27 * local_368;
          dVar56 = dVar27 * local_370;
          dVar27 = dVar27 * local_378;
          local_390 = dVar52 + local_2a8 * (dVar10 - local_360);
          dVar10 = local_2a8 * (1.0 / local_2e0 - 1.0);
          dVar52 = local_2a8 * dVar50 + dVar10 * local_368;
          dVar29 = dVar10 * local_370;
          dVar10 = dVar10 * local_378;
          if (*(double *)(param_1 + 0xf2) <= 0.5) {
            if (0.5 < *(double *)(param_1 + 0xf2) || *(double *)(param_1 + 0xf2) == 0.5) {
              local_2a8 = -local_2a8;
            }
            else {
              local_2a8 = dVar53 * -0.4;
            }
          }
          else {
            local_2a8 = -(local_2a8 * 2.0);
          }
          dVar61 = local_2a8 * local_360;
          local_378 = local_2a8 * local_378;
          local_368 = local_2a8 * local_368;
          local_2a8 = local_2a8 * local_370;
        }
        dVar52 = (-dVar9 + dVar52) * dVar8;
        dVar9 = (dVar9 + dVar28) * dVar8;
        dVar29 = -dVar43 + dVar29;
        dVar10 = -dVar47 + dVar10;
        dVar43 = dVar43 + dVar56;
        dVar47 = dVar47 + dVar27;
        local_380 = -(local_3a0 + local_390 + dVar61);
        *(double *)(param_1 + 0x7e) = dVar47;
        *(double *)(param_1 + 0x80) = -(dVar47 + dVar43 + dVar9);
        *(double *)(param_1 + 0x82) = dVar43;
        *(double *)(param_1 + 0x84) = -(dVar47 + dVar10 + local_378);
        *(double *)(param_1 + 0x86) =
             dVar47 + dVar43 + dVar9 + dVar10 + dVar29 + dVar52 + local_378 + local_2a8 +
             local_368 * dVar8;
        *(double *)(param_1 + 0x88) = -(dVar43 + dVar29 + local_2a8);
        *(double *)(param_1 + 0x8a) = dVar10;
        *(double *)(param_1 + 0x8c) = -(dVar10 + dVar29 + dVar52);
        *(double *)(param_1 + 0x8e) = dVar29;
      }
      else if (param_1[0x4c] == 2) {
        dVar47 = ((dVar27 - local_318) + local_328) - 0.02;
        if (0.0 < dVar27) {
          local_2a8 = (double)FUN_0040c760(dVar47 * dVar47 + dVar27 * 0.08);
          local_1f8 = 0.02 / local_2a8;
        }
        else {
          local_2a8 = (double)FUN_0040c760(dVar47 * dVar47 - dVar27 * 0.08);
          local_1f8 = -0.02 / local_2a8;
        }
        dVar9 = (dVar47 / local_2a8 + 1.0) * 0.5;
        dVar47 = dVar27 - (dVar47 + local_2a8) * 0.5;
        dVar48 = (1.0 - (dVar9 + local_1f8)) * dVar10;
        dVar29 = (1.0 - (dVar9 + local_1f8)) * dVar52 - dVar9 * local_320;
        dVar11 = dVar53 * (dVar47 - dVar27);
        dVar43 = dVar53 * dVar9 * local_348;
        dVar10 = dVar53 * (dVar48 - dVar10);
        dVar27 = dVar53 * (dVar29 - dVar52);
        dVar52 = *(double *)(param_1 + 0x9c) * 0.5;
        dVar47 = ((local_318 - dVar47) - local_328) - local_360;
        if (*(double *)(param_1 + 0x9c) == 0.0) {
          local_280 = 0.0;
          local_1f8 = 0.0;
        }
        else if (0.0 <= dVar47) {
          local_280 = (double)FUN_0040c760(dVar52 * dVar52 + dVar47);
          local_1f8 = (dVar53 * dVar52) / local_280;
        }
        else {
          local_280 = dVar52 + dVar47 / *(double *)(param_1 + 0x9c);
          local_1f8 = dVar53;
        }
        dVar62 = dVar53 * *(double *)(param_1 + 0x9c) * (local_280 - dVar52);
        dVar28 = local_1f8 * ((local_348 - dVar9 * local_348) - local_378);
        dVar47 = -local_1f8 * (dVar48 + local_370);
        dVar9 = -local_1f8 * (dVar29 + local_320 + local_368);
        local_2e0 = local_2e0 * *(double *)(param_1 + 0x146);
        dVar50 = *(double *)(param_1 + 0x146) * dVar50;
        dVar56 = local_360 / local_2e0;
        dVar29 = (dVar56 - local_388) - 0.02;
        dVar52 = (double)FUN_0040c760(dVar29 * dVar29 + dVar56 * 0.08);
        dVar48 = dVar56 - (dVar29 + dVar52) * 0.5;
        dVar57 = (dVar29 / dVar52 + 1.0) * 0.5;
        dVar29 = (1.0 - (dVar57 + 0.02 / dVar52)) / local_2e0;
        dVar56 = -dVar29 * dVar56 * dVar50;
        dVar61 = local_2e0 * dVar48;
        dVar54 = ((local_360 - dVar61 * 0.5) + 1e-20) * 12.0;
        dVar52 = dVar48 / dVar54;
        dVar12 = dVar61 * dVar52;
        dVar60 = 1.0 - dVar52 * 12.0 * dVar52 * local_2e0;
        dVar15 = (dVar61 * 6.0 * (local_360 * 4.0 - dVar61)) / (dVar54 * dVar54) - 0.5;
        dVar16 = dVar52 * 12.0 * dVar52 * local_360;
        dVar13 = dVar53 * ((local_360 - dVar48 * 0.5) + dVar12);
        dVar39 = dVar53 * (dVar60 + dVar15 * dVar29);
        dVar52 = dVar53 * dVar15 * dVar57 + dVar39 * local_370;
        dVar30 = dVar53 * (dVar15 * dVar56 + dVar16 * dVar50) + dVar39 * local_368;
        dVar31 = 1.0 - local_2e0;
        dVar35 = dVar53 * dVar31 * (dVar48 * 0.5 - dVar12);
        dVar15 = dVar15 * -dVar31;
        dVar60 = dVar53 * (-dVar31 * (dVar60 - 1.0) + dVar15 * dVar29);
        dVar14 = dVar53 * dVar15 * dVar57 + dVar60 * local_370;
        dVar12 = dVar53 * (dVar15 * dVar56 + -(dVar31 * dVar16 + (dVar48 * 0.5 - dVar12)) * dVar50)
                 + dVar60 * local_368;
        if (*(double *)(param_1 + 0xf2) <= 0.5) {
          if (0.5 < *(double *)(param_1 + 0xf2) || *(double *)(param_1 + 0xf2) == 0.5) {
            dVar31 = (dVar13 + dVar35) * -0.5;
            dVar29 = (dVar39 * local_378 + dVar60 * local_378) * -0.5;
            dVar50 = (dVar30 + dVar12) * -0.5;
            dVar57 = (dVar52 + dVar14) * -0.5;
          }
          else {
            dVar54 = dVar54 / 12.0;
            dVar15 = (dVar53 * 0.5) / (dVar54 * dVar54);
            dVar31 = -dVar15 * (local_360 *
                                ((dVar61 * 2.0 * dVar61) / 3.0 +
                                local_360 * (local_360 - (dVar61 * 4.0) / 3.0)) -
                               (dVar61 * 2.0 * dVar61 * dVar61) / 15.0);
            dVar16 = local_360 * 1.3333333333333333 * (local_360 - dVar61) + dVar61 * 0.4 * dVar61;
            local_2e0 = (dVar31 / dVar54 + dVar15 * dVar16) * local_2e0;
            dVar29 = ((dVar31 * -2.0) / dVar54 -
                     dVar15 * (local_360 * (local_360 * 3.0 - (dVar61 * 8.0) / 3.0) +
                              (dVar61 * 2.0 * dVar61) / 3.0)) + local_2e0 * dVar29;
            dVar57 = local_2e0 * dVar57 + dVar29 * local_370;
            dVar50 = local_2e0 * dVar56 +
                     ((dVar31 / dVar54) * dVar48 + dVar15 * dVar16 * dVar48) * dVar50 +
                     dVar29 * local_368;
            dVar29 = dVar29 * local_378;
          }
        }
        else {
          dVar54 = dVar54 + dVar54;
          dVar31 = -dVar53 * ((local_360 * 0.5 + dVar61 * 0.25) - (dVar61 * dVar61) / dVar54);
          dVar15 = (local_360 * 4.0 - dVar61) / (dVar54 * dVar54);
          dVar16 = -(local_2e0 * 0.25 - local_2e0 * 12.0 * dVar61 * dVar15);
          dVar29 = dVar53 * (-((dVar61 * 24.0 * dVar61) / (dVar54 * dVar54) + 0.5) + dVar16 * dVar29
                            );
          dVar57 = dVar53 * dVar16 * dVar57 + dVar29 * local_370;
          dVar50 = dVar53 * (dVar16 * dVar56 +
                            -(dVar48 * 0.25 - dVar61 * 12.0 * dVar48 * dVar15) * dVar50) +
                   dVar29 * local_368;
          dVar29 = dVar29 * local_378;
        }
        local_3a0 = dVar13 + dVar11 + dVar62;
        local_390 = dVar35 - (dVar11 + dVar62);
        local_380 = -(local_3a0 + local_390 + dVar31);
        dVar48 = dVar43 + dVar28 + dVar39 * local_378;
        dVar52 = dVar10 + dVar47 + dVar52;
        dVar28 = (dVar60 * local_378 - dVar43) - dVar28;
        dVar47 = (dVar14 - dVar10) - dVar47;
        dVar43 = (dVar27 + dVar9 + dVar30) * dVar8;
        dVar9 = ((dVar12 - dVar27) - dVar9) * dVar8;
        *(double *)(param_1 + 0x7e) = dVar48;
        *(double *)(param_1 + 0x80) = -(dVar48 + dVar52 + dVar43);
        *(double *)(param_1 + 0x82) = dVar52;
        *(double *)(param_1 + 0x84) = -(dVar48 + dVar28 + dVar29);
        *(double *)(param_1 + 0x86) =
             dVar48 + dVar52 + dVar43 + dVar28 + dVar47 + dVar9 + dVar29 + dVar57 + dVar50 * dVar8;
        *(double *)(param_1 + 0x88) = -(dVar52 + dVar47 + dVar57);
        *(double *)(param_1 + 0x8a) = dVar28;
        *(double *)(param_1 + 0x8c) = -(dVar28 + dVar47 + dVar9);
        *(double *)(param_1 + 0x8e) = dVar47;
      }
      if (param_1[0x4d] < 1) {
        param_1[0x94] = 0;
        param_1[0x95] = 0;
        param_1[0x90] = 0;
        param_1[0x91] = 0;
        param_1[0x92] = 0;
        param_1[0x93] = 0;
        param_1[0x96] = 0;
        param_1[0x97] = 0;
        param_1[0x7a] = 0;
        param_1[0x7b] = 0;
      }
      else {
        dVar9 = -local_390 - local_3a0;
        local_390 = 0.0;
        local_3a0 = 0.0;
        local_380 = 0.0;
        *(double *)(param_1 + 0x94) = -(*(double *)(param_1 + 0x7e) + *(double *)(param_1 + 0x8a));
        *(double *)(param_1 + 0x90) = -(*(double *)(param_1 + 0x82) + *(double *)(param_1 + 0x8e));
        *(double *)(param_1 + 0x92) = -(*(double *)(param_1 + 0x80) + *(double *)(param_1 + 0x8c));
        *(double *)(param_1 + 0x96) =
             *(double *)(param_1 + 0x7e) + *(double *)(param_1 + 0x82) + *(double *)(param_1 + 0x80)
             + *(double *)(param_1 + 0x8a) + *(double *)(param_1 + 0x8e) +
             *(double *)(param_1 + 0x8c);
        param_1[0x7e] = 0;
        param_1[0x7f] = 0;
        param_1[0x80] = 0;
        param_1[0x81] = 0;
        param_1[0x82] = 0;
        param_1[0x83] = 0;
        param_1[0x84] = 0;
        param_1[0x85] = 0;
        param_1[0x86] = 0;
        param_1[0x87] = 0;
        param_1[0x88] = 0;
        param_1[0x89] = 0;
        param_1[0x8a] = 0;
        param_1[0x8b] = 0;
        param_1[0x8c] = 0;
        param_1[0x8d] = 0;
        param_1[0x8e] = 0;
        param_1[0x8f] = 0;
        dVar8 = *(double *)(param_1 + 0x138);
        dVar47 = *(double *)(param_1 + 0x138);
        *(double *)(param_1 + 0x66) =
             ((*(double *)(param_1 + 0x148) * *(double *)(param_1 + 0xfa)) / dVar53) /
             (dVar8 * dVar47);
        if (dVar9 == 0.0) {
          param_1[0x66] = 0;
          param_1[0x67] = 0;
        }
        else if (dVar9 < 0.0) {
          *(ulonglong *)(param_1 + 0x66) = *(ulonglong *)(param_1 + 0x66) ^ 0x8000000000000000;
        }
        dVar53 = (double)FUN_0040c850(*(double *)(param_1 + 0x66) * dVar9);
        *(double *)(param_1 + 0x7a) =
             dVar53 + (*(double *)(param_1 + 0x148) * 16.0 * *(double *)(param_1 + 0x12e)) /
                      (dVar8 * dVar47);
        uVar64 = 0;
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 7,dVar9,0);
        if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
          uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 7,0);
          uVar64 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 7,uVar4,0);
        }
        FUN_00dafac0(param_2,param_3,local_b8,local_b0,0,
                     CONCAT44(uVar64,*(ushort *)(param_1 + 0x4a) + 7),0,1);
      }
    }
    *(double *)(param_1 + 0x20) = (double)param_1[1] * local_218 - *(double *)(param_1 + 0x1c);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    if (local_3e2 != '\0') {
      dVar8 = *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x15c);
      dVar47 = *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x15a);
      if (*(double *)(param_1 + 0x136) < *(double *)(param_1 + 0x160) ||
          *(double *)(param_1 + 0x136) == *(double *)(param_1 + 0x160)) {
        local_e0 = *(double *)(param_1 + 0x112) *
                   (*(double *)(param_1 + 0x160) - *(double *)(param_1 + 0x136));
        local_d8 = *(double *)(param_1 + 0x114) * *(double *)(param_1 + 0x136);
      }
      else {
        local_d8 = *(double *)(param_1 + 0x114) * *(double *)(param_1 + 0x160);
        local_e0 = 0.0;
      }
      if (*(double *)(param_1 + 0x136) < *(double *)(param_1 + 0x15e) ||
          *(double *)(param_1 + 0x136) == *(double *)(param_1 + 0x15e)) {
        dVar9 = *(double *)(param_1 + 0x112) *
                (*(double *)(param_1 + 0x15e) - *(double *)(param_1 + 0x136));
        dVar53 = *(double *)(param_1 + 0x114) * *(double *)(param_1 + 0x136);
      }
      else {
        dVar9 = 0.0;
        dVar53 = *(double *)(param_1 + 0x114) * *(double *)(param_1 + 0x15e);
      }
      dVar43 = *(double *)(param_1 + 0x11c);
      dVar52 = *(double *)(param_1 + 0x11e);
      dVar50 = *(double *)(param_1 + 0x120);
      dVar10 = *(double *)(param_1 + 0x116);
      dVar27 = *(double *)(param_1 + 0x118);
      dVar48 = *(double *)(param_1 + 0x11a);
      if (local_3d8 == 0.0) {
        param_1[0x50] = 0;
        param_1[0x51] = 0;
        *(double *)(param_1 + 0x98) = dVar47 + dVar9 + dVar53;
      }
      else if (0.0 <= local_3d8) {
        *(double *)(param_1 + 0x50) =
             local_3d8 * (dVar47 + dVar9 + dVar53) +
             local_3d8 * local_3d8 *
             ((dVar47 * dVar10 * 0.5) / dVar43 + (dVar9 * dVar27 * 0.5) / dVar52 +
             (dVar53 * dVar48 * 0.5) / dVar50);
        *(double *)(param_1 + 0x98) =
             dVar47 + dVar9 + dVar53 +
             local_3d8 *
             ((dVar47 * dVar10) / dVar43 + (dVar9 * dVar27) / dVar52 + (dVar53 * dVar48) / dVar50);
      }
      else {
        if (dVar47 <= 0.0) {
          param_1[0x50] = 0;
          param_1[0x51] = 0;
          param_1[0x98] = 0;
          param_1[0x99] = 0;
        }
        else {
          dVar29 = 1.0 - local_3d8 / dVar43;
          if (dVar10 == 0.5) {
            dVar11 = (double)FUN_0040c760(dVar29);
            dVar11 = 1.0 / dVar11;
          }
          else {
            dVar11 = (double)FUN_0040c2f0(dVar29);
            dVar11 = (double)FUN_0040af80(-dVar10 * dVar11);
          }
          *(double *)(param_1 + 0x50) = (dVar43 * dVar47 * (1.0 - dVar29 * dVar11)) / (1.0 - dVar10)
          ;
          *(double *)(param_1 + 0x98) = dVar47 * dVar11;
        }
        if (0.0 < dVar9) {
          dVar47 = 1.0 - local_3d8 / dVar52;
          if (dVar27 == 0.5) {
            dVar29 = (double)FUN_0040c760(dVar47);
            dVar29 = 1.0 / dVar29;
          }
          else {
            dVar29 = (double)FUN_0040c2f0(dVar47);
            dVar29 = (double)FUN_0040af80(-dVar27 * dVar29);
          }
          *(double *)(param_1 + 0x50) =
               *(double *)(param_1 + 0x50) +
               (dVar52 * dVar9 * (1.0 - dVar47 * dVar29)) / (1.0 - dVar27);
          *(double *)(param_1 + 0x98) = *(double *)(param_1 + 0x98) + dVar9 * dVar29;
        }
        if (0.0 < dVar53) {
          dVar47 = 1.0 - local_3d8 / dVar50;
          if (dVar48 == 0.5) {
            dVar9 = (double)FUN_0040c760(dVar47);
            dVar9 = 1.0 / dVar9;
          }
          else {
            dVar9 = (double)FUN_0040c2f0(dVar47);
            dVar9 = (double)FUN_0040af80(-dVar48 * dVar9);
          }
          *(double *)(param_1 + 0x50) =
               *(double *)(param_1 + 0x50) +
               (dVar50 * dVar53 * (1.0 - dVar47 * dVar9)) / (1.0 - dVar48);
          *(double *)(param_1 + 0x98) = *(double *)(param_1 + 0x98) + dVar53 * dVar9;
        }
      }
      if (local_3d0 == 0.0) {
        param_1[0x52] = 0;
        param_1[0x53] = 0;
        *(double *)(param_1 + 0x9a) = dVar8 + local_e0 + local_d8;
      }
      else if (0.0 <= local_3d0) {
        *(double *)(param_1 + 0x52) =
             local_3d0 * (dVar8 + local_e0 + local_d8) +
             local_3d0 * local_3d0 *
             ((dVar8 * dVar10 * 0.5) / dVar43 + (local_e0 * dVar27 * 0.5) / dVar52 +
             (local_d8 * dVar48 * 0.5) / dVar50);
        *(double *)(param_1 + 0x9a) =
             dVar8 + local_e0 + local_d8 +
             local_3d0 *
             ((dVar8 * dVar10) / dVar43 + (local_e0 * dVar27) / dVar52 +
             (local_d8 * dVar48) / dVar50);
      }
      else {
        if (dVar8 <= 0.0) {
          param_1[0x52] = 0;
          param_1[0x53] = 0;
          param_1[0x9a] = 0;
          param_1[0x9b] = 0;
        }
        else {
          dVar47 = 1.0 - local_3d0 / dVar43;
          if (dVar10 == 0.5) {
            dVar9 = (double)FUN_0040c760(dVar47);
            dVar9 = 1.0 / dVar9;
          }
          else {
            dVar9 = (double)FUN_0040c2f0(dVar47);
            dVar9 = (double)FUN_0040af80(-dVar10 * dVar9);
          }
          *(double *)(param_1 + 0x52) = (dVar43 * dVar8 * (1.0 - dVar47 * dVar9)) / (1.0 - dVar10);
          *(double *)(param_1 + 0x9a) = dVar8 * dVar9;
        }
        if (0.0 < local_e0) {
          dVar8 = 1.0 - local_3d0 / dVar52;
          if (dVar27 == 0.5) {
            dVar47 = (double)FUN_0040c760(dVar8);
            dVar47 = 1.0 / dVar47;
          }
          else {
            dVar47 = (double)FUN_0040c2f0(dVar8);
            dVar47 = (double)FUN_0040af80(-dVar27 * dVar47);
          }
          *(double *)(param_1 + 0x52) =
               *(double *)(param_1 + 0x52) +
               (dVar52 * local_e0 * (1.0 - dVar8 * dVar47)) / (1.0 - dVar27);
          *(double *)(param_1 + 0x9a) = *(double *)(param_1 + 0x9a) + local_e0 * dVar47;
        }
        if (0.0 < local_d8) {
          dVar8 = 1.0 - local_3d0 / dVar50;
          if (dVar48 == 0.5) {
            dVar47 = (double)FUN_0040c760(dVar8);
            dVar47 = 1.0 / dVar47;
          }
          else {
            dVar47 = (double)FUN_0040c2f0(dVar8);
            dVar47 = (double)FUN_0040af80(-dVar48 * dVar47);
          }
          *(double *)(param_1 + 0x52) =
               *(double *)(param_1 + 0x52) +
               (dVar50 * local_d8 * (1.0 - dVar8 * dVar47)) / (1.0 - dVar48);
          *(double *)(param_1 + 0x9a) = *(double *)(param_1 + 0x9a) + local_d8 * dVar47;
        }
      }
    }
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xb,local_3b8,0);
    *(double *)(param_1 + 0x16) = local_3b8;
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xc,local_3e0,0);
    *(double *)(param_1 + 0xe) = local_3e0;
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xd,local_3d8,0);
    *(double *)(param_1 + 0x12) = local_3d8;
    FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 0xe,local_3d0,0);
    *(double *)(param_1 + 0x14) = local_3d0;
    *(double *)(param_1 + 0x10) = local_3c8;
    if (local_3e2 != '\0') {
LAB_00dcac8e:
      dVar8 = (double)FUN_01b08a00(param_3,0);
      if (param_1[0x4c] == 0) {
        if (0.0 <= local_3c8) {
          dVar9 = *(double *)(param_1 + 0x58);
          dVar47 = *(double *)(param_1 + 0x58);
        }
        else {
          dVar9 = *(double *)(param_1 + 0x58);
          dVar47 = *(double *)(param_1 + 0x58);
        }
        dVar47 = dVar47 * local_3c8;
        if (0.0 <= local_3e0) {
          dVar53 = *(double *)(param_1 + 0x56);
          dVar43 = *(double *)(param_1 + 0x56) * local_3e0;
        }
        else {
          dVar53 = *(double *)(param_1 + 0x56);
          dVar43 = *(double *)(param_1 + 0x56) * local_3e0;
        }
      }
      else if (param_1[0x4c] == 1) {
        if (0.0 <= local_3c8) {
          dVar9 = *(double *)(param_1 + 0x58) +
                  *(double *)(param_1 + 0x13a) * *(double *)(param_1 + 0xf6);
          dVar47 = (*(double *)(param_1 + 0x13a) * *(double *)(param_1 + 0xf6) +
                   *(double *)(param_1 + 0x58)) * local_3c8;
        }
        else {
          dVar47 = (double)FUN_0040c760(1.0 - (local_3c8 * 4.0) / *(double *)(param_1 + 0xf8));
          dVar9 = *(double *)(param_1 + 0x58) +
                  (*(double *)(param_1 + 0x13a) * *(double *)(param_1 + 0xf6)) / dVar47;
          dVar47 = *(double *)(param_1 + 0x58) * local_3c8 -
                   *(double *)(param_1 + 0x13a) * 0.5 * *(double *)(param_1 + 0xf6) *
                   *(double *)(param_1 + 0xf8) * (dVar47 - 1.0);
        }
        if (0.0 <= local_3e0) {
          dVar53 = *(double *)(param_1 + 0x56) +
                   *(double *)(param_1 + 0x13a) * *(double *)(param_1 + 0xf4);
          dVar43 = (*(double *)(param_1 + 0x13a) * *(double *)(param_1 + 0xf4) +
                   *(double *)(param_1 + 0x56)) * local_3e0;
        }
        else {
          dVar43 = (double)FUN_0040c760(1.0 - (local_3e0 * 4.0) / *(double *)(param_1 + 0xf8));
          dVar53 = *(double *)(param_1 + 0x56) +
                   (*(double *)(param_1 + 0x13a) * *(double *)(param_1 + 0xf4)) / dVar43;
          dVar43 = *(double *)(param_1 + 0x56) * local_3e0 -
                   *(double *)(param_1 + 0x13a) * 0.5 * *(double *)(param_1 + 0xf4) *
                   *(double *)(param_1 + 0xf8) * (dVar43 - 1.0);
        }
      }
      else {
        dVar47 = local_3c8 + 0.02;
        dVar9 = (double)FUN_0040c760(dVar47 * dVar47 + 0.08);
        dVar53 = (dVar47 - dVar9) * 0.5;
        dVar43 = *(double *)(param_1 + 0x13a) * *(double *)(param_1 + 0xf6);
        dVar52 = (double)FUN_0040c760(1.0 - (dVar53 * 4.0) / *(double *)(param_1 + 0xf8));
        dVar9 = (*(double *)(param_1 + 0x58) + dVar43) -
                dVar43 * (1.0 - 1.0 / dVar52) * (0.5 - (dVar47 * 0.5) / dVar9);
        dVar47 = (*(double *)(param_1 + 0x58) + dVar43) * local_3c8 -
                 dVar43 * (dVar53 + *(double *)(param_1 + 0xf8) * 0.5 * (dVar52 - 1.0));
        dVar53 = local_3e0 + 0.02;
        dVar43 = (double)FUN_0040c760(dVar53 * dVar53 + 0.08);
        dVar52 = (dVar53 - dVar43) * 0.5;
        dVar50 = *(double *)(param_1 + 0x13a) * *(double *)(param_1 + 0xf4);
        dVar10 = (double)FUN_0040c760(1.0 - (dVar52 * 4.0) / *(double *)(param_1 + 0xf8));
        dVar53 = (*(double *)(param_1 + 0x56) + dVar50) -
                 dVar50 * (1.0 - 1.0 / dVar10) * (0.5 - (dVar53 * 0.5) / dVar43);
        dVar43 = (*(double *)(param_1 + 0x56) + dVar50) * local_3e0 -
                 dVar50 * (dVar52 + *(double *)(param_1 + 0xf8) * 0.5 * (dVar10 - 1.0));
      }
      if (param_1[1] < 1) {
        *(double *)(param_1 + 0x186) = (*(double *)(param_1 + 0x84) - dVar53) * dVar8;
        *(double *)(param_1 + 0x188) = *(double *)(param_1 + 0x86) * dVar8;
        *(double *)(param_1 + 0x18a) =
             (*(double *)(param_1 + 0x88) + *(double *)(param_1 + 0x98) + dVar53) * dVar8;
        *(double *)(param_1 + 0x180) =
             -(*(double *)(param_1 + 0x7e) + *(double *)(param_1 + 0x8a) +
               *(double *)(param_1 + 0x84) + dVar9) * dVar8;
        *(double *)(param_1 + 0x184) =
             -(*(double *)(param_1 + 0x82) + *(double *)(param_1 + 0x8e) +
              *(double *)(param_1 + 0x88)) * dVar8;
        *(double *)(param_1 + 0x182) =
             ((*(double *)(param_1 + 0x9a) + dVar9) -
             (*(double *)(param_1 + 0x80) + *(double *)(param_1 + 0x8c) +
             *(double *)(param_1 + 0x86))) * dVar8;
        *(double *)(param_1 + 0x174) =
             (*(double *)(param_1 + 0x7e) + dVar9 + dVar53 + *(double *)(param_1 + 0x5e)) * dVar8;
        *(double *)(param_1 + 0x176) = (*(double *)(param_1 + 0x80) - dVar9) * dVar8;
        *(double *)(param_1 + 0x178) = (*(double *)(param_1 + 0x82) - dVar53) * dVar8;
        *(double *)(param_1 + 0x17a) =
             (*(double *)(param_1 + 0x8a) - *(double *)(param_1 + 0x5e)) * dVar8;
        *(double *)(param_1 + 0x17c) =
             (*(double *)(param_1 + 0x8c) - *(double *)(param_1 + 0x9a)) * dVar8;
        *(double *)(param_1 + 0x17e) =
             (*(double *)(param_1 + 0x8e) - *(double *)(param_1 + 0x98)) * dVar8;
        *(double *)(param_1 + 0x1a4) = *(double *)(param_1 + 0x94) * dVar8;
        *(double *)(param_1 + 0x1a0) = *(double *)(param_1 + 0x92) * dVar8;
        *(double *)(param_1 + 0x1a2) = *(double *)(param_1 + 0x90) * dVar8;
        *(double *)(param_1 + 0x1a6) = *(double *)(param_1 + 0x96) * dVar8;
        dVar8 = *(double *)(param_1 + 0x66) * local_3c0;
        *(double *)(param_1 + 0x72) = dVar8 * *(double *)(param_1 + 0x94);
        *(double *)(param_1 + 0x74) = dVar8 * *(double *)(param_1 + 0x96);
        *(double *)(param_1 + 0x76) = dVar8 * *(double *)(param_1 + 0x90);
        *(double *)(param_1 + 0x78) = dVar8 * *(double *)(param_1 + 0x92);
        param_1[0x1b2] = 0x33333333;
        param_1[0x1b3] = 0x3fe33333;
        param_1[0x1b4] = -0x66666666;
        param_1[0x1b5] = 0x3fd99999;
        local_3a0 = local_3a0 + dVar47 + dVar43 + *(double *)(param_1 + 0x5e) * local_3a8;
        local_390 = local_390 - *(double *)(param_1 + 0x5e) * local_3a8;
        local_380 = -(local_3a0 + local_390 + (local_380 - dVar43));
      }
      else {
        *(double *)(param_1 + 0x180) = (*(double *)(param_1 + 0x84) - dVar9) * dVar8;
        *(double *)(param_1 + 0x182) =
             (*(double *)(param_1 + 0x88) + *(double *)(param_1 + 0x9a) + dVar9) * dVar8;
        *(double *)(param_1 + 0x184) = *(double *)(param_1 + 0x86) * dVar8;
        *(double *)(param_1 + 0x186) =
             -(*(double *)(param_1 + 0x7e) + *(double *)(param_1 + 0x8a) +
               *(double *)(param_1 + 0x84) + dVar53) * dVar8;
        *(double *)(param_1 + 0x188) =
             -(*(double *)(param_1 + 0x82) + *(double *)(param_1 + 0x8e) +
              *(double *)(param_1 + 0x88)) * dVar8;
        *(double *)(param_1 + 0x18a) =
             ((*(double *)(param_1 + 0x98) + dVar53) -
             (*(double *)(param_1 + 0x80) + *(double *)(param_1 + 0x8c) +
             *(double *)(param_1 + 0x86))) * dVar8;
        *(double *)(param_1 + 0x174) =
             (*(double *)(param_1 + 0x7e) + dVar9 + dVar53 + *(double *)(param_1 + 0x5e)) * dVar8;
        *(double *)(param_1 + 0x176) = (*(double *)(param_1 + 0x82) - dVar9) * dVar8;
        *(double *)(param_1 + 0x178) = (*(double *)(param_1 + 0x80) - dVar53) * dVar8;
        *(double *)(param_1 + 0x17a) =
             (*(double *)(param_1 + 0x8a) - *(double *)(param_1 + 0x5e)) * dVar8;
        *(double *)(param_1 + 0x17c) =
             (*(double *)(param_1 + 0x8e) - *(double *)(param_1 + 0x9a)) * dVar8;
        *(double *)(param_1 + 0x17e) =
             (*(double *)(param_1 + 0x8c) - *(double *)(param_1 + 0x98)) * dVar8;
        *(double *)(param_1 + 0x1a4) = *(double *)(param_1 + 0x94) * dVar8;
        *(double *)(param_1 + 0x1a0) = *(double *)(param_1 + 0x90) * dVar8;
        *(double *)(param_1 + 0x1a2) = *(double *)(param_1 + 0x92) * dVar8;
        *(double *)(param_1 + 0x1a6) = *(double *)(param_1 + 0x96) * dVar8;
        dVar8 = *(double *)(param_1 + 0x66) * local_3c0;
        *(double *)(param_1 + 0x72) = dVar8 * *(double *)(param_1 + 0x94);
        *(double *)(param_1 + 0x74) = dVar8 * *(double *)(param_1 + 0x96);
        *(double *)(param_1 + 0x76) = dVar8 * *(double *)(param_1 + 0x90);
        *(double *)(param_1 + 0x78) = dVar8 * *(double *)(param_1 + 0x92);
        param_1[0x1b4] = 0x33333333;
        param_1[0x1b5] = 0x3fe33333;
        param_1[0x1b2] = -0x66666666;
        param_1[0x1b3] = 0x3fd99999;
        local_3a0 = local_3a0 + dVar47 + dVar43 + *(double *)(param_1 + 0x5e) * local_3a8;
        local_390 = local_390 - *(double *)(param_1 + 0x5e) * local_3a8;
        local_380 = local_380 - dVar47;
      }
      *(double *)(param_1 + 0x5c) = dVar9;
      *(double *)(param_1 + 0x5a) = dVar53;
      if (param_1[0x4d] < 1) {
        param_1[0x1a8] = 0;
        param_1[0x1a9] = 0;
        param_1[0x172] = 0;
        param_1[0x173] = 0;
      }
      else {
        uVar64 = 0;
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 9,local_3c0,0);
        if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
          uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 9,0);
          uVar64 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 9,uVar4,0);
        }
        FUN_00dafac0(param_2,param_3,param_1 + 0x1a8,param_1 + 0x172,0x3ff0000000000000,
                     CONCAT44(uVar64,*(ushort *)(param_1 + 0x4a) + 9),0,1);
      }
      if (!bVar1) {
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 3,local_3a0,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 5,
                     local_380 - *(double *)(param_1 + 0x52),0);
        uVar64 = 0;
        FUN_016eeca0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 1,
                     local_390 + *(double *)(param_1 + 0x52) + *(double *)(param_1 + 0x50),0);
        if (local_3e2 == '\0') goto LAB_00dcbed3;
        if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
          uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 1,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 1,uVar4,0);
          uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 3,0);
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 3,uVar4,0);
          uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 5,0);
          uVar64 = 0;
          FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 5,uVar4,0);
        }
        FUN_00dafac0(param_2,param_3,local_b8,local_b0,0,
                     CONCAT44(uVar64,*(ushort *)(param_1 + 0x4a) + 1),0,1);
        FUN_00dafac0(param_2,param_3,local_b8,local_b0,0,*(ushort *)(param_1 + 0x4a) + 3,0,1);
        FUN_00dafac0(param_2,param_3,local_b8,local_b0,0,*(ushort *)(param_1 + 0x4a) + 5,0,1);
      }
      dVar8 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
      dVar47 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 2,0);
      dVar9 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 6,0);
      *(double *)(param_1 + 0x164) =
           (dVar8 - *(double *)(param_1 + 0x174) * local_3a8) +
           *(double *)(param_1 + 0x176) * local_3d0 + *(double *)(param_1 + 0x178) * local_3d8 +
           ((*(double *)(param_1 + 0x72) * local_3a8 - *(double *)(param_1 + 0x76) * local_3d0) -
           *(double *)(param_1 + 0x78) * local_3d8);
      *(double *)(param_1 + 0x166) =
           (dVar47 - *(double *)(param_1 + 0x17a) * local_3a8) +
           *(double *)(param_1 + 0x17c) * local_3d0 + *(double *)(param_1 + 0x17e) * local_3d8;
      *(double *)(param_1 + 0x16a) =
           ((dVar9 - *(double *)(param_1 + 0x180) * local_3a8) +
            *(double *)(param_1 + 0x182) * local_3d0 + *(double *)(param_1 + 0x184) * local_3d8) -
           *(double *)(param_1 + 0x1b2) *
           ((*(double *)(param_1 + 0x72) * local_3a8 - *(double *)(param_1 + 0x76) * local_3d0) -
           *(double *)(param_1 + 0x78) * local_3d8);
      dVar8 = (double)FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 8,0);
      *(double *)(param_1 + 0x170) =
           (dVar8 - ((*(double *)(param_1 + 0x1a4) * local_3a8 -
                     *(double *)(param_1 + 0x1a0) * local_3d0) -
                    *(double *)(param_1 + 0x1a2) * local_3d8)) +
           ((*(double *)(param_1 + 0x72) * local_3a8 - *(double *)(param_1 + 0x76) * local_3d0) -
           *(double *)(param_1 + 0x78) * local_3d8);
      if ((*(byte *)(param_3 + 0x88) & 0x40) != 0) {
        uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 2,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 2,uVar4,0);
        uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 4,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 4,uVar4,0);
        uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 6,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 6,uVar4,0);
        uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 8,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 8,uVar4,0);
        uVar4 = FUN_016eebe0(param_2,param_3 + 0x1b8,0,(short)param_1[0x4a] + 10,0);
        FUN_016eeca0(param_2,param_3 + 0x1b8,1,(short)param_1[0x4a] + 10,uVar4,0);
      }
      goto LAB_00dcc614;
    }
  }
LAB_00dcbed3:
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  if (param_1[1] < 1) {
    param_1[0x1b2] = 0x33333333;
    param_1[0x1b3] = 0x3fe33333;
  }
  else {
    param_1[0x1b2] = -0x66666666;
    param_1[0x1b3] = 0x3fd99999;
  }
  *(double *)(param_1 + 0x1b4) = 1.0 - *(double *)(param_1 + 0x1b2);
  if (param_1[0x4d] < 1) {
    param_1[0x7a] = 0;
    param_1[0x7b] = 0;
  }
  else {
    *(double *)(param_1 + 0x7a) =
         ((*(double *)(param_1 + 0x148) * 16.0 * *(double *)(param_1 + 0x12e)) / local_3b0) /
         local_3b0;
  }
LAB_00dcc614:
  if (param_1[1] < 0) {
    *(ulonglong *)(param_1 + 0x1ac) = *(ulonglong *)(param_1 + 0x22) ^ 0x8000000000000000;
    *(ulonglong *)(param_1 + 0x1aa) = *(ulonglong *)(param_1 + 0x26) ^ 0x8000000000000000;
    param_1[0x1ae] = 0;
    param_1[0x1af] = 0;
    *(double *)(param_1 + 0x1b0) = -(*(double *)(param_1 + 0x1ac) + *(double *)(param_1 + 0x1aa));
    *(double *)(param_1 + 0x16c) =
         (double)-*param_1 *
         (local_218 + *(double *)(param_1 + 0x24) * local_3b8 +
          *(double *)(param_1 + 0x1ac) * local_3c8 + *(double *)(param_1 + 0x1aa) * local_3d0);
    param_1[0x168] = 0;
    param_1[0x169] = 0;
    *(ulonglong *)(param_1 + 0x16e) = *(ulonglong *)(param_1 + 0x7c) ^ 0x8000000000000000;
    param_1[0x19e] = 0;
    param_1[0x19f] = 0;
    *(double *)(param_1 + 0x18c) =
         *(double *)(param_1 + 0x70) + *(double *)(param_1 + 0x6e) + *(double *)(param_1 + 0x6c);
    *(ulonglong *)(param_1 + 0x18e) = *(ulonglong *)(param_1 + 0x70) ^ 0x8000000000000000;
    param_1[0x194] = 0;
    param_1[0x195] = 0;
    param_1[0x196] = 0;
    param_1[0x197] = 0;
    param_1[0x198] = 0;
    param_1[0x199] = 0;
    *(double *)(param_1 + 0x19a) =
         (-*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x6e)) - *(double *)(param_1 + 0x6c);
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x6e);
    *(undefined8 *)(param_1 + 0x192) = *(undefined8 *)(param_1 + 0x6c);
    *(undefined8 *)(param_1 + 0x19c) = *(undefined8 *)(param_1 + 0x70);
  }
  else {
    *(undefined8 *)(param_1 + 0x1ac) = *(undefined8 *)(param_1 + 0x22);
    *(undefined8 *)(param_1 + 0x1aa) = *(undefined8 *)(param_1 + 0x26);
    *(double *)(param_1 + 0x1ae) = *(double *)(param_1 + 0x1ac) + *(double *)(param_1 + 0x1aa);
    param_1[0x1b0] = 0;
    param_1[0x1b1] = 0;
    *(double *)(param_1 + 0x16c) =
         (double)*param_1 *
         (((local_218 - *(double *)(param_1 + 0x24) * local_3b8) -
          *(double *)(param_1 + 0x1ac) * local_3e0) - *(double *)(param_1 + 0x1aa) * local_3d8);
    *(ulonglong *)(param_1 + 0x168) = *(ulonglong *)(param_1 + 0x7c) ^ 0x8000000000000000;
    param_1[0x16e] = 0;
    param_1[0x16f] = 0;
    *(double *)(param_1 + 0x19e) =
         (-*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x6e)) - *(double *)(param_1 + 0x6c);
    *(ulonglong *)(param_1 + 0x18c) = *(ulonglong *)(param_1 + 0x70) ^ 0x8000000000000000;
    *(double *)(param_1 + 0x18e) =
         *(double *)(param_1 + 0x70) + *(double *)(param_1 + 0x6e) + *(double *)(param_1 + 0x6c);
    *(undefined8 *)(param_1 + 0x194) = *(undefined8 *)(param_1 + 0x6e);
    *(undefined8 *)(param_1 + 0x196) = *(undefined8 *)(param_1 + 0x6c);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x70);
    param_1[0x19a] = 0;
    param_1[0x19b] = 0;
    param_1[400] = 0;
    param_1[0x191] = 0;
    param_1[0x192] = 0;
    param_1[0x193] = 0;
    param_1[0x19c] = 0;
    param_1[0x19d] = 0;
  }
  if (*param_1 < 1) {
    *(double *)(param_1 + 0x168) =
         -*(double *)(param_1 + 0x168) -
         (*(double *)(param_1 + 0x18) -
         (*(double *)(param_1 + 0x1a) - *(double *)(param_3 + 0x430)) * local_3d8);
    *(double *)(param_1 + 0x16e) =
         -*(double *)(param_1 + 0x16e) -
         (*(double *)(param_1 + 0x1c) -
         (*(double *)(param_1 + 0x1e) - *(double *)(param_3 + 0x430)) * local_3d0);
    *(ulonglong *)(param_1 + 0x164) = *(ulonglong *)(param_1 + 0x164) ^ 0x8000000000000000;
    *(ulonglong *)(param_1 + 0x166) = *(ulonglong *)(param_1 + 0x166) ^ 0x8000000000000000;
    *(ulonglong *)(param_1 + 0x16a) = *(ulonglong *)(param_1 + 0x16a) ^ 0x8000000000000000;
    *(ulonglong *)(param_1 + 0x170) = *(ulonglong *)(param_1 + 0x170) ^ 0x8000000000000000;
  }
  else {
    *(double *)(param_1 + 0x168) =
         *(double *)(param_1 + 0x168) +
         (*(double *)(param_1 + 0x18) -
         (*(double *)(param_1 + 0x1a) - *(double *)(param_3 + 0x430)) * local_3d8);
    *(double *)(param_1 + 0x16e) =
         *(double *)(param_1 + 0x16e) +
         (*(double *)(param_1 + 0x1c) -
         (*(double *)(param_1 + 0x1e) - *(double *)(param_3 + 0x430)) * local_3d0);
    *(undefined8 *)(param_1 + 0x164) = *(undefined8 *)(param_1 + 0x164);
    *(undefined8 *)(param_1 + 0x166) = *(undefined8 *)(param_1 + 0x166);
    *(undefined8 *)(param_1 + 0x16a) = *(undefined8 *)(param_1 + 0x16a);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x170);
  }
  return;
}

