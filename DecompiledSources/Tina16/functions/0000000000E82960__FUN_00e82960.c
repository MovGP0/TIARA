/* Ghidra address: 00e82960 */
/* Ghidra symbol: FUN_00e82960 */


ulonglong FUN_00e82960(undefined8 param_1,ushort *param_2,longlong param_3,uint param_4,
                      longlong *param_5,int *param_6)

{
  ushort *puVar1;
  ushort uVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  ushort *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint local_6c;
  longlong *local_68;
  ushort *local_60;
  undefined8 local_58;
  ulonglong local_50;
  uint local_44;
  
  iVar6 = *param_6;
  *param_6 = iVar6 + 1;
  if (1000 < iVar6) {
switchD_00e82b30_caseD_9e:
    return 0xffffffff;
  }
  uVar14 = param_4 & 0x800;
  puVar9 = param_2 + 2;
  if (((*param_2 - 0x85 & 0xffff) < 7) && ((99U >> (*param_2 - 0x85 & 0x1f) & 1) != 0)) {
    puVar9 = param_2 + 3;
  }
  bVar5 = false;
  uVar16 = 0;
  local_6c = 0xffffffff;
LAB_00e82b10:
  puVar12 = puVar9;
  uVar2 = *puVar12;
  uVar10 = (ulonglong)uVar2;
  switch(uVar10) {
  case 0:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
    goto switchD_00e82b30_caseD_0;
  case 1:
  case 2:
  case 4:
  case 5:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x76:
  case 0x7c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
    goto switchD_00e82b30_caseD_1;
  case 3:
  case 0x96:
  case 0x98:
  case 0x9a:
  case 0x9c:
  case 0x9d:
  case 0xa0:
    puVar9 = puVar12 + (byte)(&DAT_01ee1510)[uVar10];
    goto LAB_00e82b10;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    break;
  case 0xe:
    if (uVar14 != 0) {
      return 0xffffffff;
    }
    break;
  case 0xf:
  case 0x10:
    puVar12 = puVar12 + 2;
    break;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x23:
  case 0x24:
  case 0x2b:
  case 0x30:
  case 0x31:
  case 0x38:
  case 0x3d:
  case 0x3e:
  case 0x45:
  case 0x4a:
  case 0x4b:
  case 0x52:
    uVar16 = uVar16 + 1;
    puVar9 = puVar12 + 2;
    if (uVar14 != 0) {
      uVar2 = puVar12[1];
      puVar12 = puVar12 + 3;
      goto LAB_00e82c19;
    }
    goto LAB_00e82b10;
  case 0x21:
  case 0x22:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x37:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x44:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x53:
  case 0x54:
    puVar9 = puVar12 + (byte)(&DAT_01ee1510)[uVar10];
    if ((uVar14 != 0) && ((puVar9[-1] & 0xfc00) == 0xd800)) {
      puVar9 = puVar9 + 1;
    }
    goto LAB_00e82b10;
  case 0x29:
  case 0x36:
  case 0x43:
  case 0x50:
    uVar16 = uVar16 + puVar12[1];
    puVar9 = puVar12 + 3;
    if (uVar14 != 0) {
      uVar2 = puVar12[2];
      puVar12 = puVar12 + 4;
LAB_00e82c19:
      if ((uVar2 & 0xfc00) == 0xd800) {
        puVar9 = puVar12;
      }
    }
    goto LAB_00e82b10;
  case 0x55:
  case 0x56:
  case 0x59:
  case 0x5a:
  case 0x5e:
  case 0x60:
    puVar9 = puVar12 + 2;
    if (1 < (ushort)(puVar12[1] - 0xf)) {
      puVar9 = puVar12;
    }
    puVar9 = puVar9 + (byte)(&DAT_01ee1510)[uVar10];
    goto LAB_00e82b10;
  case 0x57:
  case 0x58:
  case 0x5f:
    uVar16 = uVar16 + 1;
    puVar9 = puVar12 + (ulonglong)((ushort)(puVar12[1] - 0xf) < 2) * 2 + 2;
    goto LAB_00e82b10;
  case 0x5b:
  case 0x5c:
  case 0x61:
    puVar9 = puVar12 + 2;
    if (1 < (ushort)(puVar12[2] - 0xf)) {
      puVar9 = puVar12;
    }
    puVar9 = puVar9 + (byte)(&DAT_01ee1510)[uVar10];
    goto LAB_00e82b10;
  case 0x5d:
    uVar16 = uVar16 + puVar12[1];
    puVar9 = puVar12 + (ulonglong)((ushort)(puVar12[2] - 0xf) < 2) * 2 + 3;
    goto LAB_00e82b10;
  default:
    return 0xfffffffd;
  case 0x6e:
  case 0x6f:
  case 0x70:
    if (uVar2 == 0x70) {
      uVar10 = (ulonglong)puVar12[1];
    }
    else {
      uVar10 = (ulonglong)DAT_01ee157e;
    }
    puVar9 = puVar12 + uVar10;
    uVar7 = puVar12[uVar10] - 0x62;
    if (0xb < (uVar7 & 0xffff)) {
      uVar16 = uVar16 + 1;
      goto LAB_00e82b10;
    }
    if ((0x533U >> (uVar7 & 0x1f) & 1) == 0) {
      if ((0x20cU >> (uVar7 & 0x1f) & 1) == 0) {
        uVar16 = uVar16 + puVar9[1];
        puVar9 = puVar9 + 3;
        goto LAB_00e82b10;
      }
      uVar16 = uVar16 + 1;
    }
    puVar9 = puVar9 + 1;
    goto LAB_00e82b10;
  case 0x71:
  case 0x72:
    iVar6 = 0;
    if ((param_4 & 0x2000000) == 0) {
      puVar8 = (ushort *)FUN_00e834b0(param_3,uVar14 >> 0xb,puVar12[1]);
      puVar9 = puVar8;
      if (puVar8 == (ushort *)0x0) {
        return 0xfffffffe;
      }
      do {
        puVar1 = puVar9 + puVar9[1];
        puVar9 = puVar9 + puVar9[1];
      } while (*puVar1 == 0x77);
      if ((puVar8 < puVar12) && (puVar12 < puVar9)) {
        lVar11 = 2;
        bVar5 = true;
        iVar6 = 0;
        goto LAB_00e82a94;
      }
      iVar6 = 0;
      for (plVar3 = param_5; plVar3 != (longlong *)0x0; plVar3 = (longlong *)*plVar3) {
        if ((ushort *)plVar3[1] == puVar8) {
          lVar11 = 2;
          bVar5 = true;
          goto LAB_00e82a94;
        }
      }
      local_68 = param_5;
      local_60 = puVar8;
      iVar6 = FUN_00e82960(param_1,puVar8,param_3,param_4,&local_68,param_6);
    }
    lVar11 = 2;
    goto LAB_00e82a94;
  case 0x73:
  case 0x74:
    iVar6 = 0;
    if ((param_4 & 0x2000000) == 0) {
      local_50 = (ulonglong)puVar12[2];
      if (puVar12[2] == 0) {
        iVar6 = 0x7fffffff;
        lVar11 = 3;
      }
      else {
        iVar15 = 0x7fffffff;
        local_58 = param_1;
        do {
          puVar9 = (ushort *)FUN_00e834b0(param_3,uVar14 >> 0xb);
          param_1 = local_58;
          if (puVar9 == (ushort *)0x0) {
            return 0xfffffffe;
          }
          iVar6 = 0;
          puVar8 = puVar9;
          do {
            puVar1 = puVar8 + puVar8[1];
            puVar8 = puVar8 + puVar8[1];
          } while (*puVar1 == 0x77);
          plVar3 = param_5;
          if ((puVar9 < puVar12) && (puVar12 < puVar8)) {
            bVar5 = true;
            break;
          }
          for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)*plVar3) {
            if ((ushort *)plVar3[1] == puVar9) {
              lVar11 = 3;
              bVar5 = true;
              goto LAB_00e82a94;
            }
          }
          local_68 = param_5;
          local_60 = puVar9;
          local_44 = (int)local_50 - 1;
          iVar6 = FUN_00e82960(local_58,puVar9,param_3,param_4,&local_68,param_6);
          if (iVar6 <= iVar15) {
            iVar15 = iVar6;
          }
          bVar4 = 1 < (int)local_50;
          local_50 = (ulonglong)local_44;
          iVar6 = iVar15;
        } while (bVar4);
        lVar11 = 3;
      }
    }
    else {
      lVar11 = 3;
    }
