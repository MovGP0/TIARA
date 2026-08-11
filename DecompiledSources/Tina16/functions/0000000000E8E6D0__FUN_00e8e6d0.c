/* Ghidra address: 00e8e6d0 */
/* Ghidra symbol: FUN_00e8e6d0 */


/* WARNING: Removing unreachable block (ram,0x00e8e912) */

void FUN_00e8e6d0(ushort *param_1,short param_2,int param_3,longlong param_4,longlong param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort *puVar34;
  ulonglong uVar35;
  longlong lVar36;
  ushort *puVar37;
  longlong lVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  short sVar43;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  undefined1 auVar44 [16];
  short sVar51;
  
  puVar37 = param_1;
LAB_00e8e716:
  uVar3 = *puVar37;
  switch((ulonglong)uVar3) {
  case 0:
    goto switchD_00e8e728_caseD_0;
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5e:
  case 0x5f:
  case 0x60:
    if ((ushort)(puVar37[1] - 0xf) < 2) {
      puVar37 = puVar37 + 2;
    }
    break;
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x61:
    if ((ushort)(puVar37[2] - 0xf) < 2) {
      puVar37 = puVar37 + 2;
    }
    break;
  case 0x70:
    puVar37 = puVar37 + puVar37[1];
    goto LAB_00e8e716;
  case 0x75:
    puVar34 = (ushort *)(param_5 * 2 + *(longlong *)(param_4 + 0x20));
    if (puVar37 != (ushort *)0x0) goto code_r0x00e8e78f;
    goto LAB_00e8e7ed;
  case 0x95:
  case 0x97:
  case 0x99:
  case 0x9b:
    puVar37 = puVar37 + puVar37[1];
  }
  puVar37 = puVar37 + (byte)(&DAT_01ee1510)[uVar3];
  if (((param_3 != 0) && (uVar3 - 0x1d < 0x38)) && ((puVar37[-1] & 0xfc00) == 0xd800)) {
    puVar37 = puVar37 + 1;
  }
  goto LAB_00e8e716;
code_r0x00e8e78f:
  puVar1 = puVar37 + 1;
  for (; puVar34 < *(ushort **)(param_4 + 0x40); puVar34 = puVar34 + 1) {
    if ((ushort *)(*(longlong *)(param_4 + 0x28) + (ulonglong)*puVar34 * 2) == puVar1)
    goto LAB_00e8e7da;
  }
  if (param_1 <= (ushort *)(*(longlong *)(param_4 + 0x28) + (ulonglong)*puVar1 * 2)) {
    *puVar1 = *puVar1 + param_2;
  }
LAB_00e8e7da:
  puVar37 = puVar37 + 2;
  goto LAB_00e8e716;
switchD_00e8e728_caseD_0:
  puVar34 = (ushort *)(param_5 * 2 + *(longlong *)(param_4 + 0x20));
LAB_00e8e7ed:
  puVar37 = *(ushort **)(param_4 + 0x40);
  if (puVar37 <= puVar34) {
    return;
  }
  uVar41 = (~(ulonglong)puVar34 + (longlong)puVar37 >> 1) + 1;
  if (uVar41 < 0x10) goto LAB_00e8e8f0;
  uVar39 = uVar41 & 0xfffffffffffffff0;
  uVar35 = uVar39 - 0x10 >> 4;
  uVar40 = (ulonglong)((int)uVar35 + 1U & 1);
  if (uVar35 == 0) {
    lVar36 = 0;
LAB_00e8e8ad:
    puVar1 = puVar34 + lVar36;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    uVar6 = puVar1[4];
    uVar7 = puVar1[5];
    uVar8 = puVar1[6];
    uVar9 = puVar1[7];
    puVar2 = puVar34 + lVar36 + 8;
    uVar10 = *puVar2;
    uVar11 = puVar2[1];
    uVar12 = puVar2[2];
    uVar13 = puVar2[3];
    uVar14 = puVar2[4];
    uVar15 = puVar2[5];
    uVar16 = puVar2[6];
    uVar17 = puVar2[7];
    auVar42._0_4_ = (int)param_2;
    auVar42._4_4_ = (int)param_2;
    auVar42._8_4_ = (int)param_2;
    auVar42._12_4_ = (int)param_2;
    auVar44 = packssdw(auVar42,auVar42);
    puVar2 = puVar34 + lVar36;
    *puVar2 = *puVar1 + auVar44._0_2_;
    puVar2[1] = uVar3 + auVar44._2_2_;
    puVar2[2] = uVar4 + auVar44._4_2_;
    puVar2[3] = uVar5 + auVar44._6_2_;
    puVar2[4] = uVar6 + auVar44._8_2_;
    puVar2[5] = uVar7 + auVar44._10_2_;
    puVar2[6] = uVar8 + auVar44._12_2_;
    puVar2[7] = uVar9 + auVar44._14_2_;
    puVar1 = puVar34 + lVar36 + 8;
    *puVar1 = auVar44._0_2_ + uVar10;
    puVar1[1] = auVar44._2_2_ + uVar11;
    puVar1[2] = auVar44._4_2_ + uVar12;
    puVar1[3] = auVar44._6_2_ + uVar13;
    puVar1[4] = auVar44._8_2_ + uVar14;
    puVar1[5] = auVar44._10_2_ + uVar15;
    puVar1[6] = auVar44._12_2_ + uVar16;
    puVar1[7] = auVar44._14_2_ + uVar17;
  }
  else {
    lVar38 = (uVar40 - 1) - uVar35;
    lVar36 = 0;
    auVar44._0_4_ = (int)param_2;
    auVar44._4_4_ = (int)param_2;
    auVar44._8_4_ = (int)param_2;
    auVar44._12_4_ = (int)param_2;
    auVar44 = packssdw(auVar44,auVar44);
    do {
      puVar1 = puVar34 + lVar36;
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      uVar6 = puVar1[4];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      puVar2 = puVar34 + lVar36 + 8;
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      uVar12 = puVar2[2];
      uVar13 = puVar2[3];
      uVar14 = puVar2[4];
      uVar15 = puVar2[5];
      uVar16 = puVar2[6];
      uVar17 = puVar2[7];
      puVar2 = puVar34 + lVar36 + 0x10;
      uVar18 = *puVar2;
      uVar19 = puVar2[1];
      uVar20 = puVar2[2];
      uVar21 = puVar2[3];
      uVar22 = puVar2[4];
      uVar23 = puVar2[5];
      uVar24 = puVar2[6];
      uVar25 = puVar2[7];
      puVar2 = puVar34 + lVar36 + 0x18;
      uVar26 = *puVar2;
      uVar27 = puVar2[1];
      uVar28 = puVar2[2];
      uVar29 = puVar2[3];
      uVar30 = puVar2[4];
      uVar31 = puVar2[5];
      uVar32 = puVar2[6];
      uVar33 = puVar2[7];
      sVar43 = auVar44._0_2_;
      sVar45 = auVar44._2_2_;
      sVar46 = auVar44._4_2_;
      sVar47 = auVar44._6_2_;
      sVar48 = auVar44._8_2_;
      sVar49 = auVar44._10_2_;
      sVar50 = auVar44._12_2_;
      sVar51 = auVar44._14_2_;
      puVar2 = puVar34 + lVar36;
      *puVar2 = *puVar1 + sVar43;
      puVar2[1] = uVar3 + sVar45;
      puVar2[2] = uVar4 + sVar46;
      puVar2[3] = uVar5 + sVar47;
      puVar2[4] = uVar6 + sVar48;
      puVar2[5] = uVar7 + sVar49;
      puVar2[6] = uVar8 + sVar50;
      puVar2[7] = uVar9 + sVar51;
      puVar1 = puVar34 + lVar36 + 8;
      *puVar1 = uVar10 + sVar43;
      puVar1[1] = uVar11 + sVar45;
      puVar1[2] = uVar12 + sVar46;
      puVar1[3] = uVar13 + sVar47;
      puVar1[4] = uVar14 + sVar48;
      puVar1[5] = uVar15 + sVar49;
      puVar1[6] = uVar16 + sVar50;
      puVar1[7] = uVar17 + sVar51;
      puVar1 = puVar34 + lVar36 + 0x10;
      *puVar1 = uVar18 + sVar43;
      puVar1[1] = uVar19 + sVar45;
      puVar1[2] = uVar20 + sVar46;
      puVar1[3] = uVar21 + sVar47;
      puVar1[4] = uVar22 + sVar48;
      puVar1[5] = uVar23 + sVar49;
      puVar1[6] = uVar24 + sVar50;
      puVar1[7] = uVar25 + sVar51;
      puVar1 = puVar34 + lVar36 + 0x18;
      *puVar1 = uVar26 + sVar43;
      puVar1[1] = uVar27 + sVar45;
      puVar1[2] = uVar28 + sVar46;
      puVar1[3] = uVar29 + sVar47;
      puVar1[4] = uVar30 + sVar48;
      puVar1[5] = uVar31 + sVar49;
      puVar1[6] = uVar32 + sVar50;
      puVar1[7] = uVar33 + sVar51;
      lVar36 = lVar36 + 0x20;
      lVar38 = lVar38 + 2;
    } while (lVar38 != 0);
    if (uVar40 != 0) goto LAB_00e8e8ad;
  }
  if (uVar41 == uVar39) {
    return;
  }
  puVar34 = puVar34 + uVar39;
LAB_00e8e8f0:
  do {
    *puVar34 = *puVar34 + param_2;
    puVar34 = puVar34 + 1;
  } while (puVar34 < puVar37);
  return;
}

