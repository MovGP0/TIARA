/* Ghidra address: 01a9e380 */
/* Ghidra symbol: FUN_01a9e380 */


void FUN_01a9e380(longlong *param_1,longlong *param_2)

{
  undefined1 auVar1 [12];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  short sVar11;
  ushort uVar12;
  short sVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  undefined1 auVar20 [12];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  ushort local_d4;
  ushort local_d2;
  
  iVar14 = (**(code **)(*param_1 + 0x60))(param_1);
  iVar15 = (**(code **)(*param_2 + 0x60))(param_2);
  fVar2 = (float)iVar14 / (float)iVar15;
  iVar14 = (**(code **)(*param_1 + 0x48))(param_1);
  iVar15 = (**(code **)(*param_2 + 0x48))(param_2);
  fVar3 = (float)iVar14 / (float)iVar15;
  sVar8 = (**(code **)(*param_2 + 0x48))();
  local_d2 = 0;
  do {
    fVar4 = fVar3 * (float)local_d2;
    lVar17 = FUN_0060a050(param_2,local_d2);
    sVar9 = (**(code **)(*param_2 + 0x60))();
    local_d4 = 0;
    do {
      fVar5 = fVar2 * (float)local_d4;
      fVar7 = fVar5 + fVar2;
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      uVar10 = FUN_005263a0(fVar4);
      sVar11 = FUN_005262b0();
      if (uVar10 <= (ushort)(sVar11 - 1U)) {
        sVar11 = ((sVar11 - 1U) - uVar10) + 1;
        do {
          iVar14 = (**(code **)(*param_1 + 0x48))(param_1);
          if ((int)(uint)uVar10 < iVar14) {
            lVar18 = FUN_0060a050(param_1,(uint)uVar10);
            auVar24 = ZEXT812(0x3f800000);
            if ((float)uVar10 < fVar4) {
              auVar24._4_8_ = 0;
              auVar24._0_4_ = 1.0 - (fVar4 - (float)uVar10);
            }
            if (fVar4 + fVar3 < (float)(uVar10 + 1)) {
              auVar24._4_8_ = auVar24._4_8_;
              auVar24._0_4_ = auVar24._0_4_ - ((float)(uVar10 + 1) - (fVar4 + fVar3));
            }
            uVar12 = FUN_005263a0(fVar5);
            sVar13 = FUN_005262b0(fVar7);
            if (uVar12 <= (ushort)(sVar13 - 1U)) {
              sVar13 = ((sVar13 - 1U) - uVar12) + 1;
              do {
                auVar20 = ZEXT812(0x3f800000);
                if ((float)uVar12 < fVar5) {
                  dVar19 = 1.0 - ((double)fVar5 - (double)uVar12);
                  auVar20._4_8_ = (ulonglong)dVar19 >> 0x20;
                  auVar20._0_4_ = (float)dVar19;
                }
                if (fVar7 < (float)(uVar12 + 1)) {
                  dVar19 = (double)auVar20._0_4_ - ((double)(uVar12 + 1) - (double)fVar7);
                  auVar1._8_4_ = auVar20._8_4_;
                  auVar1._0_8_ = dVar19;
                  auVar20._4_8_ = auVar1._4_8_;
                  auVar20._0_4_ = (float)dVar19;
                }
                uVar16 = *(uint *)(lVar18 + (ulonglong)uVar12 * 4);
                fVar6 = auVar20._0_4_ * auVar24._0_4_ * (1.0 / fVar2) * (1.0 / fVar3);
                fVar21 = fVar21 + (float)(uVar16 >> 0x10 & 0xff) * fVar6;
                fVar22 = fVar22 + (float)(uVar16 >> 8 & 0xff) * fVar6;
                fVar23 = fVar23 + (float)(uVar16 & 0xff) * fVar6;
                uVar12 = uVar12 + 1;
                sVar13 = sVar13 + -1;
              } while (sVar13 != 0);
            }
          }
          uVar16 = FUN_0040c840((double)fVar23);
          iVar14 = FUN_0040c840((double)fVar22);
          iVar15 = FUN_0040c840((double)fVar21);
          *(uint *)(lVar17 + (ulonglong)local_d4 * 4) = uVar16 | iVar14 << 8 | iVar15 << 0x10;
          uVar10 = uVar10 + 1;
          sVar11 = sVar11 + -1;
        } while (sVar11 != 0);
      }
      local_d4 = local_d4 + 1;
      sVar9 = sVar9 + -1;
    } while (sVar9 != 0);
    local_d2 = local_d2 + 1;
    sVar8 = sVar8 + -1;
  } while (sVar8 != 0);
  return;
}

