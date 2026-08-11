/* Ghidra address: 00e8eb90 */
/* Ghidra symbol: FUN_00e8eb90 */


/* WARNING: Removing unreachable block (ram,0x00e8f56c) */

int FUN_00e8eb90(longlong *param_1,uint *param_2,undefined4 *param_3,int param_4,uint param_5,
                int param_6)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ushort *puVar18;
  
  lVar2 = *param_1;
  puVar5 = (ushort *)(lVar2 + 4);
  uVar8 = *(ushort *)(lVar2 + 2);
  uVar9 = (uint)uVar8;
  uVar10 = (uint)uVar8;
  uVar17 = param_5 & 0x800;
  if ((uVar17 == 0) || ((uVar10 & 0xfc00) != 0xd800)) {
    puVar11 = (ushort *)(lVar2 + 2);
    if (uVar8 != 0) goto LAB_00e8ec06;
    *param_3 = 1;
    uVar14 = 0;
LAB_00e8ecb7:
    iVar16 = 0;
    goto LAB_00e8ecba;
  }
  uVar9 = (uint)*(ushort *)(lVar2 + 4);
  uVar10 = (uVar8 & 0x3ff) * 0x400 + 0x10000 + (uVar9 & 0x3ff);
  puVar11 = puVar5;
  puVar5 = (ushort *)(lVar2 + 6);
