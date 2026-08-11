/* Ghidra address: 00a127d0 */
/* Ghidra symbol: FUN_00a127d0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a127d0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auVar5 [13];
  uint5 uVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [13];
  unkbyte10 Var9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  code *pcVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  undefined4 *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  int iVar29;
  int iVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  short sVar34;
  int iVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  
  lVar2 = param_1[0x4e];
  param_1[0x14] = *(longlong *)(lVar2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(lVar2 + 0x28);
  iVar10 = (int)param_1[0xe];
  if (iVar10 == 2) {
    *(code **)(lVar2 + 8) = FUN_00a133c0;
    *(undefined4 *)(lVar2 + 0x90) = 0;
    if (*(longlong *)(lVar2 + 0x70) == 0) {
      if ((int)param_1[0x12] < 1) {
        return;
      }
      lVar17 = param_1[0x11];
      lVar20 = 0;
      do {
        uVar16 = (**(code **)(param_1[1] + 8))(param_1,1,(ulonglong)((int)lVar17 + 2) * 2);
        *(undefined8 *)(lVar2 + 0x70 + lVar20 * 8) = uVar16;
        lVar20 = lVar20 + 1;
        iVar10 = (int)param_1[0x12];
      } while (lVar20 < iVar10);
    }
    else {
      iVar10 = (int)param_1[0x12];
    }
    if (0 < iVar10) {
      lVar17 = param_1[0x11];
      lVar20 = 0;
      do {
        FUN_00a1bd20(*(undefined8 *)(lVar2 + 0x70 + lVar20 * 8),(ulonglong)((int)lVar17 + 2) * 2);
        lVar20 = lVar20 + 1;
      } while (lVar20 < (int)param_1[0x12]);
    }
  }
  else if (iVar10 == 1) {
    pcVar18 = FUN_00a13220;
    if ((int)param_1[0x12] == 3) {
      pcVar18 = FUN_00a130c0;
    }
    *(code **)(lVar2 + 8) = pcVar18;
    *(undefined4 *)(lVar2 + 0x4c) = 0;
    if (*(int *)(lVar2 + 0x38) == 0) {
      FUN_00a12c60();
      lVar2 = *(longlong *)(lVar2 + 0x50);
      iVar10 = _DAT_01e6f330;
      iVar11 = iRam0000000001e6f334;
      iVar12 = iRam0000000001e6f338;
      iVar13 = iRam0000000001e6f33c;
      auVar14 = _DAT_01e6f340;
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x50);
      iVar10 = _DAT_01e6f330;
      iVar11 = iRam0000000001e6f334;
      iVar12 = iRam0000000001e6f338;
      iVar13 = iRam0000000001e6f33c;
      auVar14 = _DAT_01e6f340;
    }
    _DAT_01e6f330 = iVar10;
    iRam0000000001e6f334 = iVar11;
    iRam0000000001e6f338 = iVar12;
    iRam0000000001e6f33c = iVar13;
    _DAT_01e6f340 = auVar14;
    if ((lVar2 == 0) && (iVar22 = (int)param_1[0x12], 0 < iVar22)) {
      lVar2 = param_1[0x4e];
      uVar25 = 0;
      do {
        iVar29 = *(int *)(lVar2 + 0x3c + uVar25 * 4);
        if (uVar25 != 0) {
          uVar19 = 0;
          do {
            if (iVar29 == *(int *)(lVar2 + 0x3c + uVar19 * 4)) {
              lVar17 = *(longlong *)(lVar2 + 0x50 + uVar19 * 8);
              if (lVar17 != 0) goto LAB_00a12bf6;
              break;
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 < uVar25);
        }
        lVar17 = (**(code **)param_1[1])(param_1,1,0x400);
        iVar22 = iVar29 * 0x200 + -0x200;
        puVar23 = &DAT_01e6f350;
        lVar24 = 0;
        lVar20 = lVar17;
        do {
          lVar21 = 0;
          do {
            uVar1 = *(uint *)((longlong)puVar23 + lVar21);
            auVar5[0xc] = (char)(uVar1 >> 0x18);
            auVar5._0_12_ = ZEXT712(0);
            uVar6 = CONCAT32(auVar5._10_3_,(ushort)(byte)(uVar1 >> 0x10));
            auVar8._5_8_ = 0;
            auVar8._0_5_ = uVar6;
            iVar29 = (int)CONCAT72(SUB137(auVar8 << 0x40,6),(ushort)(byte)(uVar1 >> 8));
            auVar27._4_4_ = iVar29 * 2;
            auVar27._0_4_ = (uVar1 & 0xff) * 2;
            iVar30 = (int)uVar6;
            uVar4 = (uint)(uint3)(auVar5._10_3_ >> 0x10);
            auVar27._8_4_ = iVar30 * 2;
            auVar27._12_4_ = uVar4 * 2;
            auVar31._0_4_ = iVar10 + (uVar1 & 0xff) * -2;
            auVar31._4_4_ = iVar11 + iVar29 * -2;
            auVar31._8_4_ = iVar12 + iVar30 * -2;
            auVar31._12_4_ = iVar13 + uVar4 * -2;
            auVar26 = pshuflw(auVar27,auVar31,0xe8);
            auVar26 = pshufhw(auVar26,auVar26,0xe8);
            auVar32._4_4_ = auVar26._8_4_;
            auVar32._0_4_ = auVar26._0_4_;
            auVar32._8_4_ = auVar26._8_4_;
            auVar32._12_4_ = auVar26._12_4_;
            auVar27 = pmulhw(auVar32,auVar14);
            sVar34 = auVar26._10_2_ * auVar14._6_2_;
            iVar29 = CONCAT22(auVar27._6_2_,sVar34);
            Var9 = CONCAT64(CONCAT42(iVar29,auVar27._4_2_),
                            CONCAT22(auVar26._8_2_ * auVar14._4_2_,sVar34));
            auVar7._4_8_ = (longlong)((unkuint10)Var9 >> 0x10);
            auVar7._2_2_ = auVar27._2_2_;
            auVar7._0_2_ = auVar26._2_2_ * auVar14._2_2_;
            iVar30 = CONCAT22(auVar27._0_2_,auVar26._0_2_ * auVar14._0_2_);
            auVar28._0_4_ = -(uint)(auVar31._0_4_ < 0);
            auVar28._4_4_ = -(uint)(auVar31._4_4_ < 0);
            auVar28._8_4_ = -(uint)(auVar31._8_4_ < 0);
            auVar28._12_4_ = -(uint)(auVar31._12_4_ < 0);
            auVar26._8_4_ = 0xffffffff;
            auVar26._0_8_ = 0xffffffffffffffff;
            auVar26._12_4_ = 0xffffffff;
            auVar36 = auVar28 ^ auVar26;
            if ((auVar36._0_4_ & 1) != 0) {
              auVar31 = ZEXT416((uint)(iVar30 / iVar22));
            }
            iVar35 = (int)((unkuint10)Var9 >> 0x10);
            if ((auVar36._4_2_ & 1) != 0) {
              auVar31._4_4_ = auVar7._0_4_ / iVar22;
            }
            if ((auVar36._8_2_ & 1) != 0) {
              auVar31._8_4_ = iVar35 / iVar22;
            }
            if ((auVar36._12_2_ & 1) != 0) {
              iVar15 = iVar29 / iVar22;
              auVar36._4_4_ = iVar15;
              auVar36._0_4_ = iVar15;
              auVar36._8_4_ = auVar31._8_4_;
              auVar36._12_4_ = auVar31._0_4_;
              auVar31._12_4_ = iVar15;
            }
            if ((auVar28._0_4_ & 1) != 0) {
              auVar36 = ZEXT416((uint)(-iVar30 / iVar22));
            }
            if ((auVar28._4_4_ & 1) != 0) {
              auVar36._4_4_ = -auVar7._0_4_ / iVar22;
            }
            if ((auVar28._8_4_ & 1) != 0) {
              auVar36._8_4_ = -iVar35 / iVar22;
            }
            if ((auVar28._12_4_ & 1) != 0) {
              auVar36._12_4_ = -iVar29 / iVar22;
            }
            auVar33._4_4_ = -auVar36._4_4_;
            auVar33._0_4_ = -auVar36._0_4_;
            auVar33._8_4_ = -auVar36._8_4_;
            auVar33._12_4_ = -auVar36._12_4_;
            *(undefined1 (*) [16])(lVar20 + lVar21 * 4) = ~auVar28 & auVar31 | auVar33 & auVar28;
            lVar21 = lVar21 + 4;
          } while (lVar21 != 0x10);
          lVar24 = lVar24 + 1;
          puVar23 = puVar23 + 4;
          lVar20 = lVar20 + 0x40;
        } while (lVar24 != 0x10);
        iVar22 = (int)param_1[0x12];
LAB_00a12bf6:
        *(longlong *)(lVar2 + 0x50 + uVar25 * 8) = lVar17;
        uVar25 = uVar25 + 1;
      } while ((longlong)uVar25 < (longlong)iVar22);
    }
  }
  else {
    if (iVar10 != 0) {
      puVar3 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar3 + 5) = 0x30;
                    /* WARNING: Could not recover jumptable at 0x00a12909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(param_1);
      return;
    }
    pcVar18 = FUN_00a12f00;
    if ((int)param_1[0x12] == 3) {
      pcVar18 = FUN_00a12df0;
    }
    *(code **)(lVar2 + 8) = pcVar18;
  }
  return;
}

