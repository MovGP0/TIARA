/* Ghidra address: 00a1bf80 */
/* Ghidra symbol: FUN_00a1bf80 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a1bf80(longlong *param_1,uint param_2,longlong param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  int iVar16;
  int iVar19;
  int iVar20;
  undefined1 auVar17 [16];
  int iVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 != 100) {
    lVar13 = *param_1;
    *(undefined4 *)(lVar13 + 0x28) = 0x14;
    *(int *)(lVar13 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  if (3 < param_2) {
    lVar13 = *param_1;
    *(undefined4 *)(lVar13 + 0x28) = 0x1f;
    *(uint *)(lVar13 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  lVar13 = param_1[(longlong)(int)param_2 + 0xc];
  if (lVar13 == 0) {
    lVar13 = FUN_00a1bdb0(param_1);
    param_1[(longlong)(int)param_2 + 0xc] = lVar13;
  }
  auVar12 = _DAT_01e6fdc0;
  auVar11 = _DAT_01e6fdb0;
  auVar10 = _DAT_01e6fda0;
  uVar9 = uRam0000000001e6fd9c;
  uVar8 = uRam0000000001e6fd98;
  uVar7 = uRam0000000001e6fd94;
  uVar6 = _DAT_01e6fd90;
  iVar5 = iRam0000000001e6fd8c;
  iVar4 = iRam0000000001e6fd88;
  iVar3 = iRam0000000001e6fd84;
  iVar1 = _DAT_01e6fd80;
  bVar15 = param_5 != 0;
  auVar2._1_3_ = 0;
  auVar2[0] = bVar15;
  lVar14 = 0;
  auVar28._0_4_ = (int)_DAT_01e6fd90 >> 0x1f;
  auVar28._4_4_ = (int)uRam0000000001e6fd94 >> 0x1f;
  auVar28._8_4_ = (int)uRam0000000001e6fd98 >> 0x1f;
  auVar28._12_4_ = (int)uRam0000000001e6fd9c >> 0x1f;
  do {
    auVar23 = *(undefined1 (*) [16])(param_3 + lVar14 * 4);
    iVar16 = auVar23._4_4_;
    auVar22._4_4_ = iVar16;
    auVar22._0_4_ = iVar16;
    auVar22._8_4_ = auVar23._12_4_;
    auVar22._12_4_ = auVar23._12_4_;
    auVar17._0_4_ = auVar23._0_4_ * param_4 + iVar1;
    auVar17._4_4_ = iVar16 * param_4 + iVar3;
    auVar17._8_4_ = (int)((auVar23._8_8_ & 0xffffffff) * (ulonglong)param_4) + iVar4;
    auVar17._12_4_ = (int)((auVar22._8_8_ & 0xffffffff) * (ulonglong)param_4) + iVar5;
    auVar23 = auVar28 & auVar17;
    auVar24._4_4_ = auVar17._4_4_;
    auVar24._0_4_ = auVar17._4_4_;
    auVar24._8_4_ = auVar17._12_4_;
    auVar24._12_4_ = auVar17._12_4_;
    iVar16 = (int)((ulonglong)auVar17._0_4_ * (ulonglong)uVar6 >> 0x20) -
             (((int)auVar17._0_4_ >> 0x1f & uVar6) + auVar23._0_4_);
    iVar19 = (int)((ulonglong)auVar17._4_4_ * (ulonglong)uVar7 >> 0x20) -
             (((int)auVar17._4_4_ >> 0x1f & uVar7) + auVar23._4_4_);
    iVar20 = (int)((auVar17._8_8_ & 0xffffffff) * (ulonglong)uVar8 >> 0x20) -
             ((auVar17._8_4_ >> 0x1f & uVar8) + auVar23._8_4_);
    iVar21 = (int)((auVar24._8_8_ & 0xffffffff) * (ulonglong)uVar9 >> 0x20) -
             ((auVar17._12_4_ >> 0x1f & uVar9) + auVar23._12_4_);
    auVar23._0_4_ = (iVar16 >> 5) - (iVar16 >> 0x1f);
    auVar23._4_4_ = (iVar19 >> 5) - (iVar19 >> 0x1f);
    auVar23._8_4_ = (iVar20 >> 5) - (iVar20 >> 0x1f);
    auVar23._12_4_ = (iVar21 >> 5) - (iVar21 >> 0x1f);
    auVar25._0_4_ = -(uint)(auVar10._0_4_ < auVar23._0_4_);
    auVar25._4_4_ = -(uint)(auVar10._4_4_ < auVar23._4_4_);
    auVar25._8_4_ = -(uint)(auVar10._8_4_ < auVar23._8_4_);
    auVar25._12_4_ = -(uint)(auVar10._12_4_ < auVar23._12_4_);
    auVar23 = ~auVar25 & auVar10 | auVar23 & auVar25;
    auVar18._0_4_ = -(uint)(auVar23._0_4_ < auVar11._0_4_);
    auVar18._4_4_ = -(uint)(auVar23._4_4_ < auVar11._4_4_);
    auVar18._8_4_ = -(uint)(auVar23._8_4_ < auVar11._8_4_);
    auVar18._12_4_ = -(uint)(auVar23._12_4_ < auVar11._12_4_);
    auVar23 = ~auVar18 & auVar11 | auVar23 & auVar18;
    auVar26._0_4_ = -(uint)(auVar12._0_4_ < auVar23._0_4_);
    auVar26._4_4_ = -(uint)(auVar12._4_4_ < auVar23._4_4_);
    auVar26._8_4_ = -(uint)(auVar12._8_4_ < auVar23._8_4_);
    auVar26._12_4_ = -(uint)(auVar12._12_4_ < auVar23._12_4_);
    auVar2[4] = bVar15;
    auVar2._5_3_ = 0;
    auVar2[8] = bVar15;
    auVar2._9_3_ = 0;
    auVar2[0xc] = bVar15;
    auVar2._13_3_ = 0;
    auVar26 = auVar26 & auVar2;
    auVar27._0_4_ = (auVar26._0_4_ << 0x1f) >> 0x1f;
    auVar27._4_4_ = (auVar26._4_4_ << 0x1f) >> 0x1f;
    auVar27._8_4_ = (auVar26._8_4_ << 0x1f) >> 0x1f;
    auVar27._12_4_ = (auVar26._12_4_ << 0x1f) >> 0x1f;
    auVar23 = pshuflw(auVar23,~auVar27 & auVar23 | auVar12 & auVar27,0xe8);
    auVar23 = pshufhw(auVar23,auVar23,0xe8);
    *(ulonglong *)(lVar13 + lVar14 * 2) = CONCAT44(auVar23._8_4_,auVar23._0_4_);
    lVar14 = lVar14 + 4;
  } while (lVar14 != 0x40);
  *(undefined4 *)(lVar13 + 0x80) = 0;
  return;
}