LAB_00e82a94:
    puVar9 = puVar12 + lVar11;
    uVar7 = 1;
    uVar13 = puVar12[lVar11] - 0x62;
    if ((uVar13 & 0xffff) < 0xc) {
      if ((0x533U >> (uVar13 & 0x1f) & 1) == 0) {
        if ((0x20cU >> (uVar13 & 0x1f) & 1) == 0) {
          uVar7 = (uint)puVar9[1];
          puVar9 = puVar9 + 3;
        }
        else {
          puVar9 = puVar9 + 1;
        }
      }
      else {
        puVar9 = puVar9 + 1;
        uVar7 = 0;
      }
    }
    uVar16 = uVar16 + uVar7 * iVar6;
    goto LAB_00e82b10;
  case 0x75:
    puVar9 = (ushort *)(param_3 + (ulonglong)puVar12[1] * 2);
    puVar8 = puVar9;
    do {
      puVar1 = puVar8 + puVar8[1];
      puVar8 = puVar8 + puVar8[1];
    } while (*puVar1 == 0x77);
    plVar3 = param_5;
    if ((puVar12 <= puVar9) || (puVar8 <= puVar12)) {
      for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)*plVar3) {
        if ((ushort *)plVar3[1] == puVar9) {
          bVar5 = true;
          goto LAB_00e82ef6;
        }
      }
      local_68 = param_5;
      local_60 = puVar9;
      uVar10 = FUN_00e82960(param_1,puVar9,param_3,param_4,&local_68,param_6);
      goto LAB_00e82ef3;
    }
    bVar5 = true;
    goto LAB_00e82ef6;
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
    do {
      puVar9 = puVar12 + puVar12[1];
      uVar10 = (ulonglong)*puVar9;
      puVar12 = puVar12 + puVar12[1];
    } while (*puVar9 == 0x77);
