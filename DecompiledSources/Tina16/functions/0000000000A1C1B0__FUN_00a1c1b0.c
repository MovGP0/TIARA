/* Ghidra address: 00a1c1b0 */
/* Ghidra symbol: FUN_00a1c1b0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a1c1b0(longlong *param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  int iVar17;
  uint uVar23;
  int iVar25;
  undefined1 auVar18 [16];
  int iVar24;
  int iVar26;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 != 100) {
    lVar13 = *param_1;
    *(undefined4 *)(lVar13 + 0x28) = 0x14;
    *(int *)(lVar13 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  puVar12 = (undefined8 *)param_1[0xc];
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)FUN_00a1bdb0(param_1);
    param_1[0xc] = (longlong)puVar12;
  }
  auVar11 = _DAT_01e6fe10;
  auVar10 = _DAT_01e6fe00;
  auVar9 = _DAT_01e6fdf0;
  uVar8 = uRam0000000001e6fdec;
  uVar7 = uRam0000000001e6fde8;
  uVar6 = uRam0000000001e6fde4;
  uVar5 = _DAT_01e6fde0;
  iVar4 = iRam0000000001e6fddc;
  iVar3 = iRam0000000001e6fdd8;
  iVar2 = iRam0000000001e6fdd4;
  iVar1 = _DAT_01e6fdd0;
  bVar15 = param_3 != 0;
  auVar34._1_3_ = 0;
  auVar34[0] = bVar15;
  auVar34[4] = bVar15;
  auVar34._5_3_ = 0;
  auVar34[8] = bVar15;
  auVar34._9_3_ = 0;
  auVar34[0xc] = bVar15;
  auVar34._13_3_ = 0;
  lVar13 = 0;
  auVar39._0_4_ = (int)_DAT_01e6fde0 >> 0x1f;
  auVar39._4_4_ = (int)uRam0000000001e6fde4 >> 0x1f;
  auVar39._8_4_ = (int)uRam0000000001e6fde8 >> 0x1f;
  auVar39._12_4_ = (int)uRam0000000001e6fdec >> 0x1f;
  puVar14 = puVar12;
  do {
    auVar28 = *(undefined1 (*) [16])(&DAT_01e6ff30 + lVar13);
    uVar23 = auVar28._4_4_;
    auVar27._4_4_ = uVar23;
    auVar27._0_4_ = uVar23;
    auVar27._8_4_ = auVar28._12_4_;
    auVar27._12_4_ = auVar28._12_4_;
    auVar18._0_4_ = (int)((ulonglong)auVar28._0_4_ * (param_2 & 0xffffffff)) + iVar1;
    auVar18._4_4_ = (int)((ulonglong)uVar23 * (param_2 & 0xffffffff)) + iVar2;
    auVar18._8_4_ = (int)((auVar28._8_8_ & 0xffffffff) * (param_2 & 0xffffffff)) + iVar3;
    auVar18._12_4_ = (int)((auVar27._8_8_ & 0xffffffff) * (param_2 & 0xffffffff)) + iVar4;
    auVar28 = auVar39 & auVar18;
    auVar29._4_4_ = auVar18._4_4_;
    auVar29._0_4_ = auVar18._4_4_;
    auVar29._8_4_ = auVar18._12_4_;
    auVar29._12_4_ = auVar18._12_4_;
    iVar17 = (int)((ulonglong)auVar18._0_4_ * (ulonglong)uVar5 >> 0x20) -
             (((int)auVar18._0_4_ >> 0x1f & uVar5) + auVar28._0_4_);
    iVar24 = (int)((ulonglong)auVar18._4_4_ * (ulonglong)uVar6 >> 0x20) -
             (((int)auVar18._4_4_ >> 0x1f & uVar6) + auVar28._4_4_);
    iVar25 = (int)((auVar18._8_8_ & 0xffffffff) * (ulonglong)uVar7 >> 0x20) -
             ((auVar18._8_4_ >> 0x1f & uVar7) + auVar28._8_4_);
    iVar26 = (int)((auVar29._8_8_ & 0xffffffff) * (ulonglong)uVar8 >> 0x20) -
             ((auVar18._12_4_ >> 0x1f & uVar8) + auVar28._12_4_);
    auVar28._0_4_ = (iVar17 >> 5) - (iVar17 >> 0x1f);
    auVar28._4_4_ = (iVar24 >> 5) - (iVar24 >> 0x1f);
    auVar28._8_4_ = (iVar25 >> 5) - (iVar25 >> 0x1f);
    auVar28._12_4_ = (iVar26 >> 5) - (iVar26 >> 0x1f);
    auVar30._0_4_ = -(uint)(auVar9._0_4_ < auVar28._0_4_);
    auVar30._4_4_ = -(uint)(auVar9._4_4_ < auVar28._4_4_);
    auVar30._8_4_ = -(uint)(auVar9._8_4_ < auVar28._8_4_);
    auVar30._12_4_ = -(uint)(auVar9._12_4_ < auVar28._12_4_);
    auVar28 = ~auVar30 & auVar9 | auVar28 & auVar30;
    auVar19._0_4_ = -(uint)(auVar28._0_4_ < auVar10._0_4_);
    auVar19._4_4_ = -(uint)(auVar28._4_4_ < auVar10._4_4_);
    auVar19._8_4_ = -(uint)(auVar28._8_4_ < auVar10._8_4_);
    auVar19._12_4_ = -(uint)(auVar28._12_4_ < auVar10._12_4_);
    auVar28 = ~auVar19 & auVar10 | auVar28 & auVar19;
    auVar31._0_4_ = -(uint)(auVar11._0_4_ < auVar28._0_4_);
    auVar31._4_4_ = -(uint)(auVar11._4_4_ < auVar28._4_4_);
    auVar31._8_4_ = -(uint)(auVar11._8_4_ < auVar28._8_4_);
    auVar31._12_4_ = -(uint)(auVar11._12_4_ < auVar28._12_4_);
    auVar31 = auVar31 & auVar34;
    auVar32._0_4_ = (auVar31._0_4_ << 0x1f) >> 0x1f;
    auVar32._4_4_ = (auVar31._4_4_ << 0x1f) >> 0x1f;
    auVar32._8_4_ = (auVar31._8_4_ << 0x1f) >> 0x1f;
    auVar32._12_4_ = (auVar31._12_4_ << 0x1f) >> 0x1f;
    auVar28 = pshuflw(auVar28,~auVar32 & auVar28 | auVar11 & auVar32,0xe8);
    auVar28 = pshufhw(auVar28,auVar28,0xe8);
    *puVar14 = CONCAT44(auVar28._8_4_,auVar28._0_4_);
    lVar13 = lVar13 + 0x10;
    puVar14 = puVar14 + 1;
  } while (lVar13 != 0x100);
  *(undefined4 *)(puVar12 + 0x10) = 0;
  iVar17 = *(int *)((longlong)param_1 + 0x24);
  if (iVar17 != 100) {
    lVar13 = *param_1;
    *(undefined4 *)(lVar13 + 0x28) = 0x14;
    *(int *)(lVar13 + 0x2c) = iVar17;
    (**(code **)*param_1)(param_1);
  }
  puVar12 = (undefined8 *)param_1[0xd];
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)FUN_00a1bdb0(param_1);
    param_1[0xd] = (longlong)puVar12;
  }
  bVar15 = param_3 != 0;
  auVar16._1_3_ = 0;
  auVar16[0] = bVar15;
  auVar16[4] = bVar15;
  auVar16._5_3_ = 0;
  auVar16[8] = bVar15;
  auVar16._9_3_ = 0;
  auVar16[0xc] = bVar15;
  auVar16._13_3_ = 0;
  lVar13 = 0;
  puVar14 = puVar12;
  do {
    auVar34 = *(undefined1 (*) [16])(&DAT_01e70030 + lVar13);
    uVar23 = auVar34._4_4_;
    auVar33._4_4_ = uVar23;
    auVar33._0_4_ = uVar23;
    auVar33._8_4_ = auVar34._12_4_;
    auVar33._12_4_ = auVar34._12_4_;
    auVar20._0_4_ = (int)((ulonglong)auVar34._0_4_ * (param_2 & 0xffffffff)) + iVar1;
    auVar20._4_4_ = (int)((ulonglong)uVar23 * (param_2 & 0xffffffff)) + iVar2;
    auVar20._8_4_ = (int)((auVar34._8_8_ & 0xffffffff) * (param_2 & 0xffffffff)) + iVar3;
    auVar20._12_4_ = (int)((auVar33._8_8_ & 0xffffffff) * (param_2 & 0xffffffff)) + iVar4;
    auVar34 = auVar39 & auVar20;
    auVar35._4_4_ = auVar20._4_4_;
    auVar35._0_4_ = auVar20._4_4_;
    auVar35._8_4_ = auVar20._12_4_;
    auVar35._12_4_ = auVar20._12_4_;
    iVar17 = (int)((ulonglong)auVar20._0_4_ * (ulonglong)uVar5 >> 0x20) -
             (((int)auVar20._0_4_ >> 0x1f & uVar5) + auVar34._0_4_);
    iVar24 = (int)((ulonglong)auVar20._4_4_ * (ulonglong)uVar6 >> 0x20) -
             (((int)auVar20._4_4_ >> 0x1f & uVar6) + auVar34._4_4_);
    iVar25 = (int)((auVar20._8_8_ & 0xffffffff) * (ulonglong)uVar7 >> 0x20) -
             ((auVar20._8_4_ >> 0x1f & uVar7) + auVar34._8_4_);
    iVar26 = (int)((auVar35._8_8_ & 0xffffffff) * (ulonglong)uVar8 >> 0x20) -
             ((auVar20._12_4_ >> 0x1f & uVar8) + auVar34._12_4_);
    auVar21._0_4_ = (iVar17 >> 5) - (iVar17 >> 0x1f);
    auVar21._4_4_ = (iVar24 >> 5) - (iVar24 >> 0x1f);
    auVar21._8_4_ = (iVar25 >> 5) - (iVar25 >> 0x1f);
    auVar21._12_4_ = (iVar26 >> 5) - (iVar26 >> 0x1f);
    auVar36._0_4_ = -(uint)(auVar9._0_4_ < auVar21._0_4_);
    auVar36._4_4_ = -(uint)(auVar9._4_4_ < auVar21._4_4_);
    auVar36._8_4_ = -(uint)(auVar9._8_4_ < auVar21._8_4_);
    auVar36._12_4_ = -(uint)(auVar9._12_4_ < auVar21._12_4_);
    auVar34 = ~auVar36 & auVar9 | auVar21 & auVar36;
    auVar22._0_4_ = -(uint)(auVar34._0_4_ < auVar10._0_4_);
    auVar22._4_4_ = -(uint)(auVar34._4_4_ < auVar10._4_4_);
    auVar22._8_4_ = -(uint)(auVar34._8_4_ < auVar10._8_4_);
    auVar22._12_4_ = -(uint)(auVar34._12_4_ < auVar10._12_4_);
    auVar34 = ~auVar22 & auVar10 | auVar34 & auVar22;
    auVar37._0_4_ = -(uint)(auVar11._0_4_ < auVar34._0_4_);
    auVar37._4_4_ = -(uint)(auVar11._4_4_ < auVar34._4_4_);
    auVar37._8_4_ = -(uint)(auVar11._8_4_ < auVar34._8_4_);
    auVar37._12_4_ = -(uint)(auVar11._12_4_ < auVar34._12_4_);
    auVar37 = auVar37 & auVar16;
    auVar38._0_4_ = (auVar37._0_4_ << 0x1f) >> 0x1f;
    auVar38._4_4_ = (auVar37._4_4_ << 0x1f) >> 0x1f;
    auVar38._8_4_ = (auVar37._8_4_ << 0x1f) >> 0x1f;
    auVar38._12_4_ = (auVar37._12_4_ << 0x1f) >> 0x1f;
    auVar34 = pshuflw(auVar34,~auVar38 & auVar34 | auVar11 & auVar38,0xe8);
    auVar34 = pshufhw(auVar34,auVar34,0xe8);
    *puVar14 = CONCAT44(auVar34._8_4_,auVar34._0_4_);
    lVar13 = lVar13 + 0x10;
    puVar14 = puVar14 + 1;
  } while (lVar13 != 0x100);
  *(undefined4 *)(puVar12 + 0x10) = 0;
  return;
}

