/* Ghidra address: 00e90780 */
/* Ghidra symbol: FUN_00e90780 */


ushort FUN_00e90780(ushort *param_1,undefined4 param_2,longlong param_3,int *param_4,ushort *param_5
                   ,int *param_6)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  ulonglong uVar12;
  int *piVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  bool bVar19;
  int local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  uint *local_50;
  uint *local_48;
  
  if (*param_6 == 0) {
switchD_00e90fed_caseD_c:
    return 0;
  }
  *param_6 = *param_6 + -1;
  local_50 = (uint *)(param_4 + 2);
  uVar5 = 0;
LAB_00e90dd0:
  for (; uVar3 = *param_1, puVar11 = param_1, uVar3 == 0x76; param_1 = param_1 + DAT_01ee1586) {
  }
  while (uVar14 = (uint)uVar3, uVar14 == 0x77) {
    uVar3 = puVar11[puVar11[1]];
    puVar11 = puVar11 + puVar11[1];
  }
  switch(uVar3 - 0x78) {
  case 0:
    if (param_4[1] == 0) {
      return 0;
    }
    if (puVar11[-(ulonglong)puVar11[1]] - 0x7d < 6) {
      return uVar5 ^ 1;
    }
    param_1 = puVar11 + DAT_01ee1588;
    goto LAB_00e90dd0;
  case 3:
switchD_00e90e23_caseD_3:
    return (ushort)(param_4[1] != 0);
  case 9:
  case 10:
  case 0xb:
  case 0xd:
    param_1 = puVar11 + (byte)(&DAT_01ee1510)[uVar14];
    uVar5 = 1;
    if (puVar11[puVar11[1]] == 0x77) {
      puVar11 = puVar11 + puVar11[1];
      do {
        iVar7 = FUN_00e90780(param_1,param_2,param_3,param_4,param_5,param_6);
        if (iVar7 == 0) {
          return 0;
        }
        puVar10 = puVar11 + puVar11[1];
        param_1 = puVar11 + 2;
        puVar11 = puVar11 + puVar11[1];
      } while (*puVar10 == 0x77);
    }
    goto LAB_00e90dd0;
  case 0x1a:
  case 0x1b:
    if (4 < (ushort)(puVar11[1] - 0x81)) {
      return 0;
    }
    if ((ushort)(puVar11[1] - 0x81) == 3) {
      return 0;
    }
    puVar10 = puVar11 + 1;
    do {
      puVar9 = puVar10 + puVar10[1];
      puVar10 = puVar10 + puVar10[1];
    } while (*puVar9 == 0x77);
    iVar7 = FUN_00e90780(puVar10 + 2,param_2,param_3,param_4,param_5,param_6);
    if (iVar7 == 0) {
      return 0;
    }
    param_1 = puVar11 + (byte)(&DAT_01ee1510)[uVar14];
    goto LAB_00e90dd0;
  default:
    if (uVar3 == 0) goto switchD_00e90e23_caseD_3;
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
    param_1 = (ushort *)FUN_00e901b0(puVar11,param_2,*(undefined8 *)(param_3 + 8),&local_78);
    if (param_1 == (ushort *)0x0) {
      return 0;
    }
    iVar7 = *param_4;
    piVar13 = &local_78;
    puVar17 = local_50;
    if ((iVar7 == 0x1d) || (puVar17 = &local_70, piVar13 = param_4, local_78 == 0x1d)) {
      uVar14 = *puVar17;
      puVar11 = param_1;
      if (piVar13 != &local_78) {
        puVar11 = param_5;
      }
      local_48 = (uint *)(piVar13 + 3);
      do {
        uVar12 = (ulonglong)uVar14;
        iVar7 = *piVar13;
        switch(iVar7) {
        case 6:
          if (0xff < uVar14) {
            return 0;
          }
          bVar4 = *(byte *)(*(longlong *)(param_3 + 0x18) + uVar12) & 4;
          goto joined_r0x00e9115d;
        case 7:
          if (uVar14 < 0x100) {
            bVar4 = *(byte *)(*(longlong *)(param_3 + 0x18) + uVar12) & 4;
            goto joined_r0x00e912a0;
          }
          break;
        case 8:
          if (0xff < uVar14) {
            return 0;
          }
          bVar4 = *(byte *)(*(longlong *)(param_3 + 0x18) + uVar12) & 1;
          goto joined_r0x00e9115d;
        case 9:
          if (uVar14 < 0x100) {
            bVar4 = *(byte *)(*(longlong *)(param_3 + 0x18) + uVar12) & 1;
            goto joined_r0x00e912a0;
          }
          break;
        case 10:
          if (0xff < uVar14) {
            return 0;
          }
          bVar4 = *(byte *)(*(longlong *)(param_3 + 0x18) + uVar12) & 0x10;
joined_r0x00e9115d:
          if (bVar4 == 0) {
            return 0;
          }
          break;
        case 0xb:
          if (uVar14 < 0xff) {
            bVar4 = *(byte *)(*(longlong *)(param_3 + 0x18) + uVar12) & 0x10;
            goto joined_r0x00e912a0;
          }
          break;
        default:
          goto switchD_00e90fed_caseD_c;
        case 0xf:
        case 0x10:
          bVar19 = iVar7 == 0xf;
          if (8 < piVar13[2] - 1U) {
            return 0;
          }
          uVar15 = (ulonglong)
                   *(ushort *)
                    (&DAT_01ee59c0 +
                    ((longlong)((int)uVar14 % 0x80) +
                    (ulonglong)
                    (byte)(&DAT_01ee37c0)
                          [(int)(((uint)((int)uVar14 >> 0x1f) >> 0x19) + uVar14) >> 7] * 0x80) * 2);
          switch(piVar13[2]) {
          case 1:
            cVar2 = (&DAT_01ee2141)[uVar15 * 8];
            bVar18 = true;
            if ((cVar2 != '\x05') && (cVar2 != '\t')) {
              bVar18 = cVar2 == '\b';
            }
            if ((bool)(bVar19 ^ bVar18)) {
              return 0;
            }
            goto switchD_00e90fed_caseD_18;
          case 2:
            bVar19 = *(uint *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar15 * 8] * 4) ==
                     piVar13[3];
            goto LAB_00e91433;
          case 3:
            bVar4 = (&DAT_01ee2141)[uVar15 * 8];
            goto LAB_00e9140c;
          case 4:
            bVar4 = (&DAT_01ee2140)[uVar15 * 8];
LAB_00e9140c:
            bVar19 = piVar13[3] == (uint)bVar4;
            goto LAB_00e91433;
          case 5:
            bVar19 = (*(uint *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar15 * 8] * 4) |
                     2) == 3;
LAB_00e91433:
            bVar19 = (bool)(bVar19 ^ iVar7 == 0xf ^ 1);
            break;
          default:
            if ((int)uVar14 < 0x180e) {
              if ((int)uVar14 < 0x85) {
                if ((0x20 < uVar14) || ((0x100003e00U >> (uVar12 & 0x3f) & 1) == 0))
                goto switchD_00e910c1_caseD_200b;
              }
              else if (((uVar14 != 0x85) && (uVar14 != 0xa0)) && (uVar14 != 0x1680))
              goto switchD_00e910c1_caseD_200b;
            }
            else {
              switch(uVar14) {
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
switchD_00e910c1_caseD_200b:
                if ((*(int *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar15 * 8] * 4) == 6
                    ) != (iVar7 == 0xf)) {
                  return 0;
                }
                goto switchD_00e90fed_caseD_18;
              default:
                if ((uVar14 != 0x180e) && (uVar14 != 0x3000)) goto switchD_00e910c1_caseD_200b;
              }
            }
            break;
          case 8:
            bVar19 = bVar19 == ((*(uint *)(&DAT_01ee1630 +
                                          (ulonglong)(byte)(&DAT_01ee2141)[uVar15 * 8] * 4) | 2) ==
                                3 || uVar14 == 0x5f);
            break;
          case 9:
            uVar16 = *(uint *)(&DAT_01ee2000 + (ulonglong)(byte)(&DAT_01ee2143)[uVar15 * 8] * 4);
            if (uVar16 <= uVar14) {
              puVar8 = (uint *)(&DAT_01ee2004 + (ulonglong)(byte)(&DAT_01ee2143)[uVar15 * 8] * 4);
              do {
                if (uVar16 == uVar14) goto switchD_00e910c1_caseD_2000;
                uVar16 = *puVar8;
                puVar8 = puVar8 + 1;
              } while (uVar16 <= uVar14);
            }
            bVar19 = iVar7 != 0xf;
          }
switchD_00e910c1_caseD_2000:
          if (!bVar19) {
            return 0;
          }
          break;
        case 0x11:
        case 0x15:
        case 0x17:
        case 0x19:
          if (uVar14 - 10 < 4) {
            return 0;
          }
          if (uVar14 - 0x2028 < 2) {
            return 0;
          }
          if (uVar14 == 0x85) {
            return 0;
          }
          break;
        case 0x12:
          if ((int)uVar14 < 0x2000) {
            if ((int)uVar14 < 0xa0) {
              if ((uVar14 != 9) && (uVar14 != 0x20)) {
                return 0;
              }
            }
            else if (((uVar14 != 0xa0) && (uVar14 != 0x1680)) && (uVar14 != 0x180e)) {
              return 0;
            }
          }
          else if ((int)uVar14 < 0x202f) {
            if (10 < uVar14 - 0x2000) {
              return 0;
            }
          }
          else if (((uVar14 != 0x202f) && (uVar14 != 0x205f)) && (uVar14 != 0x3000)) {
            return 0;
          }
          break;
        case 0x13:
          if ((int)uVar14 < 0x2000) {
            if ((int)uVar14 < 0xa0) {
              if (uVar14 == 9) {
                return 0;
              }
              if (uVar14 == 0x20) {
                return 0;
              }
            }
            else {
              if (uVar14 == 0xa0) {
                return 0;
              }
              if (uVar14 == 0x1680) {
                return 0;
              }
              if (uVar14 == 0x180e) {
                return 0;
              }
            }
          }
          else if ((int)uVar14 < 0x202f) {
            if (uVar14 - 0x2000 < 0xb) {
              return 0;
            }
          }
          else {
            if (uVar14 == 0x202f) {
              return 0;
            }
            if (uVar14 == 0x205f) {
              return 0;
            }
            if (uVar14 == 0x3000) {
              return 0;
            }
          }
          break;
        case 0x14:
          if (((3 < uVar14 - 10) && (1 < uVar14 - 0x2028)) && (uVar14 != 0x85)) {
            return 0;
          }
          break;
        case 0x18:
          break;
        case 0x1d:
          uVar16 = piVar13[2];
          puVar8 = local_48;
          do {
            if (uVar14 == uVar16) {
              return 0;
            }
            uVar16 = *puVar8;
            puVar8 = puVar8 + 1;
          } while (uVar16 != 0xffffffff);
          break;
        case 0x1f:
          uVar16 = piVar13[2];
          puVar8 = local_48;
          while (uVar14 != uVar16) {
            uVar16 = *puVar8;
            puVar8 = puVar8 + 1;
            if (uVar16 == 0xffffffff) {
              return 0;
            }
          }
          if (uVar14 == 0xffffffff) {
            return 0;
          }
          break;
        case 0x6e:
          if (uVar14 < 0x100) goto LAB_00e91281;
          break;
        case 0x6f:
          if (0xff < uVar14) {
            return 0;
          }
LAB_00e91281:
          bVar4 = *(byte *)((longlong)puVar11 +
                           (ulonglong)(uVar14 >> 3) + (ulonglong)(uint)piVar13[2] * -2) >>
                  ((byte)uVar14 & 7) & 1;
joined_r0x00e912a0:
          if (bVar4 != 0) {
            return 0;
          }
          break;
        case 0x70:
          iVar7 = FUN_00ea14c0(uVar12,puVar11 + (1 - (ulonglong)(uint)piVar13[2]),param_2);
          if (iVar7 != 0) {
            return 0;
          }
        }
