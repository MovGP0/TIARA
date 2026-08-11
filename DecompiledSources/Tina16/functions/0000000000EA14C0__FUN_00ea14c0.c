/* Ghidra address: 00ea14c0 */
/* Ghidra symbol: FUN_00ea14c0 */


ushort FUN_00ea14c0(uint param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  uVar2 = *param_2;
  if (param_1 < 0x100) {
    if ((uVar2 & 4) == 0) {
      uVar4 = uVar2 & 1;
      if ((uVar2 & 2) != 0) {
        uVar4 = (ushort)((*(byte *)((longlong)param_2 + (ulonglong)(param_1 >> 3) + 2) >>
                          ((byte)param_1 & 7) & 1) != 0);
      }
    }
    else {
      if (((uVar2 & 2) == 0) ||
         ((*(byte *)((longlong)param_2 + (ulonglong)(param_1 >> 3) + 2) >> ((byte)param_1 & 7) & 1)
          == 0)) goto LAB_00ea152a;
LAB_00ea19bc:
      uVar4 = (ushort)((uVar2 & 1) == 0);
    }
switchD_00ea15cc_caseD_9:
    return uVar4;
  }
LAB_00ea152a:
  puVar6 = param_2 + 0x11;
  if ((uVar2 & 2) == 0) {
    puVar6 = param_2 + 1;
  }
LAB_00ea1584:
  do {
    while( true ) {
      uVar3 = *puVar6;
      if (uVar3 == 1) goto LAB_00ea1600;
      if (uVar3 == 2) break;
      if (uVar3 == 0) {
        return uVar2 & 1;
      }
      uVar4 = 0;
      if (0xd < puVar6[1]) {
        return 0;
      }
      uVar9 = (ulonglong)
              *(ushort *)
               (&DAT_01ee59c0 +
               ((ulonglong)
                (byte)(&DAT_01ee37c0)[(int)(((uint)((int)param_1 >> 0x1f) >> 0x19) + param_1) >> 7]
                * 0x80 + (longlong)((int)param_1 % 0x80)) * 2);
      switch(puVar6[1]) {
      case 0:
        break;
      case 1:
        if ((ulonglong)(byte)(&DAT_01ee2141)[uVar9 * 8] < 10) {
          uVar9 = 800L >> ((ulonglong)(byte)(&DAT_01ee2141)[uVar9 * 8] & 0x3f);
joined_r0x00ea17f7:
          if ((uVar9 & 1) != 0) break;
        }
        goto joined_r0x00ea1870;
      case 2:
        bVar10 = *(uint *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar9 * 8] * 4) ==
                 (uint)puVar6[2];
        goto LAB_00ea19ad;
      case 3:
        uVar4 = puVar6[2];
        bVar1 = (&DAT_01ee2141)[uVar9 * 8];
        goto LAB_00ea1773;
      case 4:
        uVar4 = puVar6[2];
        bVar1 = (&DAT_01ee2140)[uVar9 * 8];
LAB_00ea1773:
        bVar10 = uVar4 == bVar1;
        goto LAB_00ea19ad;
      case 5:
        bVar10 = (*(uint *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar9 * 8] * 4) | 2) ==
                 3;
LAB_00ea19ad:
        if ((bool)(bVar10 ^ uVar3 == 3)) goto LAB_00ea1580;
        goto LAB_00ea19bc;
      default:
        if ((int)param_1 < 0x180e) {
          if ((int)param_1 < 0x85) {
            if ((0x20 < param_1) || ((0x100003e00U >> ((ulonglong)param_1 & 0x3f) & 1) == 0))
            goto switchD_00ea15f7_caseD_200b;
          }
          else if (((param_1 != 0x85) && (param_1 != 0xa0)) && (param_1 != 0x1680))
          goto switchD_00ea15f7_caseD_200b;
        }
        else {
          switch(param_1) {
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
switchD_00ea15f7_caseD_200b:
            bVar10 = *(int *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar9 * 8] * 4) == 6;
            goto LAB_00ea19ad;
          default:
            if ((param_1 != 0x3000) && (param_1 != 0x180e)) goto switchD_00ea15f7_caseD_200b;
          }
        }
        break;
      case 8:
        if ((*(uint *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar9 * 8] * 4) | 2) != 3) {
          bVar10 = param_1 == 0x5f;
          goto LAB_00ea19ad;
        }
        break;
      case 9:
        goto switchD_00ea15cc_caseD_9;
      case 10:
        if (0x9f < param_1) {
          bVar10 = (param_1 & 0xfffff800) != 0xd800;
          goto LAB_00ea19ad;
        }
        if (param_1 - 0x24 < 0x3d) {
          uVar9 = 0x1000000010000001 >> ((ulonglong)(param_1 - 0x24) & 0x3f);
          goto joined_r0x00ea17f7;
        }
        goto joined_r0x00ea1870;
      case 0xb:
        if (*(int *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar9 * 8] * 4) != 6) {
          if (*(int *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar9 * 8] * 4) != 0) break;
          if ((((&DAT_01ee2141)[uVar9 * 8] == 1) && (param_1 != 0x61c)) && (param_1 != 0x180e)) {
LAB_00ea1962:
            bVar10 = 3 < param_1 - 0x2066;
            goto LAB_00ea19ad;
          }
        }