LAB_00e8ec06:
  uVar1 = uVar10 - 0x30;
  iVar16 = 0;
  iVar15 = 0;
  uVar14 = uVar10;
  if (0x4a < uVar1) goto LAB_00e8ecba;
  uVar12 = (uint)*(short *)(&DAT_01edff00 + (ulonglong)uVar1 * 2);
  puVar7 = puVar11;
  if (uVar12 != 0) {
    uVar14 = uVar12;
    if (0 < *(short *)(&DAT_01edff00 + (ulonglong)uVar1 * 2)) goto LAB_00e8ecba;
    goto LAB_00e8ec45;
  }
  uVar12 = 0x30;
  switch(uVar10) {
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    if (param_6 == 0) {
      uVar8 = puVar11[1];
      uVar12 = uVar1;
      while ((ushort)(uVar8 - 0x30) < 10) {
        if (0xccccccb < (int)uVar12) {
          puVar11 = puVar7 + -1;
          do {
            puVar5 = puVar11 + 2;
            puVar11 = puVar11 + 1;
          } while ((ushort)(*puVar5 - 0x30) < 10);
          *param_3 = 0x3d;
          iVar16 = iVar15;
          goto LAB_00e8ecba;
        }
        uVar12 = (uVar8 - 0x30) + uVar12 * 10;
        puVar5 = puVar7 + 2;
        puVar7 = puVar7 + 1;
        uVar8 = *puVar5;
      }
      if (((int)uVar12 < 8) || ((int)uVar12 <= param_4)) goto LAB_00e8ec45;
    }
    iVar16 = iVar15;
    uVar14 = uVar9;
    uVar12 = uVar9;
    if (0x37 < uVar9) break;
  case 0x30:
    uVar14 = uVar12 - 0x30;
    iVar6 = -1;
    do {
      puVar5 = puVar11 + 1;
      iVar16 = iVar15;
      if ((*puVar5 & 0xfff8) != 0x30) break;
      puVar11 = puVar11 + 1;
      uVar14 = (*puVar5 - 0x30) + uVar14 * 8;
      iVar4 = iVar6 + 1;
      bVar3 = iVar6 < -1;
      iVar6 = iVar4;
    } while (iVar4 == 0 || bVar3);
    break;
  default:
    if ((param_5 & 0x40) != 0) {
      *param_3 = 3;
    }
    break;
  case 0x4c:
  case 0x6c:
    *param_3 = 0x25;
    iVar16 = iVar15;
    break;
  case 0x55:
    iVar16 = iVar15;
    uVar14 = 0x55;
    if ((param_5 & 0x2000000) == 0) {
      *param_3 = 0x25;
      uVar14 = 0x55;
    }
    break;
  case 99:
    uVar8 = *puVar5;
    uVar14 = (uint)uVar8;
    puVar11 = puVar5;
    if (uVar14 == 0) {
      *param_3 = 2;
      iVar16 = iVar15;
    }
    else if (uVar8 < 0x80) {
      uVar10 = uVar8 - 0x20;
      if (0x19 < (ushort)(uVar8 - 0x61)) {
        uVar10 = (uint)uVar8;
      }
      iVar16 = iVar15;
      uVar14 = uVar10 ^ 0x40;
    }
    else {
      *param_3 = 0x44;
      iVar16 = iVar15;
    }
    break;
  case 0x67:
    uVar14 = 0x67;
    iVar16 = iVar15;
    if (param_6 != 0) break;
    uVar8 = *puVar5;
    iVar16 = 0x1b;
    if ((uVar8 == 0x27) || (uVar8 == 0x3c)) break;
    bVar3 = false;
    puVar18 = puVar11;
    puVar7 = puVar5;
    if (uVar8 == 0x7b) {
      do {
        do {
          puVar7 = puVar7 + 1;
          uVar8 = *puVar7;
        } while (uVar8 == 0x2d);
        puVar18 = puVar5;
        if ((uVar8 == 0) || (uVar8 == 0x7d)) {
          bVar3 = true;
          goto LAB_00e8f3ec;
        }
      } while ((ushort)(uVar8 - 0x30) < 10);
      bVar3 = true;
      if ((uVar8 != 0) && (iVar16 = 0x1c, uVar8 != 0x7d)) break;
    }
LAB_00e8f3ec:
    puVar7 = puVar18 + 1;
    if (puVar18[1] != 0x2d) {
      puVar7 = puVar18;
    }
    puVar11 = puVar7 + 1;
    uVar8 = puVar7[1];
    uVar12 = 0;
    if ((ushort)(uVar8 - 0x30) < 10) {
      uVar12 = 0;
LAB_00e8f416:
      puVar7 = puVar11;
      if ((int)uVar12 < 0xccccccc) goto code_r0x00e8f41e;
      puVar11 = puVar7 + -2;
      do {
        puVar5 = puVar11 + 2;
        puVar11 = puVar11 + 1;
      } while ((ushort)(*puVar5 - 0x30) < 10);
      *param_3 = 0x3d;
      goto LAB_00e8ecb7;
    }
LAB_00e8f441:
    if ((bVar3) && (puVar7 = puVar11, uVar8 != 0x7d)) {
      *param_3 = 0x39;
      goto LAB_00e8ecb7;
    }
    if (uVar12 == 0) {
      *param_3 = 0x3a;
LAB_00e8f4ed:
      puVar11 = puVar7;
      iVar16 = 0;
      uVar14 = 0x67;
      break;
    }
    if (puVar18[1] == 0x2d) {
      if (param_4 < (int)uVar12) {
        *param_3 = 0xf;
        goto LAB_00e8f4ed;
      }
      uVar12 = (param_4 + 1) - uVar12;
    }
LAB_00e8ec45:
    puVar11 = puVar7;
    iVar16 = -uVar12;
    uVar14 = uVar10;
    if ((-uVar12 != 0xc) || (iVar16 = 0xc, puVar7[1] != 0x7b)) break;
    if ((ushort)(puVar7[2] - 0x30) < 10) {
      puVar5 = puVar7 + 4;
      do {
        puVar7 = puVar5;
        uVar8 = puVar7[-1];
        puVar5 = puVar7 + 1;
      } while ((ushort)(uVar8 - 0x30) < 10);
      if (uVar8 == 0x2c) {
        if (*puVar7 == 0x7d) break;
        if (9 < (ushort)(*puVar7 - 0x30)) goto LAB_00e8efe8;
        do {
          uVar8 = *puVar5;
          puVar5 = puVar5 + 1;
        } while ((ushort)(uVar8 - 0x30) < 10);
      }
      if (uVar8 == 0x7d) break;
    }
LAB_00e8efe8:
    *param_3 = 0x25;
    break;
  case 0x6f:
    if (*puVar5 == 0x7b) {
      uVar8 = puVar5[1];
      uVar10 = (uint)uVar8;
      if (uVar8 != 0x7d) {
        if ((uVar8 & 0xfff8) == 0x30) {
          puVar11 = puVar5 + 2;
          uVar14 = 0;
LAB_00e8f269:
          if (uVar10 != 0x30) goto LAB_00e8f23f;
          uVar10 = (uint)*puVar11;
          uVar14 = 0;
          if ((uVar10 & 0xfff8) == 0x30) {
LAB_00e8f260:
            puVar11 = puVar11 + 1;
            if (uVar14 != 0) {
LAB_00e8f23f:
              uVar14 = (uVar10 - 0x30) + uVar14 * 8;
              if (uVar14 <= (uVar17 << 9 | 0xffff)) goto code_r0x00e8f250;
              puVar11 = puVar11 + -1;
              do {
                puVar5 = puVar11 + 1;
                puVar11 = puVar11 + 1;
              } while ((*puVar5 & 0xfff8) == 0x30);
              goto LAB_00e8f4c5;
            }
            goto LAB_00e8f269;
          }
LAB_00e8f284:
          if (*puVar11 == 0x7d) goto LAB_00e8f511;
        }
        else {
          puVar11 = puVar5 + 1;
          uVar14 = 0;
        }
        *param_3 = 0x50;
        iVar16 = 0;
        break;
      }
      *param_3 = 0x56;
    }
    else {
      *param_3 = 0x51;
    }
    uVar14 = 0x6f;
    iVar16 = iVar15;
    break;
  case 0x75:
    if ((param_5 & 0x2000000) == 0) {
      *param_3 = 0x25;
      iVar16 = iVar15;
      uVar14 = 0x75;
    }
    else {
      uVar14 = 0x75;
      iVar16 = iVar15;
      if (((((ulonglong)*puVar5 < 0x100) && (((&DAT_01edffa0)[*puVar5] & 8) != 0)) &&
          ((ulonglong)puVar5[1] < 0x100)) &&
         (((((&DAT_01edffa0)[puVar5[1]] & 8) != 0 && ((ulonglong)puVar5[2] < 0x100)) &&
          ((((&DAT_01edffa0)[puVar5[2]] & 8) != 0 &&
           (((ulonglong)puVar5[3] < 0x100 && (((&DAT_01edffa0)[puVar5[3]] & 8) != 0)))))))) {
        uVar8 = puVar11[1];
        uVar10 = uVar8 - 0x20;
        if (uVar8 < 0x61) {
          uVar10 = (uint)uVar8;
        }
        iVar16 = 0xffffc9;
        if (uVar10 < 0x41) {
          iVar16 = 0xffffd0;
        }
        uVar8 = puVar11[2];
        uVar9 = uVar8 - 0x20;
        if (uVar8 < 0x61) {
          uVar9 = (uint)uVar8;
        }
        iVar6 = 0xffffc9;
        if (uVar9 < 0x41) {
          iVar6 = 0xffffd0;
        }
        uVar8 = puVar11[3];
        uVar14 = uVar8 - 0x20;
        if (uVar8 < 0x61) {
          uVar14 = (uint)uVar8;
        }
        iVar4 = 0xfffffc9;
        if (uVar14 < 0x41) {
          iVar4 = 0xfffffd0;
        }
        uVar8 = puVar11[4];
        puVar11 = puVar11 + 4;
        uVar1 = uVar8 - 0x20;
        if (uVar8 < 0x61) {
          uVar1 = (uint)uVar8;
        }
        iVar13 = -0x37;
        if (uVar1 < 0x41) {
          iVar13 = -0x30;
        }
        uVar14 = iVar13 + (iVar4 + (iVar6 + (iVar16 + uVar10) * 0x10 + uVar9) * 0x10 + uVar14) *
                          0x10 + uVar1;
        if ((uVar17 << 9 | 0xffff) < uVar14) {
          *param_3 = 0x4c;
          iVar16 = iVar15;
        }
        else {
          iVar16 = iVar15;
          if ((uVar17 != 0) && ((uVar14 & 0xfffff800) == 0xd800)) {
            *param_3 = 0x49;
          }
        }
      }
    }
    break;
  case 0x78:
    uVar8 = *puVar5;
    if ((param_5 & 0x2000000) != 0) {
      uVar14 = 0x78;
      iVar16 = iVar15;
      if ((((uVar8 < 0x100) && (((&DAT_01edffa0)[uVar8] & 8) != 0)) &&
          ((ulonglong)puVar5[1] < 0x100)) && (((&DAT_01edffa0)[puVar5[1]] & 8) != 0)) {
        uVar8 = puVar11[1];
        uVar10 = uVar8 - 0x20;
        if (uVar8 < 0x61) {
          uVar10 = (uint)uVar8;
        }
        iVar6 = 0xfffffc9;
        if (uVar10 < 0x41) {
          iVar6 = 0xfffffd0;
        }
        uVar8 = puVar11[2];
        uVar9 = uVar8 - 0x20;
        if (uVar8 < 0x61) {
          uVar9 = (uint)uVar8;
        }
        iVar4 = -0x37;
        if (uVar9 < 0x41) {
          iVar4 = -0x30;
        }
        puVar11 = puVar11 + 2;
        uVar14 = iVar4 + (iVar6 + uVar10) * 0x10 + uVar9;
      }
      break;
    }
    if (uVar8 != 0x7b) {
      uVar14 = 0;
      iVar15 = -1;
      do {
        uVar8 = puVar11[1];
        iVar16 = 0;
        if ((0xff < (ulonglong)uVar8) || (((&DAT_01edffa0)[uVar8] & 8) == 0)) break;
        uVar10 = uVar8 - 0x20;
        if (uVar8 < 0x61) {
          uVar10 = (uint)uVar8;
        }
        iVar16 = -0x30;
        if (0x40 < uVar10) {
          iVar16 = -0x37;
        }
        uVar14 = uVar14 * 0x10 + uVar10 + iVar16;
        puVar11 = puVar11 + 1;
        iVar6 = iVar15 + 1;
        bVar3 = iVar15 < -1;
        iVar16 = 0;
        iVar15 = iVar6;
      } while (iVar6 == 0 || bVar3);
      break;
    }
    puVar11 = puVar5 + 1;
    uVar8 = puVar5[1];
    if (uVar8 == 0x7d) {
      *param_3 = 0x56;
      iVar16 = iVar15;
      uVar14 = 0x78;
      break;
    }
    uVar14 = 0;
    if (uVar8 < 0x100) {
      uVar14 = 0;
      puVar5 = puVar5 + 2;
LAB_00e8f32b:
      puVar11 = puVar5;
      uVar10 = (uint)uVar8;
      if (((&DAT_01edffa0)[uVar8] & 8) != 0) {
        if ((uVar10 == 0x30) && (uVar9 = 0, uVar14 == 0)) goto LAB_00e8f375;
        uVar9 = uVar10 - 0x20;
        if (uVar10 < 0x61) {
          uVar9 = uVar10;
        }
        iVar16 = -0x30;
        if (0x40 < uVar9) {
          iVar16 = -0x37;
        }
        uVar14 = uVar14 * 0x10 + uVar9 + iVar16;
        uVar9 = uVar14;
        if (uVar14 <= (uVar17 << 9 | 0xffff)) goto LAB_00e8f375;
        uVar8 = *puVar11;
        while ((uVar8 < 0x100 && (((&DAT_01edffa0)[uVar8] & 8) != 0))) {
          uVar8 = puVar11[1];
          puVar11 = puVar11 + 1;
        }
LAB_00e8f4c5:
        *param_3 = 0x22;
        goto LAB_00e8ecb7;
      }
      puVar11 = puVar11 + -1;
      goto LAB_00e8f509;
    }
    goto LAB_00e8f53f;
  }
