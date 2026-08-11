/* Ghidra address: 00a23b10 */
/* Ghidra symbol: FUN_00a23b10 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a23b10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
                 uint param_6,uint param_7)

{
  float *pfVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float local_168 [74];
  
  sVar16 = sRam0000000001e707ee;
  sVar15 = sRam0000000001e707ec;
  sVar14 = sRam0000000001e707ea;
  sVar13 = sRam0000000001e707e8;
  sVar12 = sRam0000000001e707e6;
  sVar11 = sRam0000000001e707e4;
  sVar10 = sRam0000000001e707e2;
  sVar9 = _DAT_01e707e0;
  fVar8 = fRam0000000001e707dc;
  fVar7 = fRam0000000001e707d8;
  fVar6 = fRam0000000001e707d4;
  fVar5 = _DAT_01e707d0;
  if (param_7 != 0) {
    pcVar2 = *(code **)(*(longlong *)(param_1 + 0x1e8) + 0x38);
    lVar3 = *(longlong *)
             (*(longlong *)(param_1 + 0x1e8) + 0x40 + (longlong)*(int *)(param_2 + 0x10) * 8);
    param_4 = param_4 + 8;
    uVar19 = 0;
    do {
      uVar18 = (ulonglong)param_6;
      lVar17 = 0;
      do {
        lVar4 = *(longlong *)(param_3 + (ulonglong)param_5 * 8 + lVar17);
        local_168[lVar17] = (float)(int)(*(byte *)(lVar4 + uVar18) - 0x80);
        local_168[lVar17 + 1] = (float)(int)(*(byte *)(lVar4 + 1 + uVar18) - 0x80);
        local_168[lVar17 + 2] = (float)(int)(*(byte *)(lVar4 + 2 + uVar18) - 0x80);
        local_168[lVar17 + 3] = (float)(int)(*(byte *)(lVar4 + 3 + uVar18) - 0x80);
        local_168[lVar17 + 4] = (float)(int)(*(byte *)(lVar4 + 4 + uVar18) - 0x80);
        local_168[lVar17 + 5] = (float)(int)(*(byte *)(lVar4 + 5 + uVar18) - 0x80);
        local_168[lVar17 + 6] = (float)(int)(*(byte *)(lVar4 + 6 + uVar18) - 0x80);
        local_168[lVar17 + 7] = (float)(int)(*(byte *)(lVar4 + 7 + uVar18) - 0x80);
        lVar17 = lVar17 + 8;
      } while (lVar17 != 0x40);
      (*pcVar2)(local_168);
      lVar17 = 0;
      do {
        pfVar1 = (float *)(lVar3 + lVar17 * 4);
        iVar20 = (int)(*pfVar1 * local_168[lVar17] + fVar5);
        iVar23 = (int)(pfVar1[1] * local_168[lVar17 + 1] + fVar6);
        iVar24 = (int)(pfVar1[2] * local_168[lVar17 + 2] + fVar7);
        iVar25 = (int)(pfVar1[3] * local_168[lVar17 + 3] + fVar8);
        auVar21._0_2_ = (short)iVar20 + sVar9;
        auVar21._2_2_ = (short)((uint)iVar20 >> 0x10) + sVar10;
        auVar21._4_2_ = (short)iVar23 + sVar11;
        auVar21._6_2_ = (short)((uint)iVar23 >> 0x10) + sVar12;
        auVar21._8_2_ = (short)iVar24 + sVar13;
        auVar21._10_2_ = (short)((uint)iVar24 >> 0x10) + sVar14;
        auVar21._12_2_ = (short)iVar25 + sVar15;
        auVar21._14_2_ = (short)((uint)iVar25 >> 0x10) + sVar16;
        auVar21 = pshuflw(auVar21,auVar21,0xe8);
        auVar21 = pshufhw(auVar21,auVar21,0xe8);
        *(ulonglong *)(param_4 + -8 + lVar17 * 2) = CONCAT44(auVar21._8_4_,auVar21._0_4_);
        pfVar1 = (float *)(lVar3 + 0x10 + lVar17 * 4);
        iVar20 = (int)(*pfVar1 * local_168[lVar17 + 4] + fVar5);
        iVar23 = (int)(pfVar1[1] * local_168[lVar17 + 5] + fVar6);
        iVar24 = (int)(pfVar1[2] * local_168[lVar17 + 6] + fVar7);
        iVar25 = (int)(pfVar1[3] * local_168[lVar17 + 7] + fVar8);
        auVar22._0_2_ = (short)iVar20 + sVar9;
        auVar22._2_2_ = (short)((uint)iVar20 >> 0x10) + sVar10;
        auVar22._4_2_ = (short)iVar23 + sVar11;
        auVar22._6_2_ = (short)((uint)iVar23 >> 0x10) + sVar12;
        auVar22._8_2_ = (short)iVar24 + sVar13;
        auVar22._10_2_ = (short)((uint)iVar24 >> 0x10) + sVar14;
        auVar22._12_2_ = (short)iVar25 + sVar15;
        auVar22._14_2_ = (short)((uint)iVar25 >> 0x10) + sVar16;
        auVar21 = pshuflw(auVar22,auVar22,0xe8);
        auVar21 = pshufhw(auVar21,auVar21,0xe8);
        *(ulonglong *)(param_4 + lVar17 * 2) = CONCAT44(auVar21._8_4_,auVar21._0_4_);
        lVar17 = lVar17 + 8;
      } while (lVar17 != 0x40);
      uVar19 = uVar19 + 1;
      param_6 = param_6 + 8;
      param_4 = param_4 + 0x80;
    } while (uVar19 != param_7);
  }
  return;
}