joined_r0x00ea1870:
        if (uVar3 == 3) goto LAB_00ea1580;
        goto LAB_00ea19bc;
      case 0xc:
        bVar1 = (&DAT_01ee2141)[uVar9 * 8];
        if ((byte)(bVar1 - 0x1b) < 2) goto joined_r0x00ea1870;
        if (*(int *)(&DAT_01ee1630 + (ulonglong)bVar1 * 4) == 0) {
          if ((param_1 != 0x61c) && (bVar1 == 1)) goto LAB_00ea1962;
          goto joined_r0x00ea1870;
        }
        goto joined_r0x00ea1929;
      case 0xd:
        if (*(int *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar9 * 8] * 4) == 4) break;
        if ((*(int *)(&DAT_01ee1630 + (ulonglong)(byte)(&DAT_01ee2141)[uVar9 * 8] * 4) == 5 &&
            param_1 < 0x80) != (uVar3 == 3)) goto LAB_00ea1580;
        goto LAB_00ea19bc;
      }
joined_r0x00ea1929:
      if (uVar3 == 3) goto LAB_00ea19bc;
LAB_00ea1580:
      puVar6 = puVar6 + 3;
    }
    uVar4 = puVar6[1];
    uVar5 = (uint)uVar4;
    if (param_3 == 0) {
      uVar8 = (uint)puVar6[2];
      puVar6 = puVar6 + 3;
      uVar5 = (uint)uVar4;
    }
    else {
      if ((uVar4 & 0xfc00) == 0xd800) {
        puVar7 = puVar6 + 3;
        uVar5 = (uVar4 & 0x3ff) * 0x400 + 0x10000 + (puVar6[2] & 0x3ff);
      }
      else {
        puVar7 = puVar6 + 2;
      }
      uVar8 = (uint)*puVar7;
      if ((uVar8 & 0xfc00) == 0xd800) {
        puVar6 = puVar7 + 2;
        uVar8 = (*puVar7 & 0x3ff) * 0x400 + 0x10000 + (puVar7[1] & 0x3ff);
      }
      else {
        puVar6 = puVar7 + 1;
      }
    }
  } while ((param_1 < uVar5) || (uVar8 < param_1));
  goto LAB_00ea19bc;
LAB_00ea1600:
  uVar4 = puVar6[1];
  puVar7 = puVar6 + 2;
  uVar5 = (uint)uVar4;
  if ((param_3 != 0) && (uVar5 = (uint)uVar4, (uVar4 & 0xfc00) == 0xd800)) {
    uVar5 = (uVar4 & 0x3ff) * 0x400 + 0x10000 + (puVar6[2] & 0x3ff);
    puVar7 = puVar6 + 3;
  }
  puVar6 = puVar7;
  if (uVar5 == param_1) goto LAB_00ea19bc;
  goto LAB_00ea1584;
}

