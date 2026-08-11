/* Ghidra address: 00632fa0 */
/* Ghidra symbol: FUN_00632fa0 */


void FUN_00632fa0(longlong param_1,longlong *param_2)

{
  short *psVar1;
  short *psVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ushort uVar17;
  uint uVar18;
  short *psVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  ushort auStack_78 [4];
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_68;
  short local_66;
  short local_64;
  short local_62;
  short local_60;
  short local_5e;
  short local_5c;
  short local_5a;
  longlong *local_50;
  ulonglong local_48;
  
  lVar5 = *param_2;
  local_50 = param_2;
  lVar31 = *(longlong *)param_2[2];
  uVar18 = *(uint *)(param_2[2] + 0x14);
  lVar26 = (longlong)(int)uVar18;
  *(undefined8 *)(param_1 + 0x149c) = 0x23d00000000;
  if (lVar26 < 1) {
    uVar18 = 0;
    local_48 = 0xffffffff;
    if (lVar31 != 0) goto LAB_00633180;
LAB_00633060:
    do {
      uVar21 = (int)local_48 + 1;
      if ((int)local_48 < 2) {
        local_48 = (ulonglong)uVar21;
      }
      else {
        uVar21 = 0;
      }
      *(uint *)(param_1 + 0x149c) = uVar18 + 1;
      *(uint *)(param_1 + 0xbac + (longlong)(int)uVar18 * 4) = uVar21;
      *(undefined2 *)(lVar5 + (longlong)(int)uVar21 * 4) = 1;
      *(undefined1 *)(param_1 + 0x14a4 + (longlong)(int)uVar21) = 0;
      *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + -1;
      uVar18 = *(uint *)(param_1 + 0x149c);
    } while ((int)uVar18 < 2);
  }
  else {
    if (uVar18 == 1) {
      local_48 = 0xffffffff;
      uVar15 = 0;
LAB_00632ffd:
      if (*(short *)(lVar5 + uVar15 * 4) == 0) {
        *(undefined2 *)(lVar5 + 2 + uVar15 * 4) = 0;
        uVar18 = *(uint *)(param_1 + 0x149c);
      }
      else {
        iVar9 = *(int *)(param_1 + 0x149c);
        *(int *)(param_1 + 0x149c) = iVar9 + 1;
        *(int *)(param_1 + 0xbac + (longlong)iVar9 * 4) = (int)uVar15;
        *(undefined1 *)(param_1 + 0x14a4 + uVar15) = 0;
        local_48 = uVar15 & 0xffffffff;
        uVar18 = *(uint *)(param_1 + 0x149c);
      }
    }
    else {
      uVar25 = (ulonglong)uVar18 - (ulonglong)(uVar18 & 1);
      local_48 = 0xffffffff;
      uVar30 = 0;
      do {
        while (uVar15 = uVar30, *(short *)(lVar5 + uVar15 * 4) == 0) {
          *(undefined2 *)(lVar5 + 2 + uVar15 * 4) = 0;
          if (*(short *)(lVar5 + 4 + uVar15 * 4) == 0) goto LAB_00633141;
LAB_006330f3:
          iVar9 = *(int *)(param_1 + 0x149c);
          *(int *)(param_1 + 0x149c) = iVar9 + 1;
          uVar21 = (int)uVar15 + 1;
          local_48 = (ulonglong)uVar21;
          *(uint *)(param_1 + 0xbac + (longlong)iVar9 * 4) = uVar21;
          *(undefined1 *)(param_1 + 0x14a5 + uVar15) = 0;
          uVar30 = uVar15 + 2;
          if (uVar25 == uVar15 + 2) goto LAB_00633156;
        }
        iVar9 = *(int *)(param_1 + 0x149c);
        *(int *)(param_1 + 0x149c) = iVar9 + 1;
        *(int *)(param_1 + 0xbac + (longlong)iVar9 * 4) = (int)uVar15;
        *(undefined1 *)(param_1 + 0x14a4 + uVar15) = 0;
        local_48 = uVar15 & 0xffffffff;
        if (*(short *)(lVar5 + 4 + uVar15 * 4) != 0) goto LAB_006330f3;
LAB_00633141:
        *(undefined2 *)(lVar5 + 6 + uVar15 * 4) = 0;
        uVar30 = uVar15 + 2;
      } while (uVar25 != uVar15 + 2);
LAB_00633156:
      uVar15 = uVar15 + 2;
      if ((ulonglong)(uVar18 & 1) != 0) goto LAB_00632ffd;
      uVar18 = *(uint *)(param_1 + 0x149c);
    }
    if ((int)uVar18 < 2) {
      if (lVar31 == 0) goto LAB_00633060;
LAB_00633180:
      do {
        uVar21 = (int)local_48 + 1;
        if ((int)local_48 < 2) {
          local_48 = (ulonglong)uVar21;
        }
        else {
          uVar21 = 0;
        }
        *(uint *)(param_1 + 0x149c) = uVar18 + 1;
        *(uint *)(param_1 + 0xbac + (longlong)(int)uVar18 * 4) = uVar21;
        lVar16 = (longlong)(int)uVar21;
        *(undefined2 *)(lVar5 + lVar16 * 4) = 1;
        *(undefined1 *)(param_1 + 0x14a4 + lVar16) = 0;
        *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + -1;
        *(int *)(param_1 + 0x1704) =
             *(int *)(param_1 + 0x1704) - (uint)*(ushort *)(lVar31 + 2 + lVar16 * 4);
        uVar18 = *(uint *)(param_1 + 0x149c);
      } while ((int)uVar18 < 2);
    }
  }
  iVar9 = (int)local_48;
  *(int *)(param_2 + 1) = iVar9;
  if (uVar18 >> 1 != 0) {
    uVar30 = (ulonglong)(uVar18 >> 1);
    do {
      iVar10 = *(int *)(param_1 + 0xba8 + uVar30 * 4);
      uVar21 = (uint)uVar30;
      uVar12 = uVar21 * 2;
      if ((int)uVar12 <= (int)uVar18) {
        uVar25 = uVar30 & 0xffffffff;
        do {
          uVar22 = uVar12;
          if ((int)uVar12 < (int)uVar18) {
            lVar16 = (longlong)*(int *)(param_1 + 0xba8 + (longlong)(int)(uVar12 | 1) * 4);
            lVar31 = (longlong)*(int *)(param_1 + 0xba8 + (longlong)(int)uVar12 * 4);
            uVar17 = *(ushort *)(lVar5 + lVar31 * 4);
            uVar3 = *(ushort *)(lVar5 + lVar16 * 4);
            if ((uVar3 < uVar17) ||
               ((uVar3 == uVar17 &&
                (*(byte *)(param_1 + 0x14a4 + lVar16) <= *(byte *)(param_1 + 0x14a4 + lVar31))))) {
              uVar22 = uVar12 | 1;
            }
          }
          iVar24 = *(int *)(param_1 + 0xba8 + (longlong)(int)uVar22 * 4);
          uVar17 = *(ushort *)(lVar5 + (longlong)iVar24 * 4);
          uVar3 = *(ushort *)(lVar5 + (longlong)iVar10 * 4);
          uVar21 = (uint)uVar25;
          if ((uVar3 < uVar17) ||
             ((uVar3 == uVar17 &&
              (*(byte *)(param_1 + 0x14a4 + (longlong)iVar10) <=
               *(byte *)(param_1 + 0x14a4 + (longlong)iVar24))))) break;
          *(int *)(param_1 + 0xba8 + (longlong)(int)uVar21 * 4) = iVar24;
          uVar12 = uVar22 * 2;
          uVar18 = *(uint *)(param_1 + 0x149c);
          uVar25 = (ulonglong)uVar22;
          uVar21 = uVar22;
        } while ((int)uVar12 <= (int)uVar18);
      }
      *(int *)(param_1 + 0xba8 + (longlong)(int)uVar21 * 4) = iVar10;
      if ((longlong)uVar30 < 2) goto LAB_006332ea;
      uVar30 = uVar30 - 1;
      uVar18 = *(uint *)(param_1 + 0x149c);
    } while( true );
  }
LAB_006332f0:
  do {
    iVar24 = *(int *)(param_1 + 0xbac);
    lVar31 = (longlong)iVar24;
    iVar10 = uVar18 - 1;
    *(int *)(param_1 + 0x149c) = iVar10;
    iVar11 = *(int *)(param_1 + 0xba8 + (longlong)(int)uVar18 * 4);
    *(int *)(param_1 + 0xbac) = iVar11;
    uVar21 = 1;
    if (2 < (int)uVar18) {
      uVar18 = 2;
      uVar21 = 1;
      do {
        uVar12 = uVar18;
        if ((int)uVar18 < iVar10) {
          lVar28 = (longlong)*(int *)(param_1 + 0xba8 + (longlong)(int)(uVar18 | 1) * 4);
          lVar16 = (longlong)*(int *)(param_1 + 0xba8 + (longlong)(int)uVar18 * 4);
          uVar17 = *(ushort *)(lVar5 + lVar16 * 4);
          uVar3 = *(ushort *)(lVar5 + lVar28 * 4);
          if ((uVar3 < uVar17) ||
             ((uVar3 == uVar17 &&
              (*(byte *)(param_1 + 0x14a4 + lVar28) <= *(byte *)(param_1 + 0x14a4 + lVar16))))) {
            uVar12 = uVar18 | 1;
          }
        }
        iVar10 = *(int *)(param_1 + 0xba8 + (longlong)(int)uVar12 * 4);
        uVar17 = *(ushort *)(lVar5 + (longlong)iVar10 * 4);
        uVar3 = *(ushort *)(lVar5 + (longlong)iVar11 * 4);
        if ((uVar3 < uVar17) ||
           ((uVar3 == uVar17 &&
            (*(byte *)(param_1 + 0x14a4 + (longlong)iVar11) <=
             *(byte *)(param_1 + 0x14a4 + (longlong)iVar10))))) break;
        *(int *)(param_1 + 0xba8 + (longlong)(int)uVar21 * 4) = iVar10;
        uVar18 = uVar12 * 2;
        iVar10 = *(int *)(param_1 + 0x149c);
        uVar21 = uVar12;
      } while ((int)uVar18 <= iVar10);
    }
    *(int *)(param_1 + 0xba8 + (longlong)(int)uVar21 * 4) = iVar11;
    iVar10 = *(int *)(param_1 + 0xbac);
    lVar16 = (longlong)iVar10;
    iVar11 = *(int *)(param_1 + 0x14a0);
    *(int *)(param_1 + 0x14a0) = iVar11 + -1;
    *(int *)(param_1 + 0xba4 + (longlong)iVar11 * 4) = iVar24;
    iVar11 = *(int *)(param_1 + 0x14a0);
    *(int *)(param_1 + 0x14a0) = iVar11 + -1;
    *(int *)(param_1 + 0xba4 + (longlong)iVar11 * 4) = iVar10;
    *(short *)(lVar5 + lVar26 * 4) = *(short *)(lVar5 + lVar16 * 4) + *(short *)(lVar5 + lVar31 * 4)
    ;
    if (*(byte *)(param_1 + 0x14a4 + lVar31) < *(byte *)(param_1 + 0x14a4 + lVar16)) {
      iVar24 = iVar10;
    }
    *(char *)(param_1 + 0x14a4 + lVar26) = *(char *)(param_1 + 0x14a4 + (longlong)iVar24) + '\x01';
    *(short *)(lVar5 + 2 + lVar16 * 4) = (short)lVar26;
    *(short *)(lVar5 + 2 + lVar31 * 4) = (short)lVar26;
    *(int *)(param_1 + 0xbac) = (int)lVar26;
    iVar10 = *(int *)(param_1 + 0x149c);
    uVar18 = 1;
    if (1 < iVar10) {
      uVar21 = 2;
      uVar18 = 1;
      do {
        uVar12 = uVar21;
        if ((int)uVar21 < iVar10) {
          lVar31 = (longlong)*(int *)(param_1 + 0xba8 + (longlong)(int)(uVar21 | 1) * 4);
          lVar16 = (longlong)*(int *)(param_1 + 0xba8 + (longlong)(int)uVar21 * 4);
          uVar17 = *(ushort *)(lVar5 + lVar16 * 4);
          uVar3 = *(ushort *)(lVar5 + lVar31 * 4);
          if ((uVar3 < uVar17) ||
             ((uVar3 == uVar17 &&
              (*(byte *)(param_1 + 0x14a4 + lVar31) <= *(byte *)(param_1 + 0x14a4 + lVar16))))) {
            uVar12 = uVar21 | 1;
          }
        }
        iVar10 = *(int *)(param_1 + 0xba8 + (longlong)(int)uVar12 * 4);
        uVar17 = *(ushort *)(lVar5 + (longlong)iVar10 * 4);
        uVar3 = *(ushort *)(lVar5 + lVar26 * 4);
        if ((uVar3 < uVar17) ||
           ((uVar3 == uVar17 &&
            (*(byte *)(param_1 + 0x14a4 + lVar26) <= *(byte *)(param_1 + 0x14a4 + (longlong)iVar10))
            ))) break;
        *(int *)(param_1 + 0xba8 + (longlong)(int)uVar18 * 4) = iVar10;
        uVar21 = uVar12 * 2;
        iVar10 = *(int *)(param_1 + 0x149c);
        uVar18 = uVar12;
      } while ((int)uVar21 <= iVar10);
    }
    *(int *)(param_1 + 0xba8 + (longlong)(int)uVar18 * 4) = (int)lVar26;
    lVar26 = lVar26 + 1;
    uVar18 = *(uint *)(param_1 + 0x149c);
    if ((int)uVar18 < 2) {
      iVar10 = *(int *)(param_1 + 0x14a0);
      *(int *)(param_1 + 0x14a0) = iVar10 + -1;
      *(undefined4 *)(param_1 + 0xba4 + (longlong)iVar10 * 4) = *(undefined4 *)(param_1 + 0xbac);
      lVar31 = *param_2;
      iVar10 = (int)param_2[1];
      plVar6 = (longlong *)param_2[2];
      lVar26 = *plVar6;
      lVar16 = plVar6[1];
      iVar24 = (int)plVar6[2];
      iVar11 = (int)plVar6[3];
      lVar28 = (longlong)iVar11;
      *(undefined8 *)(param_1 + 0xb98) = 0;
      *(undefined8 *)(param_1 + 0xba0) = 0;
      *(undefined8 *)(param_1 + 0xb88) = 0;
      *(undefined8 *)(param_1 + 0xb90) = 0;
      *(undefined2 *)
       (lVar31 + 2 +
       (longlong)*(int *)(param_1 + 0xba8 + (longlong)*(int *)(param_1 + 0x14a0) * 4) * 4) = 0;
      lVar29 = (longlong)*(int *)(param_1 + 0x14a0);
      if (lVar29 < 0x23c) {
        iVar27 = 0;
        if (lVar26 == 0) {
          do {
            iVar4 = *(int *)(param_1 + 0xbac + lVar29 * 4);
            lVar26 = (longlong)iVar4;
            uVar17 = *(ushort *)(lVar31 + 2 + (ulonglong)*(ushort *)(lVar31 + 2 + lVar26 * 4) * 4);
            iVar23 = iVar11;
            if ((int)(uint)uVar17 < iVar11) {
              iVar23 = uVar17 + 1;
            }
            lVar29 = lVar29 + 1;
            *(short *)(lVar31 + 2 + lVar26 * 4) = (short)iVar23;
            if (iVar4 <= iVar10) {
              psVar2 = (short *)(param_1 + 0xb88 + (longlong)iVar23 * 2);
              *psVar2 = *psVar2 + 1;
              iVar14 = 0;
              if (iVar24 <= iVar4) {
                iVar14 = *(int *)(lVar16 + (longlong)(iVar4 - iVar24) * 4);
              }
              *(int *)(param_1 + 0x1700) =
                   *(int *)(param_1 + 0x1700) +
                   (iVar14 + iVar23) * (uint)*(ushort *)(lVar31 + lVar26 * 4);
            }
            iVar27 = iVar27 + (uint)(iVar11 <= (int)(uint)uVar17);
          } while (lVar29 != 0x23c);
        }
        else {
          do {
            iVar4 = *(int *)(param_1 + 0xbac + lVar29 * 4);
            lVar20 = (longlong)iVar4;
            uVar17 = *(ushort *)(lVar31 + 2 + (ulonglong)*(ushort *)(lVar31 + 2 + lVar20 * 4) * 4);
            iVar23 = iVar11;
            if ((int)(uint)uVar17 < iVar11) {
              iVar23 = uVar17 + 1;
            }
            lVar29 = lVar29 + 1;
            *(short *)(lVar31 + 2 + lVar20 * 4) = (short)iVar23;
            if (iVar4 <= iVar10) {
              psVar2 = (short *)(param_1 + 0xb88 + (longlong)iVar23 * 2);
              *psVar2 = *psVar2 + 1;
              iVar14 = 0;
              if (iVar24 <= iVar4) {
                iVar14 = *(int *)(lVar16 + (longlong)(iVar4 - iVar24) * 4);
              }
              uVar18 = (uint)*(ushort *)(lVar31 + lVar20 * 4);
              *(int *)(param_1 + 0x1700) = *(int *)(param_1 + 0x1700) + (iVar23 + iVar14) * uVar18;
              *(int *)(param_1 + 0x1704) =
                   *(int *)(param_1 + 0x1704) +
                   ((uint)*(ushort *)(lVar26 + 2 + lVar20 * 4) + iVar14) * uVar18;
            }
            iVar27 = iVar27 + (uint)(iVar11 <= (int)(uint)uVar17);
          } while (lVar29 != 0x23c);
        }
        if (iVar27 != 0) {
          lVar16 = (lVar28 << 0x20) + 0x100000000;
          psVar2 = (short *)(param_1 + 0xb88 + lVar28 * 2);
          psVar19 = psVar2;
          lVar26 = lVar16;
          do {
            do {
              lVar26 = lVar26 + -0x100000000;
              psVar1 = psVar19 + -1;
              psVar19 = psVar19 + -1;
            } while (*psVar1 == 0);
            *psVar19 = *psVar1 + -1;
            psVar19 = (short *)(param_1 + 0xb88 + (lVar26 >> 0x1f));
            *psVar19 = *psVar19 + 2;
            uVar17 = *(short *)(param_1 + 0xb88 + lVar28 * 2) - 1;
            *(ushort *)(param_1 + 0xb88 + lVar28 * 2) = uVar17;
            bVar7 = 2 < iVar27;
            psVar19 = psVar2;
            lVar26 = lVar16;
            iVar27 = iVar27 + -2;
          } while (bVar7);
          if (iVar11 != 0) {
            iVar24 = 0x23d;
            while( true ) {
              if (uVar17 != 0) {
                uVar18 = (uint)uVar17;
                do {
                  piVar13 = (int *)(param_1 + 0xba4 + (longlong)iVar24 * 4);
                  do {
                    iVar11 = *piVar13;
                    lVar26 = (longlong)iVar11;
                    iVar24 = iVar24 + -1;
                    piVar13 = piVar13 + -1;
                  } while (iVar10 < iVar11);
                  iVar11 = (int)lVar28 - (uint)*(ushort *)(lVar31 + 2 + lVar26 * 4);
                  if (iVar11 != 0) {
                    *(int *)(param_1 + 0x1700) =
                         *(int *)(param_1 + 0x1700) +
                         iVar11 * (uint)*(ushort *)(lVar31 + lVar26 * 4);
                    *(short *)(lVar31 + 2 + lVar26 * 4) = (short)lVar28;
                  }
                  uVar18 = uVar18 - 1;
                } while (uVar18 != 0);
              }
              if ((int)(lVar28 + -1) == 0) break;
              uVar17 = *(ushort *)(param_1 + 0xb86 + lVar28 * 2);
              lVar28 = lVar28 + -1;
            }
          }
        }
      }
      auStack_78[1] = *(short *)(param_1 + 0xb88) * 2;
      sVar8 = *(short *)(param_1 + 0xb8a) + *(short *)(param_1 + 0xb88) * 2;
      auStack_78[2] = sVar8 * 2;
      sVar8 = *(short *)(param_1 + 0xb8c) + sVar8 * 2;
      auStack_78[3] = sVar8 * 2;
      sVar8 = *(short *)(param_1 + 0xb8e) + sVar8 * 2;
      local_70 = sVar8 * 2;
      sVar8 = *(short *)(param_1 + 0xb90) + sVar8 * 2;
      local_6e = sVar8 * 2;
      sVar8 = *(short *)(param_1 + 0xb92) + sVar8 * 2;
      local_6c = sVar8 * 2;
      sVar8 = *(short *)(param_1 + 0xb94) + sVar8 * 2;
      local_6a = sVar8 * 2;
      sVar8 = *(short *)(param_1 + 0xb96) + sVar8 * 2;
      local_68 = sVar8 * 2;
      sVar8 = *(short *)(param_1 + 0xb98) + sVar8 * 2;
      local_66 = sVar8 * 2;
      sVar8 = *(short *)(param_1 + 0xb9a) + sVar8 * 2;
      local_64 = sVar8 * 2;
      sVar8 = *(short *)(param_1 + 0xb9c) + sVar8 * 2;
      local_62 = sVar8 * 2;
      sVar8 = *(short *)(param_1 + 0xb9e) + sVar8 * 2;
      local_60 = sVar8 * 2;
      sVar8 = *(short *)(param_1 + 0xba0) + sVar8 * 2;
      local_5e = sVar8 * 2;
      sVar8 = *(short *)(param_1 + 0xba2) + sVar8 * 2;
      local_5c = sVar8 * 2;
      local_5a = (*(short *)(param_1 + 0xba4) + sVar8 * 2) * 2;
      if (-1 < iVar9) {
        uVar30 = 0;
        do {
          uVar17 = *(ushort *)(lVar5 + 2 + uVar30 * 4);
          if (uVar17 != 0) {
            uVar21 = (uint)auStack_78[uVar17];
            auStack_78[uVar17] = auStack_78[uVar17] + 1;
            iVar10 = uVar17 + 1;
            uVar18 = 0;
            do {
              uVar12 = uVar21 & 1 | uVar18;
              uVar21 = uVar21 >> 1;
              uVar18 = uVar12 * 2;
              iVar10 = iVar10 + -1;
            } while (1 < iVar10);
            *(short *)(lVar5 + uVar30 * 4) = (short)uVar12;
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 != iVar9 + 1);
      }
      return;
    }
  } while( true );
LAB_006332ea:
  uVar18 = *(uint *)(param_1 + 0x149c);
  goto LAB_006332f0;
}

