/* Ghidra address: 00420c70 */
/* Ghidra symbol: FUN_00420c70 */


/* WARNING: Removing unreachable block (ram,0x00420ebd) */
/* WARNING: Removing unreachable block (ram,0x00420ec0) */

void FUN_00420c70(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  
  puVar6 = DAT_0200c2b8;
  do {
    do {
      puVar14 = puVar6;
      if (puVar14 == (undefined8 *)0x0) {
        return;
      }
      lVar20 = puVar14[1];
      pcVar17 = (char *)((ulonglong)*(uint *)(lVar20 + 4) + 0x400000);
      do {
        cVar4 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar4 != '\0');
      puVar6 = (undefined8 *)*puVar14;
      uVar23 = (ulonglong)*(uint *)(lVar20 + 0x18);
    } while (uVar23 == 0);
    uVar5 = *(uint *)(lVar20 + 8);
    uVar26 = (ulonglong)*(uint *)(lVar20 + 0xc);
    uVar7 = *(undefined8 *)((ulonglong)uVar5 + 0x400000);
    if (*(longlong *)(uVar26 + 0x400000) != 0) {
      puVar16 = (undefined1 *)(uVar26 + 0x400000);
      puVar18 = (undefined1 *)(uVar23 + 0x400000);
      uVar22 = 0;
      uVar15 = 1;
      do {
        uVar21 = uVar15;
        lVar20 = uVar22 * 8;
        uVar22 = uVar22 + 1;
        uVar15 = uVar21 + 1;
      } while (*(longlong *)(uVar26 + 0x400008 + lVar20) != 0);
      if ((uint)uVar22 != 0) {
        uVar28 = (uVar22 & 0xffffffff) * 8;
        if ((3 < (uint)uVar22) &&
           ((uVar28 + uVar23 + 0x400000 <= uVar26 + 0x400000 ||
            (uVar28 + uVar26 + 0x400000 <= uVar23 + 0x400000)))) {
          uVar22 = uVar28 & 0x7ffffffe0;
          if (uVar22 - 0x20 < 0x60) {
            lVar20 = 0;
          }
          else {
            uVar19 = (ulonglong)(uVar21 & 0xfffffffc) * 8 - 0x20 >> 5;
            lVar25 = ((ulonglong)((int)uVar19 + 1U & 3) - 1) - uVar19;
            lVar20 = 0;
            do {
              puVar24 = (undefined8 *)(uVar23 + 0x400000 + lVar20);
              uVar11 = puVar24[1];
              puVar27 = (undefined8 *)(uVar23 + 0x400010 + lVar20);
              uVar12 = *puVar27;
              uVar13 = puVar27[1];
              puVar27 = (undefined8 *)(uVar26 + 0x400000 + lVar20);
              *puVar27 = *puVar24;
              puVar27[1] = uVar11;
              puVar24 = (undefined8 *)(uVar26 + 0x400010 + lVar20);
              *puVar24 = uVar12;
              puVar24[1] = uVar13;
              puVar24 = (undefined8 *)(uVar23 + 0x400020 + lVar20);
              uVar11 = puVar24[1];
              puVar27 = (undefined8 *)(uVar23 + 0x400030 + lVar20);
              uVar12 = *puVar27;
              uVar13 = puVar27[1];
              puVar27 = (undefined8 *)(uVar26 + 0x400020 + lVar20);
              *puVar27 = *puVar24;
              puVar27[1] = uVar11;
              puVar24 = (undefined8 *)(uVar26 + 0x400030 + lVar20);
              *puVar24 = uVar12;
              puVar24[1] = uVar13;
              puVar24 = (undefined8 *)(uVar23 + 0x400040 + lVar20);
              uVar11 = puVar24[1];
              puVar27 = (undefined8 *)(uVar23 + 0x400050 + lVar20);
              uVar12 = *puVar27;
              uVar13 = puVar27[1];
              puVar27 = (undefined8 *)(uVar26 + 0x400040 + lVar20);
              *puVar27 = *puVar24;
              puVar27[1] = uVar11;
              puVar24 = (undefined8 *)(uVar26 + 0x400050 + lVar20);
              *puVar24 = uVar12;
              puVar24[1] = uVar13;
              puVar2 = (undefined4 *)(uVar23 + 0x400060 + lVar20);
              uVar8 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              puVar24 = (undefined8 *)(uVar23 + 0x400070 + lVar20);
              uVar11 = *puVar24;
              uVar12 = puVar24[1];
              puVar3 = (undefined4 *)(uVar26 + 0x400060 + lVar20);
              *puVar3 = *puVar2;
              puVar3[1] = uVar8;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              puVar24 = (undefined8 *)(uVar26 + 0x400070 + lVar20);
              *puVar24 = uVar11;
              puVar24[1] = uVar12;
              lVar20 = lVar20 + 0x80;
              lVar25 = lVar25 + 4;
            } while (lVar25 != 0);
          }
          if (((uVar22 - 0x20 >> 5) + 1 & 3) != 0) {
            puVar24 = (undefined8 *)
                      ((longlong)IMAGE_DOS_HEADER_00400000.e_res_4_ + uVar23 + lVar20 + -0xc);
            puVar27 = (undefined8 *)
                      ((longlong)IMAGE_DOS_HEADER_00400000.e_res_4_ + uVar26 + lVar20 + -0xc);
            lVar20 = -(ulonglong)(((uVar21 & 0xc) * 8 - 0x20 >> 5) + 1 & 3);
            do {
              uVar8 = *(undefined4 *)((longlong)puVar24 + -0xc);
              uVar9 = *(undefined4 *)(puVar24 + -1);
              uVar10 = *(undefined4 *)((longlong)puVar24 + -4);
              uVar11 = *puVar24;
              uVar12 = puVar24[1];
              *(undefined4 *)(puVar27 + -2) = *(undefined4 *)(puVar24 + -2);
              *(undefined4 *)((longlong)puVar27 + -0xc) = uVar8;
              *(undefined4 *)(puVar27 + -1) = uVar9;
              *(undefined4 *)((longlong)puVar27 + -4) = uVar10;
              *puVar27 = uVar11;
              puVar27[1] = uVar12;
              puVar24 = puVar24 + 4;
              puVar27 = puVar27 + 4;
              lVar20 = lVar20 + 1;
            } while (lVar20 != 0);
          }
          if (uVar28 == uVar22) goto LAB_00420f30;
          puVar16 = puVar16 + uVar22;
          uVar28 = uVar28 - uVar22;
          puVar18 = puVar18 + uVar22;
        }
        if (6 < uVar28 - 1) {
          do {
            *puVar16 = *puVar18;
            puVar16[1] = puVar18[1];
            puVar16[2] = puVar18[2];
            puVar16[3] = puVar18[3];
            puVar16[4] = puVar18[4];
            puVar16[5] = puVar18[5];
            puVar16[6] = puVar18[6];
            uVar28 = uVar28 - 8;
            puVar1 = puVar18 + 7;
            puVar18 = puVar18 + 8;
            puVar16[7] = *puVar1;
            puVar16 = puVar16 + 8;
          } while (uVar28 != 0);
        }
      }
    }
LAB_00420f30:
    thunk_FUN_041c8c2f(uVar7);
    *(undefined8 *)((ulonglong)uVar5 + 0x400000) = 0;
    puVar24 = &DAT_0200c2b8;
    do {
      puVar27 = puVar24;
      puVar24 = (undefined8 *)*puVar27;
      if (puVar24 == puVar14) break;
    } while (puVar24 != (undefined8 *)0x0);
    if (puVar24 == puVar14) {
      *puVar27 = *puVar14;
    }
    thunk_FUN_03d5b950(puVar14);
  } while( true );
}

