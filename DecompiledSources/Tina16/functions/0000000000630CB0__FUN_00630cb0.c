/* Ghidra address: 00630cb0 */
/* Ghidra symbol: FUN_00630cb0 */


void FUN_00630cb0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  char *pcVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined1 *puVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  byte *pbVar32;
  longlong lVar33;
  undefined8 *puVar34;
  longlong lVar35;
  int iVar36;
  ulonglong uVar37;
  uint uVar38;
  int iVar39;
  byte *pbVar40;
  ulonglong uVar41;
  uint uVar42;
  uint uVar43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  uint uVar46;
  uint local_c0;
  int local_a8;
  
  lVar12 = param_1[5];
  pbVar32 = (byte *)*param_1;
  pbVar40 = pbVar32 + ((int)param_1[1] - 5);
  puVar45 = (undefined1 *)param_1[2];
  local_a8 = (int)puVar45 - (param_2 - (int)param_1[3]);
  puVar44 = puVar45 + ((int)param_1[3] - 0x101);
  uVar9 = *(uint *)(lVar12 + 0x3c);
  puVar13 = *(undefined1 **)(lVar12 + 0x40);
  bVar3 = *(byte *)(lVar12 + 0x70);
  bVar4 = *(byte *)(lVar12 + 0x74);
  uVar20 = (ulonglong)(uVar9 - 1);
  lVar33 = (uVar20 + 1) - (ulonglong)(uVar9 & 0x1f);
  iVar10 = *(int *)(lVar12 + 0x34);
  uVar11 = *(uint *)(lVar12 + 0x38);
  uVar46 = *(uint *)(lVar12 + 0x48);
  uVar42 = *(uint *)(lVar12 + 0x4c);
  lVar14 = *(longlong *)(lVar12 + 0x60);
  lVar15 = *(longlong *)(lVar12 + 0x68);
  puVar1 = (undefined8 *)(puVar13 + 0x10);
LAB_00631650:
  if (uVar42 < 0xf) {
    bVar6 = *pbVar32;
    pbVar2 = pbVar32 + 1;
    pbVar32 = pbVar32 + 2;
    uVar46 = ((uint)*pbVar2 << ((byte)uVar42 + 8 & 0x1f)) +
             ((uint)bVar6 << ((byte)uVar42 & 0x1f)) + uVar46;
    uVar42 = uVar42 + 0x10;
  }
  uVar21 = (ulonglong)(uVar46 & (1 << (bVar3 & 0x1f)) - 1U);
  bVar6 = *(byte *)(lVar14 + uVar21 * 4);
  bVar7 = *(byte *)(lVar14 + 1 + uVar21 * 4);
  uVar8 = *(ushort *)(lVar14 + 2 + uVar21 * 4);
  while( true ) {
    uVar29 = (uint)uVar8;
    uVar46 = uVar46 >> (bVar7 & 0x1f);
    uVar42 = uVar42 - bVar7;
    if (bVar6 == 0) break;
    if ((bVar6 & 0x10) != 0) {
      uVar19 = bVar6 & 0xf;
      if ((bVar6 & 0xf) != 0) {
        if (uVar42 < uVar19) {
          bVar6 = *pbVar32;
          pbVar32 = pbVar32 + 1;
          uVar46 = uVar46 + ((uint)bVar6 << ((byte)uVar42 & 0x1f));
          uVar42 = uVar42 + 8;
        }
        uVar29 = uVar29 + ((1 << (sbyte)uVar19) - 1U & uVar46);
        uVar46 = uVar46 >> (sbyte)uVar19;
        uVar42 = uVar42 - uVar19;
      }
      if (uVar42 < 0xf) {
        bVar6 = *pbVar32;
        pbVar2 = pbVar32 + 1;
        pbVar32 = pbVar32 + 2;
        uVar46 = ((uint)*pbVar2 << ((byte)uVar42 + 8 & 0x1f)) +
                 ((uint)bVar6 << ((byte)uVar42 & 0x1f)) + uVar46;
        uVar42 = uVar42 + 0x10;
      }
      uVar21 = (ulonglong)(uVar46 & (1 << (bVar4 & 0x1f)) - 1U);
      bVar6 = *(byte *)(lVar15 + 1 + uVar21 * 4);
      uVar8 = *(ushort *)(lVar15 + 2 + uVar21 * 4);
      uVar46 = uVar46 >> (bVar6 & 0x1f);
      uVar42 = uVar42 - bVar6;
      bVar6 = *(byte *)(lVar15 + uVar21 * 4);
      goto joined_r0x00630e6e;
    }
    if ((bVar6 & 0x40) != 0) {
      uVar25 = 0x3f3f;
      if ((bVar6 & 0x20) != 0) goto LAB_00631727;
      pcVar23 = s_invalid_literal_length_code_01df2a80;
      goto LAB_0063171e;
    }
    uVar21 = (ulonglong)(((1 << (bVar6 & 0x1f)) - 1U & uVar46) + uVar29);
    bVar6 = *(byte *)(lVar14 + uVar21 * 4);
    bVar7 = *(byte *)(lVar14 + 1 + uVar21 * 4);
    uVar8 = *(ushort *)(lVar14 + 2 + uVar21 * 4);
  }
  *puVar45 = (char)uVar8;
  puVar45 = puVar45 + 1;
  goto joined_r0x00631433;
