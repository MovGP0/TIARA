/* Ghidra address: 00420480 */
/* Ghidra symbol: FUN_00420480 */


/* WARNING: Removing unreachable block (ram,0x00420a56) */
/* WARNING: Removing unreachable block (ram,0x00420a60) */
/* WARNING: Removing unreachable block (ram,0x004207bd) */
/* WARNING: Removing unreachable block (ram,0x004207c0) */

undefined8 FUN_00420480(char *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  char *pcVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 *puVar29;
  char *pcVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  undefined8 *puVar34;
  
  pcVar30 = param_1;
  if (param_1 == (char *)0x0) {
    pcVar30 = (char *)0x0;
  }
  else {
    do {
      cVar2 = *pcVar30;
      pcVar30 = pcVar30 + 1;
    } while (cVar2 != '\0');
    pcVar30 = pcVar30 + ~(ulonglong)param_1;
  }
  uVar33 = 0;
  if (DAT_0200c2b8 != (undefined8 *)0x0) {
    if (param_1 != (char *)0x0) {
      puVar34 = DAT_0200c2b8;
      while( true ) {
        lVar23 = puVar34[1];
        pcVar18 = (char *)((ulonglong)*(uint *)(lVar23 + 4) + 0x400000);
        pcVar21 = pcVar18;
        do {
          cVar2 = *pcVar21;
          pcVar21 = pcVar21 + 1;
        } while (cVar2 != '\0');
        puVar4 = (undefined8 *)*puVar34;
        if (pcVar21 + ~(ulonglong)pcVar18 == pcVar30) break;
LAB_00420553:
        puVar34 = puVar4;
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
      }
      if (pcVar30 != (char *)0x0) {
        pcVar21 = param_1;
        lVar26 = 1 - (longlong)pcVar30;
        if (pcVar30 != (char *)0x1) {
          do {
            if (*pcVar21 != *pcVar18) break;
            pcVar21 = pcVar21 + 1;
            pcVar18 = pcVar18 + 1;
            lVar26 = lVar26 + 1;
          } while (lVar26 != 0);
        }
        if (*pcVar21 != *pcVar18) goto LAB_00420553;
      }
      uVar15 = (ulonglong)*(uint *)(lVar23 + 0x18);
      if (uVar15 == 0) {
        return 0;
      }
      uVar3 = *(uint *)(lVar23 + 8);
      uVar28 = (ulonglong)*(uint *)(lVar23 + 0xc);
      uVar33 = *(undefined8 *)((ulonglong)uVar3 + 0x400000);
      if (*(longlong *)(uVar28 + 0x400000) != 0) {
        puVar17 = (undefined1 *)(uVar28 + 0x400000);
        puVar19 = (undefined1 *)(uVar15 + 0x400000);
        uVar32 = 0;
        do {
          lVar23 = uVar32 * 8;
          uVar32 = uVar32 + 1;
        } while (*(longlong *)(uVar28 + 0x400008 + lVar23) != 0);
        uVar25 = (uint)uVar32;
        if (uVar25 != 0) {
          uVar32 = (uVar32 & 0xffffffff) * 8;
          if ((3 < uVar25) &&
             ((uVar32 + uVar15 + 0x400000 <= uVar28 + 0x400000 ||
              (uVar32 + uVar28 + 0x400000 <= uVar15 + 0x400000)))) {
            uVar22 = uVar32 & 0x7ffffffe0;
            if (uVar22 - 0x20 < 0x60) {
              lVar23 = 0;
            }
            else {
              uVar27 = (ulonglong)(uVar25 & 0xfffffffc) * 8 - 0x20 >> 5;
              lVar26 = ((ulonglong)((int)uVar27 + 1U & 3) - 1) - uVar27;
              lVar23 = 0;
              do {
                puVar4 = (undefined8 *)(uVar15 + 0x400000 + lVar23);
                uVar12 = puVar4[1];
                puVar16 = (undefined8 *)(uVar15 + 0x400010 + lVar23);
                uVar13 = *puVar16;
                uVar14 = puVar16[1];
                puVar16 = (undefined8 *)(uVar28 + 0x400000 + lVar23);
                *puVar16 = *puVar4;
                puVar16[1] = uVar12;
                puVar4 = (undefined8 *)(uVar28 + 0x400010 + lVar23);
                *puVar4 = uVar13;
                puVar4[1] = uVar14;
                puVar4 = (undefined8 *)(uVar15 + 0x400020 + lVar23);
                uVar12 = puVar4[1];
                puVar16 = (undefined8 *)(uVar15 + 0x400030 + lVar23);
                uVar13 = *puVar16;
                uVar14 = puVar16[1];
                puVar16 = (undefined8 *)(uVar28 + 0x400020 + lVar23);
                *puVar16 = *puVar4;
                puVar16[1] = uVar12;
                puVar4 = (undefined8 *)(uVar28 + 0x400030 + lVar23);
                *puVar4 = uVar13;
                puVar4[1] = uVar14;
                puVar4 = (undefined8 *)(uVar15 + 0x400040 + lVar23);
                uVar12 = puVar4[1];
                puVar16 = (undefined8 *)(uVar15 + 0x400050 + lVar23);
                uVar13 = *puVar16;
                uVar14 = puVar16[1];
                puVar16 = (undefined8 *)(uVar28 + 0x400040 + lVar23);
                *puVar16 = *puVar4;
                puVar16[1] = uVar12;
                puVar4 = (undefined8 *)(uVar28 + 0x400050 + lVar23);
                *puVar4 = uVar13;
                puVar4[1] = uVar14;
                puVar29 = (undefined4 *)(uVar15 + 0x400060 + lVar23);
                uVar5 = puVar29[1];
                uVar6 = puVar29[2];
                uVar7 = puVar29[3];
                puVar20 = (undefined4 *)(uVar15 + 0x400070 + lVar23);
                uVar8 = *puVar20;
                uVar9 = puVar20[1];
                uVar10 = puVar20[2];
                uVar11 = puVar20[3];
                puVar20 = (undefined4 *)(uVar28 + 0x400060 + lVar23);
                *puVar20 = *puVar29;
                puVar20[1] = uVar5;
                puVar20[2] = uVar6;
                puVar20[3] = uVar7;
                puVar29 = (undefined4 *)(uVar28 + 0x400070 + lVar23);
                *puVar29 = uVar8;
                puVar29[1] = uVar9;
                puVar29[2] = uVar10;
                puVar29[3] = uVar11;
                lVar23 = lVar23 + 0x80;
                lVar26 = lVar26 + 4;
              } while (lVar26 != 0);
            }
            if (((uVar22 - 0x20 >> 5) + 1 & 3) != 0) {
              puVar29 = (undefined4 *)
                        ((longlong)IMAGE_DOS_HEADER_00400000.e_res_4_ + uVar15 + lVar23 + -0xc);
              puVar20 = (undefined4 *)
                        ((longlong)IMAGE_DOS_HEADER_00400000.e_res_4_ + uVar28 + lVar23 + -0xc);
              lVar23 = -(ulonglong)(((uVar25 & 0xc) * 8 - 0x20 >> 5) + 1 & 3);
              do {
                uVar5 = puVar29[-3];
                uVar6 = puVar29[-2];
                uVar7 = puVar29[-1];
                uVar8 = *puVar29;
                uVar9 = puVar29[1];
                uVar10 = puVar29[2];
                uVar11 = puVar29[3];
                puVar20[-4] = puVar29[-4];
                puVar20[-3] = uVar5;
                puVar20[-2] = uVar6;
                puVar20[-1] = uVar7;
                *puVar20 = uVar8;
                puVar20[1] = uVar9;
                puVar20[2] = uVar10;
                puVar20[3] = uVar11;
                puVar29 = puVar29 + 8;
                puVar20 = puVar20 + 8;
                lVar23 = lVar23 + 1;
              } while (lVar23 != 0);
            }
            if (uVar32 == uVar22) goto LAB_00420ac4;
            puVar17 = puVar17 + uVar22;
            uVar32 = uVar32 - uVar22;
            puVar19 = puVar19 + uVar22;
          }
          if (6 < uVar32 - 1) {
            do {
              *puVar17 = *puVar19;
              puVar17[1] = puVar19[1];
              puVar17[2] = puVar19[2];
              puVar17[3] = puVar19[3];
              puVar17[4] = puVar19[4];
              puVar17[5] = puVar19[5];
              puVar17[6] = puVar19[6];
              uVar32 = uVar32 - 8;
              puVar1 = puVar19 + 7;
              puVar19 = puVar19 + 8;
              puVar17[7] = *puVar1;
              puVar17 = puVar17 + 8;
            } while (uVar32 != 0);
          }
        }
      }
LAB_00420ac4:
      thunk_FUN_041c8c2f(uVar33);
      *(undefined8 *)((ulonglong)uVar3 + 0x400000) = 0;
      puVar4 = &DAT_0200c2b8;
      do {
        puVar16 = puVar4;
        puVar4 = (undefined8 *)*puVar16;
        if (puVar4 == puVar34) break;
      } while (puVar4 != (undefined8 *)0x0);
      if (puVar4 == puVar34) {
        *puVar16 = *puVar34;
      }
      thunk_FUN_03d5b950(puVar34);
      return 1;
    }
    uVar33 = 0;
    puVar34 = DAT_0200c2b8;
    do {
      lVar23 = puVar34[1];
      pcVar30 = (char *)((ulonglong)*(uint *)(lVar23 + 4) + 0x400000);
      do {
        cVar2 = *pcVar30;
        pcVar30 = pcVar30 + 1;
      } while (cVar2 != '\0');
      puVar4 = (undefined8 *)*puVar34;
      uVar15 = (ulonglong)*(uint *)(lVar23 + 0x18);
      if (uVar15 != 0) {
        uVar3 = *(uint *)(lVar23 + 8);
        uVar28 = (ulonglong)*(uint *)(lVar23 + 0xc);
        uVar33 = *(undefined8 *)((ulonglong)uVar3 + 0x400000);
        if (*(longlong *)(uVar28 + 0x400000) != 0) {
          puVar17 = (undefined1 *)(uVar28 + 0x400000);
          puVar19 = (undefined1 *)(uVar15 + 0x400000);
          uVar32 = 0;
          uVar25 = 1;
          do {
            uVar24 = uVar25;
            lVar23 = uVar32 * 8;
            uVar32 = uVar32 + 1;
            uVar25 = uVar24 + 1;
          } while (*(longlong *)(uVar28 + 0x400008 + lVar23) != 0);
          if ((uint)uVar32 != 0) {
            uVar22 = (uVar32 & 0xffffffff) * 8;
            if ((3 < (uint)uVar32) &&
               ((uVar22 + uVar15 + 0x400000 <= uVar28 + 0x400000 ||
                (uVar22 + uVar28 + 0x400000 <= uVar15 + 0x400000)))) {
              uVar32 = uVar22 & 0x7ffffffe0;
              if (uVar32 - 0x20 < 0x60) {
                lVar23 = 0;
              }
              else {
                uVar27 = (ulonglong)(uVar24 & 0xfffffffc) * 8 - 0x20 >> 5;
                lVar26 = ((ulonglong)((int)uVar27 + 1U & 3) - 1) - uVar27;
                lVar23 = 0;
                do {
                  puVar16 = (undefined8 *)(uVar15 + 0x400000 + lVar23);
                  uVar12 = puVar16[1];
                  puVar31 = (undefined8 *)(uVar15 + 0x400010 + lVar23);
                  uVar13 = *puVar31;
                  uVar14 = puVar31[1];
                  puVar31 = (undefined8 *)(uVar28 + 0x400000 + lVar23);
                  *puVar31 = *puVar16;
                  puVar31[1] = uVar12;
                  puVar16 = (undefined8 *)(uVar28 + 0x400010 + lVar23);
                  *puVar16 = uVar13;
                  puVar16[1] = uVar14;
                  puVar16 = (undefined8 *)(uVar15 + 0x400020 + lVar23);
                  uVar12 = puVar16[1];
                  puVar31 = (undefined8 *)(uVar15 + 0x400030 + lVar23);
                  uVar13 = *puVar31;
                  uVar14 = puVar31[1];
                  puVar31 = (undefined8 *)(uVar28 + 0x400020 + lVar23);
                  *puVar31 = *puVar16;
                  puVar31[1] = uVar12;
                  puVar16 = (undefined8 *)(uVar28 + 0x400030 + lVar23);
                  *puVar16 = uVar13;
                  puVar16[1] = uVar14;
                  puVar16 = (undefined8 *)(uVar15 + 0x400040 + lVar23);
                  uVar12 = puVar16[1];
                  puVar31 = (undefined8 *)(uVar15 + 0x400050 + lVar23);
                  uVar13 = *puVar31;
                  uVar14 = puVar31[1];
                  puVar31 = (undefined8 *)(uVar28 + 0x400040 + lVar23);
                  *puVar31 = *puVar16;
                  puVar31[1] = uVar12;
                  puVar16 = (undefined8 *)(uVar28 + 0x400050 + lVar23);
                  *puVar16 = uVar13;
                  puVar16[1] = uVar14;
                  puVar29 = (undefined4 *)(uVar15 + 0x400060 + lVar23);
                  uVar5 = puVar29[1];
                  uVar6 = puVar29[2];
                  uVar7 = puVar29[3];
                  puVar16 = (undefined8 *)(uVar15 + 0x400070 + lVar23);
                  uVar12 = *puVar16;
                  uVar13 = puVar16[1];
                  puVar20 = (undefined4 *)(uVar28 + 0x400060 + lVar23);
                  *puVar20 = *puVar29;
                  puVar20[1] = uVar5;
                  puVar20[2] = uVar6;
                  puVar20[3] = uVar7;
                  puVar16 = (undefined8 *)(uVar28 + 0x400070 + lVar23);
                  *puVar16 = uVar12;
                  puVar16[1] = uVar13;
                  lVar23 = lVar23 + 0x80;
                  lVar26 = lVar26 + 4;
                } while (lVar26 != 0);
              }
              if (((uVar32 - 0x20 >> 5) + 1 & 3) != 0) {
                puVar16 = (undefined8 *)
                          ((longlong)IMAGE_DOS_HEADER_00400000.e_res_4_ + uVar15 + lVar23 + -0xc);
                puVar31 = (undefined8 *)
                          ((longlong)IMAGE_DOS_HEADER_00400000.e_res_4_ + uVar28 + lVar23 + -0xc);
                lVar23 = -(ulonglong)(((uVar24 & 0xc) * 8 - 0x20 >> 5) + 1 & 3);
                do {
                  uVar5 = *(undefined4 *)((longlong)puVar16 + -0xc);
                  uVar6 = *(undefined4 *)(puVar16 + -1);
                  uVar7 = *(undefined4 *)((longlong)puVar16 + -4);
                  uVar12 = *puVar16;
                  uVar13 = puVar16[1];
                  *(undefined4 *)(puVar31 + -2) = *(undefined4 *)(puVar16 + -2);
                  *(undefined4 *)((longlong)puVar31 + -0xc) = uVar5;
                  *(undefined4 *)(puVar31 + -1) = uVar6;
                  *(undefined4 *)((longlong)puVar31 + -4) = uVar7;
                  *puVar31 = uVar12;
                  puVar31[1] = uVar13;
                  puVar16 = puVar16 + 4;
                  puVar31 = puVar31 + 4;
                  lVar23 = lVar23 + 1;
                } while (lVar23 != 0);
              }
              if (uVar22 == uVar32) goto LAB_00420840;
              puVar17 = puVar17 + uVar32;
              uVar22 = uVar22 - uVar32;
              puVar19 = puVar19 + uVar32;
            }
            if (6 < uVar22 - 1) {
              do {
                *puVar17 = *puVar19;
                puVar17[1] = puVar19[1];
                puVar17[2] = puVar19[2];
                puVar17[3] = puVar19[3];
                puVar17[4] = puVar19[4];
                puVar17[5] = puVar19[5];
                puVar17[6] = puVar19[6];
                uVar22 = uVar22 - 8;
                puVar1 = puVar19 + 7;
                puVar19 = puVar19 + 8;
                puVar17[7] = *puVar1;
                puVar17 = puVar17 + 8;
              } while (uVar22 != 0);
            }
          }
        }
LAB_00420840:
        thunk_FUN_041c8c2f(uVar33);
        *(undefined8 *)((ulonglong)uVar3 + 0x400000) = 0;
        puVar16 = &DAT_0200c2b8;
        do {
          puVar31 = puVar16;
          puVar16 = (undefined8 *)*puVar31;
          if (puVar16 == puVar34) break;
        } while (puVar16 != (undefined8 *)0x0);
        if (puVar16 == puVar34) {
          *puVar31 = *puVar34;
        }
        thunk_FUN_03d5b950(puVar34);
        uVar33 = 1;
      }
      puVar34 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
  }
  return uVar33;
}

