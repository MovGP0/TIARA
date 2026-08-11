/* Ghidra address: 0062a510 */
/* Ghidra symbol: FUN_0062a510 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0062a510(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  unkbyte10 Var9;
  undefined1 auVar10 [14];
  int iVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  ushort *puVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ushort uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return 0xfffffffe;
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return 0xfffffffe;
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    return 0xfffffffe;
  }
  if (*plVar3 != param_1) {
    return 0xfffffffe;
  }
  iVar11 = (int)plVar3[1];
  if ((((0x38 < iVar11 - 0x39U) ||
       ((0x100400400011001U >> ((ulonglong)(iVar11 - 0x39U) & 0x3f) & 1) == 0)) && (iVar11 != 0x29a)
      ) && (iVar11 != 0x2a)) {
    return 0xfffffffe;
  }
  uVar17 = 6;
  if (param_2 != 0xffffffff) {
    uVar17 = param_2;
  }
  if (4 < param_3) {
    return 0xfffffffe;
  }
  if (9 < uVar17) {
    return 0xfffffffe;
  }
  if (((*(uint *)(plVar3 + 0x16) != param_3) ||
      ((&PTR_FUN_01df1d58)[(longlong)*(int *)((longlong)plVar3 + 0xac) * 2] !=
       (&PTR_FUN_01df1d58)[(longlong)(int)uVar17 * 2])) && ((int)plVar3[0x2e3] != 0)) {
    iVar11 = FUN_0062a930(param_1,5);
    if (iVar11 == -2) {
      return 0xfffffffe;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      return 0xfffffffb;
    }
  }
  auVar22 = _DAT_01df1d40;
  if (*(uint *)((longlong)plVar3 + 0xac) == uVar17) goto LAB_0062a916;
  if ((*(uint *)((longlong)plVar3 + 0xac) == 0) && ((int)plVar3[0x2e1] != 0)) {
    if ((int)plVar3[0x2e1] == 1) {
      uVar2 = *(uint *)((longlong)plVar3 + 0x44);
      uVar20 = *(uint *)((longlong)plVar3 + 0x74);
      uVar16 = (ulonglong)uVar20;
      lVar13 = plVar3[0xd];
      puVar14 = (ushort *)(lVar13 + uVar16 * 2);
      uVar1 = (ulonglong)(uVar20 - 1) + 1;
      if (7 < uVar1) {
        uVar15 = uVar20 & 7;
        lVar19 = uVar1 - uVar15;
        puVar14 = puVar14 + (((ulonglong)uVar15 - 1) - (ulonglong)(uVar20 - 1));
        uVar21 = uVar20 - (int)lVar19;
        auVar30._4_4_ = uVar2;
        auVar30._0_4_ = uVar2;
        auVar30._8_4_ = uVar2;
        auVar30._12_4_ = uVar2;
        pauVar12 = (undefined1 (*) [16])(lVar13 + -0x10 + uVar16 * 2);
        auVar30 = auVar30 ^ _DAT_01df1d40;
        do {
          auVar26 = *pauVar12;
          auVar38._0_8_ = auVar26._8_8_;
          auVar38._8_4_ = auVar26._0_4_;
          auVar38._12_4_ = auVar26._4_4_;
          auVar26 = pshuflw(auVar38,auVar38,0x1b);
          auVar33 = pshufhw(in_XMM5,auVar26,0x1b);
          auVar4._10_2_ = 0;
          auVar4._0_10_ = auVar33._0_10_;
          auVar4._12_2_ = auVar33._6_2_;
          auVar6._8_2_ = auVar33._4_2_;
          auVar6._0_8_ = auVar33._0_8_;
          auVar6._10_4_ = auVar4._10_4_;
          auVar8._6_8_ = 0;
          auVar8._0_6_ = auVar6._8_6_;
          Var9 = CONCAT82(SUB148(auVar8 << 0x40,6),auVar33._2_2_);
          auVar27._0_4_ = CONCAT22(0,auVar33._0_2_);
          auVar27._4_10_ = Var9;
          auVar27._14_2_ = 0;
          auVar34._0_4_ = CONCAT22(0,auVar33._8_2_);
          auVar34._4_2_ = auVar33._10_2_;
          auVar34._6_2_ = 0;
          auVar34._8_2_ = auVar33._12_2_;
          auVar34._10_2_ = 0;
          auVar34._12_2_ = auVar33._14_2_;
          auVar34._14_2_ = 0;
          auVar26 = auVar34 ^ auVar22;
          auVar37._0_4_ = -(uint)(auVar26._0_4_ < auVar30._0_4_);
          auVar37._4_4_ = -(uint)(auVar26._4_4_ < auVar30._4_4_);
          auVar37._8_4_ = -(uint)(auVar26._8_4_ < auVar30._8_4_);
          auVar37._12_4_ = -(uint)(auVar26._12_4_ < auVar30._12_4_);
          auVar26 = pshuflw(auVar26,auVar37,0xe8);
          auVar26 = pshufhw(auVar26,auVar26,0xe8);
          auVar35._12_4_ = auVar26._8_4_;
          auVar35._8_4_ = auVar26._0_4_;
          auVar38 = auVar27 ^ auVar22;
          auVar26._0_4_ = -(uint)(auVar38._0_4_ < auVar30._0_4_);
          auVar26._4_4_ = -(uint)(auVar38._4_4_ < auVar30._4_4_);
          auVar26._8_4_ = -(uint)(auVar38._8_4_ < auVar30._8_4_);
          auVar26._12_4_ = -(uint)(auVar38._12_4_ < auVar30._12_4_);
          auVar26 = pshuflw(auVar26,auVar26,0xe8);
          auVar26 = pshufhw(auVar26,auVar26,0xe8);
          auVar35._0_4_ = auVar26._0_4_;
          auVar35._4_4_ = auVar26._8_4_;
          in_XMM5._0_4_ = (int)((auVar34._0_4_ - uVar2) * 0x10000) >> 0x10;
          in_XMM5._4_4_ = (int)((auVar33._10_2_ - uVar2) * 0x10000) >> 0x10;
          in_XMM5._8_4_ = (int)((auVar33._12_2_ - uVar2) * 0x10000) >> 0x10;
          in_XMM5._12_4_ = (int)((auVar33._14_2_ - uVar2) * 0x10000) >> 0x10;
          auVar28._0_4_ = (int)((auVar27._0_4_ - uVar2) * 0x10000) >> 0x10;
          auVar28._4_4_ = (int)(((int)Var9 - uVar2) * 0x10000) >> 0x10;
          auVar28._8_4_ = (int)((auVar6._8_4_ - uVar2) * 0x10000) >> 0x10;
          auVar28._12_4_ = (int)(((auVar4._10_4_ >> 0x10) - uVar2) * 0x10000) >> 0x10;
          auVar26 = packssdw(auVar28,in_XMM5);
          auVar26 = ~auVar35 & auVar26;
          auVar33._0_8_ = auVar26._8_8_;
          auVar33._8_4_ = auVar26._0_4_;
          auVar33._12_4_ = auVar26._4_4_;
          auVar26 = pshuflw(auVar33,auVar33,0x1b);
          auVar26 = pshufhw(auVar26,auVar26,0x1b);
          *pauVar12 = auVar26;
          pauVar12 = pauVar12 + -1;
          lVar19 = lVar19 + -8;
          auVar26 = _DAT_01df1d40;
          if (lVar19 == 0) goto joined_r0x0062a778;
        } while( true );
      }
      do {
        puVar14 = puVar14 + -1;
        uVar18 = *puVar14 - (short)uVar2;
        if (*puVar14 < uVar2) {
          uVar18 = 0;
        }
        *puVar14 = uVar18;
        uVar15 = (int)uVar16 - 1;
        auVar26 = _DAT_01df1d40;
        uVar21 = uVar15;
joined_r0x0062a778:
        uVar16 = (ulonglong)uVar21;
        _DAT_01df1d40 = auVar26;
      } while (uVar15 != 0);
      puVar14 = (ushort *)(plVar3[0xc] + (ulonglong)uVar2 * 2);
      uVar1 = (ulonglong)(uVar2 - 1) + 1;
      uVar15 = uVar2;
      if (7 < uVar1) {
        uVar21 = uVar2 & 7;
        lVar19 = uVar1 - uVar21;
        puVar14 = puVar14 + (((ulonglong)uVar21 - 1) - (ulonglong)(uVar2 - 1));
        iVar11 = (int)lVar19;
        auVar22._4_4_ = uVar2;
        auVar22._0_4_ = uVar2;
        auVar22._8_4_ = uVar2;
        auVar22._12_4_ = uVar2;
        pauVar12 = (undefined1 (*) [16])(plVar3[0xc] + -0x10 + (ulonglong)uVar2 * 2);
        auVar22 = auVar22 ^ auVar26;
        do {
          auVar30 = *pauVar12;
          auVar29._0_8_ = auVar30._8_8_;
          auVar29._8_4_ = auVar30._0_4_;
          auVar29._12_4_ = auVar30._4_4_;
          auVar30 = pshuflw(auVar29,auVar29,0x1b);
          auVar35 = pshufhw(in_XMM5,auVar30,0x1b);
          auVar5._10_2_ = 0;
          auVar5._0_10_ = auVar35._0_10_;
          auVar5._12_2_ = auVar35._6_2_;
          auVar7._8_2_ = auVar35._4_2_;
          auVar7._0_8_ = auVar35._0_8_;
          auVar7._10_4_ = auVar5._10_4_;
          auVar10._6_8_ = 0;
          auVar10._0_6_ = auVar7._8_6_;
          Var9 = CONCAT82(SUB148(auVar10 << 0x40,6),auVar35._2_2_);
          auVar31._0_4_ = CONCAT22(0,auVar35._0_2_);
          auVar31._4_10_ = Var9;
          auVar31._14_2_ = 0;
          auVar36._0_4_ = CONCAT22(0,auVar35._8_2_);
          auVar36._4_2_ = auVar35._10_2_;
          auVar36._6_2_ = 0;
          auVar36._8_2_ = auVar35._12_2_;
          auVar36._10_2_ = 0;
          auVar36._12_2_ = auVar35._14_2_;
          auVar36._14_2_ = 0;
          auVar30 = auVar36 ^ auVar26;
          auVar39._0_4_ = -(uint)(auVar30._0_4_ < auVar22._0_4_);
          auVar39._4_4_ = -(uint)(auVar30._4_4_ < auVar22._4_4_);
          auVar39._8_4_ = -(uint)(auVar30._8_4_ < auVar22._8_4_);
          auVar39._12_4_ = -(uint)(auVar30._12_4_ < auVar22._12_4_);
          auVar30 = pshuflw(auVar30,auVar39,0xe8);
          auVar30 = pshufhw(auVar30,auVar30,0xe8);
          auVar24._12_4_ = auVar30._8_4_;
          auVar24._8_4_ = auVar30._0_4_;
          auVar30 = auVar31 ^ auVar26;
          auVar23._0_4_ = -(uint)(auVar30._0_4_ < auVar22._0_4_);
          auVar23._4_4_ = -(uint)(auVar30._4_4_ < auVar22._4_4_);
          auVar23._8_4_ = -(uint)(auVar30._8_4_ < auVar22._8_4_);
          auVar23._12_4_ = -(uint)(auVar30._12_4_ < auVar22._12_4_);
          auVar30 = pshuflw(auVar23,auVar23,0xe8);
          auVar30 = pshufhw(auVar30,auVar30,0xe8);
          auVar24._0_4_ = auVar30._0_4_;
          auVar24._4_4_ = auVar30._8_4_;
          in_XMM5._0_4_ = (int)((auVar36._0_4_ - uVar2) * 0x10000) >> 0x10;
          in_XMM5._4_4_ = (int)((auVar35._10_2_ - uVar2) * 0x10000) >> 0x10;
          in_XMM5._8_4_ = (int)((auVar35._12_2_ - uVar2) * 0x10000) >> 0x10;
          in_XMM5._12_4_ = (int)((auVar35._14_2_ - uVar2) * 0x10000) >> 0x10;
          auVar32._0_4_ = (int)((auVar31._0_4_ - uVar2) * 0x10000) >> 0x10;
          auVar32._4_4_ = (int)(((int)Var9 - uVar2) * 0x10000) >> 0x10;
          auVar32._8_4_ = (int)((auVar7._8_4_ - uVar2) * 0x10000) >> 0x10;
          auVar32._12_4_ = (int)(((auVar5._10_4_ >> 0x10) - uVar2) * 0x10000) >> 0x10;
          auVar30 = packssdw(auVar32,in_XMM5);
          auVar30 = ~auVar24 & auVar30;
          auVar25._0_8_ = auVar30._8_8_;
          auVar25._8_4_ = auVar30._0_4_;
          auVar25._12_4_ = auVar30._4_4_;
          auVar30 = pshuflw(auVar25,auVar25,0x1b);
          auVar30 = pshufhw(auVar30,auVar30,0x1b);
          *pauVar12 = auVar30;
          pauVar12 = pauVar12 + -1;
          lVar19 = lVar19 + -8;
        } while (lVar19 != 0);
        uVar15 = uVar2 - iVar11;
        if (uVar21 == 0) goto LAB_0062a8ba;
      }
      do {
        puVar14 = puVar14 + -1;
        uVar18 = *puVar14 - (short)uVar2;
        if (*puVar14 < uVar2) {
          uVar18 = 0;
        }
        *puVar14 = uVar18;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    else {
      lVar13 = plVar3[0xd];
      uVar20 = *(uint *)((longlong)plVar3 + 0x74);
      *(undefined2 *)(lVar13 + (ulonglong)(uVar20 - 1) * 2) = 0;
    }
LAB_0062a8ba:
    FUN_00626680(lVar13,0,(ulonglong)(uVar20 - 1) * 2);
    *(undefined4 *)(plVar3 + 0x2e1) = 0;
  }
  *(uint *)((longlong)plVar3 + 0xac) = uVar17;
  lVar13 = (longlong)(int)uVar17 * 0x10;
  *(uint *)(plVar3 + 0x15) = (uint)*(ushort *)(&DAT_01df1d52 + lVar13);
  *(uint *)((longlong)plVar3 + 0xb4) = (uint)*(ushort *)(&DAT_01df1d50 + lVar13);
  *(uint *)(plVar3 + 0x17) = (uint)*(ushort *)(&DAT_01df1d54 + lVar13);
  *(uint *)((longlong)plVar3 + 0xa4) = (uint)*(ushort *)(&DAT_01df1d56 + lVar13);
LAB_0062a916:
  *(uint *)(plVar3 + 0x16) = param_3;
  return 0;
}

