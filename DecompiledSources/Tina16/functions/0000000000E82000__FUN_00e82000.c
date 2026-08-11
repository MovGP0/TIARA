/* Ghidra address: 00e82000 */
/* Ghidra symbol: FUN_00e82000 */


ulonglong FUN_00e82000(ushort *param_1,ulonglong *param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  ushort *puVar2;
  byte *pbVar3;
  ulonglong uVar4;
  int iVar5;
  ushort *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  uint *puVar12;
  byte bVar13;
  undefined8 uVar14;
  uint local_4c;
  
  uVar8 = (uint)*param_1;
  plVar1 = (longlong *)(param_4 + 0x10);
  local_4c = 1;
  do {
    puVar6 = param_1 + 2;
    if (((uVar8 - 0x85 & 0xffff) < 7) && ((99U >> (uVar8 - 0x85 & 0x1f) & 1) != 0)) {
      puVar6 = param_1 + 3;
    }
LAB_00e82071:
    uVar7 = 3;
    uVar9 = 2;
    switch(*puVar6) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x12:
    case 0x14:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1f:
    case 0x20:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x7c:
    case 0x87:
    case 0x8c:
    case 0x8d:
    case 0x8e:
    case 0x8f:
    case 0x90:
    case 0x91:
    case 0x95:
    case 0x96:
    case 0x97:
    case 0x98:
    case 0x99:
    case 0x9a:
    case 0x9b:
    case 0x9c:
    case 0x9d:
    case 0x9e:
    case 0x9f:
    case 0xa0:
      goto switchD_00e82092_caseD_62;
    case 4:
    case 5:
      puVar6 = puVar6 + 1;
      goto LAB_00e82071;
    case 6:
      lVar11 = 0;
      do {
        *(byte *)((longlong)param_2 + lVar11) =
             *(byte *)((longlong)param_2 + lVar11) | ~*(byte *)(*plVar1 + 0x40 + lVar11);
        pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
        *pbVar3 = *pbVar3 | ~*(byte *)(*plVar1 + 0x41 + lVar11);
        lVar11 = lVar11 + 2;
        uVar9 = local_4c;
      } while (lVar11 != 0x20);
      break;
    case 7:
      lVar11 = 0;
      do {
        *(byte *)((longlong)param_2 + lVar11) =
             *(byte *)((longlong)param_2 + lVar11) | *(byte *)(*plVar1 + 0x40 + lVar11);
        pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
        *pbVar3 = *pbVar3 | *(byte *)(*plVar1 + 0x41 + lVar11);
        lVar11 = lVar11 + 2;
        uVar9 = local_4c;
      } while (lVar11 != 0x20);
      break;
    case 8:
      lVar11 = 0;
      do {
        *(byte *)((longlong)param_2 + lVar11) =
             *(byte *)((longlong)param_2 + lVar11) | ~*(byte *)(*plVar1 + lVar11);
        pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
        *pbVar3 = *pbVar3 | ~*(byte *)(*plVar1 + 1 + lVar11);
        lVar11 = lVar11 + 2;
        uVar9 = local_4c;
      } while (lVar11 != 0x20);
      break;
    case 9:
      lVar11 = 0;
      do {
        *(byte *)((longlong)param_2 + lVar11) =
             *(byte *)((longlong)param_2 + lVar11) | *(byte *)(*plVar1 + lVar11);
        pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
        *pbVar3 = *pbVar3 | *(byte *)(*plVar1 + 1 + lVar11);
        pbVar3 = (byte *)((longlong)param_2 + lVar11 + 2);
        *pbVar3 = *pbVar3 | *(byte *)(*plVar1 + 2 + lVar11);
        pbVar3 = (byte *)((longlong)param_2 + lVar11 + 3);
        *pbVar3 = *pbVar3 | *(byte *)(*plVar1 + 3 + lVar11);
        lVar11 = lVar11 + 4;
        uVar9 = local_4c;
      } while (lVar11 != 0x20);
      break;
    case 10:
      lVar11 = 0;
      do {
        *(byte *)((longlong)param_2 + lVar11) =
             *(byte *)((longlong)param_2 + lVar11) | ~*(byte *)(*plVar1 + 0xa0 + lVar11);
        pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
        *pbVar3 = *pbVar3 | ~*(byte *)(*plVar1 + 0xa1 + lVar11);
        lVar11 = lVar11 + 2;
        uVar9 = local_4c;
      } while (lVar11 != 0x20);
      break;
    case 0xb:
      lVar11 = 0;
      do {
        *(byte *)((longlong)param_2 + lVar11) =
             *(byte *)((longlong)param_2 + lVar11) | *(byte *)(*plVar1 + 0xa0 + lVar11);
        pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
        *pbVar3 = *pbVar3 | *(byte *)(*plVar1 + 0xa1 + lVar11);
        lVar11 = lVar11 + 2;
        uVar9 = local_4c;
      } while (lVar11 != 0x20);
      break;
    case 0x10:
      if (puVar6[1] != 9) {
switchD_00e82092_caseD_62:
        return 0;
      }
      uVar8 = *(uint *)(&DAT_01ee2000 + (ulonglong)puVar6[2] * 4);
      uVar9 = local_4c;
      if (uVar8 != 0xffffffff) {
        puVar12 = (uint *)(&DAT_01ee2004 + (ulonglong)puVar6[2] * 4);
        do {
          if (uVar8 < 0x100) {
            bVar13 = (byte)(1 << ((byte)uVar8 & 7));
            uVar7 = (ulonglong)(uVar8 >> 3);
          }
          else {
            bVar13 = 0x80;
            uVar7 = 0x1f;
          }
          *(byte *)((longlong)param_2 + uVar7) = *(byte *)((longlong)param_2 + uVar7) | bVar13;
          uVar8 = *puVar12;
          puVar12 = puVar12 + 1;
        } while (uVar8 != 0xffffffff);
      }
      break;
    case 0x11:
    case 0x15:
      *(byte *)((longlong)param_2 + 1) = *(byte *)((longlong)param_2 + 1) | 0x3c;
      *(byte *)(param_2 + 2) = (byte)param_2[2] | 0x20;
      *(byte *)((longlong)param_2 + 0x1f) = *(byte *)((longlong)param_2 + 0x1f) | 0x80;
      uVar9 = local_4c;
      break;
    case 0x13:
      *(byte *)((longlong)param_2 + 1) = *(byte *)((longlong)param_2 + 1) | 2;
      *(byte *)((longlong)param_2 + 4) = *(byte *)((longlong)param_2 + 4) | 1;
      *(byte *)((longlong)param_2 + 0x14) = *(byte *)((longlong)param_2 + 0x14) | 1;
      *(byte *)((longlong)param_2 + 0x1f) = *(byte *)((longlong)param_2 + 0x1f) | 0x80;
      uVar9 = local_4c;
      break;
    case 0x1d:
    case 0x23:
    case 0x24:
    case 0x2b:
      goto switchD_00e82092_caseD_1d;
    case 0x1e:
    case 0x30:
    case 0x31:
    case 0x38:
      goto switchD_00e82092_caseD_1e;
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
    case 0x2a:
    case 0x2c:
      puVar6 = puVar6 + 1;
      goto LAB_00e8210a;
    case 0x27:
    case 0x28:
    case 0x2d:
      puVar6 = puVar6 + 2;
LAB_00e8210a:
      uVar14 = 0;
LAB_00e82060:
      puVar6 = (ushort *)FUN_00e83370(param_2,puVar6,uVar14,param_4,param_3);
      goto LAB_00e82071;
    case 0x29:
      puVar6 = puVar6 + 1;
switchD_00e82092_caseD_1d:
      uVar14 = 0;
LAB_00e8263e:
      FUN_00e83370(param_2,puVar6 + 1,uVar14,param_4,param_3);
      uVar9 = local_4c;
      break;
    case 0x2e:
    case 0x2f:
    case 0x32:
    case 0x33:
    case 0x37:
    case 0x39:
      puVar6 = puVar6 + 1;
      goto LAB_00e8211b;
    case 0x34:
    case 0x35:
    case 0x3a:
      puVar6 = puVar6 + 2;
LAB_00e8211b:
      uVar14 = 1;
      goto LAB_00e82060;
    case 0x36:
      puVar6 = puVar6 + 1;
switchD_00e82092_caseD_1e:
      uVar14 = 1;
      goto LAB_00e8263e;
    case 0x55:
    case 0x56:
    case 0x59:
    case 0x5a:
    case 0x5e:
    case 0x60:
      goto switchD_00e82092_caseD_55;
    case 0x57:
    case 0x58:
    case 0x5f:
      puVar6 = puVar6 + 1;
      goto LAB_00e82071;
    case 0x5b:
    case 0x5c:
    case 0x61:
      puVar6 = puVar6 + 1;
switchD_00e82092_caseD_55:
      uVar7 = 0;
      switch(puVar6[1]) {
      case 6:
        lVar11 = 0;
        do {
          *(byte *)((longlong)param_2 + lVar11) =
               *(byte *)((longlong)param_2 + lVar11) | ~*(byte *)(*plVar1 + 0x40 + lVar11);
          pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
          *pbVar3 = *pbVar3 | ~*(byte *)(*plVar1 + 0x41 + lVar11);
          lVar11 = lVar11 + 2;
        } while (lVar11 != 0x20);
        break;
      case 7:
        lVar11 = 0;
        do {
          *(byte *)((longlong)param_2 + lVar11) =
               *(byte *)((longlong)param_2 + lVar11) | *(byte *)(*plVar1 + 0x40 + lVar11);
          pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
          *pbVar3 = *pbVar3 | *(byte *)(*plVar1 + 0x41 + lVar11);
          lVar11 = lVar11 + 2;
        } while (lVar11 != 0x20);
        break;
      case 8:
        lVar11 = 0;
        do {
          *(byte *)((longlong)param_2 + lVar11) =
               *(byte *)((longlong)param_2 + lVar11) | ~*(byte *)(*plVar1 + lVar11);
          pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
          *pbVar3 = *pbVar3 | ~*(byte *)(*plVar1 + 1 + lVar11);
          lVar11 = lVar11 + 2;
        } while (lVar11 != 0x20);
        break;
      case 9:
        lVar11 = 0;
        do {
          *(byte *)((longlong)param_2 + lVar11) =
               *(byte *)((longlong)param_2 + lVar11) | *(byte *)(*plVar1 + lVar11);
          pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
          *pbVar3 = *pbVar3 | *(byte *)(*plVar1 + 1 + lVar11);
          pbVar3 = (byte *)((longlong)param_2 + lVar11 + 2);
          *pbVar3 = *pbVar3 | *(byte *)(*plVar1 + 2 + lVar11);
          pbVar3 = (byte *)((longlong)param_2 + lVar11 + 3);
          *pbVar3 = *pbVar3 | *(byte *)(*plVar1 + 3 + lVar11);
          lVar11 = lVar11 + 4;
        } while (lVar11 != 0x20);
        break;
      case 10:
        lVar11 = 0;
        do {
          *(byte *)((longlong)param_2 + lVar11) =
               *(byte *)((longlong)param_2 + lVar11) | ~*(byte *)(*plVar1 + 0xa0 + lVar11);
          pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
          *pbVar3 = *pbVar3 | ~*(byte *)(*plVar1 + 0xa1 + lVar11);
          lVar11 = lVar11 + 2;
        } while (lVar11 != 0x20);
        break;
      case 0xb:
        lVar11 = 0;
        do {
          *(byte *)((longlong)param_2 + lVar11) =
               *(byte *)((longlong)param_2 + lVar11) | *(byte *)(*plVar1 + 0xa0 + lVar11);
          pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
          *pbVar3 = *pbVar3 | *(byte *)(*plVar1 + 0xa1 + lVar11);
          lVar11 = lVar11 + 2;
        } while (lVar11 != 0x20);
        break;
      default:
        goto switchD_00e82092_caseD_62;
      case 0x11:
      case 0x15:
        *(byte *)((longlong)param_2 + 1) = *(byte *)((longlong)param_2 + 1) | 0x3c;
        *(byte *)(param_2 + 2) = (byte)param_2[2] | 0x20;
        if (param_3 != 0) {
          *(byte *)((longlong)param_2 + 0x1f) = *(byte *)((longlong)param_2 + 0x1f) | 0x80;
          puVar6 = puVar6 + 2;
          goto LAB_00e82071;
        }
        break;
      case 0x13:
        *(byte *)((longlong)param_2 + 1) = *(byte *)((longlong)param_2 + 1) | 2;
        *(byte *)((longlong)param_2 + 4) = *(byte *)((longlong)param_2 + 4) | 1;
        *(byte *)((longlong)param_2 + 0x14) = *(byte *)((longlong)param_2 + 0x14) | 1;
        if (param_3 != 0) {
          *(byte *)((longlong)param_2 + 0x1f) = *(byte *)((longlong)param_2 + 0x1f) | 0x80;
          puVar6 = puVar6 + 2;
          goto LAB_00e82071;
        }
      }
      puVar6 = puVar6 + 2;
      goto LAB_00e82071;
    case 0x5d:
      puVar6 = puVar6 + 2;
      goto LAB_00e82071;
    default:
      goto switchD_00e82092_caseD_62;
    case 0x6e:
      goto switchD_00e82092_caseD_6e;
    case 0x6f:
      goto switchD_00e82092_caseD_6f;
    case 0x70:
      if ((puVar6[2] & 4) != 0) {
        return 0;
      }
      if ((puVar6[2] & 3) == 1) {
        return 0;
      }
switchD_00e82092_caseD_6f:
      *(byte *)((longlong)param_2 + 0x1f) = *(byte *)((longlong)param_2 + 0x1f) | 0x80;
      if (*puVar6 == 0x70) {
        uVar7 = (ulonglong)puVar6[1];
        if ((puVar6[2] & 2) != 0) {
          puVar10 = (ulonglong *)(puVar6 + 3);
          goto LAB_00e8221c;
        }
      }
      else {
switchD_00e82092_caseD_6e:
        puVar10 = (ulonglong *)(puVar6 + 1);
        uVar7 = 0x11;
LAB_00e8221c:
        if ((param_2 < puVar10 + 4) && (puVar10 < param_2 + 4)) {
          lVar11 = 0;
          do {
            *(byte *)((longlong)param_2 + lVar11) =
                 *(byte *)((longlong)param_2 + lVar11) | *(byte *)((longlong)puVar10 + lVar11);
            pbVar3 = (byte *)((longlong)param_2 + lVar11 + 1);
            *pbVar3 = *pbVar3 | *(byte *)((longlong)puVar10 + lVar11 + 1);
            pbVar3 = (byte *)((longlong)param_2 + lVar11 + 2);
            *pbVar3 = *pbVar3 | *(byte *)((longlong)puVar10 + lVar11 + 2);
            pbVar3 = (byte *)((longlong)param_2 + lVar11 + 3);
            *pbVar3 = *pbVar3 | *(byte *)((longlong)puVar10 + lVar11 + 3);
            lVar11 = lVar11 + 4;
          } while (lVar11 != 0x20);
        }
        else {
          uVar4 = puVar10[1];
          *param_2 = *param_2 | *puVar10;
          param_2[1] = param_2[1] | uVar4;
          uVar8 = *(uint *)((longlong)puVar10 + 0x14);
          uVar4 = puVar10[3];
          uVar9 = *(uint *)((longlong)puVar10 + 0x1c);
          *(uint *)(param_2 + 2) = (uint)puVar10[2] | (uint)param_2[2];
          *(uint *)((longlong)param_2 + 0x14) = uVar8 | *(uint *)((longlong)param_2 + 0x14);
          *(uint *)(param_2 + 3) = (uint)uVar4 | (uint)param_2[3];
          *(uint *)((longlong)param_2 + 0x1c) = uVar9 | *(uint *)((longlong)param_2 + 0x1c);
        }
      }
      uVar8 = puVar6[uVar7] - 0x62;
      uVar9 = local_4c;
      if (0xb < (uVar8 & 0xffff)) break;
      if ((0x533U >> (uVar8 & 0x1f) & 1) == 0) goto LAB_00e822a3;
      puVar6 = puVar6 + uVar7 + 1;
      goto LAB_00e82071;
    case 0x76:
      puVar6 = puVar6 + 4;
      goto LAB_00e82071;
    case 0x77:
      break;
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
      return 2;
    case 0x7d:
    case 0x81:
    case 0x82:
    case 0x83:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x88:
    case 0x89:
    case 0x8a:
    case 0x8b:
      uVar7 = FUN_00e82000(puVar6,param_2,param_3,param_4);
      iVar5 = (int)uVar7;
      if (iVar5 == 0) {
        return uVar7;
      }
      uVar9 = local_4c;
      if (iVar5 == 1) break;
      if (iVar5 == 3) {
        return uVar7;
      }
      do {
        puVar2 = puVar6 + puVar6[1];
        puVar6 = puVar6 + puVar6[1];
      } while (*puVar2 == 0x77);
      puVar6 = puVar6 + 2;
      goto LAB_00e82071;
    case 0x7e:
    case 0x7f:
    case 0x80:
      do {
        puVar2 = puVar6 + puVar6[1];
        puVar6 = puVar6 + puVar6[1];
      } while (*puVar2 == 0x77);
      puVar6 = puVar6 + 2;
      goto LAB_00e82071;
    case 0x92:
    case 0x93:
    case 0x94:
      puVar6 = puVar6 + 1;
      uVar7 = FUN_00e82000(puVar6,param_2,param_3,param_4);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      if ((int)uVar7 == 3) {
        return uVar7;
      }
      do {
        puVar2 = puVar6 + puVar6[1];
        puVar6 = puVar6 + puVar6[1];
      } while (*puVar2 == 0x77);
      puVar6 = puVar6 + 2;
      goto LAB_00e82071;
    case 0xa1:
      puVar6 = puVar6 + 1;
      do {
        puVar2 = puVar6 + puVar6[1];
        puVar6 = puVar6 + puVar6[1];
      } while (*puVar2 == 0x77);
      puVar6 = puVar6 + 2;
      goto LAB_00e82071;
    }
switchD_00e82092_caseD_77:
    puVar6 = param_1 + param_1[1];
    param_1 = param_1 + param_1[1];
    uVar8 = 0x77;
    uVar7 = (ulonglong)uVar9;
    local_4c = uVar9;
    if (*puVar6 != 0x77) {
switchD_00e82092_caseD_62:
      return uVar7;
    }
  } while( true );
LAB_00e822a3:
  if (((0x8c0U >> (uVar8 & 0x1f) & 1) == 0) ||
     (puVar2 = puVar6 + uVar7 + 1, puVar6 = puVar6 + uVar7 + 3, *puVar2 != 0))
  goto switchD_00e82092_caseD_77;
  goto LAB_00e82071;
}

