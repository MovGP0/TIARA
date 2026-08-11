/* Ghidra address: 00e92bf0 */
/* Ghidra symbol: FUN_00e92bf0 */


/* WARNING: Removing unreachable block (ram,0x00e997c0) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00e92bf0(undefined8 ******param_1,ushort *param_2,undefined8 ******param_3,uint param_4,
                uint *param_5,undefined8 *******param_6,uint param_7)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  uint *puVar5;
  byte bVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  undefined8 ******ppppppuVar24;
  undefined8 ******ppppppuVar25;
  longlong lVar26;
  undefined8 ******ppppppuVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ushort uVar31;
  uint *puVar32;
  ushort *puVar33;
  uint uVar34;
  ushort *puVar35;
  uint uVar36;
  ushort *puVar37;
  undefined8 ******ppppppuVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  undefined8 ******local_1e8;
  uint local_1dc;
  undefined8 ******local_1d8;
  undefined8 ******local_1a0;
  uint local_198;
  undefined8 *******local_190;
  uint local_17c;
  uint local_16c;
  uint local_160;
  longlong *local_148;
  uint local_140;
  undefined1 *local_138;
  uint local_130;
  uint local_12c;
  undefined8 ******local_128;
  undefined4 local_120;
  uint local_11c;
  undefined8 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  int local_fc;
  uint local_f8;
  undefined8 local_f0;
  uint local_e8;
  uint local_e4;
  undefined8 local_e0;
  undefined1 local_d4 [12];
  undefined8 *******local_c8;
  undefined8 ******local_c0;
  undefined1 local_b8 [120];
  
  if (param_2 == (ushort *)0x0) {
    if (param_7 == 0) {
      iVar20 = FUN_00e92bf0(&param_7,0,0,0,0,0,1);
      return iVar20;
    }
    iVar20 = (int)&param_7 - (int)param_1;
    if (iVar20 < 1) {
      return iVar20;
    }
    return -iVar20;
  }
  uVar18 = *param_5;
  uVar22 = param_5[0x1a];
  *param_5 = uVar18 + 1;
  if (param_5[1] <= uVar18) {
    return -8;
  }
  local_190 = param_6;
  puVar3 = (ulonglong *)(param_5 + 0x28);
  puVar4 = (ulonglong *)(param_5 + 0x2e);
  puVar1 = param_5 + 9;
  puVar5 = param_5 + 0x30;
  puVar23 = param_5 + 0x20;
  puVar2 = param_5 + 0x16;
  local_16c = 0;
  local_17c = 0;
  local_1dc = param_4;
LAB_00e92ca1:
  if (param_5[2] <= param_7) {
    return -0x15;
  }
  ppppppuVar24 = param_1;
  local_1a0 = param_3;
  if (param_5[0x34] == 2) {
    local_c8 = local_190;
    param_5[0x34] = 0;
    ppppppuVar24 = param_1;
    local_190 = &local_c8;
    local_c0 = param_1;
  }
LAB_00e95c90:
  local_1e8 = ppppppuVar24;
  puVar35 = param_2;
  uVar14 = *puVar35;
  uVar29 = (ulonglong)uVar14;
  if (0xa1 < uVar14) {
    return -5;
  }
  local_1d8 = local_1e8;
  bVar39 = false;
  bVar41 = false;
  uVar18 = (uint)uVar14;
  bVar40 = false;
  ppppppuVar24 = local_1e8;
  switch(uVar29) {
  case 0:
  case 0x9e:
  case 0x9f:
    if (((local_1e8 == local_1a0) && (uVar14 != 0x9f)) && (*(longlong *)(param_5 + 0x3a) == 0)) {
      if (param_5[0x1e] != 0) {
        return 0;
      }
      if ((param_5[0x1f] != 0) &&
         (local_1a0 ==
          (undefined8 ******)((longlong)(int)param_5[0x33] * 2 + *(longlong *)(param_5 + 0x26)))) {
        return 0;
      }
    }
    *(undefined8 *******)(param_5 + 0x2c) = local_1e8;
    param_5[0x31] = local_1dc;
    *(undefined8 *******)(param_5 + 0x2a) = local_1a0;
    if (uVar14 == 0) {
      return 1;
    }
    return -999;
  case 1:
    goto switchD_00e95ccd_caseD_1;
  case 2:
    ppppppuVar27 = (undefined8 ******)
                   ((longlong)(int)param_5[0x33] * 2 + *(longlong *)(param_5 + 0x26));
    goto joined_r0x00e96fb7;
  case 3:
    local_1a0 = local_1e8;
    param_2 = puVar35 + 1;
    goto LAB_00e95c90;
  case 4:
  case 5:
    if (uVar22 == 0) {
      if (local_1e8 == *(undefined8 *******)(param_5 + 0x26)) {
LAB_00e932e9:
        bVar39 = false;
      }
      else {
        if (local_1e8 <= (undefined8 ******)*puVar4) {
          *puVar4 = (ulonglong)((longlong)local_1e8 + -2);
        }
        uVar31 = *(ushort *)((longlong)local_1e8 + -2);
        if (param_5[0x1c] == 0) {
          if (0xff < uVar31) goto LAB_00e932e9;
          bVar39 = (bool)((*(byte *)(*(longlong *)puVar2 + (ulonglong)uVar31) & 0x10) >> 4);
        }
        else {
          bVar39 = true;
          if (uVar31 != 0x5f) {
            bVar39 = (*(uint *)(&DAT_01ee1630 +
                               (ulonglong)
                               (byte)(&DAT_01ee2141)
                                     [(ulonglong)
                                      *(ushort *)
                                       (&DAT_01ee59c0 +
                                       ((ulonglong)(uVar31 & 0x7f) |
                                       (ulonglong)(byte)(&DAT_01ee37c0)[uVar31 >> 7] << 7) * 2) * 8]
                               * 4) | 2) == 3;
          }
        }
      }
      if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e9319c;
      uVar31 = *(ushort *)local_1e8;
      uVar29 = (ulonglong)uVar31;
      uVar18 = (uint)uVar31;
      if (param_5[0x1c] != 0) {
        bVar40 = true;
        if (uVar18 != 0x5f) {
          uVar29 = (ulonglong)(uVar18 & 0x7f) | (ulonglong)(byte)(&DAT_01ee37c0)[uVar31 >> 7] << 7;
          goto LAB_00e93331;
        }
        goto LAB_00e931c7;
      }
      if (uVar18 < 0x100) {
        lVar26 = *(longlong *)puVar2;
        goto LAB_00e93377;
      }
LAB_00e931c5:
      bVar40 = false;
    }
    else {
      if (local_1e8 == *(undefined8 *******)(param_5 + 0x26)) {
        bVar39 = false;
      }
      else {
        puVar37 = (ushort *)((longlong)local_1e8 + -4);
        if ((*(ushort *)((longlong)local_1e8 + -2) & 0xfc00) != 0xdc00) {
          puVar37 = (ushort *)((longlong)local_1e8 + -2);
        }
        if (puVar37 < (ushort *)*puVar4) {
          *puVar4 = (ulonglong)puVar37;
        }
        uVar31 = *puVar37;
        uVar18 = (uint)uVar31;
        if ((uVar31 & 0xfc00) == 0xd800) {
          uVar18 = (uVar31 & 0x3ff) * 0x400 + 0x10000 + (puVar37[1] & 0x3ff);
        }
        if (param_5[0x1c] == 0) {
          if (uVar18 < 0x100) {
            bVar39 = (bool)((*(byte *)(*(longlong *)puVar2 + (ulonglong)uVar18) & 0x10) >> 4);
          }
          else {
            bVar39 = false;
          }
        }
        else {
          bVar39 = true;
          if (uVar18 != 0x5f) {
            bVar39 = (*(uint *)(&DAT_01ee1630 +
                               (ulonglong)
                               (byte)(&DAT_01ee2141)
                                     [(ulonglong)
                                      *(ushort *)
                                       (&DAT_01ee59c0 +
                                       ((longlong)(int)(uVar18 % 0x80) +
                                       (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) *
                                       2) * 8] * 4) | 2) == 3;
          }
        }
      }
      if ((undefined8 ******)*puVar3 <= local_1e8) {
LAB_00e9319c:
        if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < local_1e8)) &&
           (*puVar23 = 1, 1 < (int)*puVar5)) {
          return -0xc;
        }
        goto LAB_00e931c5;
      }
      uVar18 = (uint)*(ushort *)local_1e8;
      if ((uVar18 & 0xfc00) == 0xd800) {
        uVar18 = (*(ushort *)local_1e8 & 0x3ff) * 0x400 + 0x10000 +
                 (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
      }
      if (param_5[0x1c] == 0) {
        if (0xff < uVar18) goto LAB_00e931c5;
        lVar26 = *(longlong *)puVar2;
        uVar29 = (ulonglong)uVar18;
LAB_00e93377:
        bVar40 = (bool)((*(byte *)(lVar26 + uVar29) & 0x10) >> 4);
      }
      else {
        bVar40 = true;
        if (uVar18 != 0x5f) {
          uVar29 = (longlong)(int)(uVar18 % 0x80) +
                   (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80;
LAB_00e93331:
          bVar40 = (*(uint *)(&DAT_01ee1630 +
                             (ulonglong)
                             (byte)(&DAT_01ee2141)
                                   [(ulonglong)*(ushort *)(&DAT_01ee59c0 + uVar29 * 2) * 8] * 4) | 2
                   ) == 3;
        }
      }
    }
LAB_00e931c7:
    param_2 = puVar35 + 1;
    if (uVar14 != 5) {
      bVar39 = bVar39 == bVar40;
      goto LAB_00e931f0;
    }
    bVar39 = bVar39 == bVar40;
    goto LAB_00e9991a;
  case 6:
    if (local_1e8 < (undefined8 ******)*puVar3) {
      uVar14 = *(ushort *)local_1e8;
      if ((uVar22 == 0) || ((uVar14 & 0xfc00) != 0xd800)) {
        ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
        if (uVar14 < 0x100) {
          bVar6 = *(byte *)(*(longlong *)puVar2 + (ulonglong)uVar14) & 4;
joined_r0x00e98853:
          ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
          if (bVar6 != 0) {
            return 0;
          }
        }
      }
      else {
LAB_00e971ab:
        ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
      }
      goto LAB_00e98859;
    }
    uVar18 = *puVar5;
    if (uVar18 == 0) {
      return 0;
    }
    if (local_1e8 <= (undefined8 ******)*puVar4) {
      return 0;
    }
    *puVar23 = 1;
    goto joined_r0x00e9f090;
  case 7:
    if (local_1e8 < (undefined8 ******)*puVar3) {
      uVar14 = *(ushort *)local_1e8;
      if (0xff < (ulonglong)uVar14) {
        return 0;
      }
      if (uVar22 != 0 && (uVar14 & 0xfc00) == 0xd800) {
        return 0;
      }
      bVar6 = *(byte *)(*(longlong *)puVar2 + (ulonglong)uVar14) & 4;
      goto joined_r0x00e97165;
    }
    uVar18 = *puVar5;
    if (uVar18 == 0) {
      return 0;
    }
    if (local_1e8 <= (undefined8 ******)*puVar4) {
      return 0;
    }
    *puVar23 = 1;
    goto joined_r0x00e9f090;
  case 8:
    if (local_1e8 < (undefined8 ******)*puVar3) {
      uVar14 = *(ushort *)local_1e8;
      if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) goto LAB_00e971ab;
      ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
      if (uVar14 < 0x100) {
        bVar6 = *(byte *)(*(longlong *)puVar2 + (ulonglong)uVar14) & 1;
        goto joined_r0x00e98853;
      }
      goto LAB_00e98859;
    }
    uVar18 = *puVar5;
    if (uVar18 == 0) {
      return 0;
    }
    if (local_1e8 <= (undefined8 ******)*puVar4) {
      return 0;
    }
    *puVar23 = 1;
    goto joined_r0x00e9f090;
  case 9:
    if ((undefined8 ******)*puVar3 <= local_1e8) {
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if (local_1e8 <= (undefined8 ******)*puVar4) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
    uVar14 = *(ushort *)local_1e8;
    if (0xff < (ulonglong)uVar14) {
      return 0;
    }
    if (uVar22 != 0 && (uVar14 & 0xfc00) == 0xd800) {
      return 0;
    }
    bVar6 = *(byte *)(*(longlong *)puVar2 + (ulonglong)uVar14) & 1;
joined_r0x00e97165:
    if (bVar6 == 0) {
      return 0;
    }
LAB_00e97215:
    param_2 = puVar35 + 1;
    ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
    goto LAB_00e95c90;
  case 10:
    if (local_1e8 < (undefined8 ******)*puVar3) {
      uVar14 = *(ushort *)local_1e8;
      if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) goto LAB_00e971ab;
      ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
      if (uVar14 < 0x100) {
        bVar6 = *(byte *)(*(longlong *)puVar2 + (ulonglong)uVar14) & 0x10;
        goto joined_r0x00e98853;
      }
      goto LAB_00e98859;
    }
    uVar18 = *puVar5;
    if (uVar18 == 0) {
      return 0;
    }
    if (local_1e8 <= (undefined8 ******)*puVar4) {
      return 0;
    }
    *puVar23 = 1;
    goto joined_r0x00e9f090;
  case 0xb:
    if (local_1e8 < (undefined8 ******)*puVar3) {
      uVar14 = *(ushort *)local_1e8;
      if (0xff < (ulonglong)uVar14) {
        return 0;
      }
      if (uVar22 != 0 && (uVar14 & 0xfc00) == 0xd800) {
        return 0;
      }
      if ((*(byte *)(*(longlong *)puVar2 + (ulonglong)uVar14) & 0x10) == 0) {
        return 0;
      }
      goto LAB_00e97215;
    }
    uVar18 = *puVar5;
    if (uVar18 == 0) {
      return 0;
    }
    if (local_1e8 <= (undefined8 ******)*puVar4) {
      return 0;
    }
    *puVar23 = 1;
    goto joined_r0x00e9f090;
  case 0xc:
    if (param_5[8] == 0) {
      if ((local_1e8 <=
           (undefined8 ******)
           ((longlong)*(undefined8 *******)(param_5 + 0x28) + (longlong)(int)*puVar1 * -2)) &&
         (*(ushort *)local_1e8 == (ushort)param_5[0x10])) {
        if (*puVar1 == 1) {
          return 0;
        }
        if (*(ushort *)((longlong)local_1e8 + 2) == *(ushort *)((longlong)param_5 + 0x42)) {
          return 0;
        }
      }
    }
    else if ((local_1e8 < *(undefined8 *******)(param_5 + 0x28)) &&
            (iVar20 = FUN_00ea10c0(), iVar20 != 0)) {
      return 0;
    }
    if (((((*puVar5 != 0) && (local_1e8 == (undefined8 ******)(*puVar3 - 2))) && (param_5[8] == 0))
        && ((*puVar1 == 2 && (*(ushort *)local_1e8 == (ushort)param_5[0x10])))) &&
       (*puVar23 = 1, 1 < (int)*puVar5)) {
      return -0xc;
    }
  case 0xd:
    if ((undefined8 ******)*puVar3 <= local_1e8) {
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if (local_1e8 <= (undefined8 ******)*puVar4) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
    ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
    if (uVar22 == 0) {
      param_2 = puVar35 + 1;
    }
    else {
      if ((ppppppuVar24 < (undefined8 ******)*puVar3) &&
         (((ulonglong)*local_1e8 & 0xfc000000) == 0xdc000000)) {
        ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
      }
      param_2 = puVar35 + 1;
    }
    goto LAB_00e95c90;
  case 0xe:
    if ((undefined8 ******)*puVar3 <= local_1e8) {
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if (local_1e8 <= (undefined8 ******)*puVar4) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
    param_2 = puVar35 + 1;
    ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
    goto LAB_00e95c90;
  case 0xf:
  case 0x10:
    if ((undefined8 ******)*puVar3 <= local_1e8) {
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if (local_1e8 <= (undefined8 ******)*puVar4) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
    ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
    uVar18 = (uint)*(ushort *)local_1e8;
    if ((uVar22 != 0) && ((uVar18 & 0xfc00) == 0xd800)) {
      ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
      uVar18 = (uVar18 & 0x3ff) * 0x400 + 0x10000 + (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
    }
    if (10 < puVar35[1]) {
      return -0xe;
    }
    uVar29 = (ulonglong)
             *(ushort *)
              (&DAT_01ee59c0 +
              ((longlong)(int)(uVar18 % 0x80) +
              (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2);
    switch(puVar35[1]) {
    case 0:
      break;
    case 1:
      if (((ulonglong)(byte)(&DAT_01ee2141)[uVar29 * 8] < 10) &&
         ((800UL >> ((ulonglong)(byte)(&DAT_01ee2141)[uVar29 * 8] & 0x3f) & 1) != 0)) break;
      if (uVar14 != 0xf) {
        return 0;
      }
      goto LAB_00e93266;
    case 2:
      bVar39 = *(uint *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar29 * 8] * 4) ==
               (uint)puVar35[2];
      goto LAB_00e99f20;
    case 3:
      uVar31 = puVar35[2];
      bVar6 = (&DAT_01ee2141)[uVar29 * 8];
      goto LAB_00e99f1e;
    case 4:
      uVar31 = puVar35[2];
      bVar6 = (&DAT_01ee2140)[uVar29 * 8];
LAB_00e99f1e:
      bVar39 = uVar31 == bVar6;
LAB_00e99f20:
      bVar39 = !bVar39;
      bVar40 = uVar14 == 0x10;
LAB_00e99f79:
      bVar39 = !(bool)(bVar40 ^ bVar39);
      goto LAB_00e9325a;
    case 5:
      bVar39 = (*(uint *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar29 * 8] * 4) | 2) ==
               3;
LAB_00e99f6f:
      bVar40 = uVar14 == 0xf;
      goto LAB_00e99f79;
    default:
      if (uVar18 < 0x180e) {
        if (uVar18 < 0x85) {
          if ((0x20 < uVar18) || ((0x100003e00U >> ((ulonglong)uVar18 & 0x3f) & 1) == 0))
          goto switchD_00e98831_caseD_200b;
        }
        else if (((uVar18 != 0x85) && (uVar18 != 0xa0)) && (uVar18 != 0x1680))
        goto switchD_00e98831_caseD_200b;
      }
      else {
        switch(uVar18) {
        case 0x2000:
        case 0x2001:
        case 0x2002:
        case 0x2003:
        case 0x2004:
        case 0x2005:
        case 0x2006:
        case 0x2007:
        case 0x2008:
        case 0x2009:
        case 0x200a:
        case 0x2028:
        case 0x2029:
        case 0x202f:
        case 0x205f:
          break;
        case 0x200b:
        case 0x200c:
        case 0x200d:
        case 0x200e:
        case 0x200f:
        case 0x2010:
        case 0x2011:
        case 0x2012:
        case 0x2013:
        case 0x2014:
        case 0x2015:
        case 0x2016:
        case 0x2017:
        case 0x2018:
        case 0x2019:
        case 0x201a:
        case 0x201b:
        case 0x201c:
        case 0x201d:
        case 0x201e:
        case 0x201f:
        case 0x2020:
        case 0x2021:
        case 0x2022:
        case 0x2023:
        case 0x2024:
        case 0x2025:
        case 0x2026:
        case 0x2027:
        case 0x202a:
        case 0x202b:
        case 0x202c:
        case 0x202d:
        case 0x202e:
        case 0x2030:
        case 0x2031:
        case 0x2032:
        case 0x2033:
        case 0x2034:
        case 0x2035:
        case 0x2036:
        case 0x2037:
        case 0x2038:
        case 0x2039:
        case 0x203a:
        case 0x203b:
        case 0x203c:
        case 0x203d:
        case 0x203e:
        case 0x203f:
        case 0x2040:
        case 0x2041:
        case 0x2042:
        case 0x2043:
        case 0x2044:
        case 0x2045:
        case 0x2046:
        case 0x2047:
        case 0x2048:
        case 0x2049:
        case 0x204a:
        case 0x204b:
        case 0x204c:
        case 0x204d:
        case 0x204e:
        case 0x204f:
        case 0x2050:
        case 0x2051:
        case 0x2052:
        case 0x2053:
        case 0x2054:
        case 0x2055:
        case 0x2056:
        case 0x2057:
        case 0x2058:
        case 0x2059:
        case 0x205a:
        case 0x205b:
        case 0x205c:
        case 0x205d:
        case 0x205e:
switchD_00e98831_caseD_200b:
          bVar39 = *(int *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar29 * 8] * 4) == 6;
          goto LAB_00e99f6f;
        default:
          if ((uVar18 != 0x3000) && (uVar18 != 0x180e)) goto switchD_00e98831_caseD_200b;
        }
      }
      break;
    case 8:
      if ((*(uint *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar29 * 8] * 4) | 2) != 3) {
        bVar39 = uVar18 == 0x5f;
        goto LAB_00e99f6f;
      }
      break;
    case 9:
      uVar17 = *(uint *)(&DAT_01ee2000 + (ulonglong)puVar35[2] * 4);
      if (uVar17 <= uVar18) {
        puVar32 = (uint *)(&DAT_01ee2004 + (ulonglong)puVar35[2] * 4);
        do {
          if (uVar18 == uVar17) {
            if (uVar14 != 0x10) {
              return 0;
            }
            goto LAB_00e93266;
          }
          uVar17 = *puVar32;
          puVar32 = puVar32 + 1;
        } while (uVar17 <= uVar18);
      }
      bVar39 = uVar14 == 0x10;
      goto LAB_00e9325a;
    case 10:
      if ((0x3c < uVar18 - 0x24) ||
         ((0x1000000010000001U >> ((ulonglong)(uVar18 - 0x24) & 0x3f) & 1) == 0)) {
        if ((uVar14 == 0xf) == (0xdfff < uVar18 || uVar18 - 0xa0 < 0xd760)) {
          return 0;
        }
        goto LAB_00e93266;
      }
    }
    bVar39 = uVar14 == 0xf;
LAB_00e9325a:
    if (bVar39) {
      return 0;
    }
LAB_00e93266:
    param_2 = puVar35 + 3;
    goto LAB_00e95c90;
  case 0x11:
    if ((undefined8 ******)*puVar3 <= local_1e8) {
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if (local_1e8 <= (undefined8 ******)*puVar4) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
    ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
    uVar14 = *(ushort *)local_1e8;
    uVar18 = (uint)uVar14;
    if ((uVar22 != 0) && (uVar18 = (uint)uVar14, (uVar14 & 0xfc00) == 0xd800)) {
      ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
      uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
    }
    local_1e8 = ppppppuVar27;
    if (uVar18 < 0xd) {
      if (uVar18 - 0xb < 2) goto LAB_00e98fa3;
      if (uVar18 != 10) {
        return 0;
      }
    }
    else if ((uVar18 - 0x2028 < 2) || (uVar18 == 0x85)) {
LAB_00e98fa3:
      if (param_5[0x21] != 0) {
        return 0;
      }
    }
    else {
      if (uVar18 != 0xd) {
        return 0;
      }
      if (ppppppuVar27 < (undefined8 ******)*puVar3) {
        if (*(ushort *)ppppppuVar27 == 10) {
          local_1e8 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
        }
      }
      else {
        uVar18 = *puVar5;
        if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar27)) {
          *puVar23 = 1;
          goto joined_r0x00e976b9;
        }
      }
    }
    break;
  case 0x12:
    if ((undefined8 ******)*puVar3 <= local_1e8) {
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if (local_1e8 <= (undefined8 ******)*puVar4) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
    ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
    uVar14 = *(ushort *)local_1e8;
    uVar18 = (uint)uVar14;
    if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
      ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
      uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
    }
    local_1e8 = ppppppuVar24;
    if (uVar18 < 0x2000) {
      if (uVar18 < 0xa0) {
        if (uVar18 == 9) {
          return 0;
        }
        if (uVar18 == 0x20) {
          return 0;
        }
      }
      else {
        if (uVar18 == 0xa0) {
          return 0;
        }
        if (uVar18 == 0x1680) {
          return 0;
        }
        if (uVar18 == 0x180e) {
          return 0;
        }
      }
    }
    else if (uVar18 < 0x202f) {
      if (uVar18 - 0x2000 < 0xb) {
        return 0;
      }
    }
    else {
      if (uVar18 == 0x202f) {
        return 0;
      }
      if (uVar18 == 0x205f) {
        return 0;
      }
      if (uVar18 == 0x3000) {
        return 0;
      }
    }
    break;
  case 0x13:
    if ((undefined8 ******)*puVar3 <= local_1e8) {
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if (local_1e8 <= (undefined8 ******)*puVar4) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
    ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
    uVar14 = *(ushort *)local_1e8;
    uVar18 = (uint)uVar14;
    if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
      ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
      uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
    }
    local_1e8 = ppppppuVar24;
    if (uVar18 < 0x2000) {
      if (uVar18 < 0xa0) {
        if ((uVar18 != 9) && (uVar18 != 0x20)) {
          return 0;
        }
      }
      else if (((uVar18 != 0xa0) && (uVar18 != 0x1680)) && (uVar18 != 0x180e)) {
        return 0;
      }
    }
    else if (uVar18 < 0x202f) {
      if (10 < uVar18 - 0x2000) {
        return 0;
      }
    }
    else if (((uVar18 != 0x202f) && (uVar18 != 0x3000)) && (uVar18 != 0x205f)) {
      return 0;
    }
    break;
  case 0x14:
    if ((undefined8 ******)*puVar3 <= local_1e8) {
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if (local_1e8 <= (undefined8 ******)*puVar4) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
    ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
    uVar14 = *(ushort *)local_1e8;
    uVar18 = (uint)uVar14;
    if ((uVar22 != 0) && (uVar18 = (uint)uVar14, (uVar14 & 0xfc00) == 0xd800)) {
      ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
      uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
    }
    if (uVar18 - 10 < 4) {
      return 0;
    }
    if (uVar18 - 0x2028 < 2) {
      return 0;
    }
    local_1e8 = ppppppuVar24;
    if (uVar18 == 0x85) {
      return 0;
    }
    break;
  case 0x15:
    if ((undefined8 ******)*puVar3 <= local_1e8) {
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if (local_1e8 <= (undefined8 ******)*puVar4) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
    uVar14 = *(ushort *)local_1e8;
    uVar18 = (uint)uVar14;
    ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
    if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
      uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
      ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
    }
    local_1e8 = ppppppuVar24;
    if (((3 < uVar18 - 10) && (1 < uVar18 - 0x2028)) && (uVar18 != 0x85)) {
      return 0;
    }
    break;
  case 0x16:
    ppppppuVar24 = (undefined8 ******)*puVar3;
    if (ppppppuVar24 <= local_1e8) {
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if (local_1e8 <= (undefined8 ******)*puVar4) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
    ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
    uVar14 = *(ushort *)local_1e8;
    uVar18 = (uint)uVar14;
    if ((uVar22 != 0) && (uVar18 = (uint)uVar14, (uVar14 & 0xfc00) == 0xd800)) {
      ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
      uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
    }
    if (ppppppuVar27 < ppppppuVar24) {
      bVar6 = (&DAT_01ee2142)
              [(ulonglong)
               *(ushort *)
                (&DAT_01ee59c0 +
                ((longlong)(int)(uVar18 % 0x80) +
                (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8];
      do {
        uVar29 = (ulonglong)bVar6;
        uVar14 = *(ushort *)ppppppuVar27;
        uVar18 = (uint)uVar14;
        lVar26 = 1;
        if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
          uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)ppppppuVar27 + 2) & 0x3ff);
          lVar26 = 2;
        }
        bVar6 = (&DAT_01ee2142)
                [(ulonglong)
                 *(ushort *)
                  (&DAT_01ee59c0 +
                  ((longlong)(int)(uVar18 % 0x80) +
                  (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8];
        uVar18 = 1 << (bVar6 & 0x1f) & *(uint *)(&DAT_01ee16b0 + uVar29 * 4);
        if (uVar18 != 0) {
          ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar27 + lVar26 * 2);
        }
      } while ((ppppppuVar27 < ppppppuVar24) && (uVar18 != 0));
    }
    local_1e8 = ppppppuVar27;
    if ((ppppppuVar24 <= ppppppuVar27) &&
       ((uVar18 = *puVar5, uVar18 != 0 && ((undefined8 ******)*puVar4 < ppppppuVar27)))) {
      *puVar23 = 1;
joined_r0x00e976b9:
      local_1e8 = ppppppuVar27;
      if (1 < (int)uVar18) {
        return -0xc;
      }
    }
    break;
  case 0x17:
    goto switchD_00e95ccd_caseD_17;
  case 0x18:
switchD_00e95ccd_caseD_18:
    if (local_1e8 < (undefined8 ******)*puVar3) {
      return 0;
    }
    if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < local_1e8)) &&
       (*puVar23 = 1, 1 < (int)*puVar5)) {
      return -0xc;
    }
LAB_00e98859:
    param_2 = puVar35 + 1;
    goto LAB_00e95c90;
  case 0x19:
    if (param_5[0x19] != 0) {
      return 0;
    }
    if (param_5[0x1d] != 0) goto switchD_00e95ccd_caseD_18;
switchD_00e95ccd_caseD_17:
    ppppppuVar27 = (undefined8 ******)*puVar3;
    if (local_1e8 < ppppppuVar27) {
      if (param_5[8] == 0) {
        uVar18 = *puVar1;
        if ((local_1e8 <= (undefined8 ******)((longlong)ppppppuVar27 + (longlong)(int)uVar18 * -2))
           && (*(ushort *)local_1e8 == (ushort)param_5[0x10])) {
          if (uVar18 == 1) {
            uVar18 = 1;
          }
          else if (*(ushort *)((longlong)local_1e8 + 2) != *(ushort *)((longlong)param_5 + 0x42))
          goto LAB_00e9beb8;
LAB_00e93281:
          if (local_1e8 == (undefined8 ******)((longlong)ppppppuVar27 + (longlong)(int)uVar18 * -2))
          goto LAB_00e93292;
        }
      }
      else {
        iVar20 = FUN_00ea10c0(local_1e8);
        if (iVar20 != 0) {
          ppppppuVar27 = (undefined8 ******)*puVar3;
          uVar18 = *puVar1;
          goto LAB_00e93281;
        }
      }
LAB_00e9beb8:
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if ((ushort *)((longlong)local_1e8 + 2U) < (ushort *)*puVar3) {
        return 0;
      }
      if (param_5[8] != 0) {
        return 0;
      }
      if (*puVar1 != 2) {
        return 0;
      }
      if (*(ushort *)local_1e8 != (ushort)param_5[0x10]) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
LAB_00e93292:
    uVar18 = *puVar5;
    if (uVar18 != 0) {
LAB_00e9329d:
      if (((undefined8 ******)*puVar4 < local_1e8) && (*puVar23 = 1, 1 < (int)uVar18)) {
        return -0xc;
      }
    }
    goto LAB_00e932bb;
  case 0x1a:
    if ((undefined8 ******)*puVar3 <= local_1e8) {
      if (param_5[0x19] != 0) {
        return 0;
      }
      uVar18 = *puVar5;
      if (uVar18 == 0) goto LAB_00e932bb;
      goto LAB_00e9329d;
    }
    if (param_5[8] != 0) {
      iVar20 = FUN_00ea10c0(local_1e8);
      if (iVar20 != 0) goto LAB_00e932bb;
LAB_00e9c7ea:
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if ((ushort *)((longlong)local_1e8 + 2U) < (ushort *)*puVar3) {
        return 0;
      }
      if (param_5[8] != 0) {
        return 0;
      }
      if (*puVar1 != 2) {
        return 0;
      }
      if (*(ushort *)local_1e8 != (ushort)param_5[0x10]) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
    if ((((undefined8 ******)((longlong)*puVar3 + (longlong)(int)*puVar1 * -2) < local_1e8) ||
        (*(ushort *)local_1e8 != (ushort)param_5[0x10])) ||
       ((*puVar1 != 1 &&
        (*(ushort *)((longlong)local_1e8 + 2) != *(ushort *)((longlong)param_5 + 0x42)))))
    goto LAB_00e9c7ea;
LAB_00e932bb:
    param_2 = puVar35 + 1;
    goto LAB_00e95c90;
  case 0x1b:
    if ((param_5[0x18] != 0) && (local_1e8 == *(undefined8 *******)(param_5 + 0x26))) {
      return 0;
    }
switchD_00e95ccd_caseD_1:
    ppppppuVar27 = *(undefined8 *******)(param_5 + 0x26);
joined_r0x00e96fb7:
    if (local_1e8 != ppppppuVar27) {
      return 0;
    }
LAB_00e97816:
    param_2 = puVar35 + 1;
    goto LAB_00e95c90;
  case 0x1c:
    ppppppuVar27 = *(undefined8 *******)(param_5 + 0x26);
    if ((param_5[0x18] != 0) && (local_1e8 == ppppppuVar27)) {
      return 0;
    }
    if (local_1e8 != ppppppuVar27) {
      if (local_1e8 == (undefined8 ******)*puVar3) {
        return 0;
      }
      if (param_5[8] == 0) {
        lVar26 = (longlong)(int)*puVar1;
        if (local_1e8 < (undefined8 ******)((longlong)ppppppuVar27 + lVar26 * 2)) {
          return 0;
        }
        if (*(ushort *)((longlong)local_1e8 + lVar26 * -2) != (ushort)param_5[0x10]) {
          return 0;
        }
        if ((*puVar1 != 1) &&
           (*(ushort *)((longlong)local_1e8 + (1 - lVar26) * 2) !=
            *(ushort *)((longlong)param_5 + 0x42))) {
          return 0;
        }
      }
      else {
        if (local_1e8 <= ppppppuVar27) {
          return 0;
        }
        iVar20 = FUN_00ea11a0();
        if (iVar20 == 0) {
          return 0;
        }
      }
    }
    goto LAB_00e97816;
  case 0x1d:
    if (uVar22 == 0) {
      if ((longlong)(*puVar3 - (longlong)local_1e8) < 2) {
        uVar18 = *puVar5;
        if (uVar18 == 0) {
          return 0;
        }
        if (local_1e8 <= (undefined8 ******)*puVar4) {
          return 0;
        }
        *puVar23 = 1;
        goto joined_r0x00e9f090;
      }
      if (puVar35[1] != *(ushort *)local_1e8) {
        return 0;
      }
LAB_00e99417:
      param_2 = puVar35 + 2;
      ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
    }
    else {
      uVar14 = puVar35[1] & 0xfc00;
      if ((longlong)*puVar3 - (longlong)local_1e8 >> 1 <
          (longlong)((ulonglong)(uVar14 == 0xd800) + 1)) {
        if (local_1e8 < (undefined8 ******)*puVar3) {
          return 0;
        }
        uVar18 = *puVar5;
        if (uVar18 == 0) {
          return 0;
        }
        if (local_1e8 <= (undefined8 ******)*puVar4) {
          return 0;
        }
        *puVar23 = 1;
        goto joined_r0x00e9f090;
      }
      if (puVar35[1] != *(ushort *)local_1e8) {
        return 0;
      }
      param_2 = puVar35 + 2;
      ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
      if (uVar14 == 0xd800) {
        if (puVar35[2] != *(ushort *)((longlong)local_1e8 + 2)) {
          return 0;
        }
        param_2 = puVar35 + 3;
        ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
      }
    }
    goto LAB_00e95c90;
  case 0x1e:
    if ((undefined8 ******)*puVar3 <= local_1e8) {
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if (local_1e8 <= (undefined8 ******)*puVar4) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
    uVar14 = puVar35[1];
    uVar18 = (uint)uVar14;
    if (uVar22 == 0) {
      if (uVar14 < 0x100) {
        uVar14 = (ushort)*(byte *)(*(longlong *)(param_5 + 0x12) + (ulonglong)uVar14);
      }
      uVar31 = *(ushort *)local_1e8;
      if ((ulonglong)uVar31 < 0x100) {
        uVar31 = (ushort)*(byte *)(*(longlong *)(param_5 + 0x12) + (ulonglong)uVar31);
      }
      if (uVar14 != uVar31) {
        return 0;
      }
      goto LAB_00e99417;
    }
    if ((uVar14 & 0xfc00) == 0xd800) {
      uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (puVar35[2] & 0x3ff);
      lVar26 = 2;
    }
    else {
      if (uVar14 < 0x80) {
        uVar31 = *(ushort *)local_1e8;
        if ((ulonglong)uVar31 < 0x100) {
          uVar31 = (ushort)*(byte *)(*(longlong *)(param_5 + 0x12) + (ulonglong)uVar31);
        }
        if (uVar31 != *(byte *)(*(longlong *)(param_5 + 0x12) + (ulonglong)uVar14)) {
          return 0;
        }
        param_2 = puVar35 + 2;
        ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
        goto LAB_00e95c90;
      }
      lVar26 = 1;
    }
    uVar14 = *(ushort *)local_1e8;
    uVar17 = (uint)uVar14;
    if ((uVar14 & 0xfc00) == 0xd800) {
      puVar37 = (ushort *)((longlong)local_1e8 + 2);
      local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
      uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*puVar37 & 0x3ff);
    }
    else {
      local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
    }
    param_2 = puVar35 + lVar26 + 1;
    ppppppuVar24 = local_1e8;
    if (uVar18 != uVar17) {
      bVar39 = uVar17 == uVar18 + *(int *)(&DAT_01ee2144 +
                                          (ulonglong)
                                          *(ushort *)
                                           (&DAT_01ee59c0 +
                                           ((longlong)(int)(uVar18 % 0x80) +
                                           (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80
                                           ) * 2) * 8);
LAB_00e931f0:
      ppppppuVar24 = local_1e8;
      if (!bVar39) {
        return 0;
      }
    }
    goto LAB_00e95c90;
  case 0x1f:
  case 0x20:
    if ((undefined8 ******)*puVar3 <= local_1e8) {
      uVar18 = *puVar5;
      if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
      *puVar23 = 1;
      goto joined_r0x00e9efee;
    }
    if (uVar22 == 0) {
      uVar31 = puVar35[1];
      if (uVar31 == *(ushort *)local_1e8) {
        return 0;
      }
      if (uVar14 == 0x20) {
        if (uVar31 < 0x100) {
          uVar31 = (ushort)*(byte *)(*(longlong *)(param_5 + 0x14) + (ulonglong)uVar31);
        }
        if (uVar31 == *(ushort *)local_1e8) {
          return 0;
        }
      }
      goto LAB_00e99417;
    }
    uVar31 = puVar35[1];
    uVar18 = (uint)uVar31;
    if ((uVar31 & 0xfc00) == 0xd800) {
      param_2 = puVar35 + 3;
      uVar18 = (uVar31 & 0x3ff) * 0x400 + 0x10000 + (puVar35[2] & 0x3ff);
    }
    else {
      param_2 = puVar35 + 2;
    }
    uVar31 = *(ushort *)local_1e8;
    uVar17 = (uint)uVar31;
    if ((uVar31 & 0xfc00) == 0xd800) {
      puVar35 = (ushort *)((longlong)local_1e8 + 2);
      local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
      uVar17 = (uVar31 & 0x3ff) * 0x400 + 0x10000 + (*puVar35 & 0x3ff);
    }
    else {
      local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
    }
    if (uVar14 == 0x1f) {
      bVar39 = uVar18 == uVar17;
    }
    else {
      if (uVar18 < 0x80) {
        uVar15 = (uint)*(byte *)(*(longlong *)(param_5 + 0x14) + (ulonglong)uVar18);
      }
      else {
        uVar15 = *(int *)(&DAT_01ee2144 +
                         (ulonglong)
                         *(ushort *)
                          (&DAT_01ee59c0 +
                          ((longlong)(int)(uVar18 % 0x80) +
                          (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8) +
                 uVar18;
      }
      if (uVar18 == uVar17) {
        return 0;
      }
      bVar39 = uVar15 == uVar17;
    }
LAB_00e9991a:
    ppppppuVar24 = local_1e8;
    if (bVar39) {
      return 0;
    }
    goto LAB_00e95c90;
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
    puVar37 = puVar35 + 1;
    iVar20 = 0x2e;
    if (uVar14 < 0x2e) {
      iVar20 = 0x21;
    }
    uVar29 = (ulonglong)(uVar18 - iVar20);
    uVar15 = uVar18 - iVar20 & 1;
    uVar17 = (uint)(char)(&DAT_01ee13d0)[uVar29];
    uVar18 = 0x7fffffff;
    if ((0x3cfUL >> (uVar29 & 0x3f) & 1) == 0) {
      uVar18 = (int)(char)(&DAT_01ee13db)[uVar29];
    }
    bVar41 = false;
    goto LAB_00e96095;
  case 0x27:
  case 0x28:
  case 0x34:
  case 0x35:
    goto switchD_00e95ccd_caseD_27;
  case 0x29:
  case 0x36:
    uVar17 = (uint)puVar35[1];
    puVar37 = puVar35 + 2;
    bVar41 = false;
    uVar15 = 0;
    uVar18 = uVar17;
    goto LAB_00e96095;
  case 0x2a:
  case 0x37:
    puVar37 = puVar35 + 1;
    bVar41 = true;
    uVar17 = 0;
    uVar15 = 0;
    uVar18 = 0x7fffffff;
    goto LAB_00e96095;
  case 0x2b:
  case 0x38:
    puVar37 = puVar35 + 1;
    uVar15 = 0;
    uVar17 = 1;
    bVar41 = true;
    uVar18 = 0x7fffffff;
    goto LAB_00e96095;
  case 0x2c:
  case 0x39:
    puVar37 = puVar35 + 1;
    uVar17 = 0;
    bVar41 = true;
    uVar15 = 0;
    uVar18 = 1;
    goto LAB_00e96095;
  case 0x2d:
  case 0x3a:
    bVar41 = true;
switchD_00e95ccd_caseD_27:
    uVar15 = (uint)(uVar14 == 0x35 || uVar14 == 0x28);
    puVar37 = puVar35 + 2;
    uVar17 = 0;
    uVar18 = (uint)puVar35[1];
LAB_00e96095:
    uVar31 = *puVar37;
    if ((uVar22 == 0) || ((uVar31 & 0xfc00) != 0xd800)) {
      param_2 = puVar37 + 1;
      if (uVar14 < 0x2e) {
        if (0 < (int)uVar17) {
          iVar20 = 0;
          do {
            if ((undefined8 ******)*puVar3 <= local_1e8) {
              uVar18 = *puVar5;
              if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
              *puVar23 = 1;
              goto joined_r0x00e9efee;
            }
            if (uVar31 != *(ushort *)local_1e8) {
              return 0;
            }
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
            iVar20 = iVar20 + 1;
          } while (iVar20 < (int)uVar17);
        }
        ppppppuVar24 = local_1e8;
        if (uVar17 != uVar18) {
          if (uVar15 != 0) goto LAB_00e9bdaf;
          ppppppuVar27 = local_1e8;
          if ((int)uVar17 < (int)uVar18) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar27) {
                if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar27)) &&
                   (*puVar23 = 1, 1 < (int)*puVar5)) {
                  return -0xc;
                }
                break;
              }
              if (uVar31 != *(ushort *)ppppppuVar27) break;
              ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < (int)uVar18);
          }
          ppppppuVar24 = ppppppuVar27;
          if (!bVar41) goto joined_r0x00e9a390;
        }
      }
      else {
        uVar16 = (uint)uVar31;
        if ((uVar22 == 0) || (uVar31 < 0x80)) {
          if (uVar16 < 0x100) {
            uVar16 = (uint)*(byte *)(*(longlong *)(param_5 + 0x14) + (ulonglong)uVar31);
          }
        }
        else {
          uVar16 = *(int *)(&DAT_01ee2144 +
                           (ulonglong)
                           *(ushort *)
                            (&DAT_01ee59c0 +
                            (ulonglong)
                            (uVar16 & 0x7f | (uint)(byte)(&DAT_01ee37c0)[uVar31 >> 7] << 7) * 2) * 8
                           ) + uVar16;
        }
        if (0 < (int)uVar17) {
          iVar20 = 0;
          do {
            if ((undefined8 ******)*puVar3 <= local_1e8) {
              uVar18 = *puVar5;
              if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
              *puVar23 = 1;
              goto joined_r0x00e9efee;
            }
            if ((uVar31 != *(ushort *)local_1e8) && (uVar16 != *(ushort *)local_1e8)) {
              return 0;
            }
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
            iVar20 = iVar20 + 1;
          } while (iVar20 < (int)uVar17);
        }
        ppppppuVar24 = local_1e8;
        if (uVar17 != uVar18) {
          if (uVar15 != 0) goto LAB_00e9be64;
          ppppppuVar27 = local_1e8;
          if ((int)uVar17 < (int)uVar18) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar27) {
                if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar27)) &&
                   (*puVar23 = 1, 1 < (int)*puVar5)) {
                  return -0xc;
                }
                break;
              }
              if ((uVar31 != *(ushort *)ppppppuVar27) && (uVar16 != *(ushort *)ppppppuVar27)) break;
              ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < (int)uVar18);
          }
          ppppppuVar24 = ppppppuVar27;
          if (!bVar41) goto joined_r0x00e9a402;
        }
      }
    }
    else {
      local_198 = 0;
      if (0x2d < uVar14) {
        uVar16 = (uVar31 & 0x3ff) * 0x400 + 0x10000 + (puVar37[1] & 0x3ff);
        if (*(int *)(&DAT_01ee2144 +
                    (ulonglong)
                    *(ushort *)
                     (&DAT_01ee59c0 +
                     (ulonglong)(uVar16 & 0x7f | (uint)(byte)(&DAT_01ee37c0)[uVar16 >> 7] << 7) * 2)
                    * 8) != 0) {
          local_198 = FUN_00ea1290(*(int *)(&DAT_01ee2144 +
                                           (ulonglong)
                                           *(ushort *)
                                            (&DAT_01ee59c0 +
                                            (ulonglong)
                                            (uVar16 & 0x7f |
                                            (uint)(byte)(&DAT_01ee37c0)[uVar16 >> 7] << 7) * 2) * 8)
                                   + uVar16,local_d4);
        }
      }
      if (0 < (int)uVar17) {
        ppppppuVar24 = (undefined8 ******)*puVar3;
        iVar20 = 0;
        do {
          if (((undefined8 ******)((longlong)ppppppuVar24 - 4U) < local_1e8) ||
             (*(int *)local_1e8 != *(int *)puVar37)) {
            if (((int)local_198 < 1) ||
               (((undefined8 ******)((longlong)ppppppuVar24 + (longlong)(int)local_198 * -2) <
                 local_1e8 ||
                (iVar21 = FUN_00626660(local_1e8,local_d4), lVar26 = (longlong)(int)local_198,
                iVar21 != 0)))) {
              if (local_1e8 < ppppppuVar24) {
                return 0;
              }
              uVar18 = *puVar5;
              if (uVar18 == 0) {
                return 0;
              }
              if (local_1e8 <= (undefined8 ******)*puVar4) {
                return 0;
              }
              *puVar23 = 1;
              goto joined_r0x00e9f090;
            }
          }
          else {
            lVar26 = 2;
          }
          local_1e8 = (undefined8 ******)((longlong)local_1e8 + lVar26 * 2);
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)uVar17);
      }
      param_2 = puVar37 + 2;
      ppppppuVar24 = local_1e8;
      if (uVar17 != uVar18) {
        if (uVar15 != 0) {
          iVar20 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1)
          ;
          if (iVar20 != 0) {
            return iVar20;
          }
          iVar20 = uVar17 - 1;
          local_1d8 = local_1e8;
          goto LAB_00e9b67e;
        }
        if ((int)uVar17 < (int)uVar18) {
          ppppppuVar27 = (undefined8 ******)*puVar3;
          do {
            if (((undefined8 ******)((longlong)ppppppuVar27 - 4U) < ppppppuVar24) ||
               (*(int *)ppppppuVar24 != *(int *)puVar37)) {
              if (((int)local_198 < 1) ||
                 (((undefined8 ******)((longlong)ppppppuVar27 + (longlong)(int)local_198 * -2) <
                   ppppppuVar24 ||
                  (iVar20 = FUN_00626660(ppppppuVar24,local_d4), lVar26 = (longlong)(int)local_198,
                  iVar20 != 0)))) {
                if ((ppppppuVar27 <= ppppppuVar24) &&
                   (((*puVar5 != 0 && ((undefined8 ******)*puVar4 < ppppppuVar24)) &&
                    (*puVar23 = 1, 1 < (int)*puVar5)))) {
                  return -0xc;
                }
                break;
              }
            }
            else {
              lVar26 = 2;
            }
            ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)uVar18);
        }
        if (!bVar41) goto joined_r0x00e9a109;
      }
    }
    goto LAB_00e95c90;
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
    puVar37 = puVar35 + 1;
    iVar20 = 0x3b;
    if (0x47 < uVar14) {
      iVar20 = 0x48;
    }
    uVar29 = (ulonglong)(uVar18 - iVar20);
    uVar15 = uVar18 - iVar20 & 1;
    uVar17 = (uint)(char)(&DAT_01ee13d0)[uVar29];
    uVar18 = 0x7fffffff;
    if ((0x3cfUL >> (uVar29 & 0x3f) & 1) == 0) {
      uVar18 = (int)(char)(&DAT_01ee13db)[uVar29];
    }
    goto LAB_00e95df8;
  case 0x41:
  case 0x42:
  case 0x4e:
  case 0x4f:
    uVar15 = (uint)(uVar14 == 0x4f || uVar14 == 0x42);
    puVar37 = puVar35 + 2;
    uVar17 = 0;
    uVar18 = (uint)puVar35[1];
LAB_00e95df8:
    bVar39 = false;
    goto LAB_00e9652e;
  case 0x43:
  case 0x50:
    uVar17 = (uint)puVar35[1];
    puVar37 = puVar35 + 2;
    bVar39 = false;
    uVar18 = uVar17;
    goto LAB_00e9652b;
  case 0x44:
  case 0x51:
    puVar37 = puVar35 + 1;
    uVar18 = 0x7fffffff;
    goto LAB_00e96529;
  case 0x45:
  case 0x52:
    puVar37 = puVar35 + 1;
    uVar15 = 0;
    uVar18 = 0x7fffffff;
    uVar17 = 1;
    bVar39 = true;
    goto LAB_00e9652e;
  case 0x46:
  case 0x53:
    puVar37 = puVar35 + 1;
    uVar17 = 0;
    bVar39 = true;
    uVar18 = 1;
    goto LAB_00e9652b;
  case 0x47:
  case 0x54:
    uVar18 = (uint)puVar35[1];
    puVar37 = puVar35 + 2;
LAB_00e96529:
    bVar39 = true;
    uVar17 = 0;
LAB_00e9652b:
    uVar15 = 0;
LAB_00e9652e:
    param_2 = puVar37 + 1;
    uVar31 = *puVar37;
    uVar29 = (ulonglong)uVar31;
    if ((uVar22 != 0) && ((uVar31 & 0xfc00) == 0xd800)) {
      param_2 = puVar37 + 2;
      uVar29 = (ulonglong)((uVar31 & 0x3ff) * 0x400 + 0x10000 + (puVar37[1] & 0x3ff));
    }
    uVar16 = (uint)uVar29;
    if (uVar14 < 0x48) {
      if (uVar22 == 0) {
        if (0 < (int)uVar17) {
          iVar20 = 0;
          do {
            if ((undefined8 ******)*puVar3 <= local_1e8) {
              uVar18 = *puVar5;
              if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
              *puVar23 = 1;
              goto joined_r0x00e9efee;
            }
            if (uVar16 == *(ushort *)local_1e8) {
              return 0;
            }
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
            iVar20 = iVar20 + 1;
          } while (iVar20 < (int)uVar17);
        }
      }
      else if (0 < (int)uVar17) {
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          uVar14 = *(ushort *)local_1e8;
          uVar34 = (uint)uVar14;
          if ((uVar14 & 0xfc00) == 0xd800) {
            puVar35 = (ushort *)((longlong)local_1e8 + 2);
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar34 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*puVar35 & 0x3ff);
          }
          else {
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
          }
          if (uVar16 == uVar34) {
            return 0;
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)uVar17);
      }
      ppppppuVar24 = local_1e8;
      if (uVar17 == uVar18) goto LAB_00e95c90;
      if (uVar15 == 0) {
        if (uVar22 == 0) {
          ppppppuVar27 = local_1e8;
          if ((int)uVar17 < (int)uVar18) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar27) {
                if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar27)) &&
                   (*puVar23 = 1, 1 < (int)*puVar5)) {
                  return -0xc;
                }
                break;
              }
              if (uVar16 == *(ushort *)ppppppuVar27) break;
              ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < (int)uVar18);
          }
          ppppppuVar24 = ppppppuVar27;
          if (!bVar39) goto joined_r0x00e9a57a;
        }
        else {
          if ((int)uVar17 < (int)uVar18) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar24) {
                if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar24)) &&
                   (*puVar23 = 1, 1 < (int)*puVar5)) {
                  return -0xc;
                }
                break;
              }
              uVar15 = (uint)*(ushort *)ppppppuVar24;
              if ((uVar15 & 0xfc00) == 0xd800) {
                uVar15 = (*(ushort *)ppppppuVar24 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
                lVar26 = 2;
              }
              else {
                lVar26 = 1;
              }
              if (uVar16 == uVar15) break;
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
              uVar17 = uVar17 + 1;
            } while ((int)uVar17 < (int)uVar18);
          }
          if (!bVar39) goto joined_r0x00e9a300;
        }
        goto LAB_00e95c90;
      }
      iVar20 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (uVar22 != 0) {
        if (iVar20 != 0) {
          return iVar20;
        }
        iVar20 = uVar17 - 1;
        while( true ) {
          iVar20 = iVar20 + 1;
          if ((int)uVar18 <= iVar20) {
            return 0;
          }
          if ((undefined8 ******)*puVar3 <= local_1e8) break;
          uVar14 = *(ushort *)local_1e8;
          uVar22 = (uint)uVar14;
          if ((uVar22 & 0xfc00) == 0xd800) {
            puVar35 = (ushort *)((longlong)local_1e8 + 2);
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar22 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*puVar35 & 0x3ff);
          }
          else {
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
          }
          if (uVar16 == uVar22) {
            return 0;
          }
          iVar21 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1)
          ;
          if (iVar21 != 0) {
            return iVar21;
          }
        }
        uVar18 = *puVar5;
        if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
        *puVar23 = 1;
        goto joined_r0x00e9efee;
      }
      while( true ) {
        if (iVar20 != 0) {
          return iVar20;
        }
        if ((int)uVar18 <= (int)uVar17) {
          return 0;
        }
        if ((undefined8 ******)*puVar3 <= local_1e8) break;
        if (uVar16 == *(ushort *)local_1e8) {
          return 0;
        }
        local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
        uVar17 = uVar17 + 1;
        iVar20 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      }
      uVar18 = *puVar5;
      if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < local_1e8)) {
        *puVar23 = 1;
        goto joined_r0x00e9efee;
      }
      goto LAB_00e9f470;
    }
    if ((uVar22 == 0) || (uVar16 < 0x80)) {
      if (uVar16 < 0x100) {
        uVar29 = (ulonglong)*(byte *)(*(longlong *)(param_5 + 0x14) + uVar29);
      }
      uVar34 = (uint)uVar29;
      if (uVar22 == 0) goto LAB_00e965eb;
LAB_00e966cb:
      if (0 < (int)uVar17) {
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          uVar14 = *(ushort *)local_1e8;
          uVar36 = (uint)uVar14;
          if ((uVar36 & 0xfc00) == 0xd800) {
            puVar35 = (ushort *)((longlong)local_1e8 + 2);
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar36 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*puVar35 & 0x3ff);
          }
          else {
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
          }
          if (uVar16 == uVar36) {
            return 0;
          }
          if (uVar34 == uVar36) {
            return 0;
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)uVar17);
      }
    }
    else {
      uVar34 = *(int *)(&DAT_01ee2144 +
                       (ulonglong)
                       *(ushort *)
                        (&DAT_01ee59c0 +
                        ((longlong)(int)(uVar16 % 0x80) +
                        (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar16 >> 7] * 0x80) * 2) * 8) +
               uVar16;
      if (uVar22 != 0) goto LAB_00e966cb;
LAB_00e965eb:
      if (0 < (int)uVar17) {
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          if (uVar16 == *(ushort *)local_1e8) {
            return 0;
          }
          if (uVar34 == *(ushort *)local_1e8) {
            return 0;
          }
          local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)uVar17);
      }
    }
    ppppppuVar24 = local_1e8;
    if (uVar17 == uVar18) goto LAB_00e95c90;
    if (uVar15 == 0) {
      if (uVar22 == 0) {
        ppppppuVar27 = local_1e8;
        if ((int)uVar17 < (int)uVar18) {
          while (ppppppuVar27 < (undefined8 ******)*puVar3) {
            if ((uVar16 == *(ushort *)ppppppuVar27) || (uVar34 == *(ushort *)ppppppuVar27))
            goto LAB_00e99bd5;
            ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
            uVar17 = uVar17 + 1;
            if ((int)uVar18 <= (int)uVar17) goto LAB_00e99bd5;
          }
          if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar27)) &&
             (*puVar23 = 1, 1 < (int)*puVar5)) {
            return -0xc;
          }
        }
LAB_00e99bd5:
        ppppppuVar24 = ppppppuVar27;
        if (!bVar39) goto joined_r0x00e9a508;
      }
      else {
        if ((int)uVar17 < (int)uVar18) {
          while (ppppppuVar24 < (undefined8 ******)*puVar3) {
            uVar15 = (uint)*(ushort *)ppppppuVar24;
            if ((uVar15 & 0xfc00) == 0xd800) {
              uVar15 = (*(ushort *)ppppppuVar24 & 0x3ff) * 0x400 + 0x10000 +
                       (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
              lVar26 = 2;
            }
            else {
              lVar26 = 1;
            }
            if ((uVar16 == uVar15) || (uVar34 == uVar15)) goto LAB_00e98fe5;
            ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
            uVar17 = uVar17 + 1;
            if ((int)uVar18 <= (int)uVar17) goto LAB_00e98fe5;
          }
          if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar24)) &&
             (*puVar23 = 1, 1 < (int)*puVar5)) {
            return -0xc;
          }
        }
LAB_00e98fe5:
        if (!bVar39) goto joined_r0x00e9a275;
      }
      goto LAB_00e95c90;
    }
    iVar20 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (uVar22 != 0) {
      if (iVar20 != 0) {
        return iVar20;
      }
      iVar20 = uVar17 - 1;
      while( true ) {
        iVar20 = iVar20 + 1;
        if ((int)uVar18 <= iVar20) {
          return 0;
        }
        if ((undefined8 ******)*puVar3 <= local_1e8) break;
        uVar14 = *(ushort *)local_1e8;
        uVar22 = (uint)uVar14;
        if ((uVar22 & 0xfc00) == 0xd800) {
          puVar35 = (ushort *)((longlong)local_1e8 + 2);
          local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
          uVar22 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*puVar35 & 0x3ff);
        }
        else {
          local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
        }
        if (uVar16 == uVar22) {
          return 0;
        }
        if (uVar34 == uVar22) {
          return 0;
        }
        iVar21 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
        if (iVar21 != 0) {
          return iVar21;
        }
      }
      uVar18 = *puVar5;
      if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < local_1e8)) {
        *puVar23 = 1;
        goto joined_r0x00e9efee;
      }
      goto LAB_00e9f470;
    }
    while( true ) {
      if (iVar20 != 0) {
        return iVar20;
      }
      if ((int)uVar18 <= (int)uVar17) {
        return 0;
      }
      if ((undefined8 ******)*puVar3 <= local_1e8) break;
      if (uVar16 == *(ushort *)local_1e8) {
        return 0;
      }
      if (uVar34 == *(ushort *)local_1e8) {
        return 0;
      }
      local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
      uVar17 = uVar17 + 1;
      iVar20 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    }
    uVar18 = *puVar5;
    if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
    *puVar23 = 1;
    goto joined_r0x00e9efee;
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
    param_2 = puVar35 + 1;
    local_160 = ~uVar18 & 1;
    uVar30 = uVar29 + 0xffffffab & 0xffffffff;
    uVar18 = (uint)(char)(&DAT_01ee13d0)[uVar30];
    local_198 = 0x7fffffff;
    if ((0x3cfUL >> (uVar29 + 0xffffffab & 0x3f) & 1) == 0) {
      local_198 = (int)(char)(&DAT_01ee13db)[uVar30];
    }
    goto LAB_00e968ed;
  case 0x5b:
  case 0x5c:
    local_160 = (uint)(uVar14 == 0x5c);
    param_2 = puVar35 + 2;
    uVar18 = 0;
    local_198 = (uint)puVar35[1];
LAB_00e968ed:
    bVar39 = false;
    goto LAB_00e97a3f;
  case 0x5d:
    uVar18 = (uint)puVar35[1];
    param_2 = puVar35 + 2;
    local_160 = 1;
    bVar39 = false;
    local_198 = uVar18;
    goto LAB_00e97a3f;
  case 0x5e:
    param_2 = puVar35 + 1;
    local_198 = 0x7fffffff;
    goto LAB_00e97a35;
  case 0x5f:
    param_2 = puVar35 + 1;
    local_160 = 0;
    local_198 = 0x7fffffff;
    uVar18 = 1;
    bVar39 = true;
    goto LAB_00e97a3f;
  case 0x60:
    param_2 = puVar35 + 1;
    local_198 = 1;
    goto LAB_00e97a35;
  case 0x61:
    local_198 = (uint)puVar35[1];
    param_2 = puVar35 + 2;
LAB_00e97a35:
    uVar18 = 0;
    bVar39 = true;
    local_160 = 0;
LAB_00e97a3f:
    uVar14 = *param_2;
    if ((ushort)(uVar14 - 0xf) < 2) {
      local_17c = (uint)(uVar14 == 0xf);
      uVar17 = (uint)param_2[1];
      local_16c = (uint)param_2[2];
      param_2 = param_2 + 3;
    }
    else {
      param_2 = param_2 + 1;
      uVar17 = 0xffffffff;
    }
    ppppppuVar27 = local_1e8;
    if ((int)uVar18 < 1) goto LAB_00e940b4;
    if (-1 < (int)uVar17) {
      switch(uVar17) {
      case 0:
        if (local_17c != 0) {
          return 0;
        }
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
          if ((uVar22 != 0) && (((ulonglong)*local_1e8 & 0xfc00) == 0xd800)) {
            ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
          }
          local_1e8 = ppppppuVar24;
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 1:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar22 != 0) && ((uVar31 & 0xfc00) == 0xd800)) {
            ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                     (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
          }
          uVar16 = 0;
          if ((byte)((&DAT_01ee2141)
                     [(ulonglong)
                      *(ushort *)
                       (&DAT_01ee59c0 +
                       ((longlong)(int)(uVar15 % 0x80) +
                       (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar15 >> 7] * 0x80) * 2) * 8] - 5) < 5
             ) {
            uVar16 = *(uint *)(&DAT_01ee13f0 +
                              (longlong)
                              (char)((&DAT_01ee2141)
                                     [(ulonglong)
                                      *(ushort *)
                                       (&DAT_01ee59c0 +
                                       ((longlong)(int)(uVar15 % 0x80) +
                                       (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar15 >> 7] * 0x80) *
                                       2) * 8] - 5) * 4);
          }
          if (local_17c == uVar16) {
            return 0;
          }
          iVar20 = iVar20 + 1;
          local_1e8 = ppppppuVar27;
        } while (iVar20 < (int)uVar18);
        break;
      case 2:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar22 != 0) && ((uVar31 & 0xfc00) == 0xd800)) {
            ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                     (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
          }
          if (local_17c ==
              (*(uint *)(&DAT_01ee1630 +
                        (ulonglong)
                        (byte)(&DAT_01ee2141)
                              [(ulonglong)
                               *(ushort *)
                                (&DAT_01ee59c0 +
                                ((longlong)(int)(uVar15 % 0x80) +
                                (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar15 >> 7] * 0x80) * 2) * 8]
                        * 4) == local_16c)) {
            return 0;
          }
          iVar20 = iVar20 + 1;
          local_1e8 = ppppppuVar27;
        } while (iVar20 < (int)uVar18);
        break;
      case 3:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar22 != 0) && ((uVar31 & 0xfc00) == 0xd800)) {
            ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                     (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
          }
          if (local_17c ==
              (local_16c ==
              (byte)(&DAT_01ee2141)
                    [(ulonglong)
                     *(ushort *)
                      (&DAT_01ee59c0 +
                      ((longlong)(int)(uVar15 % 0x80) +
                      (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar15 >> 7] * 0x80) * 2) * 8])) {
            return 0;
          }
          iVar20 = iVar20 + 1;
          local_1e8 = ppppppuVar27;
        } while (iVar20 < (int)uVar18);
        break;
      case 4:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar22 != 0) && ((uVar31 & 0xfc00) == 0xd800)) {
            ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                     (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
          }
          if (local_17c ==
              (local_16c ==
              (byte)(&DAT_01ee2140)
                    [(ulonglong)
                     *(ushort *)
                      (&DAT_01ee59c0 +
                      ((longlong)(int)(uVar15 % 0x80) +
                      (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar15 >> 7] * 0x80) * 2) * 8])) {
            return 0;
          }
          iVar20 = iVar20 + 1;
          local_1e8 = ppppppuVar27;
        } while (iVar20 < (int)uVar18);
        break;
      case 5:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar22 != 0) && ((uVar31 & 0xfc00) == 0xd800)) {
            ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                     (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
          }
          if (local_17c ==
              ((*(uint *)(&DAT_01ee1630 +
                         (ulonglong)
                         (byte)(&DAT_01ee2141)
                               [(ulonglong)
                                *(ushort *)
                                 (&DAT_01ee59c0 +
                                 ((longlong)(int)(uVar15 % 0x80) +
                                 (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar15 >> 7] * 0x80) * 2) * 8
                               ] * 4) | 2) == 3)) {
            return 0;
          }
          iVar20 = iVar20 + 1;
          local_1e8 = ppppppuVar27;
        } while (iVar20 < (int)uVar18);
        break;
      case 6:
      case 7:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
          uVar31 = *(ushort *)local_1e8;
          uVar29 = (ulonglong)uVar31;
          uVar15 = (uint)uVar31;
          if ((uVar22 != 0) && ((uVar31 & 0xfc00) == 0xd800)) {
            ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                     (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
            uVar29 = (ulonglong)uVar15;
            if (0x180d < uVar15) goto LAB_00e97b60;
LAB_00e97b34:
            uVar15 = (uint)uVar29;
            if (uVar15 < 0x85) {
              if ((uVar15 < 0x21) && ((0x100003e00U >> (uVar29 & 0x3f) & 1) != 0))
              goto switchD_00e97b79_caseD_2000;
              goto switchD_00e97b79_caseD_200b;
            }
            if (((uVar15 != 0x85) && (uVar15 != 0xa0)) && (uVar15 != 0x1680))
            goto switchD_00e97b79_caseD_200b;
            goto switchD_00e97b79_caseD_2000;
          }
          if (uVar31 < 0x180e) goto LAB_00e97b34;
LAB_00e97b60:
          switch(uVar15) {
          case 0x200b:
          case 0x200c:
          case 0x200d:
          case 0x200e:
          case 0x200f:
          case 0x2010:
          case 0x2011:
          case 0x2012:
          case 0x2013:
          case 0x2014:
          case 0x2015:
          case 0x2016:
          case 0x2017:
          case 0x2018:
          case 0x2019:
          case 0x201a:
          case 0x201b:
          case 0x201c:
          case 0x201d:
          case 0x201e:
          case 0x201f:
          case 0x2020:
          case 0x2021:
          case 0x2022:
          case 0x2023:
          case 0x2024:
          case 0x2025:
          case 0x2026:
          case 0x2027:
          case 0x202a:
          case 0x202b:
          case 0x202c:
          case 0x202d:
          case 0x202e:
          case 0x2030:
          case 0x2031:
          case 0x2032:
          case 0x2033:
          case 0x2034:
          case 0x2035:
          case 0x2036:
          case 0x2037:
          case 0x2038:
          case 0x2039:
          case 0x203a:
          case 0x203b:
          case 0x203c:
          case 0x203d:
          case 0x203e:
          case 0x203f:
          case 0x2040:
          case 0x2041:
          case 0x2042:
          case 0x2043:
          case 0x2044:
          case 0x2045:
          case 0x2046:
          case 0x2047:
          case 0x2048:
          case 0x2049:
          case 0x204a:
          case 0x204b:
          case 0x204c:
          case 0x204d:
          case 0x204e:
          case 0x204f:
          case 0x2050:
          case 0x2051:
          case 0x2052:
          case 0x2053:
          case 0x2054:
          case 0x2055:
          case 0x2056:
          case 0x2057:
          case 0x2058:
          case 0x2059:
          case 0x205a:
          case 0x205b:
          case 0x205c:
          case 0x205d:
          case 0x205e:
switchD_00e97b79_caseD_200b:
            if (local_17c ==
                (*(int *)(&DAT_01ee1630 +
                         (ulonglong)
                         (byte)(&DAT_01ee2141)
                               [(ulonglong)
                                *(ushort *)
                                 (&DAT_01ee59c0 +
                                 ((longlong)(int)(uVar15 % 0x80) +
                                 (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar15 >> 7] * 0x80) * 2) * 8
                               ] * 4) == 6)) {
              return 0;
            }
            break;
          default:
            if ((uVar15 != 0x3000) && (uVar15 != 0x180e)) goto switchD_00e97b79_caseD_200b;
          case 0x2000:
          case 0x2001:
          case 0x2002:
          case 0x2003:
          case 0x2004:
          case 0x2005:
          case 0x2006:
          case 0x2007:
          case 0x2008:
          case 0x2009:
          case 0x200a:
          case 0x2028:
          case 0x2029:
          case 0x202f:
          case 0x205f:
switchD_00e97b79_caseD_2000:
            if (local_17c != 0) {
              return 0;
            }
          }
          iVar20 = iVar20 + 1;
          local_1e8 = ppppppuVar27;
        } while (iVar20 < (int)uVar18);
        break;
      case 8:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar22 != 0) && ((uVar31 & 0xfc00) == 0xd800)) {
            ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                     (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
          }
          if (local_17c ==
              (uVar15 == 0x5f ||
              (*(uint *)(&DAT_01ee1630 +
                        (ulonglong)
                        (byte)(&DAT_01ee2141)
                              [(ulonglong)
                               *(ushort *)
                                (&DAT_01ee59c0 +
                                ((longlong)(int)(uVar15 % 0x80) +
                                (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar15 >> 7] * 0x80) * 2) * 8]
                        * 4) | 2) == 3)) {
            return 0;
          }
          iVar20 = iVar20 + 1;
          local_1e8 = ppppppuVar27;
        } while (iVar20 < (int)uVar18);
        break;
      case 9:
        iVar20 = 1;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar22 != 0) && ((uVar31 & 0xfc00) == 0xd800)) {
            ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                     (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
          }
          uVar16 = *(uint *)(&DAT_01ee2000 + (ulonglong)local_16c * 4);
          puVar32 = (uint *)(&DAT_01ee2004 + (ulonglong)local_16c * 4);
          while (uVar16 <= uVar15) {
            if (uVar15 == uVar16) {
              if (local_17c != 0) {
                return 0;
              }
              goto LAB_00e98e92;
            }
            uVar16 = *puVar32;
            puVar32 = puVar32 + 1;
          }
          if (local_17c == 0) {
            return 0;
          }
LAB_00e98e92:
          bVar40 = iVar20 < (int)uVar18;
          local_1e8 = ppppppuVar27;
          iVar20 = iVar20 + 1;
        } while (bVar40);
        break;
      case 10:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar22 != 0) && ((uVar31 & 0xfc00) == 0xd800)) {
            ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                     (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
          }
          if ((0x3c < uVar15 - 0x24) ||
             (uVar16 = 1, (0x1000000010000001U >> ((ulonglong)(uVar15 - 0x24) & 0x3f) & 1) == 0)) {
            uVar16 = (uint)(0xdfff < uVar15 || uVar15 - 0xa0 < 0xd760);
          }
          if (local_17c == uVar16) {
            return 0;
          }
          iVar20 = iVar20 + 1;
          local_1e8 = ppppppuVar27;
        } while (iVar20 < (int)uVar18);
        break;
      default:
        return -0xe;
      }
      goto LAB_00e940b4;
    }
    if (uVar14 == 0x16) {
      iVar20 = 1;
      do {
        ppppppuVar24 = (undefined8 ******)*puVar3;
        if (ppppppuVar24 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        uVar31 = *(ushort *)local_1e8;
        uVar15 = (uint)uVar31;
        ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
        if ((uVar22 != 0) && ((uVar31 & 0xfc00) == 0xd800)) {
          uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
          ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
        }
        local_1e8 = ppppppuVar27;
        if (local_1e8 < ppppppuVar24) {
          bVar6 = (&DAT_01ee2142)
                  [(ulonglong)
                   *(ushort *)
                    (&DAT_01ee59c0 +
                    ((longlong)(int)(uVar15 % 0x80) +
                    (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar15 >> 7] * 0x80) * 2) * 8];
          do {
            uVar29 = (ulonglong)bVar6;
            uVar31 = *(ushort *)local_1e8;
            uVar15 = (uint)uVar31;
            lVar26 = 1;
            if ((uVar22 != 0) && ((uVar31 & 0xfc00) == 0xd800)) {
              uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                       (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
              lVar26 = 2;
            }
            bVar6 = (&DAT_01ee2142)
                    [(ulonglong)
                     *(ushort *)
                      (&DAT_01ee59c0 +
                      ((longlong)(int)(uVar15 % 0x80) +
                      (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar15 >> 7] * 0x80) * 2) * 8];
            uVar15 = 1 << (bVar6 & 0x1f) & *(uint *)(&DAT_01ee16b0 + uVar29 * 4);
            if (uVar15 != 0) {
              local_1e8 = (undefined8 ******)((longlong)local_1e8 + lVar26 * 2);
            }
          } while ((local_1e8 < ppppppuVar24) && (uVar15 != 0));
        }
        if ((ppppppuVar24 <= local_1e8) &&
           (((*puVar5 != 0 && ((undefined8 ******)*puVar4 < local_1e8)) &&
            (*puVar23 = 1, 1 < (int)*puVar5)))) {
          return -0xc;
        }
        bVar40 = iVar20 < (int)uVar18;
        ppppppuVar27 = local_1e8;
        iVar20 = iVar20 + 1;
      } while (bVar40);
      goto LAB_00e940b4;
    }
    if (uVar22 != 0) {
      switch(uVar14 - 6) {
      case 0:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          uVar31 = *(ushort *)local_1e8;
          if ((uVar31 & 0xfc00) == 0xd800) {
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
          }
          else {
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
            if ((uVar31 < 0x80) && ((*(byte *)(*(longlong *)puVar2 + (ulonglong)uVar31) & 4) != 0))
            {
              return 0;
            }
          }
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 1:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          if (0x7f < (ulonglong)*(ushort *)local_1e8) {
            return 0;
          }
          if ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 4) == 0) {
            return 0;
          }
          local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 2:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          if (((ulonglong)*(ushort *)local_1e8 < 0x80) &&
             ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 1) != 0)) {
            return 0;
          }
          ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
          if ((ppppppuVar24 < (undefined8 ******)*puVar3) &&
             (((ulonglong)*local_1e8 & 0xfc000000) == 0xdc000000)) {
            ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
          }
          local_1e8 = ppppppuVar24;
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 3:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          if (0x7f < (ulonglong)*(ushort *)local_1e8) {
            return 0;
          }
          if ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 1) == 0) {
            return 0;
          }
          local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 4:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          if (((ulonglong)*(ushort *)local_1e8 < 0x80) &&
             ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 0x10) != 0)) {
            return 0;
          }
          ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
          if ((ppppppuVar24 < (undefined8 ******)*puVar3) &&
             (((ulonglong)*local_1e8 & 0xfc000000) == 0xdc000000)) {
            ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
          }
          local_1e8 = ppppppuVar24;
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 5:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          if (0x7f < (ulonglong)*(ushort *)local_1e8) {
            return 0;
          }
          if ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 0x10) == 0) {
            return 0;
          }
          local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 6:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          if (param_5[8] == 0) {
            if ((local_1e8 <= (undefined8 ******)((longlong)*puVar3 + (longlong)(int)*puVar1 * -2))
               && (*(ushort *)local_1e8 == (ushort)param_5[0x10])) {
              if (*puVar1 == 1) {
                return 0;
              }
              if (*(ushort *)((longlong)local_1e8 + 2) == *(ushort *)((longlong)param_5 + 0x42)) {
                return 0;
              }
            }
          }
          else {
            iVar21 = FUN_00ea10c0();
            if (iVar21 != 0) {
              return 0;
            }
          }
          if (*puVar5 == 0) {
            ppppppuVar24 = (undefined8 ******)*puVar3;
          }
          else {
            ppppppuVar24 = (undefined8 ******)*puVar3;
            if ((((ppppppuVar24 <= (undefined8 ******)((longlong)local_1e8 + 2U)) &&
                 (param_5[8] == 0)) && (*puVar1 == 2)) &&
               ((*(ushort *)local_1e8 == (ushort)param_5[0x10] && (*puVar23 = 1, 1 < (int)*puVar5)))
               ) {
              return -0xc;
            }
          }
          ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
          if ((ppppppuVar27 < ppppppuVar24) && (((ulonglong)*local_1e8 & 0xfc000000) == 0xdc000000))
          {
            ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 4);
          }
          local_1e8 = ppppppuVar27;
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 7:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
          if ((ppppppuVar24 < (undefined8 ******)*puVar3) &&
             (((ulonglong)*local_1e8 & 0xfc000000) == 0xdc000000)) {
            ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
          }
          local_1e8 = ppppppuVar24;
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 8:
        if ((undefined8 ******)(*puVar3 + (longlong)(int)uVar18 * -2) < local_1e8) {
          return 0;
        }
        goto LAB_00e9372c;
      default:
        return -0xe;
      case 0xb:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar31 & 0xfc00) == 0xd800) {
            puVar35 = (ushort *)((longlong)local_1e8 + 2);
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 + (*puVar35 & 0x3ff);
          }
          else {
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
          }
          if (uVar15 < 0xd) {
            if (uVar15 - 0xb < 2) goto LAB_00e937c6;
            if (uVar15 != 10) {
              return 0;
            }
          }
          else if ((uVar15 - 0x2028 < 2) || (uVar15 == 0x85)) {
LAB_00e937c6:
            if (param_5[0x21] != 0) {
              return 0;
            }
          }
          else {
            if (uVar15 != 0xd) {
              return 0;
            }
            if ((local_1e8 < (undefined8 ******)*puVar3) && (*(ushort *)local_1e8 == 10)) {
              local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
            }
          }
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 0xc:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar31 & 0xfc00) == 0xd800) {
            puVar35 = (ushort *)((longlong)local_1e8 + 2);
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 + (*puVar35 & 0x3ff);
            if (0x1fff < uVar15) goto LAB_00e9387a;
LAB_00e93841:
            if (uVar15 < 0xa0) {
              if ((uVar15 == 9) || (uVar15 == 0x20)) goto LAB_00e9f470;
            }
            else if ((uVar15 == 0xa0) || ((uVar15 == 0x1680 || (uVar15 == 0x180e))))
            goto LAB_00e9f470;
          }
          else {
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
            if (uVar31 < 0x2000) goto LAB_00e93841;
LAB_00e9387a:
            if (uVar15 < 0x202f) {
              if (uVar15 - 0x2000 < 0xb) goto LAB_00e9f470;
            }
            else if (((uVar15 == 0x202f) || (uVar15 == 0x205f)) || (uVar15 == 0x3000))
            goto LAB_00e9f470;
          }
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 0xd:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar31 & 0xfc00) == 0xd800) {
            puVar35 = (ushort *)((longlong)local_1e8 + 2);
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 + (*puVar35 & 0x3ff);
            if (0x1fff < uVar15) goto LAB_00e9395d;
LAB_00e9392c:
            if (uVar15 < 0xa0) {
              if ((uVar15 != 9) && (uVar15 != 0x20)) goto LAB_00e9f470;
            }
            else if ((uVar15 != 0xa0) && ((uVar15 != 0x1680 && (uVar15 != 0x180e))))
            goto LAB_00e9f470;
          }
          else {
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
            if (uVar31 < 0x2000) goto LAB_00e9392c;
LAB_00e9395d:
            if (uVar15 < 0x202f) {
              if (10 < uVar15 - 0x2000) goto LAB_00e9f470;
            }
            else if (((uVar15 != 0x202f) && (uVar15 != 0x3000)) && (uVar15 != 0x205f))
            goto LAB_00e9f470;
          }
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 0xe:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar31 & 0xfc00) == 0xd800) {
            puVar35 = (ushort *)((longlong)local_1e8 + 2);
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 + (*puVar35 & 0x3ff);
          }
          else {
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
          }
          if (((uVar15 - 10 < 4) || (uVar15 - 0x2028 < 2)) || (uVar15 == 0x85)) goto LAB_00e9f470;
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
        break;
      case 0xf:
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
            *puVar23 = 1;
            goto joined_r0x00e9efee;
          }
          uVar31 = *(ushort *)local_1e8;
          uVar15 = (uint)uVar31;
          if ((uVar31 & 0xfc00) == 0xd800) {
            puVar35 = (ushort *)((longlong)local_1e8 + 2);
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
            uVar15 = (uVar31 & 0x3ff) * 0x400 + 0x10000 + (*puVar35 & 0x3ff);
          }
          else {
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
          }
          if (((3 < uVar15 - 10) && (1 < uVar15 - 0x2028)) && (uVar15 != 0x85)) goto LAB_00e9f470;
          iVar20 = iVar20 + 1;
          ppppppuVar27 = local_1e8;
        } while (iVar20 < (int)uVar18);
      }
      goto LAB_00e940b4;
    }
    switch(uVar14 - 6) {
    case 0:
      iVar20 = 0;
      do {
        if ((undefined8 ******)*puVar3 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        if (((ulonglong)*(ushort *)local_1e8 < 0x100) &&
           ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 4) != 0)) {
          return 0;
        }
        local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
        iVar20 = iVar20 + 1;
        ppppppuVar27 = local_1e8;
      } while (iVar20 < (int)uVar18);
      break;
    case 1:
      iVar20 = 0;
      do {
        if ((undefined8 ******)*puVar3 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        if (0xff < (ulonglong)*(ushort *)local_1e8) {
          return 0;
        }
        if ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 4) == 0) {
          return 0;
        }
        local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
        iVar20 = iVar20 + 1;
        ppppppuVar27 = local_1e8;
      } while (iVar20 < (int)uVar18);
      break;
    case 2:
      iVar20 = 0;
      do {
        if ((undefined8 ******)*puVar3 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        if (((ulonglong)*(ushort *)local_1e8 < 0x100) &&
           ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 1) != 0)) {
          return 0;
        }
        local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
        iVar20 = iVar20 + 1;
        ppppppuVar27 = local_1e8;
      } while (iVar20 < (int)uVar18);
      break;
    case 3:
      iVar20 = 0;
      do {
        if ((undefined8 ******)*puVar3 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        if (0xff < (ulonglong)*(ushort *)local_1e8) {
          return 0;
        }
        if ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 1) == 0) {
          return 0;
        }
        local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
        iVar20 = iVar20 + 1;
        ppppppuVar27 = local_1e8;
      } while (iVar20 < (int)uVar18);
      break;
    case 4:
      iVar20 = 0;
      do {
        if ((undefined8 ******)*puVar3 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        if (((ulonglong)*(ushort *)local_1e8 < 0x100) &&
           ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 0x10) != 0)) {
          return 0;
        }
        local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
        iVar20 = iVar20 + 1;
        ppppppuVar27 = local_1e8;
      } while (iVar20 < (int)uVar18);
      break;
    case 5:
      iVar20 = 0;
      do {
        if ((undefined8 ******)*puVar3 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        if (0xff < (ulonglong)*(ushort *)local_1e8) {
          return 0;
        }
        if ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 0x10) == 0) {
          return 0;
        }
        local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
        iVar20 = iVar20 + 1;
        ppppppuVar27 = local_1e8;
      } while (iVar20 < (int)uVar18);
      break;
    case 6:
      iVar20 = 0;
      do {
        if ((undefined8 ******)*puVar3 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        if (param_5[8] == 0) {
          if ((local_1e8 <= (undefined8 ******)((longlong)*puVar3 + (longlong)(int)*puVar1 * -2)) &&
             (*(ushort *)local_1e8 == (ushort)param_5[0x10])) {
            if (*puVar1 == 1) {
              return 0;
            }
            if (*(ushort *)((longlong)local_1e8 + 2) == *(ushort *)((longlong)param_5 + 0x42)) {
              return 0;
            }
          }
        }
        else {
          iVar21 = FUN_00ea10c0();
          if (iVar21 != 0) {
            return 0;
          }
        }
        ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + 2);
        if (((((*puVar5 != 0) && ((undefined8 ******)*puVar3 <= ppppppuVar27)) && (param_5[8] == 0))
            && ((*puVar1 == 2 && (*(ushort *)local_1e8 == (ushort)param_5[0x10])))) &&
           (*puVar23 = 1, 1 < (int)*puVar5)) {
          return -0xc;
        }
        iVar20 = iVar20 + 1;
        local_1e8 = ppppppuVar27;
      } while (iVar20 < (int)uVar18);
      break;
    case 7:
      if (local_1e8 <= (undefined8 ******)(*puVar3 + (longlong)(int)uVar18 * -2)) goto LAB_00e9372c;
      uVar18 = *puVar5;
      if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
      *puVar23 = 1;
      goto joined_r0x00e9efee;
    case 8:
      if ((undefined8 ******)(*puVar3 + (longlong)(int)uVar18 * -2) < local_1e8) {
        uVar18 = *puVar5;
        if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
        *puVar23 = 1;
        goto joined_r0x00e9efee;
      }
LAB_00e9372c:
      ppppppuVar27 = (undefined8 ******)((longlong)local_1e8 + (longlong)(int)uVar18 * 2);
      break;
    default:
      return -0xe;
    case 0xb:
      iVar20 = 0;
      do {
        if ((undefined8 ******)*puVar3 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
        uVar31 = *(ushort *)local_1e8;
        iVar21 = (int)(short)uVar31;
        if (iVar21 < 0xd) {
          if ((iVar21 - 0xbU & 0xffff) < 2) goto LAB_00e93e7a;
          if (uVar31 != 10) {
            return 0;
          }
        }
        else if (((iVar21 - 0x2028U & 0xffff) < 2) || (uVar31 == 0x85)) {
LAB_00e93e7a:
          if (param_5[0x21] != 0) {
            return 0;
          }
        }
        else {
          if (uVar31 != 0xd) {
            return 0;
          }
          if ((ppppppuVar24 < (undefined8 ******)*puVar3) &&
             (*(ushort *)((longlong)local_1e8 + 2) == 10)) {
            ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
          }
        }
        local_1e8 = ppppppuVar24;
        iVar20 = iVar20 + 1;
        ppppppuVar27 = local_1e8;
      } while (iVar20 < (int)uVar18);
      break;
    case 0xc:
      iVar20 = 0;
      do {
        if ((undefined8 ******)*puVar3 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        uVar31 = *(ushort *)local_1e8;
        if ((short)uVar31 < 0x2000) {
          if ((short)uVar31 < 0xa0) {
            if ((uVar31 == 9) || (uVar31 == 0x20)) goto LAB_00e9f470;
          }
          else if ((uVar31 == 0xa0) || ((uVar31 == 0x1680 || (uVar31 == 0x180e))))
          goto LAB_00e9f470;
        }
        else if ((short)uVar31 < 0x202f) {
          if (((int)(short)uVar31 - 0x2000U & 0xffff) < 0xb) goto LAB_00e9f470;
        }
        else if (((uVar31 == 0x202f) || (uVar31 == 0x205f)) || (uVar31 == 0x3000))
        goto LAB_00e9f470;
        local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
        iVar20 = iVar20 + 1;
        ppppppuVar27 = local_1e8;
      } while (iVar20 < (int)uVar18);
      break;
    case 0xd:
      iVar20 = 0;
      do {
        if ((undefined8 ******)*puVar3 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        uVar31 = *(ushort *)local_1e8;
        if ((short)uVar31 < 0x2000) {
          if ((short)uVar31 < 0xa0) {
            if ((uVar31 != 9) && (uVar31 != 0x20)) goto LAB_00e9f470;
          }
          else if ((uVar31 != 0xa0) && ((uVar31 != 0x1680 && (uVar31 != 0x180e))))
          goto LAB_00e9f470;
        }
        else if ((short)uVar31 < 0x202f) {
          if (10 < ((int)(short)uVar31 - 0x2000U & 0xffff)) goto LAB_00e9f470;
        }
        else if (((uVar31 != 0x202f) && (uVar31 != 0x3000)) && (uVar31 != 0x205f))
        goto LAB_00e9f470;
        local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
        iVar20 = iVar20 + 1;
        ppppppuVar27 = local_1e8;
      } while (iVar20 < (int)uVar18);
      break;
    case 0xe:
      iVar20 = 0;
      do {
        if ((undefined8 ******)*puVar3 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        uVar31 = *(ushort *)local_1e8;
        if ((((ushort)(uVar31 - 10) < 4) || ((ushort)(uVar31 + 0xdfd8) < 2)) || (uVar31 == 0x85))
        goto LAB_00e9f470;
        local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
        iVar20 = iVar20 + 1;
        ppppppuVar27 = local_1e8;
      } while (iVar20 < (int)uVar18);
      break;
    case 0xf:
      iVar20 = 0;
      do {
        if ((undefined8 ******)*puVar3 <= local_1e8) {
          uVar18 = *puVar5;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
          *puVar23 = 1;
          goto joined_r0x00e9efee;
        }
        uVar31 = *(ushort *)local_1e8;
        if (((3 < (ushort)(uVar31 - 10)) && (1 < (ushort)(uVar31 + 0xdfd8))) && (uVar31 != 0x85))
        goto LAB_00e9f470;
        local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
        iVar20 = iVar20 + 1;
        ppppppuVar27 = local_1e8;
      } while (iVar20 < (int)uVar18);
    }
LAB_00e940b4:
    uVar15 = local_198 - uVar18;
    ppppppuVar24 = ppppppuVar27;
    if (uVar15 == 0) goto LAB_00e95c90;
    if (local_160 == 0) {
      if (-1 < (int)uVar17) {
        switch(uVar17) {
        case 0:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar24) goto LAB_00e94ca7;
              if (uVar22 == 0) {
                lVar26 = 1;
              }
              else {
                lVar26 = (ulonglong)(((ulonglong)*ppppppuVar24 & 0xfc00) == 0xd800) + 1;
              }
              if (local_17c != 0) break;
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 1:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar24) goto LAB_00e94ca7;
              uVar14 = *(ushort *)ppppppuVar24;
              uVar17 = (uint)uVar14;
              lVar26 = 1;
              if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
                uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
                lVar26 = 2;
              }
              uVar15 = 0;
              if ((byte)((&DAT_01ee2141)
                         [(ulonglong)
                          *(ushort *)
                           (&DAT_01ee59c0 +
                           ((longlong)(int)(uVar17 % 0x80) +
                           (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar17 >> 7] * 0x80) * 2) * 8] - 5)
                  < 5) {
                uVar15 = *(uint *)(&DAT_01ee13f0 +
                                  (longlong)
                                  (char)((&DAT_01ee2141)
                                         [(ulonglong)
                                          *(ushort *)
                                           (&DAT_01ee59c0 +
                                           ((longlong)(int)(uVar17 % 0x80) +
                                           (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar17 >> 7] * 0x80
                                           ) * 2) * 8] - 5) * 4);
              }
              if (local_17c == uVar15) break;
              uVar18 = uVar18 + 1;
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 2:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar24) goto LAB_00e94ca7;
              uVar14 = *(ushort *)ppppppuVar24;
              uVar17 = (uint)uVar14;
              lVar26 = 1;
              if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
                uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
                lVar26 = 2;
              }
              if (local_17c ==
                  (*(uint *)(&DAT_01ee1630 +
                            (ulonglong)
                            (byte)(&DAT_01ee2141)
                                  [(ulonglong)
                                   *(ushort *)
                                    (&DAT_01ee59c0 +
                                    ((longlong)(int)(uVar17 % 0x80) +
                                    (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar17 >> 7] * 0x80) * 2)
                                   * 8] * 4) == local_16c)) break;
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 3:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar24) goto LAB_00e94ca7;
              uVar14 = *(ushort *)ppppppuVar24;
              uVar17 = (uint)uVar14;
              lVar26 = 1;
              if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
                uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
                lVar26 = 2;
              }
              if (local_17c ==
                  (local_16c ==
                  (byte)(&DAT_01ee2141)
                        [(ulonglong)
                         *(ushort *)
                          (&DAT_01ee59c0 +
                          ((longlong)(int)(uVar17 % 0x80) +
                          (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar17 >> 7] * 0x80) * 2) * 8]))
              break;
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 4:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar24) goto LAB_00e94ca7;
              uVar14 = *(ushort *)ppppppuVar24;
              uVar17 = (uint)uVar14;
              lVar26 = 1;
              if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
                uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
                lVar26 = 2;
              }
              if (local_17c ==
                  (local_16c ==
                  (byte)(&DAT_01ee2140)
                        [(ulonglong)
                         *(ushort *)
                          (&DAT_01ee59c0 +
                          ((longlong)(int)(uVar17 % 0x80) +
                          (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar17 >> 7] * 0x80) * 2) * 8]))
              break;
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 5:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar24) goto LAB_00e94ca7;
              uVar14 = *(ushort *)ppppppuVar24;
              uVar17 = (uint)uVar14;
              lVar26 = 1;
              if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
                uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
                lVar26 = 2;
              }
              if (local_17c ==
                  ((*(uint *)(&DAT_01ee1630 +
                             (ulonglong)
                             (byte)(&DAT_01ee2141)
                                   [(ulonglong)
                                    *(ushort *)
                                     (&DAT_01ee59c0 +
                                     ((longlong)(int)(uVar17 % 0x80) +
                                     (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar17 >> 7] * 0x80) * 2)
                                    * 8] * 4) | 2) == 3)) break;
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 6:
        case 7:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar24) goto LAB_00e94ca7;
              uVar14 = *(ushort *)ppppppuVar24;
              lVar26 = 1;
              uVar17 = (uint)uVar14;
              if ((uVar22 != 0) && (uVar17 = (uint)uVar14, (uVar14 & 0xfc00) == 0xd800)) {
                uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
                lVar26 = 2;
              }
              if (uVar17 < 0x180e) {
                if (uVar17 < 0x85) {
                  if ((0x20 < uVar17) || ((0x100003e00U >> ((ulonglong)uVar17 & 0x3f) & 1) == 0))
                  goto switchD_00e94198_caseD_200b;
                }
                else if (((uVar17 != 0x85) && (uVar17 != 0xa0)) && (uVar17 != 0x1680))
                goto switchD_00e94198_caseD_200b;
                goto switchD_00e94198_caseD_2000;
              }
              switch(uVar17) {
              case 0x2000:
              case 0x2001:
              case 0x2002:
              case 0x2003:
              case 0x2004:
              case 0x2005:
              case 0x2006:
              case 0x2007:
              case 0x2008:
              case 0x2009:
              case 0x200a:
              case 0x2028:
              case 0x2029:
              case 0x202f:
              case 0x205f:
                goto switchD_00e94198_caseD_2000;
              case 0x200b:
              case 0x200c:
              case 0x200d:
              case 0x200e:
              case 0x200f:
              case 0x2010:
              case 0x2011:
              case 0x2012:
              case 0x2013:
              case 0x2014:
              case 0x2015:
              case 0x2016:
              case 0x2017:
              case 0x2018:
              case 0x2019:
              case 0x201a:
              case 0x201b:
              case 0x201c:
              case 0x201d:
              case 0x201e:
              case 0x201f:
              case 0x2020:
              case 0x2021:
              case 0x2022:
              case 0x2023:
              case 0x2024:
              case 0x2025:
              case 0x2026:
              case 0x2027:
              case 0x202a:
              case 0x202b:
              case 0x202c:
              case 0x202d:
              case 0x202e:
              case 0x2030:
              case 0x2031:
              case 0x2032:
              case 0x2033:
              case 0x2034:
              case 0x2035:
              case 0x2036:
              case 0x2037:
              case 0x2038:
              case 0x2039:
              case 0x203a:
              case 0x203b:
              case 0x203c:
              case 0x203d:
              case 0x203e:
              case 0x203f:
              case 0x2040:
              case 0x2041:
              case 0x2042:
              case 0x2043:
              case 0x2044:
              case 0x2045:
              case 0x2046:
              case 0x2047:
              case 0x2048:
              case 0x2049:
              case 0x204a:
              case 0x204b:
              case 0x204c:
              case 0x204d:
              case 0x204e:
              case 0x204f:
              case 0x2050:
              case 0x2051:
              case 0x2052:
              case 0x2053:
              case 0x2054:
              case 0x2055:
              case 0x2056:
              case 0x2057:
              case 0x2058:
              case 0x2059:
              case 0x205a:
              case 0x205b:
              case 0x205c:
              case 0x205d:
              case 0x205e:
switchD_00e94198_caseD_200b:
                if (local_17c !=
                    (*(int *)(&DAT_01ee1630 +
                             (ulonglong)
                             (byte)(&DAT_01ee2141)
                                   [(ulonglong)
                                    *(ushort *)
                                     (&DAT_01ee59c0 +
                                     ((longlong)(int)(uVar17 % 0x80) +
                                     (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar17 >> 7] * 0x80) * 2)
                                    * 8] * 4) == 6)) goto LAB_00e941c2;
                goto LAB_00e94cd0;
              }
              if ((uVar17 != 0x3000) && (uVar17 != 0x180e)) goto switchD_00e94198_caseD_200b;
switchD_00e94198_caseD_2000:
              if (local_17c != 0) break;
LAB_00e941c2:
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 8:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar24) goto LAB_00e94ca7;
              uVar14 = *(ushort *)ppppppuVar24;
              uVar17 = (uint)uVar14;
              lVar26 = 1;
              if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
                uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
                lVar26 = 2;
              }
              if (local_17c ==
                  (uVar17 == 0x5f ||
                  (*(uint *)(&DAT_01ee1630 +
                            (ulonglong)
                            (byte)(&DAT_01ee2141)
                                  [(ulonglong)
                                   *(ushort *)
                                    (&DAT_01ee59c0 +
                                    ((longlong)(int)(uVar17 % 0x80) +
                                    (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar17 >> 7] * 0x80) * 2)
                                   * 8] * 4) | 2) == 3)) break;
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 9:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar24) goto LAB_00e94ca7;
              uVar14 = *(ushort *)ppppppuVar24;
              uVar17 = (uint)uVar14;
              lVar26 = 1;
              if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
                uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
                lVar26 = 2;
              }
              uVar15 = *(uint *)(&DAT_01ee2000 + (ulonglong)local_16c * 4);
              puVar32 = (uint *)(&DAT_01ee2004 + (ulonglong)local_16c * 4);
              while (uVar15 <= uVar17) {
                if (uVar17 == uVar15) {
                  if (local_17c != 0) goto LAB_00e94cd0;
                  goto LAB_00e94be4;
                }
                uVar15 = *puVar32;
                puVar32 = puVar32 + 1;
              }
              if (local_17c == 0) break;
LAB_00e94be4:
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 10:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= ppppppuVar24) goto LAB_00e94ca7;
              uVar14 = *(ushort *)ppppppuVar24;
              lVar26 = 1;
              uVar17 = (uint)uVar14;
              if ((uVar22 != 0) && (uVar17 = (uint)uVar14, (uVar14 & 0xfc00) == 0xd800)) {
                uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
                lVar26 = 2;
              }
              if ((0x3c < uVar17 - 0x24) ||
                 (uVar15 = 1, (0x1000000010000001U >> ((ulonglong)(uVar17 - 0x24) & 0x3f) & 1) == 0)
                 ) {
                uVar15 = (uint)(0xdfff < uVar17 || uVar17 - 0xa0 < 0xd760);
              }
              if (local_17c == uVar15) break;
              uVar18 = uVar18 + 1;
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        default:
          goto switchD_00e95ccd_caseD_9d;
        }
        goto LAB_00e94cd0;
      }
      if (uVar14 != 0x16) {
        local_1e8 = ppppppuVar27;
        if (uVar22 == 0) {
          switch(uVar14 - 6) {
          case 0:
            if ((int)uVar18 < (int)local_198) {
              do {
                if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95ad4;
                if (((ulonglong)*(ushort *)local_1e8 < 0x100) &&
                   (ppppppuVar24 = local_1e8,
                   (*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 4) != 0))
                break;
                local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
                uVar18 = uVar18 + 1;
                ppppppuVar24 = local_1e8;
              } while ((int)uVar18 < (int)local_198);
            }
            break;
          case 1:
            if ((int)uVar18 < (int)local_198) {
              do {
                if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95ad4;
                ppppppuVar24 = local_1e8;
                if ((0xff < (ulonglong)*(ushort *)local_1e8) ||
                   ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 4) == 0))
                break;
                local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
                uVar18 = uVar18 + 1;
                ppppppuVar24 = local_1e8;
              } while ((int)uVar18 < (int)local_198);
            }
            break;
          case 2:
            if ((int)uVar18 < (int)local_198) {
              do {
                if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95ad4;
                if (((ulonglong)*(ushort *)local_1e8 < 0x100) &&
                   (ppppppuVar24 = local_1e8,
                   (*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 1) != 0))
                break;
                local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
                uVar18 = uVar18 + 1;
                ppppppuVar24 = local_1e8;
              } while ((int)uVar18 < (int)local_198);
            }
            break;
          case 3:
            if ((int)uVar18 < (int)local_198) {
              do {
                if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95ad4;
                ppppppuVar24 = local_1e8;
                if ((0xff < (ulonglong)*(ushort *)local_1e8) ||
                   ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 1) == 0))
                break;
                local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
                uVar18 = uVar18 + 1;
                ppppppuVar24 = local_1e8;
              } while ((int)uVar18 < (int)local_198);
            }
            break;
          case 4:
            if ((int)uVar18 < (int)local_198) {
              do {
                if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95ad4;
                if (((ulonglong)*(ushort *)local_1e8 < 0x100) &&
                   (ppppppuVar24 = local_1e8,
                   (*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 0x10) != 0))
                break;
                local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
                uVar18 = uVar18 + 1;
                ppppppuVar24 = local_1e8;
              } while ((int)uVar18 < (int)local_198);
            }
            break;
          case 5:
            if ((int)uVar18 < (int)local_198) {
              do {
                if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95ad4;
                ppppppuVar24 = local_1e8;
                if ((0xff < (ulonglong)*(ushort *)local_1e8) ||
                   ((*(byte *)(*(longlong *)puVar2 + (ulonglong)*(ushort *)local_1e8) & 0x10) == 0))
                break;
                local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
                uVar18 = uVar18 + 1;
                ppppppuVar24 = local_1e8;
              } while ((int)uVar18 < (int)local_198);
            }
            break;
          case 6:
            if ((int)uVar18 < (int)local_198) {
              while (ppppppuVar24 = local_1e8, local_1e8 < (undefined8 ******)*puVar3) {
                if (param_5[8] == 0) {
                  if (((local_1e8 <=
                        (undefined8 ******)((longlong)*puVar3 + (longlong)(int)*puVar1 * -2)) &&
                      (*(ushort *)local_1e8 == (ushort)param_5[0x10])) &&
                     ((*puVar1 == 1 ||
                      (*(ushort *)((longlong)local_1e8 + 2) == *(ushort *)((longlong)param_5 + 0x42)
                      )))) goto LAB_00e95c33;
                }
                else {
                  iVar20 = FUN_00ea10c0(local_1e8);
                  if (iVar20 != 0) goto LAB_00e95c33;
                }
                ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
                if (((((*puVar5 != 0) && ((undefined8 ******)*puVar3 <= ppppppuVar24)) &&
                     (param_5[8] == 0)) &&
                    ((*puVar1 == 2 && (*(ushort *)local_1e8 == (ushort)param_5[0x10])))) &&
                   (*puVar23 = 1, 1 < (int)*puVar5)) {
                  return -0xc;
                }
                uVar18 = uVar18 + 1;
                local_1e8 = ppppppuVar24;
                if ((int)local_198 <= (int)uVar18) goto LAB_00e95c33;
              }
              uVar18 = *puVar5;
              if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < local_1e8)) {
                *puVar23 = 1;
                goto joined_r0x00e95c27;
              }
            }
            break;
          case 7:
          case 8:
            local_1e8 = (undefined8 ******)*puVar3;
            if (uVar15 <= (uint)((ulonglong)((longlong)local_1e8 - (longlong)ppppppuVar27) >> 1)) {
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + (ulonglong)uVar15 * 2);
              break;
            }
            uVar18 = *puVar5;
            ppppppuVar24 = local_1e8;
            if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) break;
            goto LAB_00e95af6;
          default:
            return -0xe;
          case 0xb:
            if ((int)uVar18 < (int)local_198) {
              do {
                if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95ad4;
                uVar31 = *(ushort *)local_1e8;
                if (uVar31 == 10) {
LAB_00e95aba:
                  ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
                }
                else {
                  if (uVar31 != 0xd) {
                    ppppppuVar24 = local_1e8;
                    if ((param_5[0x21] == 0) &&
                       ((((ushort)(uVar31 - 0xb) < 2 || ((ushort)(uVar31 + 0xdfd8) < 2)) ||
                        (uVar31 == 0x85)))) goto LAB_00e95aba;
                    break;
                  }
                  ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
                  if ((undefined8 ******)*puVar3 <= ppppppuVar24) break;
                  if (*(ushort *)((longlong)local_1e8 + 2) == 10) {
                    ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
                  }
                }
                uVar18 = uVar18 + 1;
                local_1e8 = ppppppuVar24;
              } while ((int)uVar18 < (int)local_198);
            }
            break;
          case 0xc:
            if ((int)uVar18 < (int)local_198) {
              do {
                if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95ad4;
                uVar31 = *(ushort *)local_1e8;
                ppppppuVar24 = local_1e8;
                if ((short)uVar31 < 0x2000) {
                  if ((short)uVar31 < 0xa0) {
                    if ((uVar31 == 9) || (uVar31 == 0x20)) break;
                  }
                  else if ((uVar31 == 0xa0) || ((uVar31 == 0x1680 || (uVar31 == 0x180e)))) break;
                }
                else if ((short)uVar31 < 0x202f) {
                  if (((int)(short)uVar31 - 0x2000U & 0xffff) < 0xb) break;
                }
                else if (((uVar31 == 0x202f) || (uVar31 == 0x205f)) || (uVar31 == 0x3000)) break;
                local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
                uVar18 = uVar18 + 1;
                ppppppuVar24 = local_1e8;
              } while ((int)uVar18 < (int)local_198);
            }
            break;
          case 0xd:
            if ((int)uVar18 < (int)local_198) {
              do {
                if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95ad4;
                uVar31 = *(ushort *)local_1e8;
                ppppppuVar24 = local_1e8;
                if ((short)uVar31 < 0x2000) {
                  if ((short)uVar31 < 0xa0) {
                    if ((uVar31 != 9) && (uVar31 != 0x20)) break;
                  }
                  else if ((uVar31 != 0xa0) && ((uVar31 != 0x1680 && (uVar31 != 0x180e)))) break;
                }
                else if ((short)uVar31 < 0x202f) {
                  if (10 < ((int)(short)uVar31 - 0x2000U & 0xffff)) break;
                }
                else if (((uVar31 != 0x202f) && (uVar31 != 0x3000)) && (uVar31 != 0x205f)) break;
                local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
                uVar18 = uVar18 + 1;
                ppppppuVar24 = local_1e8;
              } while ((int)uVar18 < (int)local_198);
            }
            break;
          case 0xe:
            if ((int)uVar18 < (int)local_198) {
              do {
                if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95ad4;
                uVar31 = *(ushort *)local_1e8;
                ppppppuVar24 = local_1e8;
                if ((((ushort)(uVar31 - 10) < 4) || ((ushort)(uVar31 + 0xdfd8) < 2)) ||
                   (uVar31 == 0x85)) break;
                local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
                uVar18 = uVar18 + 1;
                ppppppuVar24 = local_1e8;
              } while ((int)uVar18 < (int)local_198);
            }
            break;
          case 0xf:
            if ((int)uVar18 < (int)local_198) {
              do {
                if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95ad4;
                uVar31 = *(ushort *)local_1e8;
                if (((3 < (ushort)(uVar31 - 10)) && (1 < (ushort)(uVar31 + 0xdfd8))) &&
                   (ppppppuVar24 = local_1e8, uVar31 != 0x85)) break;
                local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
                uVar18 = uVar18 + 1;
                ppppppuVar24 = local_1e8;
              } while ((int)uVar18 < (int)local_198);
            }
          }
          goto LAB_00e95c33;
        }
        switch(uVar14 - 6) {
        case 0:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95397;
              uVar31 = *(ushort *)local_1e8;
              if ((uVar31 & 0xfc00) == 0xd800) {
                lVar26 = 2;
              }
              else {
                if ((uVar31 < 0x100) &&
                   (ppppppuVar24 = local_1e8,
                   (*(byte *)(*(longlong *)puVar2 + (ulonglong)uVar31) & 4) != 0)) break;
                lVar26 = 1;
              }
              local_1e8 = (undefined8 ******)((longlong)local_1e8 + lVar26 * 2);
              uVar18 = uVar18 + 1;
              ppppppuVar24 = local_1e8;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 1:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95397;
              uVar31 = *(ushort *)local_1e8;
              ppppppuVar24 = local_1e8;
              if (((0xff < (ulonglong)uVar31) || ((uVar31 & 0xfc00) == 0xd800)) ||
                 ((*(byte *)(*(longlong *)puVar2 + (ulonglong)uVar31) & 4) == 0)) break;
              local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
              uVar18 = uVar18 + 1;
              ppppppuVar24 = local_1e8;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 2:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95397;
              uVar31 = *(ushort *)local_1e8;
              if ((uVar31 & 0xfc00) == 0xd800) {
                lVar26 = 2;
              }
              else {
                if ((uVar31 < 0x100) &&
                   (ppppppuVar24 = local_1e8,
                   (*(byte *)(*(longlong *)puVar2 + (ulonglong)uVar31) & 1) != 0)) break;
                lVar26 = 1;
              }
              local_1e8 = (undefined8 ******)((longlong)local_1e8 + lVar26 * 2);
              uVar18 = uVar18 + 1;
              ppppppuVar24 = local_1e8;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 3:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95397;
              uVar31 = *(ushort *)local_1e8;
              ppppppuVar24 = local_1e8;
              if (((0xff < (ulonglong)uVar31) || ((uVar31 & 0xfc00) == 0xd800)) ||
                 ((*(byte *)(*(longlong *)puVar2 + (ulonglong)uVar31) & 1) == 0)) break;
              local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
              uVar18 = uVar18 + 1;
              ppppppuVar24 = local_1e8;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 4:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95397;
              uVar31 = *(ushort *)local_1e8;
              if ((uVar31 & 0xfc00) == 0xd800) {
                lVar26 = 2;
              }
              else {
                if ((uVar31 < 0x100) &&
                   (ppppppuVar24 = local_1e8,
                   (*(byte *)(*(longlong *)puVar2 + (ulonglong)uVar31) & 0x10) != 0)) break;
                lVar26 = 1;
              }
              local_1e8 = (undefined8 ******)((longlong)local_1e8 + lVar26 * 2);
              uVar18 = uVar18 + 1;
              ppppppuVar24 = local_1e8;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 5:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95397;
              uVar31 = *(ushort *)local_1e8;
              ppppppuVar24 = local_1e8;
              if (((0xff < (ulonglong)uVar31) || ((uVar31 & 0xfc00) == 0xd800)) ||
                 ((*(byte *)(*(longlong *)puVar2 + (ulonglong)uVar31) & 0x10) == 0)) break;
              local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
              uVar18 = uVar18 + 1;
              ppppppuVar24 = local_1e8;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 6:
          if ((int)uVar18 < (int)local_198) {
            while (ppppppuVar24 = local_1e8, local_1e8 < (undefined8 ******)*puVar3) {
              if (param_5[8] == 0) {
                if (((local_1e8 <=
                      (undefined8 ******)((longlong)*puVar3 + (longlong)(int)*puVar1 * -2)) &&
                    (*(ushort *)local_1e8 == (ushort)param_5[0x10])) &&
                   ((*puVar1 == 1 ||
                    (*(ushort *)((longlong)local_1e8 + 2) == *(ushort *)((longlong)param_5 + 0x42)))
                   )) goto LAB_00e95bdf;
              }
              else {
                iVar20 = FUN_00ea10c0(local_1e8);
                if (iVar20 != 0) goto LAB_00e95bdf;
              }
              if (*puVar5 == 0) {
                ppppppuVar25 = (undefined8 ******)*puVar3;
              }
              else {
                ppppppuVar25 = (undefined8 ******)*puVar3;
                if ((((ppppppuVar25 <= (undefined8 ******)((longlong)local_1e8 + 2U)) &&
                     (param_5[8] == 0)) && (*puVar1 == 2)) &&
                   ((*(ushort *)local_1e8 == (ushort)param_5[0x10] &&
                    (*puVar23 = 1, 1 < (int)*puVar5)))) {
                  return -0xc;
                }
              }
              ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
              if ((ppppppuVar24 < ppppppuVar25) &&
                 (((ulonglong)*local_1e8 & 0xfc000000) == 0xdc000000)) {
                ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
              }
              uVar18 = uVar18 + 1;
              local_1e8 = ppppppuVar24;
              if ((int)local_198 <= (int)uVar18) goto LAB_00e95bdf;
            }
            uVar18 = *puVar5;
            if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < local_1e8)) {
              *puVar23 = 1;
              goto joined_r0x00e95bd3;
            }
          }
          break;
        case 7:
          if (local_198 != 0x7fffffff) {
            if ((int)uVar18 < (int)local_198) {
              do {
                if ((undefined8 ******)*puVar3 <= local_1e8) {
                  uVar18 = *puVar5;
                  ppppppuVar24 = local_1e8;
                  if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < local_1e8)) {
                    *puVar23 = 1;
                    goto joined_r0x00e95bd3;
                  }
                  break;
                }
                ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
                if ((ppppppuVar24 < (undefined8 ******)*puVar3) &&
                   (((ulonglong)*local_1e8 & 0xfc000000) == 0xdc000000)) {
                  ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
                }
                local_1e8 = ppppppuVar24;
                uVar18 = uVar18 + 1;
                ppppppuVar24 = local_1e8;
              } while ((int)uVar18 < (int)local_198);
            }
            break;
          }
          local_1e8 = (undefined8 ******)*puVar3;
LAB_00e9527b:
          uVar18 = *puVar5;
          ppppppuVar24 = local_1e8;
          if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) break;
          goto LAB_00e953b9;
        case 8:
          local_1e8 = (undefined8 ******)*puVar3;
          if ((uint)((ulonglong)((longlong)local_1e8 - (longlong)ppppppuVar27) >> 1) < uVar15)
          goto LAB_00e9527b;
          ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + (ulonglong)uVar15 * 2);
          break;
        default:
          return -0xe;
        case 0xb:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95397;
              uVar31 = *(ushort *)local_1e8;
              uVar17 = (uint)uVar31;
              if ((uVar31 & 0xfc00) == 0xd800) {
                uVar17 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
                lVar26 = 2;
                if (uVar17 == 10) goto LAB_00e9537d;
LAB_00e9532d:
                if (uVar17 != 0xd) {
                  ppppppuVar24 = local_1e8;
                  if ((param_5[0x21] == 0) &&
                     (((uVar17 - 0xb < 2 || (uVar17 - 0x2028 < 2)) || (uVar17 == 0x85))))
                  goto LAB_00e9537d;
                  break;
                }
                ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 2);
                if ((undefined8 ******)*puVar3 <= ppppppuVar24) break;
                if (*(ushort *)((longlong)local_1e8 + 2) == 10) {
                  ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + 4);
                }
              }
              else {
                lVar26 = 1;
                if (uVar31 != 10) goto LAB_00e9532d;
LAB_00e9537d:
                ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + lVar26 * 2);
              }
              uVar18 = uVar18 + 1;
              local_1e8 = ppppppuVar24;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 0xc:
        case 0xd:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95397;
              uVar31 = *(ushort *)local_1e8;
              uVar17 = (uint)uVar31;
              if ((uVar31 & 0xfc00) == 0xd800) {
                uVar17 = (uVar31 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
                lVar26 = 2;
              }
              else {
                lVar26 = 1;
              }
              ppppppuVar24 = local_1e8;
              if (uVar17 < 0x2000) {
                if (uVar17 < 0xa0) {
                  if ((uVar17 == 9) || (uVar17 == 0x20)) goto LAB_00e944e7;
                }
                else if ((uVar17 == 0xa0) || ((uVar17 == 0x1680 || (uVar17 == 0x180e))))
                goto LAB_00e944e7;
LAB_00e9454f:
                if (uVar14 != 0x12) break;
              }
              else {
                if (0x202e < uVar17) {
                  if (((uVar17 == 0x202f) || (uVar17 == 0x205f)) || (uVar17 == 0x3000))
                  goto LAB_00e944e7;
                  goto LAB_00e9454f;
                }
                if (10 < uVar17 - 0x2000) goto LAB_00e9454f;
LAB_00e944e7:
                if (uVar14 == 0x12) break;
              }
              uVar18 = uVar18 + 1;
              local_1e8 = (undefined8 ******)((longlong)local_1e8 + lVar26 * 2);
              ppppppuVar24 = local_1e8;
            } while ((int)uVar18 < (int)local_198);
          }
          break;
        case 0xe:
        case 0xf:
          if ((int)uVar18 < (int)local_198) {
            do {
              if ((undefined8 ******)*puVar3 <= local_1e8) goto LAB_00e95397;
              uVar17 = (uint)*(ushort *)local_1e8;
              if ((uVar17 & 0xfc00) == 0xd800) {
                uVar17 = (*(ushort *)local_1e8 & 0x3ff) * 0x400 + 0x10000 +
                         (*(ushort *)((longlong)local_1e8 + 2) & 0x3ff);
                lVar26 = 2;
              }
              else {
                lVar26 = 1;
              }
              bVar40 = true;
              if (((3 < uVar17 - 10) && (1 < uVar17 - 0x2028)) && (uVar17 != 0x85)) {
                bVar40 = false;
              }
              ppppppuVar24 = local_1e8;
              if (bVar40 == (uVar14 == 0x14)) break;
              uVar18 = uVar18 + 1;
              local_1e8 = (undefined8 ******)((longlong)local_1e8 + lVar26 * 2);
              ppppppuVar24 = local_1e8;
            } while ((int)uVar18 < (int)local_198);
          }
        }
        goto LAB_00e95bdf;
      }
      for (; (int)uVar18 < (int)local_198; uVar18 = uVar18 + 1) {
        ppppppuVar25 = (undefined8 ******)*puVar3;
        if (ppppppuVar25 <= ppppppuVar24) {
          if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar24)) &&
             (*puVar23 = 1, 1 < (int)*puVar5)) {
            return -0xc;
          }
          break;
        }
        ppppppuVar38 = (undefined8 ******)((longlong)ppppppuVar24 + 2);
        uVar14 = *(ushort *)ppppppuVar24;
        uVar17 = (uint)uVar14;
        if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
          ppppppuVar38 = (undefined8 ******)((longlong)ppppppuVar24 + 4);
          uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
        }
        if (ppppppuVar38 < ppppppuVar25) {
          bVar6 = (&DAT_01ee2142)
                  [(ulonglong)
                   *(ushort *)
                    (&DAT_01ee59c0 +
                    ((longlong)(int)(uVar17 % 0x80) +
                    (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar17 >> 7] * 0x80) * 2) * 8];
          do {
            uVar29 = (ulonglong)bVar6;
            uVar14 = *(ushort *)ppppppuVar38;
            uVar17 = (uint)uVar14;
            lVar26 = 1;
            if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
              uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                       (*(ushort *)((longlong)ppppppuVar38 + 2) & 0x3ff);
              lVar26 = 2;
            }
            bVar6 = (&DAT_01ee2142)
                    [(ulonglong)
                     *(ushort *)
                      (&DAT_01ee59c0 +
                      ((longlong)(int)(uVar17 % 0x80) +
                      (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar17 >> 7] * 0x80) * 2) * 8];
            uVar17 = 1 << (bVar6 & 0x1f) & *(uint *)(&DAT_01ee16b0 + uVar29 * 4);
            if (uVar17 != 0) {
              ppppppuVar38 = (undefined8 ******)((longlong)ppppppuVar38 + lVar26 * 2);
            }
          } while ((ppppppuVar38 < ppppppuVar25) && (uVar17 != 0));
        }
        if ((ppppppuVar25 <= ppppppuVar38) &&
           (((*puVar5 != 0 && ((undefined8 ******)*puVar4 < ppppppuVar38)) &&
            (*puVar23 = 1, 1 < (int)*puVar5)))) {
          return -0xc;
        }
        ppppppuVar24 = ppppppuVar38;
      }
      if (!bVar39) goto joined_r0x00e9a6f6;
      goto LAB_00e95c90;
    }
    if ((int)uVar17 < 0) {
      puVar32 = param_5;
      iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (uVar14 == 0x16) goto joined_r0x00e9bfee;
      if (uVar22 == 0) {
        if (iVar20 != 0) {
          return iVar20;
        }
        iVar20 = uVar18 - 1;
        goto LAB_00e9d93b;
      }
      if (iVar20 != 0) {
        return iVar20;
      }
      iVar20 = uVar18 - 1;
      goto LAB_00e9c8d9;
    }
    switch(uVar17) {
    case 0:
      iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 != 0) {
        return iVar20;
      }
      iVar20 = uVar18 - 1;
      while( true ) {
        iVar20 = iVar20 + 1;
        if ((int)local_198 <= iVar20) {
          return 0;
        }
        if ((undefined8 ******)*puVar3 <= ppppppuVar27) break;
        ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
        if ((uVar22 != 0) && (((ulonglong)*ppppppuVar27 & 0xfc00) == 0xd800)) {
          ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
        }
        ppppppuVar27 = ppppppuVar24;
        if (local_17c != 0) {
          return 0;
        }
        iVar21 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1
                             );
        if (iVar21 != 0) {
          return iVar21;
        }
      }
      uVar18 = *puVar5;
      if ((uVar18 == 0) || (ppppppuVar27 <= (undefined8 ******)*puVar4)) break;
      *puVar23 = 1;
      goto joined_r0x00e9efee;
    case 1:
      iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 != 0) {
        return iVar20;
      }
      iVar20 = uVar18 - 1;
      while( true ) {
        iVar20 = iVar20 + 1;
        if ((int)local_198 <= iVar20) {
          return 0;
        }
        if ((undefined8 ******)*puVar3 <= ppppppuVar27) break;
        ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
        uVar14 = *(ushort *)ppppppuVar27;
        uVar18 = (uint)uVar14;
        if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
          ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
          uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)ppppppuVar27 + 2) & 0x3ff);
        }
        uVar17 = 0;
        if ((byte)((&DAT_01ee2141)
                   [(ulonglong)
                    *(ushort *)
                     (&DAT_01ee59c0 +
                     ((longlong)(int)(uVar18 % 0x80) +
                     (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8] - 5) < 5)
        {
          uVar17 = *(uint *)(&DAT_01ee13f0 +
                            (longlong)
                            (char)((&DAT_01ee2141)
                                   [(ulonglong)
                                    *(ushort *)
                                     (&DAT_01ee59c0 +
                                     ((longlong)(int)(uVar18 % 0x80) +
                                     (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2)
                                    * 8] - 5) * 4);
        }
        if (local_17c == uVar17) {
          return 0;
        }
        iVar21 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1
                             );
        ppppppuVar27 = ppppppuVar24;
        if (iVar21 != 0) {
          return iVar21;
        }
      }
      uVar18 = *puVar5;
      if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar27)) {
        *puVar23 = 1;
        goto joined_r0x00e9efee;
      }
      break;
    case 2:
      iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 != 0) {
        return iVar20;
      }
      iVar20 = uVar18 - 1;
      while( true ) {
        iVar20 = iVar20 + 1;
        if ((int)local_198 <= iVar20) {
          return 0;
        }
        if ((undefined8 ******)*puVar3 <= ppppppuVar27) break;
        ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
        uVar14 = *(ushort *)ppppppuVar27;
        uVar18 = (uint)uVar14;
        if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
          ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
          uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)ppppppuVar27 + 2) & 0x3ff);
        }
        if (local_17c ==
            (*(uint *)(&DAT_01ee1630 +
                      (ulonglong)
                      (byte)(&DAT_01ee2141)
                            [(ulonglong)
                             *(ushort *)
                              (&DAT_01ee59c0 +
                              ((longlong)(int)(uVar18 % 0x80) +
                              (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8] *
                      4) == local_16c)) {
          return 0;
        }
        iVar21 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1
                             );
        ppppppuVar27 = ppppppuVar24;
        if (iVar21 != 0) {
          return iVar21;
        }
      }
      uVar18 = *puVar5;
      if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar27)) {
        *puVar23 = 1;
        goto joined_r0x00e9efee;
      }
      break;
    case 3:
      iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 != 0) {
        return iVar20;
      }
      iVar20 = uVar18 - 1;
      while( true ) {
        iVar20 = iVar20 + 1;
        if ((int)local_198 <= iVar20) {
          return 0;
        }
        if ((undefined8 ******)*puVar3 <= ppppppuVar27) break;
        ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
        uVar14 = *(ushort *)ppppppuVar27;
        uVar18 = (uint)uVar14;
        if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
          ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
          uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)ppppppuVar27 + 2) & 0x3ff);
        }
        if (local_17c ==
            (local_16c ==
            (byte)(&DAT_01ee2141)
                  [(ulonglong)
                   *(ushort *)
                    (&DAT_01ee59c0 +
                    ((longlong)(int)(uVar18 % 0x80) +
                    (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8])) {
          return 0;
        }
        iVar21 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1
                             );
        ppppppuVar27 = ppppppuVar24;
        if (iVar21 != 0) {
          return iVar21;
        }
      }
      uVar18 = *puVar5;
      if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar27)) {
        *puVar23 = 1;
        goto joined_r0x00e9efee;
      }
      break;
    case 4:
      iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 != 0) {
        return iVar20;
      }
      iVar20 = uVar18 - 1;
      while( true ) {
        iVar20 = iVar20 + 1;
        if ((int)local_198 <= iVar20) {
          return 0;
        }
        if ((undefined8 ******)*puVar3 <= ppppppuVar27) break;
        ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
        uVar14 = *(ushort *)ppppppuVar27;
        uVar18 = (uint)uVar14;
        if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
          ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
          uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)ppppppuVar27 + 2) & 0x3ff);
        }
        if (local_17c ==
            (local_16c ==
            (byte)(&DAT_01ee2140)
                  [(ulonglong)
                   *(ushort *)
                    (&DAT_01ee59c0 +
                    ((longlong)(int)(uVar18 % 0x80) +
                    (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8])) {
          return 0;
        }
        iVar21 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1
                             );
        ppppppuVar27 = ppppppuVar24;
        if (iVar21 != 0) {
          return iVar21;
        }
      }
      uVar18 = *puVar5;
      if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar27)) {
        *puVar23 = 1;
        goto joined_r0x00e9efee;
      }
      break;
    case 5:
      iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 != 0) {
        return iVar20;
      }
      iVar20 = uVar18 - 1;
      while( true ) {
        iVar20 = iVar20 + 1;
        if ((int)local_198 <= iVar20) {
          return 0;
        }
        if ((undefined8 ******)*puVar3 <= ppppppuVar27) break;
        ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
        uVar14 = *(ushort *)ppppppuVar27;
        uVar18 = (uint)uVar14;
        if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
          ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
          uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)ppppppuVar27 + 2) & 0x3ff);
        }
        if (local_17c ==
            ((*(uint *)(&DAT_01ee1630 +
                       (ulonglong)
                       (byte)(&DAT_01ee2141)
                             [(ulonglong)
                              *(ushort *)
                               (&DAT_01ee59c0 +
                               ((longlong)(int)(uVar18 % 0x80) +
                               (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8]
                       * 4) | 2) == 3)) {
          return 0;
        }
        iVar21 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1
                             );
        ppppppuVar27 = ppppppuVar24;
        if (iVar21 != 0) {
          return iVar21;
        }
      }
      uVar18 = *puVar5;
      if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar27)) {
        *puVar23 = 1;
        goto joined_r0x00e9efee;
      }
      break;
    case 6:
    case 7:
      iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 != 0) {
        return iVar20;
      }
      iVar20 = uVar18 - 1;
      goto LAB_00e9b7f4;
    case 8:
      iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 != 0) {
        return iVar20;
      }
      iVar20 = uVar18 - 1;
      while( true ) {
        iVar20 = iVar20 + 1;
        if ((int)local_198 <= iVar20) {
          return 0;
        }
        if ((undefined8 ******)*puVar3 <= ppppppuVar27) break;
        ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
        uVar14 = *(ushort *)ppppppuVar27;
        uVar18 = (uint)uVar14;
        if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
          ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
          uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)ppppppuVar27 + 2) & 0x3ff);
        }
        if (local_17c ==
            (uVar18 == 0x5f ||
            (*(uint *)(&DAT_01ee1630 +
                      (ulonglong)
                      (byte)(&DAT_01ee2141)
                            [(ulonglong)
                             *(ushort *)
                              (&DAT_01ee59c0 +
                              ((longlong)(int)(uVar18 % 0x80) +
                              (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8] *
                      4) | 2) == 3)) {
          return 0;
        }
        iVar21 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1
                             );
        ppppppuVar27 = ppppppuVar24;
        if (iVar21 != 0) {
          return iVar21;
        }
      }
      uVar18 = *puVar5;
      if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar27)) {
        *puVar23 = 1;
        goto joined_r0x00e9efee;
      }
      break;
    case 9:
      iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 != 0) {
        return iVar20;
      }
      goto LAB_00e9eaa0;
    case 10:
      iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 != 0) {
        return iVar20;
      }
      iVar20 = uVar18 - 1;
      while( true ) {
        iVar20 = iVar20 + 1;
        if ((int)local_198 <= iVar20) {
          return 0;
        }
        if ((undefined8 ******)*puVar3 <= ppppppuVar27) break;
        ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
        uVar14 = *(ushort *)ppppppuVar27;
        uVar18 = (uint)uVar14;
        if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
          ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
          uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)ppppppuVar27 + 2) & 0x3ff);
        }
        if ((0x3c < uVar18 - 0x24) ||
           (bVar39 = true, (0x1000000010000001U >> ((ulonglong)(uVar18 - 0x24) & 0x3f) & 1) == 0)) {
          bVar39 = 0xdfff < uVar18 || uVar18 - 0xa0 < 0xd760;
        }
        if (local_17c == bVar39) {
          return 0;
        }
        iVar21 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1
                             );
        ppppppuVar27 = ppppppuVar24;
        if (iVar21 != 0) {
          return iVar21;
        }
      }
      uVar18 = *puVar5;
      if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar27)) {
        *puVar23 = 1;
        goto joined_r0x00e9efee;
      }
      break;
    default:
switchD_00e95ccd_caseD_9d:
      return -0xe;
    }
    goto LAB_00e9f470;
  default:
    return -5;
  case 0x6e:
  case 0x6f:
    uVar17 = (uint)puVar35[0x11];
    uVar18 = uVar17 - 0x62;
    uVar29 = (ulonglong)uVar18;
    if ((uVar18 & 0xffff) < 0xc) {
      if ((0x73fU >> (uVar18 & 0x1f) & 1) == 0) {
        uVar15 = (uint)(uVar17 == 0x69);
        bVar39 = uVar17 == 0x6d;
        uVar17 = (uint)puVar35[0x12];
        uVar18 = 0x7fffffff;
        if (puVar35[0x13] != 0) {
          uVar18 = (uint)puVar35[0x13];
        }
        param_2 = puVar35 + 0x14;
        goto joined_r0x00e92dd0;
      }
      param_2 = puVar35 + 0x12;
      bVar39 = 7 < uVar18;
      uVar15 = 0;
      if (uVar18 < 8) {
        uVar15 = uVar17 & 1;
      }
      uVar17 = (uint)(char)(&DAT_01ee13d0)[uVar29];
      uVar18 = 0x7fffffff;
      if ((0x3cfUL >> (uVar29 & 0x3f) & 1) == 0) {
        uVar18 = (int)(char)(&DAT_01ee13db)[uVar29];
      }
      if (uVar22 == 0) goto LAB_00e92e78;
LAB_00e92dd6:
      if (0 < (int)uVar17) {
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if (uVar18 == 0) {
              return 0;
            }
            if (local_1e8 <= (undefined8 ******)*puVar4) {
              return 0;
            }
            *puVar23 = 1;
            goto joined_r0x00e9f090;
          }
          uVar31 = *(ushort *)local_1e8;
          if ((uVar31 & 0xfc00) == 0xd800) {
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
LAB_00e92e15:
            if (uVar14 == 0x6e) {
              return 0;
            }
          }
          else {
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
            if (0xff < uVar31) goto LAB_00e92e15;
            if ((*(byte *)((longlong)puVar35 + (ulonglong)(uVar31 >> 3) + 2) >> ((byte)uVar31 & 7) &
                1) == 0) {
              return 0;
            }
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)uVar17);
      }
    }
    else {
      param_2 = puVar35 + 0x11;
      bVar39 = false;
      uVar17 = 1;
      uVar18 = 1;
      uVar15 = 0;
joined_r0x00e92dd0:
      if (uVar22 != 0) goto LAB_00e92dd6;
LAB_00e92e78:
      if (0 < (int)uVar17) {
        iVar20 = 0;
        do {
          if ((undefined8 ******)*puVar3 <= local_1e8) {
            uVar18 = *puVar5;
            if (uVar18 == 0) {
              return 0;
            }
            if (local_1e8 <= (undefined8 ******)*puVar4) {
              return 0;
            }
            *puVar23 = 1;
            goto joined_r0x00e9f090;
          }
          uVar31 = *(ushort *)local_1e8;
          if (uVar31 < 0x100) {
            if ((*(byte *)((longlong)puVar35 + (ulonglong)(uVar31 >> 3) + 2) >> ((byte)uVar31 & 7) &
                1) == 0) {
              return 0;
            }
          }
          else if (uVar14 == 0x6e) {
            return 0;
          }
          local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
          iVar20 = iVar20 + 1;
        } while (iVar20 < (int)uVar17);
      }
    }
    ppppppuVar24 = local_1e8;
    if (uVar17 != uVar18) {
      if (uVar15 != 0) {
        iVar20 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
        if (uVar22 == 0) goto joined_r0x00e9df4f;
        if (iVar20 != 0) {
          return iVar20;
        }
        iVar20 = uVar17 - 1;
        goto LAB_00e9d084;
      }
      if (uVar22 == 0) {
        if ((int)uVar17 < (int)uVar18) {
          do {
            if ((undefined8 ******)*puVar3 <= ppppppuVar24) {
              if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar24)) &&
                 (*puVar23 = 1, 1 < (int)*puVar5)) {
                return -0xc;
              }
              break;
            }
            uVar31 = *(ushort *)ppppppuVar24;
            if (uVar31 < 0x100) {
              if ((*(byte *)((longlong)puVar35 + (ulonglong)(uVar31 >> 3) + 2) >> ((byte)uVar31 & 7)
                  & 1) == 0) break;
            }
            else if (uVar14 == 0x6e) break;
            ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + 2);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)uVar18);
        }
        if (!bVar39) {
          while( true ) {
            if (ppppppuVar24 < local_1e8) {
              return 0;
            }
            iVar20 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,
                                  param_7 + 1);
            if (iVar20 != 0) break;
            ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + -2);
          }
          return iVar20;
        }
      }
      else {
        if ((int)uVar17 < (int)uVar18) {
          do {
            if ((undefined8 ******)*puVar3 <= ppppppuVar24) {
              if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar24)) &&
                 (*puVar23 = 1, 1 < (int)*puVar5)) {
                return -0xc;
              }
              break;
            }
            uVar31 = *(ushort *)ppppppuVar24;
            if ((uVar31 & 0xfc00) == 0xd800) {
              lVar26 = 2;
LAB_00e92f42:
              if (uVar14 == 0x6e) break;
            }
            else {
              if (0xff < uVar31) {
                lVar26 = 1;
                goto LAB_00e92f42;
              }
              if ((*(byte *)((longlong)puVar35 + (ulonglong)(uVar31 >> 3) + 2) >> ((byte)uVar31 & 7)
                  & 1) == 0) break;
              lVar26 = 1;
            }
            ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)uVar18);
        }
        if (!bVar39) {
          while( true ) {
            iVar20 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,
                                  param_7 + 1);
            if (iVar20 != 0) {
              return iVar20;
            }
            if (ppppppuVar24 <= local_1e8) break;
            if ((*(ushort *)((longlong)ppppppuVar24 + -2) & 0xfc00) == 0xdc00) {
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + -4);
            }
            else {
              ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + -2);
            }
          }
          return 0;
        }
      }
    }
    goto LAB_00e95c90;
  case 0x70:
    puVar37 = puVar35 + 2;
    param_2 = puVar35 + puVar35[1];
    uVar14 = puVar35[puVar35[1]];
    iVar20 = 0;
    uVar18 = uVar14 - 0x62;
    uVar29 = (ulonglong)uVar18;
    if ((uVar18 & 0xffff) < 0xc) {
      if ((0x73fU >> (uVar18 & 0x1f) & 1) == 0) {
        uVar31 = (ushort)(uVar14 == 0x69);
        bVar39 = uVar14 == 0x6d;
        puVar35 = param_2 + 1;
        uVar18 = (uint)*puVar35;
        uVar17 = 0x7fffffff;
        if (param_2[2] != 0) {
          uVar17 = (uint)param_2[2];
        }
        param_2 = param_2 + 3;
        uVar14 = (ushort)(uVar14 == 0x69);
        if (*puVar35 != 0) goto LAB_00e99c59;
      }
      else {
        param_2 = param_2 + 1;
        bVar39 = 7 < uVar18;
        uVar31 = 0;
        if (uVar18 < 8) {
          uVar31 = uVar14 & 1;
        }
        uVar18 = (uint)(char)(&DAT_01ee13d0)[uVar29];
        uVar17 = 0x7fffffff;
        if ((0x3cfUL >> (uVar29 & 0x3f) & 1) == 0) {
          uVar17 = (int)(char)(&DAT_01ee13db)[uVar29];
        }
        uVar14 = uVar31;
        if (0 < (int)uVar18) goto LAB_00e99c59;
      }
    }
    else {
      uVar17 = 1;
      bVar39 = false;
      uVar18 = 1;
      uVar14 = 0;
LAB_00e99c59:
      do {
        uVar31 = uVar14;
        if ((undefined8 ******)*puVar3 <= local_1d8) {
          uVar18 = *puVar5;
          if (uVar18 == 0) {
            return 0;
          }
          if (local_1d8 <= (undefined8 ******)*puVar4) {
            return 0;
          }
          *puVar23 = 1;
          goto joined_r0x00e9f090;
        }
        uVar14 = *(ushort *)local_1d8;
        uVar15 = (uint)uVar14;
        ppppppuVar24 = (undefined8 ******)((longlong)local_1d8 + 2);
        if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
          uVar15 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)local_1d8 + 2) & 0x3ff);
          ppppppuVar24 = (undefined8 ******)((longlong)local_1d8 + 4);
        }
        local_1d8 = ppppppuVar24;
        iVar21 = FUN_00ea14c0(uVar15,puVar37);
        if (iVar21 == 0) {
          return 0;
        }
        iVar20 = iVar20 + 1;
        uVar14 = uVar31;
      } while (iVar20 < (int)uVar18);
    }
    local_1e8 = local_1d8;
    ppppppuVar24 = local_1e8;
    if (uVar18 != uVar17) {
      ppppppuVar24 = local_1d8;
      if (uVar31 != 0) {
        iVar20 = FUN_00e92bf0(local_1d8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
        if (iVar20 != 0) {
          return iVar20;
        }
        iVar20 = uVar18 - 1;
        while( true ) {
          iVar20 = iVar20 + 1;
          if ((int)uVar17 <= iVar20) {
            return 0;
          }
          if ((undefined8 ******)*puVar3 <= local_1d8) break;
          uVar14 = *(ushort *)local_1d8;
          uVar18 = (uint)uVar14;
          ppppppuVar24 = (undefined8 ******)((longlong)local_1d8 + 2);
          if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
            uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                     (*(ushort *)((longlong)local_1d8 + 2) & 0x3ff);
            ppppppuVar24 = (undefined8 ******)((longlong)local_1d8 + 4);
          }
          local_1d8 = ppppppuVar24;
          iVar21 = FUN_00ea14c0(uVar18,puVar37);
          if (iVar21 == 0) {
            return 0;
          }
          iVar21 = FUN_00e92bf0(local_1d8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1)
          ;
          if (iVar21 != 0) {
            return iVar21;
          }
        }
        uVar18 = *puVar5;
        if (uVar18 == 0) {
          return 0;
        }
        if (local_1d8 <= (undefined8 ******)*puVar4) {
          return 0;
        }
        *puVar23 = 1;
        goto joined_r0x00e9f090;
      }
      for (; (int)uVar18 < (int)uVar17; uVar18 = uVar18 + 1) {
        if ((undefined8 ******)*puVar3 <= ppppppuVar24) {
          if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar24)) &&
             (*puVar23 = 1, 1 < (int)*puVar5)) {
            return -0xc;
          }
          break;
        }
        uVar14 = *(ushort *)ppppppuVar24;
        uVar15 = (uint)uVar14;
        lVar26 = 1;
        if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
          uVar15 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)ppppppuVar24 + 2) & 0x3ff);
          lVar26 = 2;
        }
        iVar20 = FUN_00ea14c0(uVar15,puVar37);
        if (iVar20 == 0) break;
        ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + lVar26 * 2);
      }
      if (!bVar39) {
        iVar20 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1
                             );
        while( true ) {
          if (iVar20 != 0) {
            return iVar20;
          }
          if (ppppppuVar24 <= local_1d8) break;
          ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar24 + -2);
          if ((uVar22 != 0) && ((*(ushort *)((longlong)ppppppuVar24 + -2) & 0xfc00) == 0xdc00)) {
            ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar24 + -4);
          }
          iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,
                                param_7 + 1);
          ppppppuVar24 = ppppppuVar27;
        }
        return 0;
      }
    }
    goto LAB_00e95c90;
  case 0x71:
  case 0x72:
    bVar39 = uVar14 == 0x72;
    lVar26 = (ulonglong)puVar35[1] * 2;
    param_2 = puVar35 + 2;
    if ((int)(uint)lVar26 < (int)local_1dc) {
      iVar20 = *(int *)(*(longlong *)(param_5 + 4) + (ulonglong)puVar35[1] * 8);
      if (-1 < iVar20) {
        iVar20 = *(int *)(*(longlong *)(param_5 + 4) + (ulonglong)((uint)lVar26 | 1) * 4) - iVar20;
        goto LAB_00e98416;
      }
    }
    iVar20 = -(uint)(param_5[0x1b] == 0);
    goto LAB_00e98416;
  case 0x73:
  case 0x74:
    bVar39 = uVar14 == 0x74;
    param_2 = puVar35 + 3;
    iVar20 = -(uint)(param_5[0x1b] == 0);
    if (puVar35[2] == 0) {
      lVar26 = 0;
    }
    else {
      puVar37 = (ushort *)
                ((ulonglong)puVar35[1] * (longlong)(int)param_5[0xb] * 2 +
                *(longlong *)(param_5 + 0xe));
      iVar21 = puVar35[2] + 1;
      do {
        lVar26 = (ulonglong)*puVar37 * 2;
        if ((int)(uint)lVar26 < (int)local_1dc) {
          iVar19 = *(int *)(*(longlong *)(param_5 + 4) + (ulonglong)*puVar37 * 8);
          if (-1 < iVar19) {
            iVar20 = *(int *)(*(longlong *)(param_5 + 4) + (ulonglong)((uint)lVar26 | 1) * 4) -
                     iVar19;
            break;
          }
        }
        iVar21 = iVar21 + -1;
        puVar37 = puVar37 + (int)param_5[0xb];
      } while (1 < iVar21);
    }
LAB_00e98416:
    uVar14 = *param_2;
    if ((ushort)(uVar14 - 0x62) < 6) {
      param_2 = param_2 + 1;
      bVar40 = (bool)((byte)uVar14 & 1);
      uVar29 = (ulonglong)uVar14 + 0xffffff9e & 0xffffffff;
      uVar17 = (uint)(char)(&DAT_01ee13d0)[uVar29];
      uVar18 = 0x7fffffff;
      if ((0x3cfUL >> ((ulonglong)uVar14 + 0xffffff9e & 0x3f) & 1) == 0) {
        uVar18 = (int)(char)(&DAT_01ee13db)[uVar29];
      }
    }
    else {
      if (1 < (ushort)(uVar14 - 0x68)) {
        iVar20 = FUN_00e9ff90(lVar26,local_1e8,iVar20,param_5,bVar39);
        if (iVar20 < 0) {
          if (iVar20 == -2) {
            local_1d8 = (undefined8 ******)*puVar3;
          }
          uVar18 = *puVar5;
          if (uVar18 == 0) {
            return 0;
          }
          if (local_1d8 < (undefined8 ******)*puVar3) {
            return 0;
          }
          if (local_1d8 <= (undefined8 ******)*puVar4) {
            return 0;
          }
          *puVar23 = 1;
          goto joined_r0x00e9f090;
        }
        ppppppuVar24 = (undefined8 ******)((longlong)local_1e8 + (longlong)iVar20 * 2);
        goto LAB_00e95c90;
      }
      bVar40 = uVar14 == 0x69;
      uVar17 = (uint)param_2[1];
      uVar18 = 0x7fffffff;
      if (param_2[2] != 0) {
        uVar18 = (uint)param_2[2];
      }
      param_2 = param_2 + 3;
    }
    if ((iVar20 != 0) && ((-1 < iVar20 || (uVar17 != 0)))) {
      if (0 < (int)uVar17) {
        iVar21 = 0;
        do {
          iVar19 = FUN_00e9ff90(lVar26,local_1e8,iVar20,param_5,bVar39);
          if (iVar19 < 0) {
            if (iVar19 == -2) {
              local_1e8 = (undefined8 ******)*puVar3;
            }
            uVar18 = *puVar5;
            if (uVar18 == 0) {
              return 0;
            }
            if (local_1e8 < (undefined8 ******)*puVar3) {
              return 0;
            }
            if (local_1e8 <= (undefined8 ******)*puVar4) {
              return 0;
            }
            *puVar23 = 1;
            goto joined_r0x00e9f090;
          }
          local_1e8 = (undefined8 ******)((longlong)local_1e8 + (longlong)iVar19 * 2);
          iVar21 = iVar21 + 1;
        } while (iVar21 < (int)uVar17);
      }
      ppppppuVar24 = local_1e8;
      if (uVar17 != uVar18) {
        if (bVar40 != false) {
          iVar21 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1)
          ;
          if (iVar21 != 0) {
            return iVar21;
          }
          iVar21 = uVar17 - 1;
          while( true ) {
            iVar21 = iVar21 + 1;
            if ((int)uVar18 <= iVar21) {
              return 0;
            }
            iVar19 = FUN_00e9ff90(lVar26,local_1e8,iVar20,param_5,bVar39);
            if (iVar19 < 0) break;
            local_1e8 = (undefined8 ******)((longlong)local_1e8 + (longlong)iVar19 * 2);
            iVar19 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,
                                  param_7 + 1);
            if (iVar19 != 0) {
              return iVar19;
            }
          }
          if (iVar19 == -2) {
            local_1e8 = (undefined8 ******)*puVar3;
          }
          uVar18 = *puVar5;
          if (uVar18 == 0) {
            return 0;
          }
          if (local_1e8 < (undefined8 ******)*puVar3) {
            return 0;
          }
          if (local_1e8 <= (undefined8 ******)*puVar4) {
            return 0;
          }
          *puVar23 = 1;
          goto joined_r0x00e9f090;
        }
        if ((int)uVar18 <= (int)uVar17) goto LAB_00e9ef0a;
        goto LAB_00e9d7a7;
      }
    }
    goto LAB_00e95c90;
  case 0x75:
    puVar37 = (ushort *)((ulonglong)puVar35[1] * 2 + *(longlong *)(param_5 + 0x24));
    if ((ulonglong)puVar35[1] == 0) {
      local_140 = 0;
    }
    else {
      local_140 = (uint)puVar37[2];
    }
    local_148 = *(longlong **)(param_5 + 0x3a);
    for (plVar12 = local_148; plVar12 != (longlong *)0x0; plVar12 = (longlong *)*plVar12) {
      if ((local_140 == *(uint *)(plVar12 + 1)) && (local_1e8 == (undefined8 ******)plVar12[4])) {
        return -0x1a;
      }
    }
    local_12c = param_5[0x32];
    local_128 = local_1e8;
    *(longlong ***)(param_5 + 0x3a) = &local_148;
    local_130 = param_5[6];
    if ((longlong)(int)local_130 < 0x1f) {
      local_138 = local_b8;
    }
    else {
      local_138 = (undefined1 *)(*(code *)PTR_FUN_01edf908)((longlong)(int)local_130 << 2);
      if (local_138 == (undefined1 *)0x0) {
        return -6;
      }
    }
    FUN_00626670(local_138,*(undefined8 *)(param_5 + 4),(longlong)(int)local_130 << 2);
    uVar14 = *puVar37;
    uVar31 = uVar14;
    while( true ) {
      if (0x87 < uVar14) {
        param_5[0x34] = 2;
      }
      iVar20 = FUN_00e92bf0(local_1e8,puVar37 + (byte)(&DAT_01ee1510)[uVar31],local_1a0,local_1dc,
                            param_5,local_190,param_7 + 1);
      FUN_00626670(*(undefined8 *)(param_5 + 4),local_138);
      param_5[0x32] = local_12c;
      *(longlong **)(param_5 + 0x3a) = local_148;
      if ((iVar20 == 1) || (iVar20 == -999)) break;
      if (iVar20 + 0x3e4U < 5) goto LAB_00e9b390;
      if (iVar20 != 0) goto LAB_00e9b39b;
      *(longlong ***)(param_5 + 0x3a) = &local_148;
      puVar33 = puVar37 + puVar37[1];
      puVar37 = puVar37 + puVar37[1];
      uVar31 = 0x77;
      if (*puVar33 != 0x77) {
        *(longlong **)(param_5 + 0x3a) = local_148;
LAB_00e9b390:
        iVar20 = 0;
LAB_00e9b39b:
        if (local_138 != local_b8) {
          (*(code *)PTR_FUN_01edf910)();
          return iVar20;
        }
        return iVar20;
      }
    }
    if (local_138 != local_b8) {
      (*(code *)PTR_FUN_01edf910)();
    }
    local_1a0 = *(undefined8 *******)(param_5 + 0x2a);
    param_2 = puVar35 + 2;
    ppppppuVar24 = *(undefined8 *******)(param_5 + 0x2c);
    goto LAB_00e95c90;
  case 0x76:
    if (PTR_FUN_01edf918 != (undefined *)0x0) {
      local_120 = 2;
      local_11c = (uint)puVar35[1];
      local_118 = *(undefined8 *)(param_5 + 4);
      local_110 = *(longlong *)(param_5 + 0x26);
      local_108 = (undefined4)((ulonglong)(*(longlong *)(param_5 + 0x28) - local_110) >> 1);
      local_104 = (undefined4)((ulonglong)((longlong)local_1a0 - local_110) >> 1);
      local_100 = (undefined4)((ulonglong)((longlong)local_1e8 - local_110) >> 1);
      local_e8 = (uint)puVar35[2];
      local_e4 = (uint)puVar35[3];
      local_fc = (int)local_1dc / 2;
      local_f8 = -(uint)((ushort)param_5[0x32] == 0) | (uint)(ushort)param_5[0x32];
      local_f0 = *(undefined8 *)(param_5 + 0x3c);
      local_e0 = *(undefined8 *)(param_5 + 0x40);
      iVar20 = (*(code *)PTR_FUN_01edf918)(&local_120);
      if (0 < iVar20) {
        return 0;
      }
      if (iVar20 != 0) {
        return iVar20;
      }
    }
    param_2 = puVar35 + 4;
    goto LAB_00e95c90;
  case 0x77:
    do {
      puVar37 = puVar35 + puVar35[1];
      puVar35 = puVar35 + puVar35[1];
      param_2 = puVar35;
    } while (*puVar37 == 0x77);
    goto LAB_00e95c90;
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
    uVar31 = puVar35[-(ulonglong)puVar35[1]];
    if ((uVar31 < 0x88) && (uVar31 != 0x81)) {
      ppppppuVar27 = (undefined8 ******)0x0;
    }
    else {
      ppppppuVar27 = local_190[1];
      local_190 = (undefined8 *******)*local_190;
    }
    if ((ushort)(uVar31 - 0x7d) < 4) {
LAB_00e9af26:
      *(undefined8 *******)(param_5 + 0x2c) = local_1e8;
      param_5[0x31] = local_1dc;
LAB_00e9af3d:
      *(undefined8 *******)(param_5 + 0x2a) = local_1a0;
      return 1;
    }
    puVar33 = puVar35 + -(ulonglong)puVar35[1];
    uVar18 = uVar31 - 0x82;
    if ((uVar18 & 0xffff) < 10) {
      if ((0x318U >> (uVar18 & 0x1f) & 1) == 0) {
        if ((short)uVar18 == 0) goto LAB_00e9af26;
      }
      else {
        uVar29 = (ulonglong)puVar33[2];
        uVar18 = (uint)puVar33[2];
        if ((*(longlong *)(param_5 + 0x3a) != 0) &&
           (*(uint *)(*(longlong *)(param_5 + 0x3a) + 8) == uVar18)) {
          *(undefined8 *******)(param_5 + 0x2c) = local_1e8;
          goto LAB_00e9af3d;
        }
        uVar17 = param_5[0x32] & 0xffff0000 | uVar18;
        param_5[0x32] = uVar17;
        uVar15 = (uint)(uVar29 * 2);
        if ((int)uVar15 < (int)param_5[7]) {
          if (((int)local_1dc < (int)uVar15) &&
             (lVar26 = (longlong)(int)local_1dc, lVar26 < (longlong)(uVar29 * 2))) {
            lVar11 = *(longlong *)(param_5 + 4);
            uVar30 = lVar11 + uVar29 * 8;
            uVar28 = lVar11 + 4 + lVar26 * 4;
            if (uVar30 < uVar28) {
              uVar30 = uVar28;
            }
            FUN_00626680(lVar11 + lVar26 * 4,0xff,
                         uVar30 + 3 + (lVar26 * -4 - lVar11) & 0xfffffffffffffffc);
          }
          lVar26 = *(longlong *)(param_5 + 4);
          *(undefined4 *)(lVar26 + uVar29 * 8) =
               *(undefined4 *)(lVar26 + (ulonglong)(param_5[6] - uVar18) * 4);
          *(int *)(lVar26 + (ulonglong)(uVar15 | 1) * 4) =
               (int)((ulonglong)((longlong)local_1e8 - *(longlong *)(param_5 + 0x26)) >> 1);
          if ((int)local_1dc <= (int)uVar15) {
            local_1dc = uVar15 + 2;
          }
        }
        else {
          param_5[0x32] = uVar17 | 0x10000;
        }
      }
    }
    if (uVar14 == 0x78) {
LAB_00e98785:
      param_2 = puVar35 + 2;
      if (uVar31 != 0x81) goto LAB_00e95c90;
    }
    else {
      if (uVar14 == 0x7b) {
        *(undefined8 *******)(param_5 + 0x2a) = local_1a0;
        *(undefined8 *******)(param_5 + 0x2c) = local_1e8;
        param_5[0x31] = local_1dc;
        return -0x3e6;
      }
      if (local_1e8 == ppppppuVar27) goto LAB_00e98785;
      if (uVar14 == 0x7a) {
        iVar20 = FUN_00e92bf0(local_1e8,puVar35 + 2,local_1a0,local_1dc,param_5,local_190,
                              param_7 + 1);
        if (iVar20 != 0) {
          return iVar20;
        }
        if (*puVar33 == 0x81) {
          iVar20 = FUN_00e92bf0(local_1e8,puVar33,local_1a0,local_1dc,param_5,local_190,param_7 + 1)
          ;
          goto LAB_00e9bc34;
        }
        param_2 = puVar33;
        if (0x87 < *puVar33) goto LAB_00e9f201;
        goto LAB_00e9a6be;
      }
      iVar20 = FUN_00e92bf0(local_1e8,puVar33,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 != 0) {
        if (iVar20 != -0x3e5) {
          return iVar20;
        }
        if (*(ushort **)(param_5 + 0x42) != puVar33) {
          return -0x3e5;
        }
      }
      param_2 = puVar35 + 2;
      if (*puVar33 != 0x81) goto LAB_00e9a6be;
    }
    iVar20 = FUN_00e92bf0(local_1e8,puVar35 + 2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
LAB_00e9bc34:
    if (iVar20 == 0) {
      *(ushort **)(param_5 + 0x42) = puVar33;
      return -0x3e5;
    }
    return iVar20;
  case 0x7c:
    uVar14 = puVar35[1];
    if (uVar22 == 0) {
      local_1e8 = (undefined8 ******)((longlong)local_1e8 + (ulonglong)uVar14 * -2);
      if (local_1e8 < *(undefined8 *******)(param_5 + 0x26)) {
        return 0;
      }
    }
    else if (uVar14 != 0) {
      iVar20 = uVar14 + 1;
      do {
        if ((undefined8 ******)((longlong)local_1d8 - 2U) < *(undefined8 *******)(param_5 + 0x26)) {
          return 0;
        }
        ppppppuVar24 = (undefined8 ******)((longlong)local_1d8 - 2U);
        if ((*(ushort *)((longlong)local_1d8 - 2) & 0xfc00) == 0xdc00) {
          ppppppuVar24 = (undefined8 ******)((longlong)local_1d8 - 4);
        }
        local_1d8 = ppppppuVar24;
        iVar20 = iVar20 + -1;
        local_1e8 = local_1d8;
      } while (1 < iVar20);
    }
    if (local_1e8 < (undefined8 ******)*puVar4) {
      *puVar4 = (ulonglong)local_1e8;
    }
    param_2 = puVar35 + 2;
    ppppppuVar24 = local_1e8;
    goto LAB_00e95c90;
  case 0x7d:
  case 0x7f:
    uVar13 = *(undefined8 *)(param_5 + 0x3e);
    uVar18 = param_5[0x34];
    if (uVar18 == 1) {
      param_5[0x34] = 0;
    }
    do {
      iVar20 = FUN_00e92bf0(local_1e8,puVar35 + 2,local_1a0,local_1dc,param_5,0,param_7 + 1);
      if ((iVar20 == 1) || (iVar20 == -999)) {
        local_1a0 = *(undefined8 *******)(param_5 + 0x2a);
        uVar14 = *puVar35;
        puVar37 = puVar35;
        break;
      }
      *(undefined8 *)(param_5 + 0x3e) = uVar13;
      if (iVar20 == -0x3e0) {
        uVar29 = (ulonglong)puVar35[1];
        if (puVar35 + uVar29 <= *(ushort **)(param_5 + 0x2a)) {
          return -0x3e0;
        }
        if ((*puVar35 != 0x77) && (puVar35[uVar29] != 0x77)) {
          return -0x3e0;
        }
      }
      else {
        if (iVar20 != 0) {
          return iVar20;
        }
        uVar29 = (ulonglong)puVar35[1];
      }
      puVar37 = puVar35 + uVar29;
      uVar14 = puVar35[uVar29];
      puVar35 = puVar37;
    } while (uVar14 == 0x77);
    if (uVar14 == 0x78) {
      return 0;
    }
    if (uVar18 == 1) {
      return 1;
    }
    do {
      puVar35 = puVar37 + puVar37[1];
      puVar37 = puVar37 + puVar37[1];
    } while (*puVar35 == 0x77);
    local_1dc = param_5[0x31];
    param_2 = puVar37 + 2;
    goto LAB_00e95c90;
  case 0x7e:
  case 0x80:
    uVar13 = *(undefined8 *)(param_5 + 0x3e);
    uVar18 = param_5[0x34];
    if (uVar18 == 1) {
      param_5[0x34] = 0;
    }
LAB_00e96b6e:
    iVar20 = FUN_00e92bf0(local_1e8,puVar35 + 2,local_1a0,local_1dc,param_5,0,param_7 + 1);
    *(undefined8 *)(param_5 + 0x3e) = uVar13;
    if (iVar20 < 0) {
      if (iVar20 != -0x3e0) {
        if (3 < iVar20 + 0x3e4U) {
          if (iVar20 != -999) {
            return iVar20;
          }
          return 0;
        }
LAB_00e98620:
        do {
          puVar37 = puVar35 + puVar35[1];
          puVar33 = puVar35 + puVar35[1];
          puVar35 = puVar37;
        } while (*puVar33 == 0x77);
LAB_00e98634:
        if (uVar18 == 1) {
          return 1;
        }
        param_2 = puVar37 + 2;
        goto LAB_00e95c90;
      }
      uVar29 = (ulonglong)puVar35[1];
      if ((puVar35 + uVar29 <= *(ushort **)(param_5 + 0x2a)) ||
         ((*puVar35 != 0x77 && (puVar35[uVar29] != 0x77)))) goto LAB_00e98620;
    }
    else {
      if (iVar20 != 0) {
        if (iVar20 != 1) {
          return iVar20;
        }
        return 0;
      }
      uVar29 = (ulonglong)puVar35[1];
    }
    puVar37 = puVar35 + uVar29;
    puVar33 = puVar35 + uVar29;
    puVar35 = puVar37;
    if (*puVar33 != 0x77) goto LAB_00e98634;
    goto LAB_00e96b6e;
  case 0x81:
  case 0x83:
  case 0x88:
    goto switchD_00e95ccd_caseD_81;
  case 0x82:
    uVar13 = *(undefined8 *)(param_5 + 0x3e);
    puVar37 = puVar35;
    do {
      iVar20 = FUN_00e92bf0(local_1e8,puVar37 + 2,local_1a0,local_1dc,param_5,local_190,param_7 + 1)
      ;
      if (iVar20 == -0x3e0) {
        uVar29 = (ulonglong)puVar37[1];
        if (puVar37 + uVar29 <= *(ushort **)(param_5 + 0x2a)) {
          return -0x3e0;
        }
        if ((*puVar37 != 0x77) && (puVar37[uVar29] != 0x77)) {
          return -0x3e0;
        }
      }
      else {
        if (iVar20 != 0) {
          if (iVar20 != 1) {
            return iVar20;
          }
          local_1a0 = *(undefined8 *******)(param_5 + 0x2a);
          uVar14 = *puVar37;
          puVar33 = puVar37;
          break;
        }
        uVar29 = (ulonglong)puVar37[1];
      }
      puVar33 = puVar37 + uVar29;
      *(undefined8 *)(param_5 + 0x3e) = uVar13;
      uVar14 = puVar37[uVar29];
      puVar37 = puVar33;
    } while (uVar14 == 0x77);
    if ((uVar14 != 0x82) && (uVar14 != 0x77)) {
      return 0;
    }
    do {
      uVar14 = puVar33[puVar33[1]];
      puVar33 = puVar33 + puVar33[1];
    } while (uVar14 == 0x77);
    local_1dc = param_5[0x31];
    ppppppuVar24 = *(undefined8 *******)(param_5 + 0x2c);
    if ((uVar14 != 0x78) && (ppppppuVar24 != local_1e8)) {
      if (uVar14 == 0x7a) {
        iVar20 = FUN_00e92bf0(ppppppuVar24,puVar33 + 2,local_1a0,local_1dc,param_5,local_190,
                              param_7 + 1);
        param_2 = puVar35;
        if (iVar20 != 0) {
          return iVar20;
        }
      }
      else {
        iVar20 = FUN_00e92bf0(ppppppuVar24,puVar35,local_1a0,local_1dc,param_5,local_190,param_7 + 1
                             );
        if (iVar20 != 0) {
          return iVar20;
        }
        param_2 = puVar33 + 2;
      }
      goto LAB_00e9a6be;
    }
    param_2 = puVar33 + 2;
    goto LAB_00e95c90;
  case 0x84:
  case 0x89:
    goto switchD_00e95ccd_caseD_84;
  case 0x85:
  case 0x8a:
    uVar31 = puVar35[2];
    if ((int)((uint)uVar31 * 2) < (int)param_5[7]) {
      lVar26 = *(longlong *)(param_5 + 4);
      uVar8 = *(undefined4 *)(lVar26 + (ulonglong)uVar31 * 8);
      uVar30 = (ulonglong)((uint)uVar31 * 2 | 1);
      uVar9 = *(undefined4 *)(lVar26 + uVar30 * 4);
      uVar28 = (ulonglong)(param_5[6] - (uint)uVar31);
      uVar10 = *(undefined4 *)(lVar26 + uVar28 * 4);
      uVar18 = param_5[0x32];
      uVar13 = *(undefined8 *)(param_5 + 0x3e);
      *(int *)(lVar26 + uVar28 * 4) =
           (int)((ulonglong)((longlong)local_1e8 - *(longlong *)(param_5 + 0x26)) >> 1);
      goto LAB_00e9d314;
    }
switchD_00e95ccd_caseD_81:
    goto LAB_00e99ff7;
  case 0x86:
  case 0x8b:
    goto switchD_00e95ccd_caseD_86;
  case 0x87:
  case 0x8c:
    uVar31 = puVar35[1];
    uVar18 = (uint)uVar31;
    puVar37 = puVar35 + 2;
    uVar7 = puVar35[2];
    if (uVar7 == 0x76) {
      if (PTR_FUN_01edf918 != (undefined *)0x0) {
        local_120 = 2;
        local_11c = (uint)puVar35[3];
        local_118 = *(undefined8 *)(param_5 + 4);
        local_110 = *(longlong *)(param_5 + 0x26);
        local_108 = (undefined4)((ulonglong)(*(longlong *)(param_5 + 0x28) - local_110) >> 1);
        local_104 = (undefined4)((ulonglong)((longlong)local_1a0 - local_110) >> 1);
        local_100 = (undefined4)((ulonglong)((longlong)local_1e8 - local_110) >> 1);
        local_e8 = (uint)puVar35[4];
        local_e4 = (uint)puVar35[5];
        local_fc = (int)local_1dc / 2;
        local_f8 = -(uint)((ushort)param_5[0x32] == 0) | (uint)(ushort)param_5[0x32];
        local_f0 = *(undefined8 *)(param_5 + 0x3c);
        local_e0 = *(undefined8 *)(param_5 + 0x40);
        iVar20 = (*(code *)PTR_FUN_01edf918)(&local_120);
        if (0 < iVar20) {
          return 0;
        }
        if (iVar20 != 0) {
          return iVar20;
        }
      }
      uVar18 = (uint)DAT_01ee1586;
      uVar7 = puVar37[uVar18];
      puVar37 = puVar37 + uVar18;
      uVar18 = uVar31 - uVar18;
    }
    uVar17 = (uint)uVar7;
    switch(uVar17 - 0x8d & 0xffff) {
    case 0:
      if ((int)((uint)puVar37[1] * 2) < (int)local_1dc) {
        bVar39 = -1 < *(int *)(*(longlong *)(param_5 + 4) + (ulonglong)puVar37[1] * 8);
      }
      else {
        bVar39 = false;
      }
      if (!bVar39) break;
LAB_00e9a684:
      uVar29 = (ulonglong)(byte)(&DAT_01ee1510)[uVar17];
      goto LAB_00e9a692;
    case 1:
      if (puVar37[2] != 0) {
        puVar35 = (ushort *)
                  ((ulonglong)puVar37[1] * (longlong)(int)param_5[0xb] * 2 +
                  *(longlong *)(param_5 + 0xe));
        iVar20 = puVar37[2] + 1;
        do {
          uVar15 = 0;
          if (((int)((uint)*puVar35 * 2) < (int)local_1dc) &&
             (uVar16 = *(uint *)(*(longlong *)(param_5 + 4) + (ulonglong)*puVar35 * 8),
             uVar15 = uVar16 >> 0x1f ^ 1, -1 < (int)uVar16)) break;
          iVar20 = iVar20 + -1;
          puVar35 = puVar35 + (int)param_5[0xb];
        } while (1 < iVar20);
LAB_00e93ab5:
        if (uVar15 != 0) goto LAB_00e9a684;
      }
      break;
    case 2:
      if (*(longlong *)(param_5 + 0x3a) != 0) {
        if (puVar37[1] == 0xffff) {
          uVar15 = 1;
          goto LAB_00e93ab5;
        }
        if (*(uint *)(*(longlong *)(param_5 + 0x3a) + 8) == (uint)puVar37[1]) goto LAB_00e9a684;
      }
      break;
    case 3:
      if ((*(longlong *)(param_5 + 0x3a) != 0) && (puVar37[2] != 0)) {
        puVar35 = (ushort *)
                  ((ulonglong)puVar37[1] * (longlong)(int)param_5[0xb] * 2 +
                  *(longlong *)(param_5 + 0xe));
        uVar15 = *(uint *)(*(longlong *)(param_5 + 0x3a) + 8);
        iVar20 = puVar37[2] + 1;
        do {
          uVar31 = *puVar35;
          if (uVar15 == uVar31) break;
          iVar20 = iVar20 + -1;
          puVar35 = puVar35 + (int)param_5[0xb];
        } while (1 < iVar20);
        if (uVar15 == uVar31) goto LAB_00e9a684;
      }
      break;
    case 4:
    case 0x10:
      break;
    default:
      param_5[0x34] = 1;
      iVar20 = FUN_00e92bf0(local_1e8,puVar37,local_1a0,local_1dc,param_5,0,param_7 + 1);
      if ((iVar20 == -0x3e0) || (iVar20 == 0)) break;
      if (iVar20 != 1) {
        return iVar20;
      }
      puVar35 = puVar37 + 1;
      if (*puVar37 != 0x92) {
        puVar35 = puVar37;
      }
      do {
        puVar37 = puVar35 + puVar35[1];
        puVar35 = puVar35 + puVar35[1];
      } while (*puVar37 == 0x77);
      if ((int)local_1dc <= (int)param_5[0x31]) {
        local_1dc = param_5[0x31];
      }
      uVar29 = (ulonglong)(byte)(&DAT_01ee1510)[uVar17];
      puVar37 = puVar35 + (2 - uVar29);
LAB_00e9a692:
      puVar33 = puVar37 + uVar29;
LAB_00e9a699:
      param_2 = puVar33;
      if (uVar14 != 0x8c) goto LAB_00e9a6be;
      param_5[0x34] = 2;
LAB_00e9f201:
      iVar20 = FUN_00e92bf0(local_1e8,puVar33,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      return iVar20;
    }
    puVar33 = puVar37 + (int)uVar18;
    param_2 = puVar33;
    if (puVar37[(longlong)(int)uVar18 + -2] == 0x77) goto LAB_00e9a699;
    goto LAB_00e95c90;
  case 0x92:
    puVar35 = puVar35 + 1;
    iVar20 = FUN_00e92bf0(local_1e8,puVar35,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
    do {
      puVar37 = puVar35 + puVar35[1];
      puVar35 = puVar35 + puVar35[1];
    } while (*puVar37 == 0x77);
    param_2 = puVar35 + 2;
    goto LAB_00e95c90;
  case 0x93:
    puVar37 = puVar35 + 1;
    do {
      puVar33 = puVar37 + puVar37[1];
      puVar37 = puVar37 + puVar37[1];
    } while (*puVar33 == 0x77);
    iVar20 = FUN_00e92bf0(local_1e8,puVar37 + 2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    param_2 = puVar35 + 1;
    if (iVar20 != 0) {
      return iVar20;
    }
    goto LAB_00e95c90;
  case 0x94:
    uVar14 = puVar35[1];
    puVar35 = puVar35 + 1;
    bVar39 = true;
    bVar40 = true;
    if ((uVar14 != 0x86) && (uVar14 != 0x8b)) goto switchD_00e95ccd_caseD_84;
switchD_00e95ccd_caseD_86:
    bVar39 = bVar40;
    uVar31 = puVar35[2];
    if ((int)((uint)uVar31 * 2) < (int)param_5[7]) {
      uVar29 = (longlong)puVar35 - *(longlong *)(param_5 + 0x24);
      lVar26 = *(longlong *)(param_5 + 4);
      uVar8 = *(undefined4 *)(lVar26 + (ulonglong)uVar31 * 8);
      uVar30 = (ulonglong)((uint)uVar31 * 2 | 1);
      uVar9 = *(undefined4 *)(lVar26 + uVar30 * 4);
      uVar10 = *(undefined4 *)(lVar26 + (ulonglong)(param_5[6] - (uint)uVar31) * 4);
      bVar40 = false;
LAB_00e994a1:
      ppppppuVar24 = local_1e8;
      uVar18 = param_5[0x32];
      puVar37 = puVar35;
      do {
        *(int *)(*(longlong *)(param_5 + 4) + (ulonglong)(param_5[6] - (uint)uVar31) * 4) =
             (int)((ulonglong)((longlong)ppppppuVar24 - *(longlong *)(param_5 + 0x26)) >> 1);
        if (0x87 < uVar14) {
          param_5[0x34] = 2;
        }
        iVar20 = FUN_00e92bf0(ppppppuVar24,puVar37 + (byte)(&DAT_01ee1510)[*puVar37],local_1a0,
                              local_1dc,param_5,local_190,param_7 + 1);
        if (iVar20 == -0x3e0) {
          uVar28 = (ulonglong)puVar37[1];
          if (puVar37 + uVar28 <= *(ushort **)(param_5 + 0x2a)) {
            return -0x3e0;
          }
          if ((*puVar37 != 0x77) && (puVar37[uVar28] != 0x77)) {
            return -0x3e0;
          }
        }
        else {
          if (iVar20 != 0) goto LAB_00e995a7;
          uVar28 = (ulonglong)puVar37[1];
        }
        param_5[0x32] = uVar18;
        puVar35 = puVar37 + uVar28;
        puVar33 = puVar37 + uVar28;
        puVar37 = puVar35;
        if (*puVar33 != 0x77) {
          if (!bVar40) {
            lVar26 = *(longlong *)(param_5 + 4);
            *(undefined4 *)(lVar26 + (ulonglong)uVar31 * 8) = uVar8;
            *(undefined4 *)(lVar26 + uVar30 * 4) = uVar9;
            *(undefined4 *)(lVar26 + (ulonglong)(param_5[6] - (uint)uVar31) * 4) = uVar10;
            bVar40 = false;
          }
          goto LAB_00e9981c;
        }
      } while( true );
    }
switchD_00e95ccd_caseD_84:
    uVar29 = (longlong)puVar35 - *(longlong *)(param_5 + 0x24);
    uVar18 = param_5[0x32];
    bVar40 = false;
LAB_00e99648:
    local_1e8 = local_1d8;
    puVar37 = puVar35;
    do {
      if (0x87 < uVar14) {
        param_5[0x34] = 2;
      }
      iVar20 = FUN_00e92bf0(local_1d8,puVar37 + (byte)(&DAT_01ee1510)[*puVar37],local_1a0,local_1dc,
                            param_5,local_190,param_7 + 1);
      if (iVar20 == -0x3e0) {
        uVar30 = (ulonglong)puVar37[1];
        if (puVar37 + uVar30 <= *(ushort **)(param_5 + 0x2a)) {
          return -0x3e0;
        }
        if ((*puVar37 != 0x77) && (puVar37[uVar30] != 0x77)) {
          return -0x3e0;
        }
      }
      else {
        if (iVar20 != 0) goto LAB_00e99743;
        uVar30 = (ulonglong)puVar37[1];
      }
      puVar35 = puVar37 + uVar30;
      if (puVar37[uVar30] != 0x77) {
        if (!bVar40 && !bVar39) {
          return 0;
        }
        goto LAB_00e997d1;
      }
      param_5[0x32] = uVar18;
      puVar37 = puVar35;
    } while( true );
  case 0x95:
    puVar37 = puVar35 + 2;
    *(ushort **)(param_5 + 0x40) = puVar37;
    param_5[0x3e] = 0;
    param_5[0x3f] = 0;
    iVar20 = FUN_00e92bf0(local_1e8,puVar35 + (ulonglong)DAT_01ee15a5 + (ulonglong)puVar35[1],
                          local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 == 1) {
LAB_00e9afdf:
      if (*(longlong *)(param_5 + 0x3e) == 0) {
        *(ushort **)(param_5 + 0x3e) = puVar37;
        return iVar20;
      }
      if (iVar20 != -0x3e1) {
        return iVar20;
      }
    }
    else if (iVar20 != -0x3e1) {
      if (iVar20 != -999) {
        return iVar20;
      }
      goto LAB_00e9afdf;
    }
    iVar21 = FUN_00ea12d0(puVar37,*(undefined8 *)(param_5 + 0x2a));
    iVar20 = -0x3e1;
joined_r0x00e9b170:
    if (iVar21 == 0) {
      *(undefined8 *******)(param_5 + 0x2a) = local_1e8;
      return -0x3e2;
    }
    return iVar20;
  case 0x96:
    iVar20 = FUN_00e92bf0(local_1e8,puVar35 + DAT_01ee15a6,local_1a0,local_1dc,param_5,local_190,
                          param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
    return -0x3e3;
  case 0x97:
    *(ushort **)(param_5 + 0x40) = puVar35 + 2;
    param_5[0x3e] = 0;
    param_5[0x3f] = 0;
    iVar20 = FUN_00e92bf0(local_1e8,puVar35 + (ulonglong)DAT_01ee15a7 + (ulonglong)puVar35[1],
                          local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 1) {
      if (iVar20 == 0) {
        return -0x3e3;
      }
      if (iVar20 != -999) {
        return iVar20;
      }
    }
    if (*(longlong *)(param_5 + 0x3e) == 0) {
      *(ushort **)(param_5 + 0x3e) = puVar35 + 2;
    }
    if (iVar20 != 0) {
      return iVar20;
    }
    return -0x3e3;
  case 0x98:
    iVar20 = FUN_00e92bf0(local_1e8,puVar35 + DAT_01ee15a8,local_1a0,local_1dc,param_5,local_190,
                          param_7 + 1);
    iVar21 = iVar20;
    goto joined_r0x00e9b170;
  case 0x99:
    uVar18 = param_5[0xc];
    param_5[0xc] = uVar18 + 1;
    if (param_5[0xd] < uVar18 + 1) {
      iVar20 = FUN_00e92bf0(local_1e8,puVar35 + (ulonglong)DAT_01ee15a9 + (ulonglong)puVar35[1],
                            local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 == 0) {
        *(ushort **)(param_5 + 0x2a) = puVar35 + 2;
        return -0x3e1;
      }
      return iVar20;
    }
    param_2 = puVar35 + (ulonglong)puVar35[1] + (ulonglong)DAT_01ee15a9;
    goto LAB_00e95c90;
  case 0x9a:
    iVar20 = FUN_00e92bf0(local_1e8,puVar35 + DAT_01ee15aa,local_1a0,local_1dc,param_5,local_190,
                          param_7 + 1);
    goto joined_r0x00e9b281;
  case 0x9b:
    *(ushort **)(param_5 + 0x40) = puVar35 + 2;
    param_5[0x3e] = 0;
    param_5[0x3f] = 0;
    iVar20 = FUN_00e92bf0(local_1e8,puVar35 + (ulonglong)DAT_01ee15ab + (ulonglong)puVar35[1],
                          local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 1) {
      if (iVar20 == 0) goto LAB_00e9b287;
      if (iVar20 != -999) {
        return iVar20;
      }
    }
    if (*(longlong *)(param_5 + 0x3e) == 0) {
      *(ushort **)(param_5 + 0x3e) = puVar35 + 2;
    }
joined_r0x00e9b281:
    if (iVar20 != 0) {
      return iVar20;
    }
LAB_00e9b287:
    *(ushort **)(param_5 + 0x2a) = puVar35;
    return -0x3e0;
  case 0x9c:
    iVar20 = FUN_00e92bf0(local_1e8,puVar35 + DAT_01ee15ac,local_1a0,local_1dc,param_5,local_190,
                          param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
    return -0x3e4;
  case 0x9d:
    return 0;
  case 0xa0:
    uVar14 = puVar35[1];
    lVar26 = (ulonglong)uVar14 * 2;
    uVar18 = param_5[0x32] & 0xffff0000 | (uint)uVar14;
    param_5[0x32] = uVar18;
    uVar17 = (uint)lVar26;
    if ((int)uVar17 < (int)param_5[7]) {
      lVar11 = *(longlong *)(param_5 + 4);
      *(undefined4 *)(lVar11 + (ulonglong)uVar14 * 8) =
           *(undefined4 *)(lVar11 + (ulonglong)(param_5[6] - (uint)uVar14) * 4);
      *(int *)(lVar11 + (ulonglong)(uVar17 | 1) * 4) =
           (int)((ulonglong)((longlong)local_1e8 - *(longlong *)(param_5 + 0x26)) >> 1);
      if ((int)local_1dc <= (int)uVar17) {
        if ((int)local_1dc < lVar26) {
          FUN_00626680(lVar11 + (longlong)(int)local_1dc * 4,0xff);
        }
        local_1dc = uVar17 + 2;
      }
    }
    else {
      param_5[0x32] = uVar18 | 0x10000;
    }
    param_2 = puVar35 + 2;
    goto LAB_00e95c90;
  case 0xa1:
    puVar35 = puVar35 + 1;
    do {
      puVar37 = puVar35 + puVar35[1];
      puVar35 = puVar35 + puVar35[1];
    } while (*puVar37 == 0x77);
    param_2 = puVar35 + 2;
    goto LAB_00e95c90;
  }
  param_2 = puVar35 + 1;
  ppppppuVar24 = local_1e8;
  goto LAB_00e95c90;
LAB_00e995a7:
  if (iVar20 != -0x3e6) {
    return iVar20;
  }
  local_1dc = param_5[0x31];
  puVar35 = (ushort *)((longlong)(int)(uVar29 >> 1) * 2 + *(longlong *)(param_5 + 0x24));
  local_1a0 = *(undefined8 *******)(param_5 + 0x2a);
  bVar40 = true;
  local_1e8 = *(undefined8 *******)(param_5 + 0x2c);
  if (ppppppuVar24 == *(undefined8 *******)(param_5 + 0x2c)) goto LAB_00e99601;
  goto LAB_00e994a1;
LAB_00e99601:
  do {
    puVar37 = puVar35 + puVar35[1];
    puVar35 = puVar35 + puVar35[1];
    bVar40 = true;
  } while (*puVar37 == 0x77);
LAB_00e9981c:
  if (!bVar40 && !bVar39) {
    return 0;
  }
  param_2 = puVar35 + 2;
  goto LAB_00e95c90;
LAB_00e99743:
  if (iVar20 != -0x3e6) {
    return iVar20;
  }
  local_1dc = param_5[0x31];
  puVar35 = (ushort *)((longlong)(int)(uVar29 >> 1) * 2 + *(longlong *)(param_5 + 0x24));
  local_1a0 = *(undefined8 *******)(param_5 + 0x2a);
  bVar40 = true;
  bVar41 = local_1d8 == *(undefined8 *******)(param_5 + 0x2c);
  local_1d8 = *(undefined8 *******)(param_5 + 0x2c);
  if (bVar41) goto LAB_00e9979e;
  goto LAB_00e99648;
LAB_00e9979e:
  do {
    puVar37 = puVar35 + puVar35[1];
    puVar35 = puVar35 + puVar35[1];
  } while (*puVar37 == 0x77);
LAB_00e997d1:
  param_2 = puVar35 + 2;
  ppppppuVar24 = local_1e8;
  goto LAB_00e95c90;
LAB_00e99ff7:
  if (uVar14 == 0x81 || 0x87 < uVar14) {
    param_5[0x34] = 2;
  }
  else if ((param_5[0x22] == 0) && (puVar35[puVar35[1]] != 0x77)) goto LAB_00e9a188;
  uVar13 = *(undefined8 *)(param_5 + 0x3e);
  uVar18 = param_5[0x32];
  iVar20 = FUN_00e92bf0(local_1e8,puVar35 + (byte)(&DAT_01ee1510)[uVar29],local_1a0,local_1dc,
                        param_5,local_190,param_7 + 1);
  if (iVar20 == -0x3e0) {
    uVar29 = (ulonglong)puVar35[1];
    if (puVar35 + uVar29 <= *(ushort **)(param_5 + 0x2a)) {
      return -0x3e0;
    }
    if ((*puVar35 != 0x77) && (puVar35[uVar29] != 0x77)) {
      return -0x3e0;
    }
  }
  else {
    if (iVar20 != 0) {
      if (iVar20 != -0x3e5) {
        return iVar20;
      }
      uVar14 = *puVar35;
      if (uVar14 != 0x81) {
        uVar31 = puVar35[1];
        while (uVar29 = (ulonglong)uVar31, uVar14 == 0x77) {
          uVar31 = puVar35[uVar29 + 1];
          uVar14 = puVar35[uVar29];
          puVar35 = puVar35 + uVar29;
        }
        puVar35 = puVar35 + -uVar29;
      }
      if (*(ushort **)(param_5 + 0x42) == puVar35) {
        return 0;
      }
      return -0x3e5;
    }
    uVar29 = (ulonglong)puVar35[1];
  }
  *(undefined8 *)(param_5 + 0x3e) = uVar13;
  if (puVar35[uVar29] != 0x77) {
    return 0;
  }
  puVar35 = puVar35 + uVar29;
  param_5[0x32] = uVar18;
  uVar29 = 0x77;
  goto LAB_00e99ff7;
LAB_00e9a188:
  param_2 = puVar35 + (byte)(&DAT_01ee1510)[uVar29];
  goto LAB_00e9a6be;
LAB_00e9d084:
  iVar20 = iVar20 + 1;
  if ((int)uVar18 <= iVar20) {
    return 0;
  }
  if ((undefined8 ******)*puVar3 <= local_1e8) {
    uVar18 = *puVar5;
    if (uVar18 == 0) {
      return 0;
    }
    if (local_1e8 <= (undefined8 ******)*puVar4) {
      return 0;
    }
    *puVar23 = 1;
    goto joined_r0x00e9f090;
  }
  uVar31 = *(ushort *)local_1e8;
  if ((uVar31 & 0xfc00) == 0xd800) {
    local_1e8 = (undefined8 ******)((longlong)local_1e8 + 4);
LAB_00e9d0cd:
    if (uVar14 == 0x6e) {
      return 0;
    }
  }
  else {
    local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
    if (0xff < uVar31) goto LAB_00e9d0cd;
    if ((*(byte *)((longlong)puVar35 + (ulonglong)(uVar31 >> 3) + 2) >> ((byte)uVar31 & 7) & 1) == 0
       ) {
      return 0;
    }
  }
  iVar21 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
  if (iVar21 != 0) {
    return iVar21;
  }
  goto LAB_00e9d084;
LAB_00e94ca7:
  if (((*puVar5 != 0) && ((undefined8 ******)*puVar4 < ppppppuVar24)) &&
     (*puVar23 = 1, 1 < (int)*puVar5)) {
    return -0xc;
  }
LAB_00e94cd0:
  if (!bVar39) goto joined_r0x00e9a1b4;
  goto LAB_00e95c90;
joined_r0x00e9a1b4:
  while (ppppppuVar25 = ppppppuVar24, ppppppuVar24 = ppppppuVar25, ppppppuVar27 < ppppppuVar25) {
    while( true ) {
      iVar20 = FUN_00e92bf0(ppppppuVar25,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar20 != 0) {
        return iVar20;
      }
      ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar25 - 2U);
      if (uVar22 == 0) break;
      if ((*(ushort *)((longlong)ppppppuVar25 - 2) & 0xfc00) == 0xdc00) {
        ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar25 - 4);
      }
      ppppppuVar25 = ppppppuVar24;
      ppppppuVar24 = ppppppuVar25;
      if (ppppppuVar25 <= ppppppuVar27) goto LAB_00e9a6be;
    }
  }
LAB_00e9a6be:
  local_1e8 = ppppppuVar24;
  uVar18 = *param_5;
  uVar22 = param_5[0x1a];
  *param_5 = uVar18 + 1;
  param_1 = local_1e8;
  param_3 = local_1a0;
  if (param_5[1] <= uVar18) {
    return -8;
  }
  goto LAB_00e92ca1;
LAB_00e95ad4:
  uVar18 = *puVar5;
  ppppppuVar24 = local_1e8;
  if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < local_1e8)) {
LAB_00e95af6:
    *puVar23 = 1;
joined_r0x00e95c27:
    ppppppuVar24 = local_1e8;
    if (1 < (int)uVar18) {
      return -0xc;
    }
  }
LAB_00e95c33:
  local_1e8 = ppppppuVar24;
  ppppppuVar24 = local_1e8;
  if (!bVar39) goto joined_r0x00e9aa98;
  goto LAB_00e95c90;
joined_r0x00e9aa98:
  while (uVar13 = local_1e8, ppppppuVar24 = ppppppuVar27, (undefined8 ******)uVar13 != ppppppuVar27)
  {
    iVar20 = FUN_00e92bf0(uVar13,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
    local_1e8 = (undefined8 ******)(uVar13 - 2);
    if ((((uVar14 == 0x11) && (ppppppuVar27 < local_1e8)) && (*(ushort *)local_1e8 == 10)) &&
       (*(ushort *)(uVar13 - 4) == 0xd)) {
      local_1e8 = (undefined8 ******)(uVar13 - 4);
    }
  }
  goto LAB_00e9a6be;
LAB_00e95397:
  uVar18 = *puVar5;
  ppppppuVar24 = local_1e8;
  if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < local_1e8)) {
LAB_00e953b9:
    *puVar23 = 1;
joined_r0x00e95bd3:
    ppppppuVar24 = local_1e8;
    if (1 < (int)uVar18) {
      return -0xc;
    }
  }
LAB_00e95bdf:
  local_1e8 = ppppppuVar24;
  ppppppuVar24 = local_1e8;
  if (!bVar39) goto joined_r0x00e9a90b;
  goto LAB_00e95c90;
joined_r0x00e9a90b:
  while (ppppppuVar24 = local_1e8, ppppppuVar27 < local_1e8) {
    iVar20 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
    if ((*(ushort *)((longlong)local_1e8 + -2) & 0xfc00) == 0xdc00) {
      local_1e8 = (undefined8 ******)((longlong)local_1e8 + -4);
    }
    else {
      local_1e8 = (undefined8 ******)((longlong)local_1e8 + -2);
    }
    if ((((uVar14 == 0x11) && (ppppppuVar27 < local_1e8)) && (*(ushort *)local_1e8 == 10)) &&
       (*(ushort *)((longlong)local_1e8 + -2) == 0xd)) {
      local_1e8 = (undefined8 ******)((longlong)local_1e8 + -2);
    }
  }
  goto LAB_00e9a6be;
joined_r0x00e9a6f6:
  if (ppppppuVar24 <= ppppppuVar27) goto LAB_00e9a6be;
  iVar20 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
  if (iVar20 != 0) {
    return iVar20;
  }
  ppppppuVar25 = (undefined8 ******)((longlong)ppppppuVar24 + -2);
  uVar18 = (uint)*(ushort *)((longlong)ppppppuVar24 + -2);
  if (uVar22 != 0) {
    if ((*(ushort *)((longlong)ppppppuVar24 + -2) & 0xfc00) == 0xdc00) {
      ppppppuVar25 = (undefined8 ******)((longlong)ppppppuVar24 + -4);
    }
    uVar18 = (uint)*(ushort *)ppppppuVar25;
    if ((uVar18 & 0xfc00) == 0xd800) {
      uVar18 = (*(ushort *)ppppppuVar25 & 0x3ff) * 0x400 + 0x10000 +
               (*(ushort *)((longlong)ppppppuVar25 + 2) & 0x3ff);
    }
  }
  ppppppuVar24 = ppppppuVar25;
  if (ppppppuVar25 <= ppppppuVar27) goto LAB_00e9a6be;
  uVar29 = (ulonglong)
           (byte)(&DAT_01ee2142)
                 [(ulonglong)
                  *(ushort *)
                   (&DAT_01ee59c0 +
                   ((longlong)(int)(uVar18 % 0x80) +
                   (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8];
  while( true ) {
    ppppppuVar25 = (undefined8 ******)((longlong)ppppppuVar24 + -2);
    uVar18 = (uint)*(ushort *)((longlong)ppppppuVar24 + -2);
    if (uVar22 != 0) {
      if ((*(ushort *)((longlong)ppppppuVar24 + -2) & 0xfc00) == 0xdc00) {
        ppppppuVar25 = (undefined8 ******)((longlong)ppppppuVar24 + -4);
      }
      uVar14 = *(ushort *)ppppppuVar25;
      uVar18 = (uint)uVar14;
      if ((uVar14 & 0xfc00) == 0xd800) {
        uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                 (*(ushort *)((longlong)ppppppuVar25 + 2) & 0x3ff);
      }
    }
    if ((*(uint *)(&DAT_01ee16b0 +
                  (ulonglong)
                  (byte)(&DAT_01ee2142)
                        [(ulonglong)
                         *(ushort *)
                          (&DAT_01ee59c0 +
                          ((longlong)(int)(uVar18 % 0x80) +
                          (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8] * 4)
         >> ((uint)uVar29 & 0x1f) & 1) == 0) break;
    uVar29 = (ulonglong)
             (byte)(&DAT_01ee2142)
                   [(ulonglong)
                    *(ushort *)
                     (&DAT_01ee59c0 +
                     ((longlong)(int)(uVar18 % 0x80) +
                     (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8];
    ppppppuVar24 = ppppppuVar25;
    if (ppppppuVar25 <= ppppppuVar27) goto LAB_00e9a6be;
  }
  goto joined_r0x00e9a6f6;
joined_r0x00e9bfee:
  while( true ) {
    if (iVar20 != 0) {
      return iVar20;
    }
    if ((int)local_198 <= (int)uVar18) {
      return 0;
    }
    ppppppuVar24 = (undefined8 ******)*puVar3;
    if (ppppppuVar24 <= ppppppuVar27) break;
    ppppppuVar25 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
    uVar14 = *(ushort *)ppppppuVar27;
    uVar17 = (uint)uVar14;
    if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
      ppppppuVar25 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
      uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
               (*(ushort *)((longlong)ppppppuVar27 + 2) & 0x3ff);
    }
    if (ppppppuVar25 < ppppppuVar24) {
      bVar6 = (&DAT_01ee2142)
              [(ulonglong)
               *(ushort *)
                (&DAT_01ee59c0 +
                ((longlong)(int)(uVar17 % 0x80) +
                (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar17 >> 7] * 0x80) * 2) * 8];
      do {
        uVar29 = (ulonglong)bVar6;
        uVar14 = *(ushort *)ppppppuVar25;
        uVar17 = (uint)uVar14;
        if ((uVar22 == 0) || ((uVar14 & 0xfc00) != 0xd800)) {
          lVar26 = 1;
        }
        else {
          uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 +
                   (*(ushort *)((longlong)ppppppuVar25 + 2) & 0x3ff);
          lVar26 = 2;
        }
        bVar6 = (&DAT_01ee2142)
                [(ulonglong)
                 *(ushort *)
                  (&DAT_01ee59c0 +
                  ((longlong)(int)(uVar17 % 0x80) +
                  (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar17 >> 7] * 0x80) * 2) * 8];
        uVar17 = 1 << (bVar6 & 0x1f) & *(uint *)(&DAT_01ee16b0 + uVar29 * 4);
        if (uVar17 != 0) {
          ppppppuVar25 = (undefined8 ******)((longlong)ppppppuVar25 + lVar26 * 2);
        }
      } while ((ppppppuVar25 < ppppppuVar24) && (uVar17 != 0));
    }
    if ((ppppppuVar24 <= ppppppuVar25) &&
       (((*puVar5 != 0 && ((undefined8 ******)*puVar4 < ppppppuVar25)) &&
        (*puVar23 = 1, 1 < (int)*puVar5)))) {
      return -0xc;
    }
    uVar18 = uVar18 + 1;
    iVar20 = FUN_00e92bf0(ppppppuVar25,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    ppppppuVar27 = ppppppuVar25;
  }
  uVar18 = *puVar5;
  if ((uVar18 == 0) || (ppppppuVar27 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
  *puVar23 = 1;
  goto joined_r0x00e9efee;
LAB_00e9c8d9:
  iVar20 = iVar20 + 1;
  if ((int)local_198 <= iVar20) {
    return 0;
  }
  ppppppuVar24 = (undefined8 ******)*puVar3;
  if (ppppppuVar24 <= ppppppuVar27) {
    uVar18 = *puVar5;
    if ((uVar18 == 0) || (ppppppuVar27 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
    *puVar23 = 1;
    goto joined_r0x00e9efee;
  }
  if (uVar14 == 0xc) {
    if (param_5[8] == 0) {
      if ((ppppppuVar27 <= (undefined8 ******)((longlong)ppppppuVar24 + (longlong)(int)*puVar1 * -2)
          ) && (*(ushort *)ppppppuVar27 == (ushort)param_5[0x10])) {
        if (*puVar1 == 1) {
          return 0;
        }
        if (*(ushort *)((longlong)ppppppuVar27 + 2) == *(ushort *)((longlong)param_5 + 0x42)) {
          return 0;
        }
      }
    }
    else {
      iVar21 = FUN_00ea10c0(ppppppuVar27,param_5[8],ppppppuVar24,puVar1,uVar22);
      if (iVar21 != 0) {
        return 0;
      }
    }
  }
  uVar31 = *(ushort *)ppppppuVar27;
  uVar29 = (ulonglong)uVar31;
  if ((uVar31 & 0xfc00) == 0xd800) {
    puVar35 = (ushort *)((longlong)ppppppuVar27 + 2);
    ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
    uVar29 = (ulonglong)((uVar31 & 0x3ff) * 0x400 + 0x10000 + (*puVar35 & 0x3ff));
  }
  else {
    ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
  }
  iVar21 = -0xe;
  uVar18 = (uint)uVar29;
  switch(uVar14 - 6) {
  case 0:
    if (uVar18 < 0x100) {
      bVar39 = (*(byte *)(*(longlong *)puVar2 + uVar29) & 4) == 0;
LAB_00e9cd0b:
      if (!bVar39) {
        return 0;
      }
    }
    break;
  case 1:
    if (0xff < uVar18) {
      return 0;
    }
    bVar39 = (*(byte *)(*(longlong *)puVar2 + uVar29) & 4) == 0;
    goto LAB_00e9ccc2;
  case 2:
    if (uVar18 < 0x100) {
      bVar39 = (*(byte *)(*(longlong *)puVar2 + uVar29) & 1) == 0;
      goto LAB_00e9cd0b;
    }
    break;
  case 3:
    if (0xff < uVar18) {
      return 0;
    }
    bVar39 = (*(byte *)(*(longlong *)puVar2 + uVar29) & 1) == 0;
    goto LAB_00e9ccc2;
  case 4:
    if (uVar18 < 0x100) {
      bVar39 = (*(byte *)(*(longlong *)puVar2 + uVar29) & 0x10) == 0;
      goto LAB_00e9cd0b;
    }
    break;
  case 5:
    if (0xff < uVar18) {
      return 0;
    }
    bVar39 = (*(byte *)(*(longlong *)puVar2 + uVar29) & 0x10) == 0;
    goto LAB_00e9ccc2;
  case 6:
    if (((((*puVar5 != 0) && ((undefined8 ******)*puVar3 <= ppppppuVar27)) && (param_5[8] == 0)) &&
        ((*puVar1 == 2 && (uVar18 == (ushort)param_5[0x10])))) && (*puVar23 = 1, 1 < (int)*puVar5))
    {
      return -0xc;
    }
    break;
  case 7:
  case 8:
    break;
  default:
    goto switchD_00e95ccd_caseD_9d;
  case 0xb:
    if (uVar18 < 0xd) {
      if (1 < uVar18 - 0xb) {
        bVar39 = uVar18 == 10;
        goto LAB_00e9cd0b;
      }
    }
    else if ((1 < uVar18 - 0x2028) && (uVar18 != 0x85)) {
      if (uVar18 != 0xd) {
        return 0;
      }
      if ((ppppppuVar27 < (undefined8 ******)*puVar3) && (*(ushort *)ppppppuVar27 == 10)) {
        ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
      }
      break;
    }
    if (param_5[0x21] != 0) {
      return 0;
    }
    break;
  case 0xc:
    if (uVar18 < 0x2000) {
      if (uVar18 < 0xa0) {
        if (uVar18 == 9) {
          return 0;
        }
        bVar39 = uVar18 == 0x20;
      }
      else {
        if (uVar18 == 0xa0) {
          return 0;
        }
        if (uVar18 == 0x1680) {
          return 0;
        }
        bVar39 = uVar18 == 0x180e;
      }
    }
    else {
      if (uVar18 < 0x202f) {
        if (uVar18 - 0x2000 < 0xb) {
          return 0;
        }
        break;
      }
      if (uVar18 == 0x202f) {
        return 0;
      }
      if (uVar18 == 0x205f) {
        return 0;
      }
      bVar39 = uVar18 == 0x3000;
    }
    goto LAB_00e9ccc2;
  case 0xd:
    if (uVar18 < 0x2000) {
      if (uVar18 < 0xa0) {
        if (uVar18 != 9) {
          bVar39 = uVar18 == 0x20;
          goto LAB_00e9cd0b;
        }
      }
      else if ((uVar18 != 0xa0) && (uVar18 != 0x1680)) {
        bVar39 = uVar18 == 0x180e;
        goto LAB_00e9cd0b;
      }
    }
    else if (uVar18 < 0x202f) {
      if (10 < uVar18 - 0x2000) {
        return 0;
      }
    }
    else if ((uVar18 != 0x202f) && (uVar18 != 0x205f)) {
      bVar39 = uVar18 == 0x3000;
      goto LAB_00e9cd0b;
    }
    break;
  case 0xe:
    if (uVar18 - 10 < 4) {
      return 0;
    }
    if (uVar18 - 0x2028 < 2) {
      return 0;
    }
    bVar39 = uVar18 == 0x85;
LAB_00e9ccc2:
    if (bVar39) {
      return 0;
    }
    break;
  case 0xf:
    if ((3 < uVar18 - 10) && (1 < uVar18 - 0x2028)) {
      bVar39 = uVar18 == 0x85;
      goto LAB_00e9cd0b;
    }
  }
  iVar21 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
  if (iVar21 != 0) {
    return iVar21;
  }
  goto LAB_00e9c8d9;
LAB_00e9d93b:
  iVar20 = iVar20 + 1;
  if ((int)local_198 <= iVar20) {
    return 0;
  }
  ppppppuVar24 = (undefined8 ******)*puVar3;
  if (ppppppuVar24 <= ppppppuVar27) {
    uVar18 = *puVar5;
    if ((uVar18 == 0) || (ppppppuVar27 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
    *puVar23 = 1;
    goto joined_r0x00e9efee;
  }
  if (uVar14 == 0xc) {
    if (param_5[8] == 0) {
      if ((ppppppuVar27 <= (undefined8 ******)((longlong)ppppppuVar24 + (longlong)(int)*puVar1 * -2)
          ) && (*(ushort *)ppppppuVar27 == (ushort)param_5[0x10])) {
        if (*puVar1 == 1) {
          return 0;
        }
        if (*(ushort *)((longlong)ppppppuVar27 + 2) == *(ushort *)((longlong)param_5 + 0x42)) {
          return 0;
        }
      }
    }
    else {
      iVar21 = FUN_00ea10c0(ppppppuVar27,param_5[8],ppppppuVar24,puVar1,
                            (ulonglong)puVar32 & 0xffffffff00000000);
      if (iVar21 != 0) {
        return 0;
      }
    }
    ppppppuVar25 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
    if ((((*puVar5 != 0) && ((undefined8 ******)*puVar3 <= ppppppuVar25)) && (param_5[8] == 0)) &&
       (((*puVar1 == 2 && (*(ushort *)ppppppuVar27 == (ushort)param_5[0x10])) &&
        (*puVar23 = 1, 1 < (int)*puVar5)))) {
      return -0xc;
    }
    goto switchD_00e9d9ad_caseD_7;
  }
  iVar21 = -0xe;
  if (0xf < (ushort)(uVar14 - 6)) {
    return -0xe;
  }
  ppppppuVar25 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
  uVar31 = *(ushort *)ppppppuVar27;
  uVar29 = (ulonglong)uVar31;
  switch(uVar14 - 6) {
  case 0:
    if (uVar31 < 0x100) {
      bVar39 = (*(byte *)(*(longlong *)puVar2 + uVar29) & 4) == 0;
LAB_00e9dd78:
      if (!bVar39) {
        return 0;
      }
    }
    break;
  case 1:
    if (0xff < uVar31) {
      return 0;
    }
    bVar39 = (*(byte *)(*(longlong *)puVar2 + uVar29) & 4) == 0;
    goto LAB_00e9dd26;
  case 2:
    if (uVar31 < 0x100) {
      bVar39 = (*(byte *)(*(longlong *)puVar2 + uVar29) & 1) == 0;
      goto LAB_00e9dd78;
    }
    break;
  case 3:
    if (0xff < uVar31) {
      return 0;
    }
    bVar39 = (*(byte *)(*(longlong *)puVar2 + uVar29) & 1) == 0;
    goto LAB_00e9dd26;
  case 4:
    if (uVar31 < 0x100) {
      bVar39 = (*(byte *)(*(longlong *)puVar2 + uVar29) & 0x10) == 0;
      goto LAB_00e9dd78;
    }
    break;
  case 5:
    if (0xff < uVar31) {
      return 0;
    }
    bVar39 = (*(byte *)(*(longlong *)puVar2 + uVar29) & 0x10) == 0;
    goto LAB_00e9dd26;
  default:
    goto switchD_00e95ccd_caseD_9d;
  case 7:
  case 8:
    break;
  case 0xb:
    if ((short)uVar31 < 0xd) {
      if (1 < (ushort)(uVar31 - 0xb)) {
        bVar39 = uVar31 == 10;
        goto LAB_00e9dd78;
      }
    }
    else if ((1 < (ushort)(uVar31 + 0xdfd8)) && (uVar31 != 0x85)) {
      if (uVar31 != 0xd) {
        return 0;
      }
      if ((ppppppuVar25 < ppppppuVar24) && (*(ushort *)((longlong)ppppppuVar27 + 2) == 10)) {
        ppppppuVar25 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
      }
      break;
    }
    if (param_5[0x21] != 0) {
      return 0;
    }
    break;
  case 0xc:
    if ((short)uVar31 < 0x2000) {
      if ((short)uVar31 < 0xa0) {
        if (uVar31 == 9) {
          return 0;
        }
        bVar39 = uVar31 == 0x20;
      }
      else {
        if (uVar31 == 0xa0) {
          return 0;
        }
        if (uVar31 == 0x1680) {
          return 0;
        }
        bVar39 = uVar31 == 0x180e;
      }
    }
    else {
      if ((short)uVar31 < 0x202f) {
        if ((ushort)(uVar31 + 0xe000) < 0xb) {
          return 0;
        }
        break;
      }
      if (uVar31 == 0x202f) {
        return 0;
      }
      if (uVar31 == 0x205f) {
        return 0;
      }
      bVar39 = uVar31 == 0x3000;
    }
    goto LAB_00e9dd26;
  case 0xd:
    if ((short)uVar31 < 0x2000) {
      if ((short)uVar31 < 0xa0) {
        if (uVar31 != 9) {
          bVar39 = uVar31 == 0x20;
          goto LAB_00e9dd78;
        }
      }
      else if ((uVar31 != 0xa0) && (uVar31 != 0x1680)) {
        bVar39 = uVar31 == 0x180e;
        goto LAB_00e9dd78;
      }
    }
    else if ((short)uVar31 < 0x202f) {
      if (10 < (ushort)(uVar31 + 0xe000)) {
        return 0;
      }
    }
    else if ((uVar31 != 0x202f) && (uVar31 != 0x205f)) {
      bVar39 = uVar31 == 0x3000;
      goto LAB_00e9dd78;
    }
    break;
  case 0xe:
    if ((ushort)(uVar31 - 10) < 4) {
      return 0;
    }
    if ((ushort)(uVar31 + 0xdfd8) < 2) {
      return 0;
    }
    bVar39 = uVar31 == 0x85;
LAB_00e9dd26:
    if (bVar39) {
      return 0;
    }
    break;
  case 0xf:
    if ((3 < (ushort)(uVar31 - 10)) && (1 < (ushort)(uVar31 + 0xdfd8))) {
      bVar39 = uVar31 == 0x85;
      goto LAB_00e9dd78;
    }
  }
switchD_00e9d9ad_caseD_7:
  puVar32 = param_5;
  iVar21 = FUN_00e92bf0(ppppppuVar25,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
  ppppppuVar27 = ppppppuVar25;
  if (iVar21 != 0) {
    return iVar21;
  }
  goto LAB_00e9d93b;
LAB_00e9eaa0:
  if ((int)local_198 <= (int)uVar18) {
    return 0;
  }
  if ((undefined8 ******)*puVar3 <= ppppppuVar27) {
    uVar18 = *puVar5;
    if ((uVar18 == 0) || (ppppppuVar27 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
    *puVar23 = 1;
    goto joined_r0x00e9efee;
  }
  ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
  uVar14 = *(ushort *)ppppppuVar27;
  uVar17 = (uint)uVar14;
  if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
    ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
    uVar17 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*(ushort *)((longlong)ppppppuVar27 + 2) & 0x3ff);
  }
  uVar15 = *(uint *)(&DAT_01ee2000 + (ulonglong)local_16c * 4);
  puVar1 = (uint *)(&DAT_01ee2004 + (ulonglong)local_16c * 4);
  while (uVar15 <= uVar17) {
    if (uVar17 == uVar15) {
      if (local_17c != 0) {
        return 0;
      }
      goto LAB_00e9eb52;
    }
    uVar15 = *puVar1;
    puVar1 = puVar1 + 1;
  }
  if (local_17c == 0) {
    return 0;
  }
LAB_00e9eb52:
  uVar18 = uVar18 + 1;
  iVar20 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
  ppppppuVar27 = ppppppuVar24;
  if (iVar20 != 0) {
    return iVar20;
  }
  goto LAB_00e9eaa0;
LAB_00e9b7f4:
  iVar20 = iVar20 + 1;
  if ((int)local_198 <= iVar20) {
    return 0;
  }
  if ((undefined8 ******)*puVar3 <= ppppppuVar27) {
    uVar18 = *puVar5;
    if ((uVar18 == 0) || (ppppppuVar27 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
    *puVar23 = 1;
    goto joined_r0x00e9efee;
  }
  ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 2);
  uVar14 = *(ushort *)ppppppuVar27;
  uVar29 = (ulonglong)uVar14;
  uVar18 = (uint)uVar14;
  if ((uVar22 != 0) && ((uVar14 & 0xfc00) == 0xd800)) {
    ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar27 + 4);
    uVar18 = (uVar14 & 0x3ff) * 0x400 + 0x10000 + (*(ushort *)((longlong)ppppppuVar27 + 2) & 0x3ff);
    uVar29 = (ulonglong)uVar18;
    if (0x180d < uVar18) goto LAB_00e9b886;
LAB_00e9b85b:
    uVar18 = (uint)uVar29;
    if (uVar18 < 0x85) {
      if ((uVar18 < 0x21) && ((0x100003e00U >> (uVar29 & 0x3f) & 1) != 0))
      goto switchD_00e9b89c_caseD_2000;
      goto switchD_00e9b89c_caseD_200b;
    }
    if (((uVar18 != 0x85) && (uVar18 != 0xa0)) && (uVar18 != 0x1680))
    goto switchD_00e9b89c_caseD_200b;
    goto switchD_00e9b89c_caseD_2000;
  }
  if (uVar14 < 0x180e) goto LAB_00e9b85b;
LAB_00e9b886:
  switch(uVar18) {
  case 0x200b:
  case 0x200c:
  case 0x200d:
  case 0x200e:
  case 0x200f:
  case 0x2010:
  case 0x2011:
  case 0x2012:
  case 0x2013:
  case 0x2014:
  case 0x2015:
  case 0x2016:
  case 0x2017:
  case 0x2018:
  case 0x2019:
  case 0x201a:
  case 0x201b:
  case 0x201c:
  case 0x201d:
  case 0x201e:
  case 0x201f:
  case 0x2020:
  case 0x2021:
  case 0x2022:
  case 0x2023:
  case 0x2024:
  case 0x2025:
  case 0x2026:
  case 0x2027:
  case 0x202a:
  case 0x202b:
  case 0x202c:
  case 0x202d:
  case 0x202e:
  case 0x2030:
  case 0x2031:
  case 0x2032:
  case 0x2033:
  case 0x2034:
  case 0x2035:
  case 0x2036:
  case 0x2037:
  case 0x2038:
  case 0x2039:
  case 0x203a:
  case 0x203b:
  case 0x203c:
  case 0x203d:
  case 0x203e:
  case 0x203f:
  case 0x2040:
  case 0x2041:
  case 0x2042:
  case 0x2043:
  case 0x2044:
  case 0x2045:
  case 0x2046:
  case 0x2047:
  case 0x2048:
  case 0x2049:
  case 0x204a:
  case 0x204b:
  case 0x204c:
  case 0x204d:
  case 0x204e:
  case 0x204f:
  case 0x2050:
  case 0x2051:
  case 0x2052:
  case 0x2053:
  case 0x2054:
  case 0x2055:
  case 0x2056:
  case 0x2057:
  case 0x2058:
  case 0x2059:
  case 0x205a:
  case 0x205b:
  case 0x205c:
  case 0x205d:
  case 0x205e:
switchD_00e9b89c_caseD_200b:
    if (local_17c ==
        (*(int *)(&DAT_01ee1630 +
                 (ulonglong)
                 (byte)(&DAT_01ee2141)
                       [(ulonglong)
                        *(ushort *)
                         (&DAT_01ee59c0 +
                         ((longlong)(int)(uVar18 % 0x80) +
                         (ulonglong)(byte)(&DAT_01ee37c0)[(int)uVar18 >> 7] * 0x80) * 2) * 8] * 4)
        == 6)) {
      return 0;
    }
    break;
  default:
    if ((uVar18 != 0x3000) && (uVar18 != 0x180e)) goto switchD_00e9b89c_caseD_200b;
  case 0x2000:
  case 0x2001:
  case 0x2002:
  case 0x2003:
  case 0x2004:
  case 0x2005:
  case 0x2006:
  case 0x2007:
  case 0x2008:
  case 0x2009:
  case 0x200a:
  case 0x2028:
  case 0x2029:
  case 0x202f:
  case 0x205f:
switchD_00e9b89c_caseD_2000:
    if (local_17c != 0) {
      return 0;
    }
  }
  iVar21 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
  ppppppuVar27 = ppppppuVar24;
  if (iVar21 != 0) {
    return iVar21;
  }
  goto LAB_00e9b7f4;
joined_r0x00e9a275:
  while (local_1e8 < ppppppuVar24) {
    iVar20 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
    if ((*(ushort *)((longlong)ppppppuVar24 + -2) & 0xfc00) == 0xdc00) {
      ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + -4);
    }
    else {
      ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + -2);
    }
  }
  goto LAB_00e9a6be;
joined_r0x00e9a508:
  for (; ppppppuVar24 = local_1e8, ppppppuVar27 != local_1e8;
      ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar27 + -2)) {
    iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
  }
  goto LAB_00e9a6be;
joined_r0x00e9a300:
  while (local_1e8 < ppppppuVar24) {
    iVar20 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
    if ((*(ushort *)((longlong)ppppppuVar24 + -2) & 0xfc00) == 0xdc00) {
      ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + -4);
    }
    else {
      ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + -2);
    }
  }
  goto LAB_00e9a6be;
joined_r0x00e9a57a:
  for (; ppppppuVar24 = local_1e8, ppppppuVar27 != local_1e8;
      ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar27 + -2)) {
    iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
  }
  goto LAB_00e9a6be;
LAB_00e9bdaf:
  while( true ) {
    iVar20 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
    if ((int)uVar18 <= (int)uVar17) {
      return 0;
    }
    if ((undefined8 ******)*puVar3 <= local_1e8) break;
    if (uVar31 != *(ushort *)local_1e8) {
      return 0;
    }
    local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
    uVar17 = uVar17 + 1;
  }
  uVar18 = *puVar5;
  if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
  *puVar23 = 1;
  goto joined_r0x00e9efee;
joined_r0x00e9a390:
  for (; ppppppuVar24 = local_1e8, ppppppuVar27 != local_1e8;
      ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar27 - 2)) {
    iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
  }
  goto LAB_00e9a6be;
joined_r0x00e9a402:
  for (; ppppppuVar24 = local_1e8, ppppppuVar27 != local_1e8;
      ppppppuVar27 = (undefined8 ******)((longlong)ppppppuVar27 - 2)) {
    iVar20 = FUN_00e92bf0(ppppppuVar27,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
  }
  goto LAB_00e9a6be;
LAB_00e9b67e:
  iVar20 = iVar20 + 1;
  if ((int)uVar18 <= iVar20) {
    return 0;
  }
  ppppppuVar24 = (undefined8 ******)*puVar3;
  if (((undefined8 ******)((longlong)ppppppuVar24 - 4U) < local_1d8) ||
     (*(int *)local_1d8 != *(int *)puVar37)) {
    if (((int)local_198 < 1) ||
       (((undefined8 ******)((longlong)ppppppuVar24 + (longlong)(int)local_198 * -2) < local_1d8 ||
        (iVar21 = FUN_00626660(local_1d8,local_d4,(longlong)(int)(local_198 * 2)),
        lVar26 = (longlong)(int)local_198, iVar21 != 0)))) {
      if (local_1d8 < ppppppuVar24) {
        return 0;
      }
      uVar18 = *puVar5;
      if (uVar18 == 0) {
        return 0;
      }
      if (local_1d8 <= (undefined8 ******)*puVar4) {
        return 0;
      }
      *puVar23 = 1;
      goto joined_r0x00e9f090;
    }
  }
  else {
    lVar26 = 2;
  }
  local_1d8 = (undefined8 ******)((longlong)local_1d8 + lVar26 * 2);
  iVar21 = FUN_00e92bf0(local_1d8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
  if (iVar21 != 0) {
    return iVar21;
  }
  goto LAB_00e9b67e;
joined_r0x00e9a109:
  while (local_1e8 < ppppppuVar24) {
    iVar20 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
    if ((*(ushort *)((longlong)ppppppuVar24 + -2) & 0xfc00) == 0xdc00) {
      ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + -4);
    }
    else {
      ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + -2);
    }
  }
  goto LAB_00e9a6be;
LAB_00e9d314:
  do {
    if (0x87 < uVar14) {
      param_5[0x34] = 2;
    }
    iVar20 = FUN_00e92bf0(local_1e8,puVar35 + (byte)(&DAT_01ee1510)[uVar29],local_1a0,local_1dc,
                          param_5,local_190,param_7 + 1);
    if (iVar20 == -0x3e0) {
      uVar29 = (ulonglong)puVar35[1];
      if (puVar35 + uVar29 <= *(ushort **)(param_5 + 0x2a)) {
        return -0x3e0;
      }
      if ((*puVar35 != 0x77) && (puVar35[uVar29] != 0x77)) {
        return -0x3e0;
      }
    }
    else {
      if (iVar20 != 0) {
        iVar21 = -0x3e5;
        if (iVar20 != -0x3e5) {
          return iVar20;
        }
        goto LAB_00e9ed09;
      }
      uVar29 = (ulonglong)puVar35[1];
    }
    param_5[0x32] = uVar18;
    *(undefined8 *)(param_5 + 0x3e) = uVar13;
    puVar37 = puVar35 + uVar29;
    puVar35 = puVar35 + uVar29;
    uVar29 = 0x77;
  } while (*puVar37 == 0x77);
  iVar21 = 0;
LAB_00e9ed09:
  lVar26 = *(longlong *)(param_5 + 4);
  *(undefined4 *)(lVar26 + (ulonglong)uVar31 * 8) = uVar8;
  *(undefined4 *)(lVar26 + uVar30 * 4) = uVar9;
  *(undefined4 *)(lVar26 + (ulonglong)(param_5[6] - (uint)uVar31) * 4) = uVar10;
  return iVar21;
  while( true ) {
    ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + (longlong)iVar21 * 2);
    uVar17 = uVar17 + 1;
    if ((int)uVar18 <= (int)uVar17) break;
LAB_00e9d7a7:
    iVar21 = FUN_00e9ff90(lVar26,ppppppuVar24,iVar20,param_5,bVar39);
    if (iVar21 < 0) {
      if ((((iVar21 == -2) && (*puVar5 != 0)) && (*puVar4 < *puVar3)) &&
         (*puVar23 = 1, 1 < (int)*puVar5)) {
        return -0xc;
      }
      break;
    }
  }
  if (local_1e8 <= ppppppuVar24) {
LAB_00e9ef0a:
    do {
      iVar21 = FUN_00e92bf0(ppppppuVar24,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
      if (iVar21 != 0) {
        return iVar21;
      }
      ppppppuVar24 = (undefined8 ******)((longlong)ppppppuVar24 + (longlong)iVar20 * -2);
    } while (local_1e8 <= ppppppuVar24);
  }
  return 0;
LAB_00e9be64:
  while( true ) {
    iVar20 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
    if (iVar20 != 0) {
      return iVar20;
    }
    if ((int)uVar18 <= (int)uVar17) {
      return 0;
    }
    if ((undefined8 ******)*puVar3 <= local_1e8) break;
    if ((uVar31 != *(ushort *)local_1e8) && (uVar16 != *(ushort *)local_1e8)) {
      return 0;
    }
    local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
    uVar17 = uVar17 + 1;
  }
  uVar18 = *puVar5;
  if ((uVar18 == 0) || (local_1e8 <= (undefined8 ******)*puVar4)) goto LAB_00e9f470;
  *puVar23 = 1;
joined_r0x00e9efee:
  if (1 < (int)uVar18) {
    return -0xc;
  }
LAB_00e9f470:
  iVar21 = 0;
switchD_00e95ccd_caseD_9d:
  return iVar21;
joined_r0x00e9df4f:
  while( true ) {
    if (iVar20 != 0) {
      return iVar20;
    }
    if ((int)uVar18 <= (int)uVar17) {
      return 0;
    }
    if ((undefined8 ******)*puVar3 <= local_1e8) break;
    uVar31 = *(ushort *)local_1e8;
    if (uVar31 < 0x100) {
      if ((*(byte *)((longlong)puVar35 + (ulonglong)(uVar31 >> 3) + 2) >> ((byte)uVar31 & 7) & 1) ==
          0) {
        return 0;
      }
    }
    else if (uVar14 == 0x6e) {
      return 0;
    }
    local_1e8 = (undefined8 ******)((longlong)local_1e8 + 2);
    uVar17 = uVar17 + 1;
    iVar20 = FUN_00e92bf0(local_1e8,param_2,local_1a0,local_1dc,param_5,local_190,param_7 + 1);
  }
  uVar18 = *puVar5;
  if ((uVar18 != 0) && ((undefined8 ******)*puVar4 < local_1e8)) {
    *puVar23 = 1;
joined_r0x00e9f090:
    if (1 < (int)uVar18) {
      return -0xc;
    }
  }
  return 0;
}