switchD_00e90fed_caseD_18:
        uVar14 = puVar17[1];
        puVar17 = puVar17 + 1;
      } while (uVar14 != 0xffffffff);
      goto joined_r0x00e90a22;
    }
    if ((iVar7 != 0x6e) && (local_78 != 0x6e)) {
      if (1 < iVar7 - 0xfU) {
        if (0x10 < iVar7 - 6U) {
          return 0;
        }
        if (0x14 < local_78 - 6U) {
          return 0;
        }
        if ((&DAT_01ee0220)[(ulonglong)(local_78 - 6U) + (ulonglong)(iVar7 - 6U) * 0x15] == '\0') {
          return 0;
        }
        goto joined_r0x00e90a22;
      }
      if (local_78 == 0x18) goto joined_r0x00e90a22;
      if (1 < local_78 - 0xfU) {
        return 0;
      }
      uVar12 = (ulonglong)(byte)(&DAT_01ee00c0)[(ulonglong)local_70 + (ulonglong)*local_50 * 0xb];
      switch((&DAT_01ee00c0)[(ulonglong)local_70 + (ulonglong)*local_50 * 0xb]) {
      case 1:
        if (iVar7 != 0x10) {
          return 0;
        }
        if (local_78 != 0x10) {
          return 0;
        }
        break;
      case 2:
        if ((param_4[3] == local_6c) == (iVar7 == local_78)) {
          return 0;
        }
        break;
      case 3:
        if (iVar7 == local_78) {
          return 0;
        }
        break;
      case 4:
        if (local_78 != 0x10) {
          return 0;
        }
        uVar14 = param_4[3];
        uVar16 = local_6c;
        goto LAB_00e90da4;
      case 5:
        if (iVar7 != 0x10) {
          return 0;
        }
        uVar14 = local_6c;
        uVar16 = param_4[3];
LAB_00e90da4:
        if ((bool)(&DAT_01ee0140)[(ulonglong)uVar16 + (ulonglong)uVar14 * 0x1e] !=
            (iVar7 == local_78)) {
          return 0;
        }
        break;
      case 6:
      case 7:
      case 8:
        if (local_78 != 0x10) {
          return 0;
        }
        if ((local_6c != (byte)(&DAT_01ee01fa)[uVar12 * 4]) &&
           (local_6c != (byte)(&DAT_01ee01fb)[uVar12 * 4])) {
          bVar19 = iVar7 == 0x10;
          bVar18 = local_6c == (byte)(&DAT_01ee01fc)[uVar12 * 4] && iVar7 == 0x10;
          goto LAB_00e90d2f;
        }
joined_r0x00e90d24:
        if (iVar7 == 0x10) {
          return 0;
        }
        break;
      case 9:
      case 10:
      case 0xb:
        if (iVar7 != 0x10) {
          return 0;
        }
        uVar14 = param_4[3];
        iVar7 = local_78;
        if ((uVar14 == (byte)(&DAT_01ee01ee)[uVar12 * 4]) ||
           (uVar14 == (byte)(&DAT_01ee01ef)[uVar12 * 4])) goto joined_r0x00e90d24;
        bVar19 = local_78 == 0x10;
        bVar18 = uVar14 == (byte)(&DAT_01ee01f0)[uVar12 * 4] && local_78 == 0x10;
        goto LAB_00e90d2f;
      case 0xc:
      case 0xd:
      case 0xe:
        if (local_78 != 0x10) {
          return 0;
        }
        if (((&DAT_01ee0140)
             [(ulonglong)local_6c + (ulonglong)(byte)(&DAT_01ee01e2)[uVar12 * 4] * 0x1e] == '\0') ||
           ((&DAT_01ee0140)
            [(ulonglong)local_6c + (ulonglong)(byte)(&DAT_01ee01e3)[uVar12 * 4] * 0x1e] == '\0'))
        goto joined_r0x00e90d24;
        bVar19 = iVar7 == 0x10;
        bVar18 = (byte)(&DAT_01ee01e5)[uVar12 * 4] == local_6c && iVar7 == 0x10;
        goto LAB_00e90d2f;
      case 0xf:
      case 0x10:
      case 0x11:
        if (iVar7 != 0x10) {
          return 0;
        }
        uVar14 = param_4[3];
        iVar7 = local_78;
        if (((&DAT_01ee0140)
             [(ulonglong)uVar14 + (ulonglong)(byte)(&DAT_01ee01d6)[uVar12 * 4] * 0x1e] == '\0') ||
           ((&DAT_01ee0140)[(ulonglong)uVar14 + (ulonglong)(byte)(&DAT_01ee01d7)[uVar12 * 4] * 0x1e]
            == '\0')) goto joined_r0x00e90d24;
        bVar19 = local_78 == 0x10;
        bVar18 = (byte)(&DAT_01ee01d9)[uVar12 * 4] == uVar14 && local_78 == 0x10;
LAB_00e90d2f:
        if ((bool)(!bVar18 ^ bVar19)) {
          return 0;
        }
        break;
      default:
        goto switchD_00e90fed_caseD_c;
      }
joined_r0x00e90a22:
      if (local_74 == 0) {
        return 1;
      }
      goto LAB_00e90dd0;
    }
    puVar11 = param_1;
    uVar14 = local_70;
    if (iVar7 == 0x6e) {
      puVar11 = param_5;
      piVar13 = &local_78;
      uVar14 = *local_50;
      iVar7 = local_78;
    }
  }
  puVar11 = puVar11 + -(ulonglong)uVar14;
  bVar19 = false;
  bVar18 = false;
  bVar6 = false;
  puVar10 = puVar11;
  switch(iVar7) {
  case 6:
    bVar19 = true;
  case 7:
    puVar9 = (ushort *)(*(longlong *)(param_3 + 0x10) + 0x40);
    break;
  case 8:
    bVar18 = true;
  case 9:
    bVar19 = bVar18;
    puVar9 = *(ushort **)(param_3 + 0x10);
    break;
  case 10:
    bVar6 = true;
  case 0xb:
    bVar19 = bVar6;
    puVar9 = (ushort *)(*(longlong *)(param_3 + 0x10) + 0xa0);
    break;
  default:
    if (iVar7 - 0x6eU < 2) {
      puVar9 = param_1;
      if (piVar13 != &local_78) {
        puVar9 = param_5;
      }
      puVar9 = puVar9 + -(ulonglong)(uint)piVar13[2];
      goto LAB_00e90b90;
    }
    if (iVar7 != 0x70) {
      return 0;
    }
    puVar9 = param_1;
    if (piVar13 != &local_78) {
      puVar9 = param_5;
    }
    uVar3 = puVar9[1 - (ulonglong)(uint)piVar13[2]];
    if ((uVar3 & 4) != 0) {
      return 0;
    }
    if ((uVar3 & 2) != 0) {
      puVar9 = puVar9 + (2 - (ulonglong)(uint)piVar13[2]);
      goto LAB_00e90b90;
    }
    if (local_74 == 0) {
      return ~uVar3 & 1;
    }
    goto LAB_00e90dd0;
  }
  puVar1 = puVar11 + 0x10;
  if (bVar19) {
    do {
      if ((byte)((byte)*puVar11 & ~(byte)*puVar9) != 0) {
        return 0;
      }
      puVar11 = (ushort *)((longlong)puVar11 + 1);
      puVar9 = (ushort *)((longlong)puVar9 + 1);
    } while (puVar11 < puVar1);
  }
  else {
LAB_00e90b90:
    do {
      if ((byte)((byte)*puVar10 & (byte)*puVar9) != 0) {
        return 0;
      }
      puVar10 = (ushort *)((longlong)puVar10 + 1);
      puVar9 = (ushort *)((longlong)puVar9 + 1);
    } while (puVar10 < puVar11 + 0x10);
  }
  goto joined_r0x00e90a22;
}

