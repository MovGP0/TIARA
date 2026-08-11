/* Ghidra address: 00a13ae0 */
/* Ghidra symbol: FUN_00a13ae0 */


/* WARNING: Removing unreachable block (ram,0x00a13d5a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a13ae0(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined8 uVar9;
  undefined1 auVar10 [14];
  undefined1 auVar11 [16];
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  ulonglong *puVar18;
  int iVar19;
  int *piVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  char cVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int *piVar28;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  uint uVar32;
  ulonglong *puVar33;
  longlong lVar34;
  byte bVar35;
  ushort *puVar36;
  uint uVar37;
  longlong lVar38;
  ulonglong uVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  ulonglong uVar50;
  uint uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar59;
  undefined1 auVar58 [16];
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  
  lVar4 = param_1[0x4e];
  param_1[0x14] = *(longlong *)(lVar4 + 0x20);
  iVar12 = *(int *)(lVar4 + 0x28);
  lVar23 = (longlong)iVar12;
  uVar29 = 1;
  piVar13 = (int *)(**(code **)param_1[1])(param_1,1,lVar23 << 5);
  uVar9 = uRam0000000001e6f5a8;
  *(undefined8 *)piVar13 = _DAT_01e6f5a0;
  *(undefined8 *)(piVar13 + 2) = uVar9;
  piVar13[4] = 0;
  piVar13[5] = 0x1f;
  FUN_00a14800(param_1);
  if (1 < lVar23) {
    uVar37 = 1;
    lVar34 = -1;
    bVar35 = 1;
    uVar39 = 1;
    uVar21 = 0;
    do {
      uVar1 = uVar21 + 1;
      uVar29 = uVar39 & 0xffffffff;
      if (iVar12 < (int)uVar39 * 2) {
        if (uVar21 < 3) {
          piVar20 = (int *)0x0;
          iVar17 = 0;
          piVar15 = piVar13;
        }
        else {
          lVar31 = lVar34 + (ulonglong)(bVar35 & 3);
          piVar20 = (int *)0x0;
          iVar17 = 0;
          piVar15 = piVar13 + 0x10;
          do {
            piVar14 = piVar15;
            iVar22 = piVar14[-10];
            iVar26 = piVar14[-2];
            iVar25 = iVar17;
            if (iVar17 <= iVar22) {
              iVar25 = iVar22;
            }
            piVar15 = piVar14 + -0x10;
            if (iVar22 <= iVar17) {
              piVar15 = piVar20;
            }
            iVar17 = iVar25;
            if (iVar25 <= iVar26) {
              iVar17 = iVar26;
            }
            piVar28 = piVar14 + -8;
            if (iVar26 <= iVar25) {
              piVar28 = piVar15;
            }
            iVar22 = piVar14[6];
            iVar26 = iVar17;
            if (iVar17 <= iVar22) {
              iVar26 = iVar22;
            }
            if (iVar17 < iVar22) {
              piVar28 = piVar14;
            }
            iVar22 = piVar14[0xe];
            iVar17 = iVar26;
            if (iVar26 <= iVar22) {
              iVar17 = iVar22;
            }
            piVar20 = piVar14 + 8;
            if (iVar22 <= iVar26) {
              piVar20 = piVar28;
            }
            lVar31 = lVar31 + 4;
            piVar15 = piVar14 + 0x20;
          } while (lVar31 != 0);
          piVar15 = piVar14 + 0x10;
        }
        if ((uVar1 & 3) != 0) {
          lVar31 = -(ulonglong)(bVar35 & 3);
          do {
            iVar22 = piVar15[6];
            iVar26 = iVar17;
            if (iVar17 <= iVar22) {
              iVar26 = iVar22;
            }
            if (iVar17 < iVar22) {
              piVar20 = piVar15;
            }
            piVar15 = piVar15 + 8;
            lVar31 = lVar31 + 1;
            iVar17 = iVar26;
          } while (lVar31 != 0);
        }
      }
      else {
        if (uVar21 == 0) {
          piVar20 = (int *)0x0;
          iVar17 = 0;
          piVar15 = piVar13;
        }
        else {
          lVar31 = (ulonglong)(bVar35 & 1) + lVar34;
          piVar20 = (int *)0x0;
          iVar17 = 0;
          piVar15 = piVar13 + 8;
          do {
            piVar14 = piVar15;
            if ((iVar17 < piVar14[-1]) && (0 < piVar14[-2])) {
              piVar20 = piVar14 + -8;
              iVar17 = piVar14[-1];
            }
            if ((iVar17 < piVar14[7]) && (0 < piVar14[6])) {
              piVar20 = piVar14;
              iVar17 = piVar14[7];
            }
            lVar31 = lVar31 + 2;
            piVar15 = piVar14 + 0x10;
          } while (lVar31 != 0);
          piVar15 = piVar14 + 8;
          if ((uVar1 & 1) == 0) goto LAB_00a13d60;
        }
        if ((iVar17 < piVar15[7]) && (0 < piVar15[6])) {
          piVar20 = piVar15;
        }
      }
LAB_00a13d60:
      if (piVar20 == (int *)0x0) break;
      piVar13[uVar39 * 8 + 5] = piVar20[5];
      uVar9 = *(undefined8 *)(piVar20 + 2);
      *(undefined8 *)(piVar13 + uVar39 * 8) = *(undefined8 *)piVar20;
      *(undefined8 *)(piVar13 + uVar39 * 8 + 2) = uVar9;
      piVar13[uVar39 * 8 + 4] = piVar20[4];
      iVar17 = (piVar20[3] - piVar20[2]) * 0xc;
      iVar26 = (piVar20[5] - piVar20[4]) * 0x10;
      iVar22 = iVar26;
      if (iVar26 < iVar17) {
        iVar22 = iVar17;
      }
      if (iVar22 < (piVar20[1] - *piVar20) * 8) {
        cVar24 = '\0';
      }
      else {
        cVar24 = (iVar17 < iVar26) + '\x01';
      }
      if (cVar24 == '\x02') {
        piVar15 = piVar13 + 4;
        iVar17 = (piVar20[4] + piVar20[5]) / 2;
        piVar20[5] = iVar17;
LAB_00a13e73:
        piVar15[uVar39 * 8] = iVar17 + 1;
      }
      else {
        if (cVar24 == '\x01') {
          piVar15 = piVar13 + 2;
          iVar17 = (piVar20[2] + piVar20[3]) / 2;
          piVar20[3] = iVar17;
          goto LAB_00a13e73;
        }
        if (cVar24 == '\0') {
          iVar17 = (*piVar20 + piVar20[1]) / 2;
          piVar20[1] = iVar17;
          piVar15 = piVar13;
          goto LAB_00a13e73;
        }
      }
      FUN_00a14800(param_1);
      FUN_00a14800(param_1);
      uVar39 = uVar39 + 1;
      uVar37 = uVar37 + 1;
      lVar34 = lVar34 + -1;
      bVar35 = bVar35 + 1;
      uVar29 = (ulonglong)uVar37;
      uVar21 = uVar1;
    } while ((longlong)uVar39 < lVar23);
    if ((int)uVar29 < 1) goto LAB_00a142ab;
  }
  auVar11 = _DAT_01e6f5c0;
  uVar21 = 0;
  do {
    iVar22 = 0;
    iVar12 = 0;
    iVar17 = 0;
    iVar26 = 0;
    if (piVar13[uVar21 * 8] <= piVar13[uVar21 * 8 + 1]) {
      iVar25 = piVar13[uVar21 * 8 + 2];
      iVar2 = piVar13[uVar21 * 8 + 4];
      iVar3 = piVar13[uVar21 * 8 + 5];
      iVar12 = iVar3;
      if (iVar3 <= iVar2) {
        iVar12 = iVar2;
      }
      uVar39 = (ulonglong)(uint)(iVar12 - iVar2) + 1;
      uVar37 = (iVar12 - iVar2) + 1U & 3;
      lVar34 = uVar39 - uVar37;
      iVar26 = 0;
      iVar17 = 0;
      iVar12 = 0;
      iVar22 = 0;
      lVar23 = (longlong)piVar13[uVar21 * 8];
      do {
        if (iVar25 <= piVar13[uVar21 * 8 + 3]) {
          lVar31 = *(longlong *)(*(longlong *)(param_1[0x4e] + 0x30) + lVar23 * 8);
          iVar19 = (int)lVar23 * 8;
          auVar58._4_4_ = iVar19;
          auVar58._0_4_ = iVar19;
          auVar58._8_4_ = iVar19;
          auVar58._12_4_ = iVar19;
          auVar58 = auVar58 | auVar11;
          puVar33 = (ulonglong *)((longlong)iVar25 * 0x40 + lVar31 + (longlong)iVar2 * 2);
          lVar38 = (longlong)iVar25;
          do {
            if (iVar2 <= iVar3) {
              puVar36 = (ushort *)(lVar38 * 0x40 + lVar31 + (longlong)iVar2 * 2);
              iVar27 = (int)lVar38 * 4 + 2;
              iVar19 = iVar2;
              if (3 < uVar39) {
                puVar36 = puVar36 + lVar34;
                iVar60 = 0;
                iVar61 = 0;
                iVar62 = 0;
                iVar63 = 0;
                iVar64 = 0;
                iVar65 = 0;
                iVar55 = 0;
                iVar56 = 0;
                iVar57 = 0;
                iVar40 = 0;
                iVar41 = 0;
                iVar42 = 0;
                lVar16 = lVar34;
                puVar18 = puVar33;
                iVar19 = iVar2 + _DAT_01e6f5b0;
                iVar30 = iVar2 + iRam0000000001e6f5b4;
                iVar43 = iVar2 + iRam0000000001e6f5b8;
                iVar44 = iVar2 + iRam0000000001e6f5bc;
                do {
                  uVar1 = *puVar18;
                  auVar7._8_4_ = 0;
                  auVar7._0_8_ = uVar1;
                  auVar7._12_2_ = (short)(uVar1 >> 0x30);
                  auVar8._8_2_ = (short)(uVar1 >> 0x20);
                  auVar8._0_8_ = uVar1;
                  auVar8._10_4_ = auVar7._10_4_;
                  uVar50 = (ulonglong)auVar8._8_6_;
                  auVar10._6_8_ = 0;
                  auVar10._0_6_ = auVar8._8_6_;
                  uVar45 = (uint)(ushort)uVar1;
                  iVar47 = (int)CONCAT82(SUB148(auVar10 << 0x40,6),(short)(uVar1 >> 0x10));
                  uVar32 = auVar7._10_4_ >> 0x10;
                  iVar59 = auVar58._4_4_;
                  auVar52._4_4_ = iVar59;
                  auVar52._0_4_ = iVar59;
                  auVar52._8_4_ = auVar58._12_4_;
                  auVar52._12_4_ = auVar58._12_4_;
                  auVar6._4_4_ = iVar27;
                  auVar6._0_4_ = iVar27;
                  auVar6._8_4_ = iVar27;
                  auVar6._12_4_ = iVar27;
                  auVar53._4_4_ = iVar27;
                  auVar53._0_4_ = iVar27;
                  auVar53._8_4_ = iVar27;
                  auVar53._12_4_ = iVar27;
                  auVar54._0_4_ = iVar19 << 3;
                  auVar54._4_4_ = iVar30 << 3;
                  auVar54._8_4_ = iVar43 << 3;
                  auVar54._12_4_ = iVar44 << 3;
                  auVar54 = auVar54 | auVar11;
                  iVar22 = iVar22 + uVar45;
                  iVar40 = iVar40 + iVar47;
                  iVar41 = iVar41 + auVar8._8_4_;
                  iVar42 = iVar42 + uVar32;
                  uVar46 = -(uint)(uVar45 == 0);
                  uVar48 = -(uint)(iVar47 == 0);
                  uVar49 = -(uint)(auVar8._8_4_ == 0);
                  uVar51 = -(uint)(uVar32 == 0);
                  iVar12 = iVar12 + (~uVar46 & auVar58._0_4_ * uVar45);
                  iVar55 = iVar55 + (~uVar48 & iVar59 * iVar47);
                  iVar56 = iVar56 + (~uVar49 &
                                    (uint)((auVar58._8_8_ & 0xffffffff) * (uVar50 & 0xffffffff)));
                  iVar57 = iVar57 + (~uVar51 &
                                    (uint)((auVar52._8_8_ & 0xffffffff) * (ulonglong)uVar32));
                  iVar17 = iVar17 + (~uVar46 & iVar27 * uVar45);
                  iVar63 = iVar63 + (~uVar48 & iVar27 * iVar47);
                  iVar64 = iVar64 + (~uVar49 &
                                    (uint)((auVar6._8_8_ & 0xffffffff) * (uVar50 & 0xffffffff)));
                  iVar65 = iVar65 + (~uVar51 &
                                    (uint)((auVar53._8_8_ & 0xffffffff) * (ulonglong)uVar32));
                  iVar26 = iVar26 + (~uVar46 & auVar54._0_4_ * uVar45);
                  iVar60 = iVar60 + (~uVar48 & auVar54._4_4_ * iVar47);
                  iVar61 = iVar61 + (~uVar49 &
                                    (uint)((auVar54._8_8_ & 0xffffffff) * (uVar50 & 0xffffffff)));
                  iVar62 = iVar62 + (~uVar51 & auVar54._12_4_ * uVar32);
                  iVar19 = iVar19 + auVar11._0_4_;
                  iVar30 = iVar30 + auVar11._4_4_;
                  iVar43 = iVar43 + auVar11._8_4_;
                  iVar44 = iVar44 + auVar11._12_4_;
                  puVar18 = puVar18 + 1;
                  lVar16 = lVar16 + -4;
                } while (lVar16 != 0);
                iVar22 = iVar42 + iVar40 + iVar41 + iVar22;
                iVar12 = iVar57 + iVar55 + iVar56 + iVar12;
                iVar17 = iVar65 + iVar63 + iVar64 + iVar17;
                iVar26 = iVar62 + iVar60 + iVar61 + iVar26;
                iVar19 = (int)lVar34 + iVar2;
                if (uVar37 == 0) goto LAB_00a14215;
              }
              iVar30 = iVar19 + -1;
              iVar19 = iVar19 * 8 + 4;
              do {
                if (*puVar36 != 0) {
                  uVar32 = (uint)*puVar36;
                  iVar22 = iVar22 + uVar32;
                  iVar12 = iVar12 + ((int)lVar23 * 8 + 4) * uVar32;
                  iVar17 = iVar17 + iVar27 * uVar32;
                  iVar26 = iVar26 + uVar32 * iVar19;
                }
                puVar36 = puVar36 + 1;
                iVar30 = iVar30 + 1;
                iVar19 = iVar19 + 8;
              } while (iVar30 < iVar3);
            }
LAB_00a14215:
            puVar33 = puVar33 + 8;
            bVar5 = lVar38 < piVar13[uVar21 * 8 + 3];
            lVar38 = lVar38 + 1;
          } while (bVar5);
        }
        bVar5 = lVar23 < piVar13[uVar21 * 8 + 1];
        lVar23 = lVar23 + 1;
      } while (bVar5);
    }
    iVar25 = iVar22 >> 1;
    *(char *)(*(longlong *)param_1[0x14] + uVar21) = (char)((iVar12 + iVar25) / iVar22);
    *(char *)(*(longlong *)(param_1[0x14] + 8) + uVar21) = (char)((iVar17 + iVar25) / iVar22);
    *(char *)(*(longlong *)(param_1[0x14] + 0x10) + uVar21) = (char)((iVar25 + iVar26) / iVar22);
    uVar21 = uVar21 + 1;
  } while (uVar21 != uVar29);
LAB_00a142ab:
  *(int *)((longlong)param_1 + 0x9c) = (int)uVar29;
  lVar23 = *param_1;
  *(undefined4 *)(lVar23 + 0x28) = 0x60;
  *(int *)(lVar23 + 0x2c) = (int)uVar29;
  (**(code **)(*param_1 + 8))(param_1,1);
  *(undefined4 *)(lVar4 + 0x38) = 1;
  return;
}