joined_r0x00630e6e:
  if ((bVar6 & 0x10) != 0) goto LAB_00630ea3;
  if ((bVar6 & 0x40) != 0) {
    pcVar23 = s_invalid_distance_code_01df2a6a;
    goto LAB_0063171e;
  }
  uVar21 = (ulonglong)(((1 << (bVar6 & 0x1f)) - 1U & uVar46) + (uint)uVar8);
  bVar6 = *(byte *)(lVar15 + 1 + uVar21 * 4);
  uVar8 = *(ushort *)(lVar15 + 2 + uVar21 * 4);
  uVar46 = uVar46 >> (bVar6 & 0x1f);
  uVar42 = uVar42 - bVar6;
  bVar6 = *(byte *)(lVar15 + uVar21 * 4);
  goto joined_r0x00630e6e;
LAB_00630ea3:
  uVar19 = bVar6 & 0xf;
  if (uVar42 < uVar19) {
    uVar46 = ((uint)*pbVar32 << ((byte)uVar42 & 0x1f)) + uVar46;
    uVar28 = uVar42 + 8;
    if (uVar28 < uVar19) {
      pbVar2 = pbVar32 + 1;
      pbVar32 = pbVar32 + 2;
      uVar46 = uVar46 + ((uint)*pbVar2 << ((byte)uVar28 & 0x1f));
      uVar42 = uVar42 + 0x10;
    }
    else {
      pbVar32 = pbVar32 + 1;
      uVar42 = uVar28;
    }
  }
  uVar38 = (1 << (sbyte)uVar19) - 1U & uVar46;
  uVar28 = uVar38 + uVar8;
  uVar46 = uVar46 >> (sbyte)uVar19;
  uVar42 = uVar42 - uVar19;
  iVar36 = (int)puVar45;
  uVar19 = iVar36 - local_a8;
  uVar43 = uVar28 - uVar19;
  if (uVar28 < uVar19 || uVar43 == 0) {
    uVar21 = (ulonglong)uVar28;
    iVar36 = 0;
    lVar35 = 0;
    do {
      lVar27 = lVar35;
      puVar45[lVar27] = puVar45[lVar27 - uVar21];
      puVar45[lVar27 + 1] = puVar45[lVar27 + (1 - uVar21)];
      puVar45[lVar27 + 2] = puVar45[lVar27 + (2 - uVar21)];
      lVar35 = lVar27 + 3;
      iVar36 = iVar36 + -3;
    } while (2 < iVar36 + uVar29);
    if (uVar29 == (uint)lVar35) {
      puVar45 = puVar45 + lVar35;
    }
    else {
      puVar45[lVar35] = puVar45[lVar35 + -uVar21];
      if (uVar29 - 1 == (uint)lVar35) {
        puVar45 = puVar45 + lVar27 + 4;
      }
      else {
        puVar45[lVar27 + 4] = puVar45[lVar27 + 4 + -uVar21];
        puVar45 = puVar45 + lVar27 + 5;
      }
    }
    goto joined_r0x00631433;
  }
  if ((uVar11 < uVar43) && (*(int *)(lVar12 + 0x1be0) != 0)) {
    pcVar23 = s_invalid_distance_too_far_back_01df2a4c;
LAB_0063171e:
    param_1[4] = (longlong)pcVar23;
    uVar25 = 0x3f51;
LAB_00631727:
    *(undefined4 *)(lVar12 + 8) = uVar25;
LAB_0063172b:
    lVar33 = (longlong)pbVar32 - (ulonglong)(uVar42 >> 3);
    *param_1 = lVar33;
    param_1[2] = (longlong)puVar45;
    *(int *)(param_1 + 1) = ((int)pbVar40 + 5) - (int)lVar33;
    *(int *)(param_1 + 3) = ((int)puVar44 + 0x101) - (int)puVar45;
    *(uint *)(lVar12 + 0x48) = (1 << (sbyte)(uVar42 & 7)) - 1U & uVar46;
    *(uint *)(lVar12 + 0x4c) = uVar42 & 7;
    return;
  }
  puVar26 = puVar45;
  if (uVar9 == 0) {
    uVar21 = (ulonglong)(iVar10 - uVar43);
    puVar22 = puVar13 + uVar21;
    uVar24 = uVar29 - uVar43;
    if (uVar43 <= uVar29 && uVar24 != 0) {
      iVar39 = (uVar38 - 1) + (uint)uVar8;
      uVar37 = (ulonglong)(uint)(iVar39 - (iVar36 - local_a8));
      uVar29 = iVar39 - uVar19;
      uVar41 = (ulonglong)uVar29 + 1;
      if ((0x1f < uVar41) &&
         ((uVar31 = (ulonglong)(((uVar38 - 1) + (uint)uVar8) - uVar19),
          puVar13 + uVar21 + uVar31 + 1 <= puVar45 || (puVar45 + uVar31 + 1 <= puVar22)))) {
        uVar29 = uVar29 + 1 & 0x1f;
        lVar35 = uVar41 - uVar29;
        puVar26 = puVar45 + lVar35;
        uVar43 = uVar43 - (int)lVar35;
        puVar22 = puVar22 + lVar35;
        puVar34 = (undefined8 *)(uVar21 + (longlong)puVar1);
        puVar30 = (undefined8 *)(puVar45 + 0x10);
        do {
          uVar16 = puVar34[-1];
          uVar17 = *puVar34;
          uVar18 = puVar34[1];
          puVar30[-2] = puVar34[-2];
          puVar30[-1] = uVar16;
          *puVar30 = uVar17;
          puVar30[1] = uVar18;
          puVar34 = puVar34 + 4;
          puVar30 = puVar30 + 4;
          lVar35 = lVar35 + -0x20;
        } while (lVar35 != 0);
        if (uVar29 == 0) goto LAB_006313e4;
      }
      uVar29 = uVar43 - 1;
      if ((uVar43 & 7) != 0) {
        iVar36 = -(uVar43 & 7);
        do {
          uVar5 = *puVar22;
          puVar22 = puVar22 + 1;
          *puVar26 = uVar5;
          puVar26 = puVar26 + 1;
          uVar43 = uVar43 - 1;
          iVar36 = iVar36 + 1;
        } while (iVar36 != 0);
      }
      if (6 < uVar29) {
        do {
          *puVar26 = *puVar22;
          puVar26[1] = puVar22[1];
          puVar26[2] = puVar22[2];
          puVar26[3] = puVar22[3];
          puVar26[4] = puVar22[4];
          puVar26[5] = puVar22[5];
          puVar26[6] = puVar22[6];
          puVar26[7] = puVar22[7];
          puVar22 = puVar22 + 8;
          puVar26 = puVar26 + 8;
          uVar43 = uVar43 - 8;
        } while (uVar43 != 0);
      }
LAB_006313e4:
      puVar26 = puVar45 + uVar37 + 1;
      puVar22 = puVar45 + uVar37 + 1 + -(ulonglong)uVar28;
      uVar29 = uVar24;
    }
  }
  else {
    uVar21 = (ulonglong)(uVar9 - uVar43);
    if (uVar9 < uVar43) {
      uVar21 = (ulonglong)((uVar9 + iVar10) - uVar43);
      puVar22 = puVar13 + uVar21;
      uVar43 = uVar43 - uVar9;
      uVar19 = uVar29 - uVar43;
      if (uVar43 <= uVar29 && uVar19 != 0) {
        local_c0 = (uint)uVar8;
        uVar29 = (uVar38 + ~uVar9 + local_c0) - (iVar36 - local_a8);
        uVar41 = (ulonglong)uVar29;
        if ((uVar41 + 1 < 0x20) ||
           ((puVar45 < puVar13 + uVar21 + uVar41 + 1 && (puVar22 < puVar45 + uVar41 + 1)))) {
LAB_00630fe1:
          uVar29 = uVar43 - 1;
          if ((uVar43 & 7) != 0) {
            iVar36 = -(uVar43 & 7);
            do {
              uVar5 = *puVar22;
              puVar22 = puVar22 + 1;
              *puVar26 = uVar5;
              puVar26 = puVar26 + 1;
              uVar43 = uVar43 - 1;
              iVar36 = iVar36 + 1;
            } while (iVar36 != 0);
          }
          if (6 < uVar29) {
            do {
              *puVar26 = *puVar22;
              puVar26[1] = puVar22[1];
              puVar26[2] = puVar22[2];
              puVar26[3] = puVar22[3];
              puVar26[4] = puVar22[4];
              puVar26[5] = puVar22[5];
              puVar26[6] = puVar22[6];
              puVar26[7] = puVar22[7];
              puVar22 = puVar22 + 8;
              puVar26 = puVar26 + 8;
              uVar43 = uVar43 - 8;
            } while (uVar43 != 0);
          }
        }
        else {
          uVar29 = uVar29 + 1 & 0x1f;
          lVar35 = (uVar41 + 1) - (ulonglong)uVar29;
          puVar26 = puVar45 + lVar35;
          uVar43 = uVar43 - (int)lVar35;
          puVar22 = puVar22 + lVar35;
          puVar34 = (undefined8 *)(uVar21 + (longlong)puVar1);
          puVar30 = (undefined8 *)(puVar45 + 0x10);
          do {
            uVar16 = puVar34[-1];
            uVar17 = *puVar34;
            uVar18 = puVar34[1];
            puVar30[-2] = puVar34[-2];
            puVar30[-1] = uVar16;
            *puVar30 = uVar17;
            puVar30[1] = uVar18;
            puVar34 = puVar34 + 4;
            puVar30 = puVar30 + 4;
            lVar35 = lVar35 + -0x20;
          } while (lVar35 != 0);
          if (uVar29 != 0) goto LAB_00630fe1;
        }
        puVar26 = puVar45 + uVar41 + 1;
        puVar22 = puVar13;
        uVar29 = uVar19;
        if (uVar9 <= uVar19 && uVar19 - uVar9 != 0) {
          uVar29 = uVar9;
          if ((uVar20 + 1 < 0x20) ||
             ((puVar26 < puVar13 + uVar20 + 1 && (puVar13 < puVar45 + uVar41 + uVar20 + 2)))) {
LAB_006310bd:
            uVar38 = uVar29 - 1;
            if ((uVar29 & 7) != 0) {
              iVar36 = -(uVar29 & 7);
              do {
                uVar5 = *puVar22;
                puVar22 = puVar22 + 1;
                *puVar26 = uVar5;
                puVar26 = puVar26 + 1;
                uVar29 = uVar29 - 1;
                iVar36 = iVar36 + 1;
              } while (iVar36 != 0);
            }
            if (6 < uVar38) {
              do {
                *puVar26 = *puVar22;
                puVar26[1] = puVar22[1];
                puVar26[2] = puVar22[2];
                puVar26[3] = puVar22[3];
                puVar26[4] = puVar22[4];
                puVar26[5] = puVar22[5];
                puVar26[6] = puVar22[6];
                puVar26[7] = puVar22[7];
                puVar22 = puVar22 + 8;
                puVar26 = puVar26 + 8;
                uVar29 = uVar29 - 8;
              } while (uVar29 != 0);
            }
          }
          else {
            puVar26 = puVar26 + lVar33;
            puVar30 = (undefined8 *)(puVar45 + uVar41 + 0x11);
            puVar34 = puVar1;
            lVar35 = lVar33;
            do {
              uVar16 = puVar34[-1];
              uVar17 = *puVar34;
              uVar18 = puVar34[1];
              puVar30[-2] = puVar34[-2];
              puVar30[-1] = uVar16;
              *puVar30 = uVar17;
              puVar30[1] = uVar18;
              puVar34 = puVar34 + 4;
              puVar30 = puVar30 + 4;
              lVar35 = lVar35 + -0x20;
            } while (lVar35 != 0);
            puVar22 = puVar13 + lVar33;
            uVar29 = uVar9 - (int)lVar33;
            if ((uVar9 & 0x1f) != 0) goto LAB_006310bd;
          }
          puVar26 = puVar45 + uVar41 + uVar20 + 2;
          puVar22 = puVar45 + uVar41 + uVar20 + 2 + -(ulonglong)uVar28;
          uVar29 = uVar19 - uVar9;
        }
      }
    }
    else {
      puVar22 = puVar13 + uVar21;
      uVar24 = uVar29 - uVar43;
      if (uVar43 <= uVar29 && uVar24 != 0) {
        iVar39 = (uVar38 - 1) + (uint)uVar8;
        uVar37 = (ulonglong)(uint)(iVar39 - (iVar36 - local_a8));
        uVar29 = iVar39 - uVar19;
        uVar41 = (ulonglong)uVar29 + 1;
        if ((0x1f < uVar41) &&
           ((uVar31 = (ulonglong)(((uVar38 - 1) + (uint)uVar8) - uVar19),
            puVar13 + uVar21 + uVar31 + 1 <= puVar45 || (puVar45 + uVar31 + 1 <= puVar22)))) {
          uVar29 = uVar29 + 1 & 0x1f;
          lVar35 = uVar41 - uVar29;
          puVar26 = puVar45 + lVar35;
          uVar43 = uVar43 - (int)lVar35;
          puVar22 = puVar22 + lVar35;
          puVar34 = (undefined8 *)(uVar21 + (longlong)puVar1);
          puVar30 = (undefined8 *)(puVar45 + 0x10);
          do {
            uVar16 = puVar34[-1];
            uVar17 = *puVar34;
            uVar18 = puVar34[1];
            puVar30[-2] = puVar34[-2];
            puVar30[-1] = uVar16;
            *puVar30 = uVar17;
            puVar30[1] = uVar18;
            puVar34 = puVar34 + 4;
            puVar30 = puVar30 + 4;
            lVar35 = lVar35 + -0x20;
          } while (lVar35 != 0);
          if (uVar29 == 0) goto LAB_006313e4;
        }
        uVar29 = uVar43 - 1;
        if ((uVar43 & 7) != 0) {
          iVar36 = -(uVar43 & 7);
          do {
            uVar5 = *puVar22;
            puVar22 = puVar22 + 1;
            *puVar26 = uVar5;
            puVar26 = puVar26 + 1;
            uVar43 = uVar43 - 1;
            iVar36 = iVar36 + 1;
          } while (iVar36 != 0);
        }
        if (6 < uVar29) {
          do {
            *puVar26 = *puVar22;
            puVar26[1] = puVar22[1];
            puVar26[2] = puVar22[2];
            puVar26[3] = puVar22[3];
            puVar26[4] = puVar22[4];
            puVar26[5] = puVar22[5];
            puVar26[6] = puVar22[6];
            puVar26[7] = puVar22[7];
            puVar22 = puVar22 + 8;
            puVar26 = puVar26 + 8;
            uVar43 = uVar43 - 8;
          } while (uVar43 != 0);
        }
        goto LAB_006313e4;
      }
    }
  }
  for (; 2 < uVar29; uVar29 = uVar29 - 3) {
    *puVar26 = *puVar22;
    puVar26[1] = puVar22[1];
    puVar26[2] = puVar22[2];
    puVar26 = puVar26 + 3;
    puVar22 = puVar22 + 3;
  }
  puVar45 = puVar26;
  if (uVar29 != 0) {
    *puVar26 = *puVar22;
    if (uVar29 == 1) {
      puVar45 = puVar26 + 1;
    }
    else {
      puVar26[1] = puVar22[1];
      puVar45 = puVar26 + 2;
    }
  }
joined_r0x00631433:
  if ((puVar44 <= puVar45) || (pbVar40 <= pbVar32)) goto LAB_0063172b;
  goto LAB_00631650;
}