LAB_00e8ecba:
  iVar15 = iVar16 + 0x17;
  if (5 < iVar16 - 6U) {
    iVar15 = iVar16;
  }
  if ((param_5 & 0x20000000) == 0) {
    iVar15 = iVar16;
  }
  *param_1 = (longlong)puVar11;
  *param_2 = uVar14;
  return iVar15;
LAB_00e8f375:
  uVar14 = uVar9;
  uVar8 = *puVar11;
  uVar10 = (uint)uVar8;
  puVar5 = puVar11 + 1;
  if (0xff < uVar8) goto LAB_00e8f509;
  goto LAB_00e8f32b;
LAB_00e8f509:
  if (uVar10 == 0x7d) {
LAB_00e8f511:
    iVar16 = 0;
    if ((uVar17 != 0) && (iVar16 = 0, (uVar14 & 0xfffff800) == 0xd800)) {
      *param_3 = 0x49;
    }
    goto LAB_00e8ecba;
  }
LAB_00e8f53f:
  *param_3 = 0x4f;
  iVar16 = 0;
  goto LAB_00e8ecba;
code_r0x00e8f250:
  uVar10 = (uint)*puVar11;
  if ((uVar10 & 0xfff8) != 0x30) goto LAB_00e8f284;
  goto LAB_00e8f260;
code_r0x00e8f41e:
  uVar12 = (uVar8 - 0x30) + uVar12 * 10;
  uVar8 = puVar7[1];
  puVar11 = puVar7 + 1;
  if (9 < (ushort)(uVar8 - 0x30)) goto LAB_00e8f441;
  goto LAB_00e8f416;
}

