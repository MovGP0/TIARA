/* Ghidra address: 00a23640 */
/* Ghidra symbol: FUN_00a23640 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a23640(longlong *param_1)

{
  int *piVar1;
  float *pfVar2;
  ulonglong uVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [12];
  undefined1 auVar15 [14];
  undefined1 auVar16 [12];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  int iVar32;
  longlong lVar33;
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined2 uVar42;
  
  iVar27 = iRam0000000001e707cc;
  iVar26 = iRam0000000001e707c8;
  iVar25 = iRam0000000001e707c4;
  iVar24 = _DAT_01e707c0;
  dVar23 = dRam0000000001e707b8;
  dVar22 = _DAT_01e707b0;
  auVar21 = _DAT_01e707a0;
  dVar20 = dRam0000000001e70798;
  dVar19 = _DAT_01e70790;
  dVar18 = dRam0000000001e70788;
  dVar17 = _DAT_01e70780;
  if (0 < *(int *)((longlong)param_1 + 0x4c)) {
    lVar6 = param_1[0x3d];
    lVar33 = param_1[0xb];
    iVar32 = 0;
    do {
      iVar5 = *(int *)(lVar33 + 0x10);
      uVar31 = (ulonglong)iVar5;
      if ((3 < uVar31) || (lVar30 = param_1[uVar31 + 0xc], lVar30 == 0)) {
        lVar30 = *param_1;
        *(undefined4 *)(lVar30 + 0x28) = 0x34;
        *(int *)(lVar30 + 0x2c) = iVar5;
        (**(code **)*param_1)();
        lVar30 = param_1[uVar31 + 0xc];
      }
      if (*(int *)((longlong)param_1 + 0x114) == 2) {
        lVar28 = *(longlong *)(lVar6 + 0x40 + uVar31 * 8);
        if (lVar28 == 0) {
          lVar28 = (**(code **)param_1[1])(param_1,1,0x100);
          *(longlong *)(lVar6 + 0x40 + uVar31 * 8) = lVar28;
        }
        lVar29 = 0;
        do {
          dVar4 = *(double *)((longlong)&DAT_01e70870 + lVar29);
          auVar44._0_8_ = (double)*(ushort *)(lVar30 + 4 + lVar29 * 2) * dVar4 * dVar17 * dVar19;
          auVar44._8_8_ = (double)*(ushort *)(lVar30 + 6 + lVar29 * 2) * dVar4 * dVar18 * dVar20;
          auVar45._0_8_ = (double)*(ushort *)(lVar30 + lVar29 * 2) * dVar4 * dVar19;
          auVar45._8_8_ =
               DAT_01e70770 * (double)*(ushort *)(lVar30 + 2 + lVar29 * 2) * dVar4 * dVar20;
          auVar43 = divpd(auVar21,auVar44);
          auVar45 = divpd(auVar21,auVar45);
          puVar7 = (undefined8 *)(lVar28 + lVar29 * 4);
          *puVar7 = CONCAT44((float)auVar45._8_8_,(float)auVar45._0_8_);
          puVar7[1] = CONCAT44((float)auVar43._8_8_,(float)auVar43._0_8_);
          auVar46._0_8_ = (double)*(ushort *)(lVar30 + 0xc + lVar29 * 2) * dVar4 * dVar22 * dVar19;
          auVar46._8_8_ = (double)*(ushort *)(lVar30 + 0xe + lVar29 * 2) * dVar4 * dVar23 * dVar20;
          auVar43._0_8_ = (double)*(ushort *)(lVar30 + 8 + lVar29 * 2) * dVar4 * dVar19;
          auVar43._8_8_ =
               DAT_01e70778 * (double)*(ushort *)(lVar30 + 10 + lVar29 * 2) * dVar4 * dVar20;
          auVar45 = divpd(auVar21,auVar46);
          auVar43 = divpd(auVar21,auVar43);
          pfVar2 = (float *)(lVar28 + 0x10 + lVar29 * 4);
          *pfVar2 = (float)auVar43._0_8_;
          pfVar2[1] = (float)auVar43._8_8_;
          pfVar2[2] = (float)auVar45._0_8_;
          pfVar2[3] = (float)auVar45._8_8_;
          lVar29 = lVar29 + 8;
        } while (lVar29 != 0x40);
      }
      else if (*(int *)((longlong)param_1 + 0x114) == 1) {
        lVar28 = *(longlong *)(lVar6 + 0x18 + uVar31 * 8);
        if (lVar28 == 0) {
          lVar28 = (**(code **)param_1[1])(param_1,1,0x100);
          *(longlong *)(lVar6 + 0x18 + uVar31 * 8) = lVar28;
        }
        lVar29 = 0;
        do {
          uVar31 = *(ulonglong *)(lVar30 + lVar29 * 2);
          auVar9._8_4_ = 0;
          auVar9._0_8_ = uVar31;
          auVar9._12_2_ = (short)(uVar31 >> 0x30);
          auVar11._8_2_ = (short)(uVar31 >> 0x20);
          auVar11._0_8_ = uVar31;
          auVar11._10_4_ = auVar9._10_4_;
          auVar13._6_8_ = 0;
          auVar13._0_6_ = auVar11._8_6_;
          uVar3 = *(ulonglong *)((longlong)&DAT_01e707f0 + lVar29 * 2);
          uVar42 = (undefined2)(uVar3 >> 0x30);
          auVar36._8_4_ = 0;
          auVar36._0_8_ = uVar3;
          auVar36._12_2_ = uVar42;
          auVar36._14_2_ = uVar42;
          uVar42 = (undefined2)(uVar3 >> 0x20);
          auVar35._12_4_ = auVar36._12_4_;
          auVar35._8_2_ = 0;
          auVar35._0_8_ = uVar3;
          auVar35._10_2_ = uVar42;
          auVar34._10_6_ = auVar35._10_6_;
          auVar34._8_2_ = uVar42;
          auVar34._0_8_ = uVar3;
          uVar42 = (undefined2)(uVar3 >> 0x10);
          auVar14._4_8_ = auVar34._8_8_;
          auVar14._2_2_ = uVar42;
          auVar14._0_2_ = uVar42;
          auVar37._0_4_ = (uint)(short)uVar3;
          auVar37._4_4_ = auVar14._0_4_ >> 0x10;
          auVar37._8_4_ = auVar34._8_4_ >> 0x10;
          auVar37._12_4_ = auVar35._12_4_ >> 0x10;
          piVar1 = (int *)(lVar28 + lVar29 * 4);
          *piVar1 = (int)((ulonglong)auVar37._0_4_ * (uVar31 & 0xffff)) + iVar24 >> 0xb;
          piVar1[1] = (int)CONCAT82(SUB148(auVar13 << 0x40,6),(short)(uVar31 >> 0x10)) *
                      auVar37._4_4_ + iVar25 >> 0xb;
          piVar1[2] = (int)((auVar37._8_8_ & 0xffffffff) * ((ulonglong)auVar11._8_6_ & 0xffffffff))
                      + iVar26 >> 0xb;
          piVar1[3] = (int)((auVar9._10_4_ >> 0x10) * auVar37._12_4_ + iVar27) >> 0xb;
          uVar31 = *(ulonglong *)(lVar30 + 8 + lVar29 * 2);
          auVar8._8_4_ = 0;
          auVar8._0_8_ = uVar31;
          auVar8._12_2_ = (short)(uVar31 >> 0x30);
          auVar10._8_2_ = (short)(uVar31 >> 0x20);
          auVar10._0_8_ = uVar31;
          auVar10._10_4_ = auVar8._10_4_;
          auVar15._6_8_ = 0;
          auVar15._0_6_ = auVar10._8_6_;
          auVar12._4_2_ = (short)(uVar31 >> 0x10);
          auVar12._0_4_ = (uint)uVar31;
          auVar12._6_8_ = SUB148(auVar15 << 0x40,6);
          uVar3 = *(ulonglong *)((longlong)&DAT_01e707f8 + lVar29 * 2);
          uVar42 = (undefined2)(uVar3 >> 0x30);
          auVar40._8_4_ = 0;
          auVar40._0_8_ = uVar3;
          auVar40._12_2_ = uVar42;
          auVar40._14_2_ = uVar42;
          uVar42 = (undefined2)(uVar3 >> 0x20);
          auVar39._12_4_ = auVar40._12_4_;
          auVar39._8_2_ = 0;
          auVar39._0_8_ = uVar3;
          auVar39._10_2_ = uVar42;
          auVar38._10_6_ = auVar39._10_6_;
          auVar38._8_2_ = uVar42;
          auVar38._0_8_ = uVar3;
          uVar42 = (undefined2)(uVar3 >> 0x10);
          auVar16._4_8_ = auVar38._8_8_;
          auVar16._2_2_ = uVar42;
          auVar16._0_2_ = uVar42;
          auVar41._0_4_ = (int)(short)uVar3;
          auVar41._4_4_ = auVar16._0_4_ >> 0x10;
          auVar41._8_4_ = auVar38._8_4_ >> 0x10;
          auVar41._12_4_ = auVar39._12_4_ >> 0x10;
          piVar1 = (int *)(lVar28 + 0x10 + lVar29 * 4);
          *piVar1 = (int)(auVar41._0_4_ * ((uint)uVar31 & 0xffff) + iVar24) >> 0xb;
          piVar1[1] = auVar12._4_4_ * auVar41._4_4_ + iVar25 >> 0xb;
          piVar1[2] = (int)((auVar41._8_8_ & 0xffffffff) * ((ulonglong)auVar10._8_6_ & 0xffffffff))
                      + iVar26 >> 0xb;
          piVar1[3] = (int)((auVar8._10_4_ >> 0x10) * auVar41._12_4_ + iVar27) >> 0xb;
          lVar29 = lVar29 + 8;
        } while (lVar29 != 0x40);
      }
      else {
        puVar7 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar7 + 5) = 0x30;
        (*(code *)*puVar7)();
      }
      iVar32 = iVar32 + 1;
      lVar33 = lVar33 + 0x60;
    } while (iVar32 < *(int *)((longlong)param_1 + 0x4c));
  }
  return;
}

