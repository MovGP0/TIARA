/* Ghidra address: 010fff30 */
/* Ghidra symbol: FUN_010fff30 */


void FUN_010fff30(longlong *param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  int iVar19;
  double extraout_XMM0_Qa;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 in_stack_fffffffffffffd68;
  int local_268;
  int local_25c;
  int local_258;
  int local_23c;
  undefined1 local_238 [256];
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [88];
  undefined1 local_d0 [16];
  undefined8 local_c0 [2];
  undefined8 local_ac;
  undefined8 local_a4;
  undefined1 local_99 [113];
  
  local_130 = 0;
  local_138 = 0;
  (**(code **)(*param_1 + 0x68))(param_1);
  FUN_01cce3f0(param_1);
  plVar14 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
  (**(code **)(*plVar14 + 0x10))(plVar14,*(undefined8 *)(param_2 + 0x70));
  lVar15 = FUN_01a5d940(&PTR_FUN_01a5c280,1);
  plVar17 = *(longlong **)(*(longlong *)(lVar15 + 0x90) + 0x80);
  (**(code **)(*plVar17 + 0x10))(plVar17,param_1[0x14]);
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))
            (*(longlong **)(param_2 + 0x70),param_1[0x14]);
  iVar5 = FUN_005fdfd0(param_2,&DAT_011010dc);
  iVar6 = FUN_005fdff0(param_2,&DAT_011010dc);
  FUN_00410f20(lVar15);
  iVar7 = FUN_0040c770((double)(*(int *)((longlong)param_1 + 0x94) * 3) / 8.0);
  iVar7 = iVar7 * 2;
  param_1[0x29] = param_2;
  cVar4 = FUN_01cd6670(param_1);
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)((longlong)param_1 + 0x14);
    iVar8 = *(int *)((longlong)param_1 + 0x1c) - *(int *)((longlong)param_1 + 0x94);
    *(int *)((longlong)param_1 + 0xec) = iVar8;
    local_258 = iVar8 - (int)param_1[0x1d];
    FUN_010ffde0(param_1);
    lVar15 = param_1[0x2b];
    local_25c = *(int *)(lVar15 + 0xe8) - *(int *)(lVar15 + 0xec);
    FUN_010fff30(lVar15,param_2,param_3);
  }
  else {
    FUN_010ffde0(param_1);
    lVar15 = param_1[0x2b];
    *(undefined4 *)(lVar15 + 0xe8) = *(undefined4 *)(lVar15 + 0x14);
    local_25c = *(int *)(lVar15 + 0x1c) - *(int *)(lVar15 + 0x94);
    *(int *)(lVar15 + 0xec) = local_25c;
    local_25c = local_25c - *(int *)(lVar15 + 0xe8);
    FUN_010ffde0(lVar15);
  }
  local_ac = *(ulonglong *)((longlong)param_1 + 0x14);
  local_a4 = *(ulonglong *)((longlong)param_1 + 0x1c);
  iVar8 = FUN_010ffe70(param_1[0x2b]);
  if ((double)param_1[0x11] == 0.0) {
    lVar15 = FUN_00f06430(param_1[0x17],param_1[0x18]);
    param_1[0x11] = lVar15;
  }
  cVar4 = FUN_01cd6670(param_1);
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffd68 >> 0x20);
  if (cVar4 == '\0') {
    dVar22 = ((double)param_1[0x27] / ((double)param_1[0x18] - (double)param_1[0x17])) *
             (double)local_258;
    plVar17 = (longlong *)FUN_011035d0(&PTR_FUN_010fdbc0,1);
    *(undefined1 *)(plVar17 + 0xc) = 2;
    *(int *)((longlong)plVar17 + 0x5c) = iVar7;
    FUN_005fd4e0(plVar17[9],0xc0c0c0);
    uVar12 = FUN_0040c770((double)(int)param_1[0x1d] + dVar22);
    iVar5 = FUN_0040c770((double)*(int *)((longlong)plVar17 + 0x5c) / 2.0);
    local_c0[0] = FUN_00498310(uVar12,*(int *)(param_1[0x2b] + 0xe8) - iVar5);
    (**(code **)(*plVar17 + 200))(plVar17,local_c0);
    uVar16 = CONCAT44(uVar11,*(undefined4 *)(param_1[0x2b] + 0x20));
    FUN_00498350(local_d0,local_ac & 0xffffffff,*(undefined4 *)(param_1[0x2b] + 0x18),
                 local_a4 & 0xffffffff,uVar16);
    uVar12 = (undefined4)((ulonglong)uVar16 >> 0x20);
    (**(code **)(*plVar17 + 0xb0))(plVar17,local_d0);
    (**(code **)(*plVar17 + 0x50))(plVar17,(char)param_1[2]);
    *(undefined1 *)((longlong)plVar17 + 0x62) = 1;
    *(undefined1 *)((longlong)plVar17 + 0x61) = 0;
    (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"HPBMarker",plVar17);
    plVar17 = (longlong *)FUN_011035d0(&PTR_FUN_010fdbc0,1);
    *(undefined1 *)(plVar17 + 0xc) = 2;
    *(int *)((longlong)plVar17 + 0x5c) = iVar7;
    FUN_005fd4e0(plVar17[9],0xc0c0c0);
    uVar11 = FUN_0040c770((double)(int)param_1[0x1d] + dVar22);
    iVar7 = FUN_0040c770((double)*(int *)((longlong)plVar17 + 0x5c) / 2.0);
    local_c0[0] = FUN_00498310(uVar11,*(int *)(param_1[0x2b] + 0xec) + iVar7);
    (**(code **)(*plVar17 + 200))(plVar17,local_c0);
    FUN_00498350(local_d0,local_ac & 0xffffffff,*(undefined4 *)(param_1[0x2b] + 0x18),
                 local_a4 & 0xffffffff,CONCAT44(uVar12,*(undefined4 *)(param_1[0x2b] + 0x20)));
    (**(code **)(*plVar17 + 0xb0))(plVar17,local_d0);
    (**(code **)(*plVar17 + 0x50))(plVar17,(char)param_1[2]);
    *(undefined1 *)((longlong)plVar17 + 0x62) = 1;
    *(undefined1 *)((longlong)plVar17 + 0x61) = 1;
    dVar20 = (double)(**(code **)(*(longlong *)param_1[9] + 0x80))
                               ((longlong *)param_1[9],L"HPTMarker",plVar17);
    if ((char)param_1[0x2c] != '\0') {
      lVar15 = FUN_01d2b190(&PTR_FUN_01d29210,1);
      uVar11 = FUN_0040c770((double)(int)param_1[0x1d] + dVar22);
      iVar7 = FUN_0040c770((double)*(int *)((longlong)plVar17 + 0x5c) / 2.0);
      FUN_01d2c460(lVar15,uVar11,*(int *)(param_1[0x2b] + 0xe8) - iVar7);
      uVar11 = FUN_0040c770((double)(int)param_1[0x1d] + dVar22);
      iVar7 = FUN_0040c770((double)*(int *)((longlong)plVar17 + 0x5c) / 2.0);
      FUN_01d2c460(lVar15,uVar11,*(int *)(param_1[0x2b] + 0xec) + iVar7);
      FUN_005fd4e0(*(undefined8 *)(lVar15 + 0x60),0xc0c0c0);
      dVar20 = (double)(**(code **)(*(longlong *)param_1[9] + 0x80))
                                 ((longlong *)param_1[9],L"HPMarkerLine",lVar15);
    }
    local_268 = 0;
    if (-1 < *(int *)((longlong)param_1 + 0x74)) {
      iVar7 = *(int *)((longlong)param_1 + 0x74) + 1;
      do {
        if (local_268 < *(int *)((longlong)param_1 + 0x74)) {
          local_23c = 1;
          do {
            lVar15 = FUN_0040c770((((double)local_268 + (double)local_23c * 0.25) *
                                  (double)local_258) / (double)*(int *)((longlong)param_1 + 0x74));
            lVar18 = FUN_0040c770(dVar22);
            if (lVar15 != lVar18) {
              lVar15 = FUN_01d2b190(&PTR_FUN_01d29210,1);
              uVar11 = FUN_0040c770((double)(int)param_1[0x1d] +
                                    (((double)local_268 + (double)local_23c * 0.25) *
                                    (double)local_258) / (double)*(int *)((longlong)param_1 + 0x74))
              ;
              uVar12 = FUN_0040c770((double)iVar8 -
                                    (double)*(int *)((longlong)param_1 + 0x94) * 0.25);
              FUN_01d2c460(lVar15,uVar11,uVar12);
              uVar11 = FUN_0040c770((double)(int)param_1[0x1d] +
                                    (((double)local_268 + (double)local_23c * 0.25) *
                                    (double)local_258) / (double)*(int *)((longlong)param_1 + 0x74))
              ;
              uVar12 = FUN_0040c770((double)iVar8 +
                                    (double)*(int *)((longlong)param_1 + 0x94) * 0.25);
              FUN_01d2c460(lVar15,uVar11,uVar12);
              FUN_005fd4e0(*(undefined8 *)(lVar15 + 0x60),0xc0c0c0);
              (**(code **)(*(longlong *)param_1[9] + 0x80))
                        ((longlong *)param_1[9],L"ScaleSubLine",lVar15);
            }
            local_23c = local_23c + 1;
          } while (local_23c != 4);
        }
        dVar20 = ((double)param_1[0x18] - (double)param_1[0x17]) /
                 (double)*(int *)((longlong)param_1 + 0x74);
        local_268 = local_268 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else {
    dVar20 = extraout_XMM0_Qa;
    if (cVar4 == '\x01') {
      local_23c = *(int *)(param_1[0x2b] + 0xe8) + iVar6;
      iVar19 = 0;
      iVar9 = (**(code **)(*(longlong *)param_1[0x2a] + 0x28))();
      uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffd68 >> 0x20);
      local_268 = 0;
      if (-1 < iVar9 + -1) {
        do {
          uVar16 = (**(code **)(*(longlong *)param_1[0x2a] + 0x30))
                             ((longlong *)param_1[0x2a],local_268);
          lVar15 = FUN_004113f0(uVar16,&PTR_FUN_01105a20);
          if (*(char *)(lVar15 + 0x11) != '\0') {
            plVar17 = (longlong *)FUN_010ff880(&PTR_FUN_010fd440,1);
            (**(code **)(*(longlong *)plVar17[0x14] + 0x10))
                      ((longlong *)plVar17[0x14],param_1[0x13]);
            FUN_005fc860(plVar17[0x14],
                         *(undefined4 *)
                          (PTR_DAT_02003c00 + (longlong)((*(int *)(lVar15 + 0x80) + 1) % 0xb) * 4));
            FUN_010c1330(local_128,*(undefined8 *)(lVar15 + 0x118),*(undefined1 *)(lVar15 + 0x2c),
                         local_99,2);
            FUN_00415020(local_99,local_128,0x50);
            FUN_004169a0(&local_138,local_99);
            in_stack_fffffffffffffd68 = local_138;
            FUN_00416cd0(&local_130,3,*(undefined8 *)(lVar15 + 8),&DAT_01101180,local_138);
            FUN_00416910(local_238,local_130,0xff);
            FUN_00415020(local_99,local_238,0x50);
            FUN_004169a0(plVar17 + 0x15,local_99);
            iVar10 = FUN_010ffaa0(plVar17,param_2);
            if (*(int *)(param_1[0x2b] + 0x1c) < local_23c + iVar10) {
              local_23c = *(int *)(param_1[0x2b] + 0xe8) + iVar6;
              iVar19 = iVar19 + 1;
            }
            uVar11 = FUN_0040c770((double)local_23c);
            uVar12 = FUN_0040c770((double)(local_ac._4_4_ + iVar19 * iVar5));
            local_c0[0] = FUN_00498310(uVar11,uVar12);
            (**(code **)(*plVar17 + 200))(plVar17,local_c0);
            iVar10 = FUN_010ffaa0(plVar17,param_2);
            local_23c = iVar10 + local_23c + iVar6 * 2;
            (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"ChnDiv",plVar17);
          }
          uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffd68 >> 0x20);
          local_268 = local_268 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      *(int *)(param_1 + 0x1d) = (int)param_1[4];
      *(int *)((longlong)param_1 + 0xec) = (int)param_1[3] + (iVar19 + 1) * iVar5;
      iVar5 = (int)param_1[0x1d] - *(int *)((longlong)param_1 + 0xec);
      lVar15 = param_1[0x2b];
      dVar20 = *(double *)(lVar15 + 0xc0);
      dVar22 = *(double *)(lVar15 + 0xb8);
      dVar1 = *(double *)(lVar15 + 0x138);
      dVar21 = (((double)param_1[0x25] - (double)param_1[0x17]) /
               ((double)param_1[0x18] - (double)param_1[0x17])) * (double)iVar5;
      plVar17 = (longlong *)FUN_011035d0(&PTR_FUN_010fdbc0,1);
      *(undefined1 *)(plVar17 + 0xc) = 8;
      uVar12 = FUN_0040c770((double)*(int *)((longlong)param_1 + 0x94) / 2.0);
      *(undefined4 *)((longlong)plVar17 + 0x5c) = uVar12;
      FUN_005fd4e0(plVar17[9],0xc0c0c0);
      uVar12 = FUN_0040c770((double)*(int *)(param_1[0x2b] + 0xe8) +
                            (dVar1 / (dVar20 - dVar22)) * (double)local_25c);
      uVar13 = FUN_0040c770((double)(int)param_1[0x1d] - dVar21);
      local_c0[0] = FUN_00498310(uVar12,uVar13);
      (**(code **)(*plVar17 + 200))(plVar17,local_c0);
      uVar16 = CONCAT44(uVar11,local_a4._4_4_);
      FUN_00498350(local_d0,*(undefined4 *)(param_1[0x2b] + 0x14),local_ac._4_4_,
                   *(undefined4 *)(param_1[0x2b] + 0x1c),uVar16);
      (**(code **)(*plVar17 + 0xb0))(plVar17,local_d0);
      (**(code **)(*plVar17 + 0x50))(plVar17,(char)param_1[2]);
      *(undefined1 *)((longlong)plVar17 + 0x62) = 1;
      if ((char)param_1[0x26] == '\0') {
        *(undefined1 *)((longlong)plVar17 + 0x61) = 0;
      }
      else {
        *(undefined1 *)((longlong)plVar17 + 0x61) = 1;
      }
      (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"TLPosMarker",plVar17);
      if ((char)param_1[0x2c] != '\0') {
        lVar15 = FUN_01d2b190(&PTR_FUN_01d29210,1);
        uVar11 = FUN_0040c770((double)(int)param_1[0x1d] - dVar21);
        FUN_01d2c460(lVar15,*(undefined4 *)(param_1[0x2b] + 0xe8),uVar11);
        uVar11 = FUN_0040c770((double)(int)param_1[0x1d] - dVar21);
        FUN_01d2c460(lVar15,*(undefined4 *)(param_1[0x2b] + 0xec),uVar11);
        FUN_005fd4e0(*(undefined8 *)(lVar15 + 0x60),0xc0c0c0);
        (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"TLMarkerLine",lVar15)
        ;
      }
      iVar6 = (**(code **)(*(longlong *)param_1[0x2a] + 0x28))();
      local_268 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar15 = (**(code **)(*(longlong *)param_1[0x2a] + 0x30))
                             ((longlong *)param_1[0x2a],local_268);
          uVar11 = (undefined4)((ulonglong)uVar16 >> 0x20);
          if (*(char *)(lVar15 + 0x11) != '\0') {
            plVar17 = (longlong *)FUN_011035d0(&PTR_FUN_010fdbc0,1);
            *(undefined1 *)(plVar17 + 0xc) = 7;
            (**(code **)(*plVar17 + 0x50))(plVar17,(char)param_1[2]);
            *(undefined1 *)((longlong)plVar17 + 0x62) = 1;
            bVar2 = *(byte *)(lVar15 + 0x120);
            dVar20 = *(double *)(lVar15 + 0x118);
            dVar22 = *(double *)(lVar15 + 0x110);
            bVar3 = *(byte *)(lVar15 + 0x120);
            dVar1 = *(double *)(lVar15 + 0x118);
            lVar18 = param_1[0x1d];
            iVar9 = *(int *)((longlong)param_1 + 0xec);
            *(int *)((longlong)plVar17 + 0x5c) = iVar7;
            FUN_005fd4e0(plVar17[9],
                         *(undefined4 *)
                          (PTR_DAT_02003c00 + (longlong)((*(int *)(lVar15 + 0x80) + 1) % 0xb) * 4));
            iVar19 = FUN_0040c770((double)*(int *)((longlong)plVar17 + 0x5c) / 2.0);
            uVar12 = FUN_0040c770((double)(int)param_1[0x1d] -
                                  ((dVar22 + (dVar20 * (double)bVar2) / 2.0) /
                                  (dVar1 * (double)bVar3)) * (double)((int)lVar18 - iVar9));
            local_c0[0] = FUN_00498310(*(int *)(param_1[0x2b] + 0xec) - iVar19,uVar12);
            (**(code **)(*plVar17 + 200))(plVar17,local_c0);
            uVar16 = CONCAT44(uVar11,(int)param_1[0x1d]);
            FUN_00498350(local_d0,*(undefined4 *)(param_1[0x2b] + 0xe8),
                         *(undefined4 *)((longlong)param_1 + 0xec),
                         *(undefined4 *)(param_1[0x2b] + 0xec),uVar16);
            (**(code **)(*plVar17 + 0xb0))(plVar17,local_d0);
            (**(code **)(*(longlong *)param_1[9] + 0x80))((longlong *)param_1[9],L"ChnPos",plVar17);
          }
          local_268 = local_268 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      dVar20 = (double)iVar5;
      dVar22 = (((double)param_1[0x25] - (double)param_1[0x17]) /
               ((double)param_1[0x18] - (double)param_1[0x17])) * dVar20;
      local_268 = 0;
      if (-1 < *(int *)((longlong)param_1 + 0x74)) {
        iVar7 = *(int *)((longlong)param_1 + 0x74) + 1;
        do {
          if (local_268 < *(int *)((longlong)param_1 + 0x74)) {
            local_23c = 1;
            do {
              lVar15 = FUN_0040c770((((double)local_268 + (double)local_23c * 0.25) * (double)iVar5)
                                    / (double)*(int *)((longlong)param_1 + 0x74));
              lVar18 = FUN_0040c770(dVar22);
              if (lVar15 != lVar18) {
                lVar15 = FUN_01d2b190(&PTR_FUN_01d29210,1);
                uVar11 = FUN_0040c770((double)iVar8 -
                                      (double)*(int *)((longlong)param_1 + 0x94) * 0.25);
                uVar12 = FUN_0040c770((double)(int)param_1[0x1d] -
                                      (((double)local_268 + (double)local_23c * 0.25) *
                                      (double)iVar5) / (double)*(int *)((longlong)param_1 + 0x74));
                FUN_01d2c460(lVar15,uVar11,uVar12);
                uVar11 = FUN_0040c770((double)iVar8 +
                                      (double)*(int *)((longlong)param_1 + 0x94) * 0.25);
                uVar12 = FUN_0040c770((double)(int)param_1[0x1d] -
                                      (((double)local_268 + (double)local_23c * 0.25) *
                                      (double)iVar5) / (double)*(int *)((longlong)param_1 + 0x74));
                FUN_01d2c460(lVar15,uVar11,uVar12);
                FUN_005fd4e0(*(undefined8 *)(lVar15 + 0x60),0xc0c0c0);
                (**(code **)(*(longlong *)param_1[9] + 0x80))
                          ((longlong *)param_1[9],L"ScaleSubLine",lVar15);
              }
              local_23c = local_23c + 1;
            } while (local_23c != 4);
          }
          dVar20 = ((double)param_1[0x18] - (double)param_1[0x17]) /
                   (double)*(int *)((longlong)param_1 + 0x74);
          local_268 = local_268 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      *(int *)(param_1 + 0x1d) = local_a4._4_4_;
      *(int *)((longlong)param_1 + 0xec) = local_a4._4_4_ - iVar5;
    }
  }
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x10))(dVar20,plVar14);
  FUN_00410f20(plVar14);
  FUN_00414560(&local_138,2);
  return;
}