switchD_00e82b30_caseD_1:
    puVar9 = puVar12 + (byte)(&DAT_01ee1510)[uVar10];
    goto LAB_00e82b10;
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
    goto switchD_00e82b30_caseD_81;
  case 0x87:
  case 0x8c:
    if (puVar12[puVar12[1]] == 0x77) {
switchD_00e82b30_caseD_81:
      uVar10 = FUN_00e82960(param_1,puVar12,param_3,param_4,param_5,param_6);
      if ((int)uVar10 < 0) {
        return uVar10;
      }
      do {
        puVar9 = puVar12 + puVar12[1];
        puVar12 = puVar12 + puVar12[1];
      } while (*puVar9 == 0x77);
LAB_00e82ef3:
      uVar16 = uVar16 + (int)uVar10;
LAB_00e82ef6:
      puVar9 = puVar12 + 2;
    }
    else {
      puVar9 = puVar12 + (ulonglong)puVar12[1] + 2;
    }
    goto LAB_00e82b10;
  case 0x92:
  case 0x93:
  case 0x94:
  case 0xa1:
    puVar12 = puVar12 + (byte)(&DAT_01ee1510)[uVar10];
    do {
      puVar9 = puVar12 + puVar12[1];
      puVar12 = puVar12 + puVar12[1];
    } while (*puVar9 == 0x77);
    puVar9 = puVar12 + 2;
    goto LAB_00e82b10;
  case 0x95:
  case 0x97:
  case 0x99:
  case 0x9b:
    puVar9 = puVar12 + (ulonglong)puVar12[1] + (ulonglong)(byte)(&DAT_01ee1510)[uVar10];
    goto LAB_00e82b10;
  case 0x9e:
  case 0x9f:
    goto switchD_00e82b30_caseD_9e;
  }
  uVar16 = uVar16 + 1;
  puVar9 = puVar12 + 1;
  goto LAB_00e82b10;
switchD_00e82b30_caseD_0:
  if (((int)local_6c < 0) || ((!bVar5 && ((int)uVar16 < (int)local_6c)))) {
    local_6c = uVar16;
  }
  bVar5 = false;
  uVar16 = 0;
  puVar9 = puVar12 + 2;
  if (uVar2 != 0x77) {
    return (ulonglong)local_6c;
  }
  goto LAB_00e82b10;
}

