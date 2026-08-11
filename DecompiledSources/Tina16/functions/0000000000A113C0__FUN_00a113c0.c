/* Ghidra address: 00a113c0 */
/* Ghidra symbol: FUN_00a113c0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a113c0(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  int iVar29;
  undefined4 *puVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  int iVar34;
  int iVar35;
  int iVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar40;
  undefined1 auVar38 [16];
  int iVar41;
  ulonglong uVar42;
  
  puVar25 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x4d] = (longlong)puVar25;
  *puVar25 = &DAT_00a11ab0;
  iVar29 = *(int *)((longlong)param_1 + 0x3c);
  if (iVar29 - 2U < 2) {
    if ((int)param_1[7] != 3) goto LAB_00a11433;
  }
  else if (iVar29 - 4U < 2) {
    if ((int)param_1[7] != 4) goto LAB_00a11433;
  }
  else if (iVar29 == 1) {
    if ((int)param_1[7] != 1) {
LAB_00a11433:
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 10;
      (*(code *)*puVar2)(param_1);
    }
  }
  else if ((int)param_1[7] < 1) goto LAB_00a11433;
  iVar29 = (int)param_1[8];
  if (iVar29 == 4) {
    *(undefined4 *)(param_1 + 0x12) = 4;
    if (*(int *)((longlong)param_1 + 0x3c) == 4) {
LAB_00a118c1:
      puVar25[1] = FUN_00a11d30;
      goto LAB_00a118dd;
    }
    if (*(int *)((longlong)param_1 + 0x3c) == 5) {
      puVar25[1] = FUN_00a11e90;
      lVar32 = param_1[0x4d];
      uVar27 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar32 + 0x10) = uVar27;
      uVar27 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar32 + 0x18) = uVar27;
      uVar27 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar32 + 0x20) = uVar27;
      uVar28 = (**(code **)param_1[1])(param_1,1,0x400);
      *(ulonglong *)(lVar32 + 0x28) = uVar28;
      iVar23 = iRam0000000001e6f29c;
      iVar22 = iRam0000000001e6f298;
      iVar21 = iRam0000000001e6f294;
      iVar20 = _DAT_01e6f290;
      uVar19 = uRam0000000001e6f288;
      iVar18 = _DAT_01e6f280;
      uVar17 = uRam0000000001e6f278;
      iVar16 = _DAT_01e6f270;
      uVar15 = uRam0000000001e6f268;
      iVar14 = _DAT_01e6f260;
      iVar13 = iRam0000000001e6f25c;
      iVar35 = iRam0000000001e6f258;
      iVar34 = iRam0000000001e6f254;
      iVar31 = _DAT_01e6f250;
      uVar12 = uRam0000000001e6f248;
      iVar29 = _DAT_01e6f240;
      uVar26 = *(ulonglong *)(lVar32 + 0x10);
      uVar4 = *(ulonglong *)(lVar32 + 0x18);
      uVar5 = *(ulonglong *)(lVar32 + 0x20);
      if ((uVar26 < uVar4 + 0x400 && uVar4 < uVar26 + 0x400) ||
         (uVar5 < uVar28 + 0x400 && uVar28 < uVar5 + 0x400)) {
        iVar35 = 0x2c8d00;
        iVar31 = 0x5b6900;
        iVar34 = -0xe25100;
        iVar29 = -0xb2f480;
        lVar32 = 0;
        do {
          *(int *)(uVar26 + lVar32) = iVar29 >> 0x10;
          *(int *)(uVar4 + lVar32) = iVar34 >> 0x10;
          *(int *)(uVar5 + lVar32) = iVar31;
          *(int *)(uVar28 + lVar32) = iVar35;
          lVar32 = lVar32 + 4;
          iVar35 = iVar35 + -0x581a;
          iVar31 = iVar31 + -0xb6d2;
          iVar34 = iVar34 + 0x1c5a2;
          iVar29 = iVar29 + 0x166e9;
        } while (lVar32 != 0x400);
      }
      else {
        lVar32 = 0;
        auVar37 = _DAT_01e6f230;
        do {
          iVar41 = auVar37._0_4_;
          uVar42 = auVar37._8_8_;
          iVar39 = auVar37._4_4_;
          iVar40 = auVar37._12_4_;
          auVar9._4_4_ = iVar39;
          auVar9._0_4_ = iVar39;
          auVar9._8_4_ = iVar40;
          auVar9._12_4_ = iVar40;
          piVar1 = (int *)(uVar26 + lVar32 * 4);
          *piVar1 = iVar41 * iVar29 + iVar31 >> 0x10;
          piVar1[1] = iVar39 * iVar29 + iVar34 >> 0x10;
          piVar1[2] = (int)((uVar42 & 0xffffffff) * (ulonglong)uVar12) + iVar35 >> 0x10;
          piVar1[3] = (int)((auVar9._8_8_ & 0xffffffff) * (ulonglong)uVar12) + iVar13 >> 0x10;
          auVar10._4_4_ = iVar39;
          auVar10._0_4_ = iVar39;
          auVar10._8_4_ = iVar40;
          auVar10._12_4_ = iVar40;
          piVar1 = (int *)(uVar4 + lVar32 * 4);
          *piVar1 = iVar41 * iVar14 + iVar31 >> 0x10;
          piVar1[1] = iVar39 * iVar14 + iVar34 >> 0x10;
          piVar1[2] = (int)((uVar42 & 0xffffffff) * (ulonglong)uVar15) + iVar35 >> 0x10;
          piVar1[3] = (int)((auVar10._8_8_ & 0xffffffff) * (ulonglong)uVar15) + iVar13 >> 0x10;
          auVar11._4_4_ = iVar39;
          auVar11._0_4_ = iVar39;
          auVar11._8_4_ = iVar40;
          auVar11._12_4_ = iVar40;
          puVar25 = (undefined8 *)(uVar5 + lVar32 * 4);
          *puVar25 = CONCAT44(iVar39 * iVar16,iVar41 * iVar16);
          *(int *)(puVar25 + 1) = (int)((uVar42 & 0xffffffff) * (ulonglong)uVar17);
          *(int *)((longlong)puVar25 + 0xc) =
               (int)((auVar11._8_8_ & 0xffffffff) * (ulonglong)uVar17);
          piVar1 = (int *)(uVar28 + lVar32 * 4);
          *piVar1 = iVar41 * iVar18 + iVar31;
          piVar1[1] = iVar39 * iVar18 + iVar34;
          piVar1[2] = (int)((uVar42 & 0xffffffff) * (ulonglong)uVar19) + iVar35;
          piVar1[3] = iVar40 * uVar19 + iVar13;
          lVar32 = lVar32 + 4;
          auVar36._0_4_ = iVar41 + iVar20;
          auVar36._4_4_ = iVar39 + iVar21;
          auVar36._8_4_ = auVar37._8_4_ + iVar22;
          auVar36._12_4_ = iVar40 + iVar23;
          auVar37 = auVar36;
        } while (lVar32 != 0x100);
      }
      goto LAB_00a118dd;
    }
  }
  else if (iVar29 == 2) {
    *(undefined4 *)(param_1 + 0x12) = 3;
    iVar29 = *(int *)((longlong)param_1 + 0x3c);
    if (iVar29 == 1) {
      puVar25[1] = FUN_00a11c20;
      goto LAB_00a118dd;
    }
    if (iVar29 == 2) goto LAB_00a118c1;
    if (iVar29 == 3) {
      puVar25[1] = FUN_00a11b00;
      lVar32 = param_1[0x4d];
      uVar27 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar32 + 0x10) = uVar27;
      uVar27 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar32 + 0x18) = uVar27;
      uVar27 = (**(code **)param_1[1])(param_1,1,0x400);
      *(undefined8 *)(lVar32 + 0x20) = uVar27;
      uVar28 = (**(code **)param_1[1])(param_1,1,0x400);
      *(ulonglong *)(lVar32 + 0x28) = uVar28;
      iVar23 = iRam0000000001e6f29c;
      iVar22 = iRam0000000001e6f298;
      iVar21 = iRam0000000001e6f294;
      iVar20 = _DAT_01e6f290;
      uVar19 = uRam0000000001e6f288;
      iVar18 = _DAT_01e6f280;
      uVar17 = uRam0000000001e6f278;
      iVar16 = _DAT_01e6f270;
      uVar15 = uRam0000000001e6f268;
      iVar14 = _DAT_01e6f260;
      iVar13 = iRam0000000001e6f25c;
      iVar35 = iRam0000000001e6f258;
      iVar34 = iRam0000000001e6f254;
      iVar31 = _DAT_01e6f250;
      uVar12 = uRam0000000001e6f248;
      iVar29 = _DAT_01e6f240;
      uVar26 = *(ulonglong *)(lVar32 + 0x10);
      uVar4 = *(ulonglong *)(lVar32 + 0x18);
      uVar5 = *(ulonglong *)(lVar32 + 0x20);
      if ((uVar26 < uVar4 + 0x400 && uVar4 < uVar26 + 0x400) ||
         (uVar5 < uVar28 + 0x400 && uVar28 < uVar5 + 0x400)) {
        iVar35 = 0x2c8d00;
        iVar31 = 0x5b6900;
        iVar34 = -0xe25100;
        iVar29 = -0xb2f480;
        lVar32 = 0;
        do {
          *(int *)(uVar26 + lVar32) = iVar29 >> 0x10;
          *(int *)(uVar4 + lVar32) = iVar34 >> 0x10;
          *(int *)(uVar5 + lVar32) = iVar31;
          *(int *)(uVar28 + lVar32) = iVar35;
          lVar32 = lVar32 + 4;
          iVar35 = iVar35 + -0x581a;
          iVar31 = iVar31 + -0xb6d2;
          iVar34 = iVar34 + 0x1c5a2;
          iVar29 = iVar29 + 0x166e9;
        } while (lVar32 != 0x400);
      }
      else {
        lVar32 = 0;
        auVar37 = _DAT_01e6f230;
        do {
          iVar41 = auVar37._0_4_;
          uVar42 = auVar37._8_8_;
          iVar39 = auVar37._4_4_;
          iVar40 = auVar37._12_4_;
          auVar6._4_4_ = iVar39;
          auVar6._0_4_ = iVar39;
          auVar6._8_4_ = iVar40;
          auVar6._12_4_ = iVar40;
          piVar1 = (int *)(uVar26 + lVar32 * 4);
          *piVar1 = iVar41 * iVar29 + iVar31 >> 0x10;
          piVar1[1] = iVar39 * iVar29 + iVar34 >> 0x10;
          piVar1[2] = (int)((uVar42 & 0xffffffff) * (ulonglong)uVar12) + iVar35 >> 0x10;
          piVar1[3] = (int)((auVar6._8_8_ & 0xffffffff) * (ulonglong)uVar12) + iVar13 >> 0x10;
          auVar7._4_4_ = iVar39;
          auVar7._0_4_ = iVar39;
          auVar7._8_4_ = iVar40;
          auVar7._12_4_ = iVar40;
          piVar1 = (int *)(uVar4 + lVar32 * 4);
          *piVar1 = iVar41 * iVar14 + iVar31 >> 0x10;
          piVar1[1] = iVar39 * iVar14 + iVar34 >> 0x10;
          piVar1[2] = (int)((uVar42 & 0xffffffff) * (ulonglong)uVar15) + iVar35 >> 0x10;
          piVar1[3] = (int)((auVar7._8_8_ & 0xffffffff) * (ulonglong)uVar15) + iVar13 >> 0x10;
          auVar8._4_4_ = iVar39;
          auVar8._0_4_ = iVar39;
          auVar8._8_4_ = iVar40;
          auVar8._12_4_ = iVar40;
          puVar25 = (undefined8 *)(uVar5 + lVar32 * 4);
          *puVar25 = CONCAT44(iVar39 * iVar16,iVar41 * iVar16);
          *(int *)(puVar25 + 1) = (int)((uVar42 & 0xffffffff) * (ulonglong)uVar17);
          *(int *)((longlong)puVar25 + 0xc) = (int)((auVar8._8_8_ & 0xffffffff) * (ulonglong)uVar17)
          ;
          piVar1 = (int *)(uVar28 + lVar32 * 4);
          *piVar1 = iVar41 * iVar18 + iVar31;
          piVar1[1] = iVar39 * iVar18 + iVar34;
          piVar1[2] = (int)((uVar42 & 0xffffffff) * (ulonglong)uVar19) + iVar35;
          piVar1[3] = iVar40 * uVar19 + iVar13;
          lVar32 = lVar32 + 4;
          auVar38._0_4_ = iVar41 + iVar20;
          auVar38._4_4_ = iVar39 + iVar21;
          auVar38._8_4_ = auVar37._8_4_ + iVar22;
          auVar38._12_4_ = iVar40 + iVar23;
          auVar37 = auVar38;
        } while (lVar32 != 0x100);
      }
      goto LAB_00a118dd;
    }
  }
  else if (iVar29 == 1) {
    *(undefined4 *)(param_1 + 0x12) = 1;
    if ((*(uint *)((longlong)param_1 + 0x3c) | 2) == 3) {
      puVar25[1] = FUN_00a11ac0;
      lVar32 = (longlong)(int)param_1[7];
      if (1 < lVar32) {
        lVar3 = param_1[0x26];
        uVar26 = (ulonglong)((int)param_1[7] - 1U & 7);
        if (lVar32 - 2U < 7) {
          lVar33 = 1;
        }
        else {
          puVar30 = (undefined4 *)(lVar3 + 0x330);
          lVar33 = 1;
          do {
            puVar30[-0xa8] = 0;
            puVar30[-0x90] = 0;
            puVar30[-0x78] = 0;
            puVar30[-0x60] = 0;
            puVar30[-0x48] = 0;
            puVar30[-0x30] = 0;
            puVar30[-0x18] = 0;
            *puVar30 = 0;
            lVar33 = lVar33 + 8;
            puVar30 = puVar30 + 0xc0;
          } while (lVar32 - uVar26 != lVar33);
        }
        if (uVar26 != 0) {
          puVar30 = (undefined4 *)(lVar3 + 0x30 + lVar33 * 0x60);
          lVar32 = -uVar26;
          do {
            *puVar30 = 0;
            puVar30 = puVar30 + 0x18;
            lVar32 = lVar32 + 1;
          } while (lVar32 != 0);
        }
      }
      goto LAB_00a118dd;
    }
  }
  else if (iVar29 == *(int *)((longlong)param_1 + 0x3c)) {
    *(int *)(param_1 + 0x12) = (int)param_1[7];
    goto LAB_00a118c1;
  }
  puVar25 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar25 + 5) = 0x1b;
  (*(code *)*puVar25)(param_1);
LAB_00a118dd:
  uVar24 = 1;
  if (*(int *)((longlong)param_1 + 0x6c) == 0) {
    uVar24 = (undefined4)param_1[0x12];
  }
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar24;
  return;
}

