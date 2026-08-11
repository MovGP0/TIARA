/* Ghidra address: 00a11fe0 */
/* Ghidra symbol: FUN_00a11fe0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a11fe0(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined4 uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  int iVar46;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar57;
  uint uVar58;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar43 [16];
  undefined1 auVar55 [16];
  
  puVar6 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x98);
  param_1[0x4e] = (longlong)puVar6;
  *puVar6 = FUN_00a127d0;
  puVar6[2] = &DAT_00a12c40;
  puVar6[3] = &LAB_00a12c50;
  puVar6[0xe] = 0;
  puVar6[10] = 0;
  if (4 < (int)param_1[0x12]) {
    *(undefined8 *)(*param_1 + 0x28) = 0x400000037;
    (**(code **)*param_1)(param_1);
  }
  iVar19 = (int)param_1[0xf];
  if (0x100 < iVar19) {
    *(undefined8 *)(*param_1 + 0x28) = 0x10000000039;
    (**(code **)*param_1)(param_1);
    iVar19 = (int)param_1[0xf];
  }
  lVar1 = param_1[0x4e];
  uVar18 = *(uint *)(param_1 + 0x12);
  uVar23 = uVar18 - 1;
  uVar5 = uVar18 - 9 >> 3;
  uVar22 = uVar5 + 1 & 7;
  uVar10 = 1;
  do {
    uVar9 = uVar10;
    uVar10 = uVar9 + 1;
    uVar17 = uVar10;
    if (1 < (int)uVar18) {
      iVar12 = 1;
      if (7 < uVar23) {
        auVar42._4_4_ = 1;
        auVar42._0_4_ = uVar10;
        auVar42._8_8_ = 0x100000001;
        auVar45 = _DAT_01e6f320;
        iVar12 = (uVar22 - 1) - uVar5;
        uVar17 = -uVar22;
        auVar54 = _DAT_01e6f320;
        uVar4 = uVar22;
        if (0x37 < uVar18 - 9) {
          do {
            iVar46 = auVar42._4_4_;
            lVar14 = (auVar42._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar35._8_4_ = (undefined4)lVar14;
            auVar35._0_8_ = lVar14 << 0x20;
            iVar20 = auVar42._12_4_ * uVar10;
            auVar35._12_4_ = iVar20;
            lVar14 = (auVar45._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar47._8_4_ = (undefined4)lVar14;
            auVar47._0_8_ = lVar14 << 0x20;
            iVar16 = auVar45._12_4_ * uVar10;
            auVar47._12_4_ = iVar16;
            lVar14 = (auVar35._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar36._8_4_ = (undefined4)lVar14;
            auVar36._0_8_ = lVar14 << 0x20;
            iVar20 = iVar20 * uVar10;
            auVar36._12_4_ = iVar20;
            lVar14 = (auVar47._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar48._8_4_ = (undefined4)lVar14;
            auVar48._0_8_ = lVar14 << 0x20;
            iVar16 = iVar16 * uVar10;
            auVar48._12_4_ = iVar16;
            lVar14 = (auVar36._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar37._8_4_ = (undefined4)lVar14;
            auVar37._0_8_ = lVar14 << 0x20;
            iVar20 = iVar20 * uVar10;
            auVar37._12_4_ = iVar20;
            lVar14 = (auVar48._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar49._8_4_ = (undefined4)lVar14;
            auVar49._0_8_ = lVar14 << 0x20;
            iVar16 = iVar16 * uVar10;
            auVar49._12_4_ = iVar16;
            lVar14 = (auVar37._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar38._8_4_ = (undefined4)lVar14;
            auVar38._0_8_ = lVar14 << 0x20;
            iVar20 = iVar20 * uVar10;
            auVar38._12_4_ = iVar20;
            lVar14 = (auVar49._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar50._8_4_ = (undefined4)lVar14;
            auVar50._0_8_ = lVar14 << 0x20;
            iVar16 = iVar16 * uVar10;
            auVar50._12_4_ = iVar16;
            lVar14 = (auVar38._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar39._8_4_ = (undefined4)lVar14;
            auVar39._0_8_ = lVar14 << 0x20;
            iVar20 = iVar20 * uVar10;
            auVar39._12_4_ = iVar20;
            lVar14 = (auVar50._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar51._8_4_ = (undefined4)lVar14;
            auVar51._0_8_ = lVar14 << 0x20;
            iVar16 = iVar16 * uVar10;
            auVar51._12_4_ = iVar16;
            lVar14 = (auVar39._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar40._8_4_ = (undefined4)lVar14;
            auVar40._0_8_ = lVar14 << 0x20;
            iVar20 = iVar20 * uVar10;
            auVar40._12_4_ = iVar20;
            lVar14 = (auVar51._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar52._8_4_ = (undefined4)lVar14;
            auVar52._0_8_ = lVar14 << 0x20;
            iVar16 = iVar16 * uVar10;
            auVar52._12_4_ = iVar16;
            lVar14 = (auVar40._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar41._8_4_ = (undefined4)lVar14;
            auVar41._0_8_ = lVar14 << 0x20;
            iVar20 = iVar20 * uVar10;
            auVar41._12_4_ = iVar20;
            lVar14 = (auVar52._8_8_ & 0xffffffff) * (ulonglong)uVar10;
            auVar53._8_4_ = (undefined4)lVar14;
            auVar53._0_8_ = lVar14 << 0x20;
            iVar16 = iVar16 * uVar10;
            auVar53._12_4_ = iVar16;
            auVar42._0_4_ =
                 auVar42._0_4_ * uVar10 * uVar10 * uVar10 * uVar10 * uVar10 * uVar10 * uVar10 *
                 uVar10;
            auVar43._8_4_ = (undefined4)((auVar41._8_8_ & 0xffffffff) * (ulonglong)uVar10);
            auVar43._4_4_ = auVar43._8_4_;
            auVar43._0_4_ = auVar42._0_4_;
            auVar43._12_4_ = iVar20 * uVar10;
            auVar42._8_8_ = auVar43._8_8_;
            auVar42._4_4_ =
                 iVar46 * uVar10 * uVar10 * uVar10 * uVar10 * uVar10 * uVar10 * uVar10 * uVar10;
            auVar54._0_4_ =
                 auVar45._0_4_ * uVar10 * uVar10 * uVar10 * uVar10 * uVar10 * uVar10 * uVar10 *
                 uVar10;
            auVar55._8_4_ = (undefined4)((auVar53._8_8_ & 0xffffffff) * (ulonglong)uVar10);
            auVar55._4_4_ = auVar55._8_4_;
            auVar55._0_4_ = auVar54._0_4_;
            auVar55._12_4_ = iVar16 * uVar10;
            auVar54._8_8_ = auVar55._8_8_;
            auVar54._4_4_ =
                 auVar45._4_4_ * uVar10 * uVar10 * uVar10 * uVar10 * uVar10 * uVar10 * uVar10 *
                 uVar10;
            iVar12 = iVar12 + 8;
            auVar45 = auVar54;
          } while (iVar12 != 0);
        }
        while( true ) {
          auVar45._4_4_ = auVar42._4_4_;
          auVar45._12_4_ = auVar42._12_4_;
          uVar57 = auVar54._4_4_;
          uVar58 = auVar54._12_4_;
          uVar11 = auVar54._8_8_;
          if (uVar4 == 0) break;
          uVar28 = auVar42._8_8_;
          auVar42._0_4_ = auVar42._0_4_ * uVar10;
          auVar44._8_4_ = (undefined4)((uVar28 & 0xffffffff) * (ulonglong)uVar10);
          auVar44._4_4_ = auVar44._8_4_;
          auVar44._0_4_ = auVar42._0_4_;
          auVar44._12_4_ = auVar45._12_4_ * uVar10;
          auVar42._8_8_ = auVar44._8_8_;
          auVar42._4_4_ = auVar45._4_4_ * uVar10;
          auVar54._0_4_ = auVar54._0_4_ * uVar10;
          auVar56._8_4_ = (undefined4)((uVar11 & 0xffffffff) * (ulonglong)uVar10);
          auVar56._4_4_ = auVar56._8_4_;
          auVar56._0_4_ = auVar54._0_4_;
          auVar56._12_4_ = uVar58 * uVar10;
          auVar54._8_8_ = auVar56._8_8_;
          auVar54._4_4_ = uVar57 * uVar10;
          uVar17 = uVar17 + 1;
          uVar4 = uVar17;
        }
        auVar45._0_4_ = auVar45._4_4_;
        auVar45._8_4_ = auVar45._12_4_;
        uVar17 = (int)(((auVar45._8_8_ & 0xffffffff) * (ulonglong)uVar58 & 0xffffffff) *
                      ((ulonglong)auVar45._4_4_ * (ulonglong)uVar57 & 0xffffffff)) *
                 (int)(((ulonglong)auVar54._0_4_ * (ulonglong)auVar42._0_4_ & 0xffffffff) *
                      ((uVar11 & 0xffffffff) * (ulonglong)auVar42._8_4_ & 0xffffffff));
        iVar12 = (uVar23 & 0xfffffff8) + 1;
        if (uVar23 == (uVar23 & 0xfffffff8)) goto LAB_00a123d7;
      }
      iVar12 = uVar18 - iVar12;
      do {
        uVar17 = uVar17 * uVar10;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
LAB_00a123d7:
  } while ((int)uVar17 <= iVar19);
  if ((int)uVar9 < 2) {
    lVar14 = *param_1;
    *(undefined4 *)(lVar14 + 0x28) = 0x38;
    *(uint *)(lVar14 + 0x2c) = uVar17;
    (**(code **)*param_1)(param_1);
  }
  if ((int)uVar18 < 1) {
    uVar10 = 1;
LAB_00a12576:
    lVar14 = *param_1;
    if ((int)param_1[0x12] == 3) {
      *(uint *)(lVar14 + 0x2c) = uVar10;
      *(undefined4 *)(lVar14 + 0x30) = *(undefined4 *)(lVar1 + 0x3c);
      *(undefined4 *)(lVar14 + 0x34) = *(undefined4 *)(lVar1 + 0x40);
      *(undefined4 *)(lVar14 + 0x38) = *(undefined4 *)(lVar1 + 0x44);
      *(undefined4 *)(lVar14 + 0x28) = 0x5e;
    }
    else {
      *(undefined4 *)(lVar14 + 0x28) = 0x5f;
      *(uint *)(lVar14 + 0x2c) = uVar10;
      lVar14 = *param_1;
    }
    (**(code **)(lVar14 + 8))(param_1,1);
    lVar14 = (**(code **)(param_1[1] + 0x10))(param_1,1,uVar10);
    iVar19 = (int)param_1[0x12];
    if (0 < iVar19) {
      lVar15 = 0;
      uVar18 = uVar10;
      do {
        iVar12 = *(int *)(lVar1 + 0x3c + lVar15 * 4);
        uVar11 = (longlong)(int)uVar18 / (longlong)iVar12 & 0xffffffff;
        uVar5 = (uint)((longlong)(int)uVar18 / (longlong)iVar12);
        if (0 < iVar12) {
          uVar28 = (ulonglong)(uVar5 & 3);
          iVar19 = 0;
          iVar20 = 0;
          do {
            if ((int)(iVar20 * uVar5) < (int)uVar10) {
              lVar21 = (longlong)iVar19;
              uVar2 = (undefined1)
                      ((iVar20 * 0xff + ((iVar12 + -1) - (iVar12 + -1 >> 0x1f) >> 1)) /
                      (iVar12 + -1));
              do {
                if (0 < (int)uVar5) {
                  lVar13 = 0;
                  if (2 < uVar11 - 1) {
                    do {
                      *(undefined1 *)(lVar13 + *(longlong *)(lVar14 + lVar15 * 8) + lVar21) = uVar2;
                      *(undefined1 *)(lVar13 + 1 + *(longlong *)(lVar14 + lVar15 * 8) + lVar21) =
                           uVar2;
                      *(undefined1 *)(lVar13 + 2 + *(longlong *)(lVar14 + lVar15 * 8) + lVar21) =
                           uVar2;
                      *(undefined1 *)(lVar13 + 3 + *(longlong *)(lVar14 + lVar15 * 8) + lVar21) =
                           uVar2;
                      lVar13 = lVar13 + 4;
                    } while (uVar11 - uVar28 != lVar13);
                  }
                  if (uVar28 != 0) {
                    lVar13 = lVar13 + lVar21;
                    lVar24 = -uVar28;
                    do {
                      *(undefined1 *)(*(longlong *)(lVar14 + lVar15 * 8) + lVar13) = uVar2;
                      lVar13 = lVar13 + 1;
                      lVar24 = lVar24 + 1;
                    } while (lVar24 != 0);
                  }
                }
                lVar21 = lVar21 + (int)uVar18;
              } while (lVar21 < (int)uVar10);
            }
            iVar20 = iVar20 + 1;
            iVar19 = iVar19 + uVar5;
          } while (iVar20 != iVar12);
          iVar19 = (int)param_1[0x12];
        }
        lVar15 = lVar15 + 1;
        uVar18 = uVar5;
      } while (lVar15 < iVar19);
    }
    *(longlong *)(lVar1 + 0x20) = lVar14;
    *(uint *)(lVar1 + 0x28) = uVar10;
    FUN_00a12c60(param_1);
    if (((int)param_1[0xe] == 2) && (0 < (int)param_1[0x12])) {
      lVar1 = param_1[0x4e];
      lVar14 = param_1[0x11];
      lVar15 = 0;
      do {
        uVar8 = (**(code **)(param_1[1] + 8))(param_1,1,(ulonglong)((int)lVar14 + 2) * 2);
        *(undefined8 *)(lVar1 + 0x70 + lVar15 * 8) = uVar8;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)param_1[0x12]);
    }
    return;
  }
  if (uVar18 < 8) {
    uVar11 = 1;
    lVar15 = 0;
  }
  else {
    lVar15 = (ulonglong)uVar18 - (ulonglong)(uVar18 & 7);
    puVar7 = (uint *)(lVar1 + 0x4c);
    lVar14 = lVar15;
    auVar25 = _DAT_01e6f320;
    auVar29 = _DAT_01e6f320;
    do {
      puVar7[-4] = uVar9;
      puVar7[-3] = uVar9;
      puVar7[-2] = uVar9;
      puVar7[-1] = uVar9;
      *puVar7 = uVar9;
      puVar7[1] = uVar9;
      puVar7[2] = uVar9;
      puVar7[3] = uVar9;
      uVar10 = auVar25._4_4_;
      iVar12 = auVar25._12_4_;
      uVar28 = auVar25._8_8_;
      uVar11 = (ulonglong)auVar25._0_4_ * (ulonglong)uVar9;
      auVar25._0_4_ = (undefined4)uVar11;
      auVar26._8_4_ = (undefined4)((uVar28 & 0xffffffff) * (ulonglong)uVar9);
      auVar26._4_4_ = auVar26._8_4_;
      auVar26._0_4_ = auVar25._0_4_;
      uVar32 = (ulonglong)uVar10 * (ulonglong)uVar9;
      iVar12 = iVar12 * uVar9;
      uVar31 = (undefined4)uVar32;
      auVar26._12_4_ = iVar12;
      auVar25._8_8_ = auVar26._8_8_;
      auVar25._4_4_ = uVar31;
      uVar10 = auVar29._4_4_;
      uVar5 = auVar29._12_4_;
      uVar33 = auVar29._8_8_;
      uVar28 = (ulonglong)auVar29._0_4_ * (ulonglong)uVar9;
      auVar29._0_4_ = (undefined4)uVar28;
      auVar30._8_4_ = (undefined4)((uVar33 & 0xffffffff) * (ulonglong)uVar9);
      auVar30._4_4_ = auVar30._8_4_;
      auVar30._0_4_ = auVar29._0_4_;
      uVar33 = (ulonglong)uVar10 * (ulonglong)uVar9;
      uVar34 = (ulonglong)uVar5 * (ulonglong)uVar9;
      auVar30._12_4_ = (int)uVar34;
      auVar29._8_8_ = auVar30._8_8_;
      auVar29._4_4_ = (int)uVar33;
      puVar7 = puVar7 + 8;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
    auVar27._4_4_ = uVar31;
    auVar27._0_4_ = uVar31;
    auVar27._8_4_ = iVar12;
    auVar27._12_4_ = iVar12;
    uVar11 = (((auVar27._8_8_ & 0xffffffff) * (uVar34 & 0xffffffff) & 0xffffffff) *
              ((uVar32 & 0xffffffff) * (uVar33 & 0xffffffff) & 0xffffffff) & 0xffffffff) *
             (((uVar28 & 0xffffffff) * (uVar11 & 0xffffffff) & 0xffffffff) *
              ((auVar29._8_8_ & 0xffffffff) * (auVar25._8_8_ & 0xffffffff) & 0xffffffff) &
             0xffffffff) & 0xffffffff;
    if ((uVar18 & 7) == 0) goto LAB_00a1250e;
  }
  lVar14 = (ulonglong)uVar18 - lVar15;
  puVar7 = (uint *)(lVar1 + 0x3c + lVar15 * 4);
  do {
    *puVar7 = uVar9;
    uVar11 = (ulonglong)((int)uVar11 * uVar9);
    puVar7 = puVar7 + 1;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
LAB_00a1250e:
  lVar14 = param_1[8];
  lVar15 = 0;
  bVar3 = false;
LAB_00a12526:
  uVar10 = (uint)uVar11;
  iVar12 = (int)lVar15;
  if ((int)lVar14 == 2) {
    iVar12 = (&DAT_01e6f450)[lVar15];
  }
  iVar20 = *(int *)(lVar1 + 0x3c + (longlong)iVar12 * 4);
  iVar16 = iVar20 + 1;
  uVar5 = ((int)uVar10 / iVar20) * iVar16;
  if ((int)uVar5 <= iVar19) goto LAB_00a12560;
  uVar5 = uVar10;
  if (bVar3) goto LAB_00a12520;
  goto LAB_00a12576;
LAB_00a12560:
  *(int *)(lVar1 + 0x3c + (longlong)iVar12 * 4) = iVar16;
  lVar15 = lVar15 + 1;
  bVar3 = true;
  uVar11 = (ulonglong)uVar5;
  if ((int)uVar18 <= lVar15) {
LAB_00a12520:
    lVar15 = 0;
    bVar3 = false;
    uVar11 = (ulonglong)uVar5;
  }
  goto LAB_00a12526;
}

