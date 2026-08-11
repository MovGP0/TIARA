/* Ghidra address: 006325a0 */
/* Ghidra symbol: FUN_006325a0 */


void FUN_006325a0(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 uVar7;
  ulonglong uVar8;
  undefined *puVar9;
  ushort *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  
  if (*(int *)((longlong)param_1 + 0xac) < 1) {
    uVar4 = param_3 + 5;
    iVar17 = 0;
    iVar19 = 0;
    uVar6 = uVar4;
    if (param_2 != 0) goto LAB_00632b1e;
LAB_00632b49:
    iVar17 = *(int *)((longlong)param_1 + 0x1714);
    if ((uVar4 == uVar6) || ((int)param_1[0x16] == 4)) {
      uVar4 = param_4 + 2U & 0xffff;
      uVar6 = (uint)*(ushort *)(param_1 + 0x2e2) | uVar4 << ((byte)iVar17 & 0x1f);
      *(short *)(param_1 + 0x2e2) = (short)uVar6;
      if (iVar17 < 0xe) {
        iVar17 = iVar17 + 3;
      }
      else {
        uVar14 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar14 + 1;
        *(char *)(param_1[2] + (ulonglong)uVar14) = (char)uVar6;
        uVar6 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar6 + 1;
        *(undefined1 *)(param_1[2] + (ulonglong)uVar6) = *(undefined1 *)((longlong)param_1 + 0x1711)
        ;
        *(short *)(param_1 + 0x2e2) =
             (short)(uVar4 >> (0x10U - (char)*(int *)((longlong)param_1 + 0x1714) & 0x1f));
        iVar17 = *(int *)((longlong)param_1 + 0x1714) + -0xd;
      }
      *(int *)((longlong)param_1 + 0x1714) = iVar17;
      puVar9 = &DAT_01df2f10;
      plVar16 = (longlong *)&DAT_01df3390;
    }
    else {
      uVar4 = param_4 + 4U & 0xffff;
      uVar6 = (uint)*(ushort *)(param_1 + 0x2e2) | uVar4 << ((byte)iVar17 & 0x1f);
      *(short *)(param_1 + 0x2e2) = (short)uVar6;
      if (iVar17 < 0xe) {
        iVar17 = iVar17 + 3;
      }
      else {
        uVar14 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar14 + 1;
        *(char *)(param_1[2] + (ulonglong)uVar14) = (char)uVar6;
        uVar6 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar6 + 1;
        *(undefined1 *)(param_1[2] + (ulonglong)uVar6) = *(undefined1 *)((longlong)param_1 + 0x1711)
        ;
        uVar6 = uVar4 >> (0x10U - (char)*(int *)((longlong)param_1 + 0x1714) & 0x1f);
        *(short *)(param_1 + 0x2e2) = (short)uVar6;
        iVar17 = *(int *)((longlong)param_1 + 0x1714) + -0xd;
      }
      *(int *)((longlong)param_1 + 0x1714) = iVar17;
      uVar4 = *(uint *)(param_1 + 0x16c);
      uVar14 = (int)param_1[0x169] + 0xff00U & 0xffff;
      uVar6 = uVar6 & 0xffff | uVar14 << ((byte)iVar17 & 0x1f);
      *(short *)(param_1 + 0x2e2) = (short)uVar6;
      if (iVar17 < 0xc) {
        iVar17 = iVar17 + 5;
      }
      else {
        uVar3 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar3 + 1;
        *(char *)(param_1[2] + (ulonglong)uVar3) = (char)uVar6;
        uVar6 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar6 + 1;
        *(undefined1 *)(param_1[2] + (ulonglong)uVar6) = *(undefined1 *)((longlong)param_1 + 0x1711)
        ;
        uVar6 = uVar14 >> (0x10U - (char)*(int *)((longlong)param_1 + 0x1714) & 0x1f);
        *(short *)(param_1 + 0x2e2) = (short)uVar6;
        iVar17 = *(int *)((longlong)param_1 + 0x1714) + -0xb;
      }
      *(int *)((longlong)param_1 + 0x1714) = iVar17;
      uVar14 = uVar4 & 0xffff;
      uVar6 = uVar6 & 0xffff | uVar14 << ((byte)iVar17 & 0x1f);
      *(short *)(param_1 + 0x2e2) = (short)uVar6;
      if (iVar17 < 0xc) {
        iVar17 = iVar17 + 5;
      }
      else {
        uVar3 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar3 + 1;
        *(char *)(param_1[2] + (ulonglong)uVar3) = (char)uVar6;
        uVar6 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar6 + 1;
        *(undefined1 *)(param_1[2] + (ulonglong)uVar6) = *(undefined1 *)((longlong)param_1 + 0x1711)
        ;
        uVar6 = uVar14 >> (0x10U - (char)*(int *)((longlong)param_1 + 0x1714) & 0x1f);
        *(short *)(param_1 + 0x2e2) = (short)uVar6;
        iVar17 = *(int *)((longlong)param_1 + 0x1714) + -0xb;
      }
      *(int *)((longlong)param_1 + 0x1714) = iVar17;
      uVar14 = iVar19 + 0xfffdU & 0xffff;
      uVar6 = uVar6 & 0xffff | uVar14 << ((byte)iVar17 & 0x1f);
      *(short *)(param_1 + 0x2e2) = (short)uVar6;
      if (iVar17 < 0xd) {
        iVar17 = iVar17 + 4;
      }
      else {
        uVar3 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar3 + 1;
        *(char *)(param_1[2] + (ulonglong)uVar3) = (char)uVar6;
        uVar6 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar6 + 1;
        *(undefined1 *)(param_1[2] + (ulonglong)uVar6) = *(undefined1 *)((longlong)param_1 + 0x1711)
        ;
        uVar6 = uVar14 >> (0x10U - (char)*(int *)((longlong)param_1 + 0x1714) & 0x1f);
        *(short *)(param_1 + 0x2e2) = (short)uVar6;
        iVar17 = *(int *)((longlong)param_1 + 0x1714) + -0xc;
      }
      *(int *)((longlong)param_1 + 0x1714) = iVar17;
      uVar8 = 0;
      do {
        uVar2 = *(ushort *)((longlong)param_1 + (ulonglong)(byte)(&DAT_01df3560)[uVar8] * 4 + 0xaa6)
        ;
        uVar6 = uVar6 & 0xffff | (uint)uVar2 << ((byte)iVar17 & 0x1f);
        *(short *)(param_1 + 0x2e2) = (short)uVar6;
        if (iVar17 < 0xe) {
          iVar17 = iVar17 + 3;
        }
        else {
          uVar14 = *(uint *)(param_1 + 5);
          *(uint *)(param_1 + 5) = uVar14 + 1;
          *(char *)(param_1[2] + (ulonglong)uVar14) = (char)uVar6;
          uVar6 = *(uint *)(param_1 + 5);
          *(uint *)(param_1 + 5) = uVar6 + 1;
          *(undefined1 *)(param_1[2] + (ulonglong)uVar6) =
               *(undefined1 *)((longlong)param_1 + 0x1711);
          uVar2 = uVar2 >> (0x10U - (char)*(int *)((longlong)param_1 + 0x1714) & 0x1f);
          *(ushort *)(param_1 + 0x2e2) = uVar2;
          iVar17 = *(int *)((longlong)param_1 + 0x1714) + -0xd;
          uVar6 = (uint)uVar2;
        }
        *(int *)((longlong)param_1 + 0x1714) = iVar17;
        uVar8 = uVar8 + 1;
      } while (iVar19 + 1 != uVar8);
      puVar9 = (undefined *)((longlong)param_1 + 0xbc);
      FUN_00633e80(param_1,puVar9);
      plVar16 = param_1 + 0x136;
      FUN_00633e80(param_1,plVar16,uVar4);
    }
    FUN_006339d0(param_1,puVar9,plVar16);
  }
  else {
    if (*(int *)(*param_1 + 0x48) == 2) {
      uVar5 = 0;
      if ((((((((*(short *)((longlong)param_1 + 0xbc) == 0) && ((short)param_1[0x18] == 0)) &&
              (*(short *)((longlong)param_1 + 0xc4) == 0)) &&
             (((short)param_1[0x19] == 0 && (*(short *)((longlong)param_1 + 0xcc) == 0)))) &&
            ((short)param_1[0x1a] == 0)) &&
           (((*(short *)((longlong)param_1 + 0xd4) == 0 &&
             (*(short *)((longlong)param_1 + 0xf4) == 0)) &&
            (((short)param_1[0x1f] == 0 &&
             (((*(short *)((longlong)param_1 + 0xfc) == 0 && ((short)param_1[0x20] == 0)) &&
              (*(short *)((longlong)param_1 + 0x104) == 0)))))))) &&
          ((((short)param_1[0x21] == 0 && (*(short *)((longlong)param_1 + 0x10c) == 0)) &&
           (((short)param_1[0x22] == 0 &&
            (((*(short *)((longlong)param_1 + 0x114) == 0 && ((short)param_1[0x23] == 0)) &&
             ((*(short *)((longlong)param_1 + 0x11c) == 0 &&
              ((((short)param_1[0x24] == 0 && (*(short *)((longlong)param_1 + 300) == 0)) &&
               ((short)param_1[0x26] == 0)))))))))))) &&
         ((*(short *)((longlong)param_1 + 0x134) == 0 && ((short)param_1[0x27] == 0)))) {
        if (((short)param_1[0x1c] == 0) &&
           ((*(short *)((longlong)param_1 + 0xe4) == 0 && ((short)param_1[0x1e] == 0)))) {
          lVar12 = 0x52;
          do {
            if ((((*(short *)((longlong)param_1 + lVar12 * 4 + -0xc) != 0) ||
                 (*(short *)((longlong)param_1 + lVar12 * 4 + -8) != 0)) ||
                (*(short *)((longlong)param_1 + lVar12 * 4 + -4) != 0)) ||
               (*(short *)((longlong)param_1 + lVar12 * 4) != 0)) goto LAB_00632735;
            uVar8 = lVar12 - 0x2f;
            lVar12 = lVar12 + 4;
          } while (uVar8 < 0xff);
        }
        else {
LAB_00632735:
          uVar5 = 1;
        }
      }
      *(undefined4 *)(*param_1 + 0x48) = uVar5;
    }
    FUN_00632fa0(param_1,param_1 + 0x168);
    FUN_00632fa0(param_1,param_1 + 0x16b);
    lVar12 = param_1[0x169];
    uVar2 = *(ushort *)((longlong)param_1 + 0xbe);
    uVar6 = (int)lVar12 + 1;
    *(undefined2 *)((longlong)param_1 + (longlong)(int)uVar6 * 4 + 0xbe) = 0xffff;
    if (-1 < (int)lVar12) {
      iVar19 = 0x8a;
      if (uVar2 != 0) {
        iVar19 = 7;
      }
      iVar18 = 4 - (uint)(uVar2 == 0);
      uVar15 = (ulonglong)uVar6;
      puVar10 = (ushort *)((longlong)param_1 + 0xc2);
      uVar8 = 0xffffffff;
      uVar6 = (uint)uVar2;
      iVar17 = 0;
      do {
        uVar11 = (ulonglong)uVar6;
        uVar2 = *puVar10;
        uVar4 = (uint)uVar2;
        iVar13 = iVar17 + 1;
        if ((iVar19 <= iVar13) || (uVar6 != uVar4)) {
          if (iVar13 < iVar18) {
            *(short *)((longlong)param_1 + uVar11 * 4 + 0xaa4) =
                 (short)iVar13 + (short)*(undefined4 *)((longlong)param_1 + uVar11 * 4 + 0xaa4);
          }
          else {
            if (uVar6 == 0) {
              plVar16 = (longlong *)((longlong)param_1 + 0xaec);
              if (iVar17 < 10) {
                plVar16 = param_1 + 0x15d;
              }
            }
            else {
              plVar16 = (longlong *)((longlong)param_1 + 0xae4);
              if (uVar6 != (uint)uVar8) {
                psVar1 = (short *)((longlong)param_1 + uVar11 * 4 + 0xaa4);
                *psVar1 = *psVar1 + 1;
              }
            }
            *(short *)plVar16 = (short)*plVar16 + 1;
          }
          uVar8 = uVar11;
          if (uVar2 == 0) {
            iVar13 = 0;
            iVar18 = 3;
            iVar19 = 0x8a;
          }
          else {
            iVar13 = 0;
            iVar19 = 7 - (uint)(uVar6 == uVar4);
            iVar18 = 4 - (uint)(uVar6 == uVar4);
          }
        }
        puVar10 = puVar10 + 2;
        uVar15 = uVar15 - 1;
        uVar6 = uVar4;
        iVar17 = iVar13;
      } while (uVar15 != 0);
    }
    lVar12 = param_1[0x16c];
    uVar2 = *(ushort *)((longlong)param_1 + 0x9b2);
    uVar6 = (int)lVar12 + 1;
    *(undefined2 *)((longlong)param_1 + (longlong)(int)uVar6 * 4 + 0x9b2) = 0xffff;
    if (-1 < (int)lVar12) {
      iVar19 = 0x8a;
      if (uVar2 != 0) {
        iVar19 = 7;
      }
      iVar18 = 4 - (uint)(uVar2 == 0);
      uVar15 = (ulonglong)uVar6;
      puVar10 = (ushort *)((longlong)param_1 + 0x9b6);
      uVar8 = 0xffffffff;
      uVar6 = (uint)uVar2;
      iVar17 = 0;
      do {
        uVar11 = (ulonglong)uVar6;
        uVar2 = *puVar10;
        uVar4 = (uint)uVar2;
        iVar13 = iVar17 + 1;
        if ((iVar19 <= iVar13) || (uVar6 != uVar4)) {
          if (iVar13 < iVar18) {
            *(short *)((longlong)param_1 + uVar11 * 4 + 0xaa4) =
                 (short)iVar13 + (short)*(undefined4 *)((longlong)param_1 + uVar11 * 4 + 0xaa4);
          }
          else {
            if (uVar6 == 0) {
              plVar16 = (longlong *)((longlong)param_1 + 0xaec);
              if (iVar17 < 10) {
                plVar16 = param_1 + 0x15d;
              }
            }
            else {
              plVar16 = (longlong *)((longlong)param_1 + 0xae4);
              if (uVar6 != (uint)uVar8) {
                psVar1 = (short *)((longlong)param_1 + uVar11 * 4 + 0xaa4);
                *psVar1 = *psVar1 + 1;
              }
            }
            *(short *)plVar16 = (short)*plVar16 + 1;
          }
          uVar8 = uVar11;
          if (uVar2 == 0) {
            iVar13 = 0;
            iVar18 = 3;
            iVar19 = 0x8a;
          }
          else {
            iVar13 = 0;
            iVar19 = 7 - (uint)(uVar6 == uVar4);
            iVar18 = 4 - (uint)(uVar6 == uVar4);
          }
        }
        puVar10 = puVar10 + 2;
        uVar15 = uVar15 - 1;
        uVar6 = uVar4;
        iVar17 = iVar13;
      } while (uVar15 != 0);
    }
    FUN_00632fa0(param_1,param_1 + 0x16e);
    iVar17 = 0x12;
    if ((((((*(short *)((longlong)param_1 + 0xae2) == 0) &&
           (iVar17 = 0x11, *(short *)((longlong)param_1 + 0xaaa) == 0)) &&
          (iVar17 = 0x10, *(short *)((longlong)param_1 + 0xade) == 0)) &&
         (((iVar17 = 0xf, *(short *)((longlong)param_1 + 0xaae) == 0 &&
           (iVar17 = 0xe, *(short *)((longlong)param_1 + 0xada) == 0)) &&
          ((iVar17 = 0xd, *(short *)((longlong)param_1 + 0xab2) == 0 &&
           ((iVar17 = 0xc, *(short *)((longlong)param_1 + 0xad6) == 0 &&
            (iVar17 = 0xb, *(short *)((longlong)param_1 + 0xab6) == 0)))))))) &&
        (iVar17 = 10, *(short *)((longlong)param_1 + 0xad2) == 0)) &&
       ((((iVar17 = 9, *(short *)((longlong)param_1 + 0xaba) == 0 &&
          (iVar17 = 8, *(short *)((longlong)param_1 + 0xace) == 0)) &&
         (iVar17 = 7, *(short *)((longlong)param_1 + 0xabe) == 0)) &&
        (((iVar17 = 6, *(short *)((longlong)param_1 + 0xaca) == 0 &&
          (iVar17 = 5, *(short *)((longlong)param_1 + 0xac2) == 0)) &&
         (iVar17 = 4, *(short *)((longlong)param_1 + 0xac6) == 0)))))) {
      iVar17 = 3 - (uint)(*(short *)((longlong)param_1 + 0xaa6) == 0);
    }
    lVar12 = param_1[0x2e0];
    *(int *)(param_1 + 0x2e0) = (int)lVar12 + 0x11 + iVar17 * 3;
    uVar6 = (uint)((int)lVar12 + 0x1b + iVar17 * 3) >> 3;
    uVar4 = *(int *)((longlong)param_1 + 0x1704) + 10U >> 3;
    if (uVar4 <= uVar6) {
      uVar6 = uVar4;
    }
    iVar19 = iVar17;
    if (param_2 == 0) goto LAB_00632b49;
LAB_00632b1e:
    iVar19 = iVar17;
    if (uVar6 < param_3 + 4U) goto LAB_00632b49;
    FUN_00632240(param_1,param_2,param_3,param_4);
  }
  FUN_00631fe0(param_1);
  if (param_4 == 0) {
    return;
  }
  if (*(int *)((longlong)param_1 + 0x1714) < 9) {
    if (*(int *)((longlong)param_1 + 0x1714) < 1) goto LAB_00632f21;
    uVar7 = (undefined1)(short)param_1[0x2e2];
  }
  else {
    uVar6 = *(uint *)(param_1 + 5);
    *(uint *)(param_1 + 5) = uVar6 + 1;
    *(char *)(param_1[2] + (ulonglong)uVar6) = (char)param_1[0x2e2];
    uVar7 = *(undefined1 *)((longlong)param_1 + 0x1711);
  }
  uVar6 = *(uint *)(param_1 + 5);
  *(uint *)(param_1 + 5) = uVar6 + 1;
  *(undefined1 *)(param_1[2] + (ulonglong)uVar6) = uVar7;
LAB_00632f21:
  *(undefined2 *)(param_1 + 0x2e2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1714) = 0;
  return;
}

