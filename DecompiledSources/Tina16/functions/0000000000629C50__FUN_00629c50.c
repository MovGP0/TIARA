/* Ghidra address: 00629c50 */
/* Ghidra symbol: FUN_00629c50 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00629c50(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  unkbyte10 Var9;
  undefined1 auVar10 [14];
  undefined1 auVar11 [16];
  ushort uVar12;
  undefined4 uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  byte bVar18;
  ushort *puVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  
  auVar11 = _DAT_01df1d30;
  uVar21 = *(uint *)((longlong)param_1 + 0x44);
  uVar26 = *(uint *)((longlong)param_1 + 0x9c);
  uVar15 = (ulonglong)uVar21;
  while( true ) {
    uVar25 = *(uint *)((longlong)param_1 + 0x94);
    uVar23 = ((int)param_1[0xb] - uVar26) - uVar25;
    if ((int)uVar15 + (uVar21 - 0x106) <= uVar25) {
      FUN_00626670(param_1[10],param_1[10] + (ulonglong)uVar21,uVar21 - uVar23);
      *(uint *)(param_1 + 0x13) = (int)param_1[0x13] - uVar21;
      uVar25 = *(int *)((longlong)param_1 + 0x94) - uVar21;
      *(uint *)((longlong)param_1 + 0x94) = uVar25;
      *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) - uVar21;
      uVar26 = *(uint *)((longlong)param_1 + 0x44);
      uVar20 = *(uint *)((longlong)param_1 + 0x74);
      uVar16 = (ulonglong)uVar20;
      puVar19 = (ushort *)(param_1[0xd] + uVar16 * 2);
      uVar15 = (ulonglong)(uVar20 - 1) + 1;
      if (7 < uVar15) {
        uVar24 = uVar20 & 7;
        lVar22 = uVar15 - uVar24;
        puVar19 = puVar19 + (((ulonglong)uVar24 - 1) - (ulonglong)(uVar20 - 1));
        uVar20 = uVar20 - (int)lVar22;
        auVar29._4_4_ = uVar26;
        auVar29._0_4_ = uVar26;
        auVar29._8_4_ = uVar26;
        auVar29._12_4_ = uVar26;
        pauVar17 = (undefined1 (*) [16])(param_1[0xd] + -0x10 + uVar16 * 2);
        do {
          auVar38 = *pauVar17;
          auVar42._0_8_ = auVar38._8_8_;
          auVar42._8_4_ = auVar38._0_4_;
          auVar42._12_4_ = auVar38._4_4_;
          auVar38 = pshuflw(auVar42,auVar42,0x1b);
          auVar42 = pshufhw(in_XMM2,auVar38,0x1b);
          auVar4._10_2_ = 0;
          auVar4._0_10_ = auVar42._0_10_;
          auVar4._12_2_ = auVar42._6_2_;
          auVar6._8_2_ = auVar42._4_2_;
          auVar6._0_8_ = auVar42._0_8_;
          auVar6._10_4_ = auVar4._10_4_;
          auVar8._6_8_ = 0;
          auVar8._0_6_ = auVar6._8_6_;
          Var9 = CONCAT82(SUB148(auVar8 << 0x40,6),auVar42._2_2_);
          auVar38._0_4_ = CONCAT22(0,auVar42._0_2_);
          auVar38._4_10_ = Var9;
          auVar38._14_2_ = 0;
          auVar33._0_4_ = CONCAT22(0,auVar42._8_2_);
          auVar33._4_2_ = auVar42._10_2_;
          auVar33._6_2_ = 0;
          auVar33._8_2_ = auVar42._12_2_;
          auVar33._10_2_ = 0;
          auVar33._12_2_ = auVar42._14_2_;
          auVar33._14_2_ = 0;
          auVar35 = auVar29 ^ auVar11;
          auVar41 = auVar33 ^ auVar11;
          auVar43._0_4_ = -(uint)(auVar41._0_4_ < auVar35._0_4_);
          auVar43._4_4_ = -(uint)(auVar41._4_4_ < auVar35._4_4_);
          auVar43._8_4_ = -(uint)(auVar41._8_4_ < auVar35._8_4_);
          auVar43._12_4_ = -(uint)(auVar41._12_4_ < auVar35._12_4_);
          auVar41 = pshuflw(auVar41,auVar43,0xe8);
          auVar41 = pshufhw(auVar41,auVar41,0xe8);
          auVar37._12_4_ = auVar41._8_4_;
          auVar37._8_4_ = auVar41._0_4_;
          auVar41 = auVar38 ^ auVar11;
          auVar36._0_4_ = -(uint)(auVar41._0_4_ < auVar35._0_4_);
          auVar36._4_4_ = -(uint)(auVar41._4_4_ < auVar35._4_4_);
          auVar36._8_4_ = -(uint)(auVar41._8_4_ < auVar35._8_4_);
          auVar36._12_4_ = -(uint)(auVar41._12_4_ < auVar35._12_4_);
          auVar35 = pshuflw(auVar36,auVar36,0xe8);
          auVar35 = pshufhw(auVar35,auVar35,0xe8);
          auVar37._0_4_ = auVar35._0_4_;
          auVar37._4_4_ = auVar35._8_4_;
          in_XMM2._0_4_ = (int)((auVar33._0_4_ - uVar26) * 0x10000) >> 0x10;
          in_XMM2._4_4_ = (int)((auVar42._10_2_ - uVar26) * 0x10000) >> 0x10;
          in_XMM2._8_4_ = (int)((auVar42._12_2_ - uVar26) * 0x10000) >> 0x10;
          in_XMM2._12_4_ = (int)((auVar42._14_2_ - uVar26) * 0x10000) >> 0x10;
          auVar35._0_4_ = (int)((auVar38._0_4_ - uVar26) * 0x10000) >> 0x10;
          auVar35._4_4_ = (int)(((int)Var9 - uVar26) * 0x10000) >> 0x10;
          auVar35._8_4_ = (int)((auVar6._8_4_ - uVar26) * 0x10000) >> 0x10;
          auVar35._12_4_ = (int)(((auVar4._10_4_ >> 0x10) - uVar26) * 0x10000) >> 0x10;
          auVar38 = packssdw(auVar35,in_XMM2);
          auVar38 = ~auVar37 & auVar38;
          auVar41._0_8_ = auVar38._8_8_;
          auVar41._8_4_ = auVar38._0_4_;
          auVar41._12_4_ = auVar38._4_4_;
          auVar38 = pshuflw(auVar41,auVar41,0x1b);
          auVar38 = pshufhw(auVar38,auVar38,0x1b);
          *pauVar17 = auVar38;
          pauVar17 = pauVar17 + -1;
          lVar22 = lVar22 + -8;
          if (lVar22 == 0) goto joined_r0x00629e1d;
        } while( true );
      }
      do {
        puVar19 = puVar19 + -1;
        uVar12 = *puVar19 - (short)uVar26;
        if (*puVar19 < uVar26) {
          uVar12 = 0;
        }
        *puVar19 = uVar12;
        uVar20 = uVar20 - 1;
        uVar24 = uVar20;
joined_r0x00629e1d:
      } while (uVar24 != 0);
      puVar19 = (ushort *)(param_1[0xc] + (ulonglong)uVar26 * 2);
      uVar15 = (ulonglong)(uVar26 - 1) + 1;
      uVar20 = uVar26;
      if (7 < uVar15) {
        uVar24 = uVar26 & 7;
        lVar22 = uVar15 - uVar24;
        puVar19 = puVar19 + (((ulonglong)uVar24 - 1) - (ulonglong)(uVar26 - 1));
        uVar20 = uVar26 - (int)lVar22;
        auVar27._4_4_ = uVar26;
        auVar27._0_4_ = uVar26;
        auVar27._8_4_ = uVar26;
        auVar27._12_4_ = uVar26;
        pauVar17 = (undefined1 (*) [16])(param_1[0xc] + -0x10 + (ulonglong)uVar26 * 2);
        do {
          auVar29 = *pauVar17;
          auVar28._0_8_ = auVar29._8_8_;
          auVar28._8_4_ = auVar29._0_4_;
          auVar28._12_4_ = auVar29._4_4_;
          auVar29 = pshuflw(auVar28,auVar28,0x1b);
          auVar29 = pshufhw(in_XMM2,auVar29,0x1b);
          auVar5._10_2_ = 0;
          auVar5._0_10_ = auVar29._0_10_;
          auVar5._12_2_ = auVar29._6_2_;
          auVar7._8_2_ = auVar29._4_2_;
          auVar7._0_8_ = auVar29._0_8_;
          auVar7._10_4_ = auVar5._10_4_;
          auVar10._6_8_ = 0;
          auVar10._0_6_ = auVar7._8_6_;
          Var9 = CONCAT82(SUB148(auVar10 << 0x40,6),auVar29._2_2_);
          auVar30._0_4_ = CONCAT22(0,auVar29._0_2_);
          auVar30._4_10_ = Var9;
          auVar30._14_2_ = 0;
          auVar34._0_4_ = CONCAT22(0,auVar29._8_2_);
          auVar34._4_2_ = auVar29._10_2_;
          auVar34._6_2_ = 0;
          auVar34._8_2_ = auVar29._12_2_;
          auVar34._10_2_ = 0;
          auVar34._12_2_ = auVar29._14_2_;
          auVar34._14_2_ = 0;
          auVar38 = auVar27 ^ auVar11;
          auVar42 = auVar34 ^ auVar11;
          auVar44._0_4_ = -(uint)(auVar42._0_4_ < auVar38._0_4_);
          auVar44._4_4_ = -(uint)(auVar42._4_4_ < auVar38._4_4_);
          auVar44._8_4_ = -(uint)(auVar42._8_4_ < auVar38._8_4_);
          auVar44._12_4_ = -(uint)(auVar42._12_4_ < auVar38._12_4_);
          auVar42 = pshuflw(auVar42,auVar44,0xe8);
          auVar42 = pshufhw(auVar42,auVar42,0xe8);
          auVar40._12_4_ = auVar42._8_4_;
          auVar40._8_4_ = auVar42._0_4_;
          auVar42 = auVar30 ^ auVar11;
          auVar39._0_4_ = -(uint)(auVar42._0_4_ < auVar38._0_4_);
          auVar39._4_4_ = -(uint)(auVar42._4_4_ < auVar38._4_4_);
          auVar39._8_4_ = -(uint)(auVar42._8_4_ < auVar38._8_4_);
          auVar39._12_4_ = -(uint)(auVar42._12_4_ < auVar38._12_4_);
          auVar38 = pshuflw(auVar39,auVar39,0xe8);
          auVar38 = pshufhw(auVar38,auVar38,0xe8);
          auVar40._0_4_ = auVar38._0_4_;
          auVar40._4_4_ = auVar38._8_4_;
          in_XMM2._0_4_ = (int)((auVar34._0_4_ - uVar26) * 0x10000) >> 0x10;
          in_XMM2._4_4_ = (int)((auVar29._10_2_ - uVar26) * 0x10000) >> 0x10;
          in_XMM2._8_4_ = (int)((auVar29._12_2_ - uVar26) * 0x10000) >> 0x10;
          in_XMM2._12_4_ = (int)((auVar29._14_2_ - uVar26) * 0x10000) >> 0x10;
          auVar31._0_4_ = (int)((auVar30._0_4_ - uVar26) * 0x10000) >> 0x10;
          auVar31._4_4_ = (int)(((int)Var9 - uVar26) * 0x10000) >> 0x10;
          auVar31._8_4_ = (int)((auVar7._8_4_ - uVar26) * 0x10000) >> 0x10;
          auVar31._12_4_ = (int)(((auVar5._10_4_ >> 0x10) - uVar26) * 0x10000) >> 0x10;
          auVar29 = packssdw(auVar31,in_XMM2);
          auVar29 = ~auVar40 & auVar29;
          auVar32._0_8_ = auVar29._8_8_;
          auVar32._8_4_ = auVar29._0_4_;
          auVar32._12_4_ = auVar29._4_4_;
          auVar29 = pshuflw(auVar32,auVar32,0x1b);
          auVar29 = pshufhw(auVar29,auVar29,0x1b);
          *pauVar17 = auVar29;
          pauVar17 = pauVar17 + -1;
          lVar22 = lVar22 + -8;
          if (lVar22 == 0) goto joined_r0x00629f4d;
        } while( true );
      }
      do {
        puVar19 = puVar19 + -1;
        uVar12 = 0;
        if (uVar26 <= *puVar19) {
          uVar12 = *puVar19 - (short)uVar26;
        }
        *puVar19 = uVar12;
        uVar20 = uVar20 - 1;
        uVar24 = uVar20;
joined_r0x00629f4d:
      } while (uVar24 != 0);
      uVar23 = uVar23 + uVar21;
    }
    plVar2 = (longlong *)*param_1;
    uVar20 = *(uint *)(plVar2 + 1);
    if (uVar20 == 0) break;
    uVar26 = *(uint *)((longlong)param_1 + 0x9c);
    if (uVar20 <= uVar23) {
      uVar23 = uVar20;
    }
    if (uVar23 == 0) {
      uVar23 = 0;
    }
    else {
      lVar22 = (ulonglong)uVar25 + param_1[10] + (ulonglong)uVar26;
      *(uint *)(plVar2 + 1) = uVar20 - uVar23;
      FUN_00626670(lVar22,*plVar2,(ulonglong)uVar23);
      if (*(int *)(plVar2[5] + 0x2c) == 2) {
        uVar13 = FUN_00634c80(*(undefined4 *)((longlong)plVar2 + 0x4c),lVar22,uVar23);
LAB_0062a002:
        *(undefined4 *)((longlong)plVar2 + 0x4c) = uVar13;
      }
      else if (*(int *)(plVar2[5] + 0x2c) == 1) {
        uVar13 = FUN_006347b0(*(undefined4 *)((longlong)plVar2 + 0x4c),lVar22,uVar23);
        goto LAB_0062a002;
      }
      *plVar2 = *plVar2 + (ulonglong)uVar23;
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + uVar23;
      uVar26 = *(uint *)((longlong)param_1 + 0x9c);
    }
    uVar26 = uVar26 + uVar23;
    *(uint *)((longlong)param_1 + 0x9c) = uVar26;
    iVar14 = *(int *)((longlong)param_1 + 0x170c);
    if (2 < iVar14 + uVar26) {
      uVar23 = *(int *)((longlong)param_1 + 0x94) - iVar14;
      uVar15 = (ulonglong)uVar23;
      lVar22 = param_1[10];
      bVar1 = *(byte *)(lVar22 + uVar15);
      *(uint *)(param_1 + 0xe) = (uint)bVar1;
      bVar18 = (byte)(int)param_1[0x10];
      uVar25 = *(uint *)((longlong)param_1 + 0x7c);
      uVar23 = ((uint)*(byte *)(lVar22 + (ulonglong)(uVar23 + 1)) ^ (uint)bVar1 << (bVar18 & 0x1f))
               & uVar25;
      uVar16 = (ulonglong)uVar23;
      *(uint *)(param_1 + 0xe) = uVar23;
      if (iVar14 != 0) {
        iVar14 = iVar14 + -1;
        do {
          uVar23 = (uint)uVar15;
          uVar20 = ((uint)*(byte *)(lVar22 + (ulonglong)(uVar23 + 2)) ^
                   (int)uVar16 << (bVar18 & 0x1f)) & uVar25;
          uVar16 = (ulonglong)uVar20;
          *(uint *)(param_1 + 0xe) = uVar20;
          lVar3 = param_1[0xd];
          *(undefined2 *)
           (param_1[0xc] + (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & uVar23) * 2) =
               *(undefined2 *)(lVar3 + uVar16 * 2);
          *(short *)(lVar3 + uVar16 * 2) = (short)uVar15;
          *(int *)((longlong)param_1 + 0x170c) = iVar14;
          if (uVar26 + iVar14 < 3) break;
          uVar15 = (ulonglong)(uVar23 + 1);
          iVar14 = iVar14 + -1;
        } while (iVar14 != -1);
      }
    }
    if ((0x105 < uVar26) || (*(int *)(*param_1 + 8) == 0)) break;
    uVar15 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
  }
  uVar21 = *(uint *)(param_1 + 0x2e3);
  uVar26 = *(uint *)(param_1 + 0xb);
  if (uVar21 < uVar26) {
    uVar25 = *(int *)((longlong)param_1 + 0x9c) + *(int *)((longlong)param_1 + 0x94);
    if (uVar21 < uVar25) {
      uVar21 = 0x102;
      if (uVar26 - uVar25 < 0x102) {
        uVar21 = uVar26 - uVar25;
      }
      FUN_00626680((ulonglong)uVar25 + param_1[10],0,uVar21);
      iVar14 = uVar21 + uVar25;
    }
    else {
      if (uVar25 + 0x102 <= uVar21) {
        return;
      }
      uVar23 = (uVar25 + 0x102) - uVar21;
      uVar25 = uVar26 - uVar21;
      if (uVar23 <= uVar26 - uVar21) {
        uVar25 = uVar23;
      }
      FUN_00626680((ulonglong)uVar21 + param_1[10],0,uVar25);
      iVar14 = uVar25 + (int)param_1[0x2e3];
    }
    *(int *)(param_1 + 0x2e3) = iVar14;
  }
  return;
}

