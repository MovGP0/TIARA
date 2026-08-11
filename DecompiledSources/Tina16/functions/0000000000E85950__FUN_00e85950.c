/* Ghidra address: 00e85950 */
/* Ghidra symbol: FUN_00e85950 */


int FUN_00e85950(longlong param_1,int param_2,int param_3,longlong param_4,longlong *param_5)

{
  ushort *puVar1;
  ushort uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  longlong *local_50;
  ushort *local_48;
  
  puVar7 = (ushort *)(param_1 + 4);
  iVar5 = 0;
  iVar9 = -1;
LAB_00e859f0:
  iVar4 = iVar5;
  puVar10 = puVar7;
  uVar2 = *puVar10;
  uVar6 = (ulonglong)uVar2;
  iVar8 = -2;
  iVar5 = iVar4;
  switch(uVar6) {
  case 0:
  case 0x77:
  case 0x78:
  case 0x9e:
  case 0x9f:
    goto switchD_00e85a12_caseD_0;
  case 1:
  case 2:
  case 3:
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
  case 0x96:
  case 0x98:
  case 0x9a:
  case 0x9c:
  case 0x9d:
  case 0xa0:
    uVar6 = (ulonglong)(byte)(&DAT_01ee1510)[uVar6];
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    goto switchD_00e85a12_caseD_6;
  case 0xe:
    goto switchD_00e85a12_caseD_e;
  case 0xf:
  case 0x10:
    puVar10 = puVar10 + 2;
    goto switchD_00e85a12_caseD_6;
  case 0x11:
  case 0x16:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
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
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x84:
  case 0x86:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0xa1:
    return -1;
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    iVar5 = iVar4 + 1;
    puVar7 = puVar10 + 2;
    if (param_2 != 0) {
      uVar2 = puVar10[1];
      puVar10 = puVar10 + 3;
      goto LAB_00e85b0b;
    }
    goto LAB_00e859f0;
  case 0x29:
  case 0x36:
  case 0x43:
  case 0x50:
    iVar5 = iVar4 + (uint)puVar10[1];
    puVar7 = puVar10 + 3;
    if (param_2 != 0) {
      uVar2 = puVar10[2];
      puVar10 = puVar10 + 4;
LAB_00e85b0b:
      if ((uVar2 & 0xfc00) == 0xd800) {
        puVar7 = puVar10;
      }
    }
    goto LAB_00e859f0;
  case 0x5d:
    iVar5 = iVar4 + (uint)puVar10[1];
    puVar7 = puVar10 + 2;
    if (1 < (ushort)(puVar10[2] - 0xf)) {
      puVar7 = puVar10;
    }
    goto LAB_00e85bb5;
  default:
    return -4;
  case 0x6e:
  case 0x6f:
  case 0x70:
    if (uVar2 == 0x70) {
      uVar6 = (ulonglong)puVar10[1];
    }
    else {
      uVar6 = (ulonglong)DAT_01ee157e;
    }
    puVar7 = puVar10 + uVar6;
    if ((puVar10[uVar6] - 0x62 & 0xffff) < 0xc) {
      if ((0x8c0U >> (puVar10[uVar6] - 0x62 & 0x1f) & 1) == 0) {
        return -1;
      }
      if (puVar7[1] != puVar7[2]) {
        return -1;
      }
      iVar5 = iVar4 + (uint)puVar7[1];
LAB_00e85bb5:
      puVar7 = puVar7 + 3;
    }
    else {
      iVar5 = iVar4 + 1;
    }
    goto LAB_00e859f0;
  case 0x75:
    if (param_3 == 0) {
      return -3;
    }
    local_48 = (ushort *)((ulonglong)puVar10[1] * 2 + *(longlong *)(param_4 + 0x28));
    puVar7 = local_48;
    do {
      puVar1 = puVar7 + puVar7[1];
      puVar7 = puVar7 + puVar7[1];
    } while (*puVar1 == 0x77);
    plVar3 = param_5;
    if ((local_48 < puVar10) && (puVar10 < puVar7)) {
      return -1;
    }
    for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)*plVar3) {
      if ((ushort *)plVar3[1] == local_48) {
        return -1;
      }
    }
    local_50 = param_5;
    iVar5 = FUN_00e85950(local_48 + 1,param_2,param_3,param_4,&local_50);
    if (iVar5 < 0) {
      return iVar5;
    }
    goto LAB_00e85ab3;
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
    do {
      puVar7 = puVar10 + puVar10[1];
      puVar10 = puVar10 + puVar10[1];
    } while (*puVar7 == 0x77);
    puVar7 = puVar10 + 2;
    goto LAB_00e859f0;
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x85:
  case 0x87:
    iVar5 = FUN_00e85950(puVar10 + (uVar2 == 0x85),param_2,param_3,param_4,param_5);
    if (iVar5 < 0) {
      return iVar5;
    }
    do {
      puVar7 = puVar10 + puVar10[1];
      puVar10 = puVar10 + puVar10[1];
    } while (*puVar7 == 0x77);
LAB_00e85ab3:
    puVar7 = puVar10 + 2;
    iVar5 = iVar5 + iVar4;
    goto LAB_00e859f0;
  case 0x95:
  case 0x97:
  case 0x99:
  case 0x9b:
    uVar6 = (ulonglong)(byte)(&DAT_01ee1510)[uVar6] + (ulonglong)puVar10[1];
  }
  puVar7 = puVar10 + uVar6;
  goto LAB_00e859f0;
switchD_00e85a12_caseD_6:
  puVar7 = puVar10 + 1;
  iVar5 = iVar4 + 1;
  goto LAB_00e859f0;
switchD_00e85a12_caseD_0:
  if ((-1 < iVar9) && (iVar9 != iVar4)) {
    return -1;
  }
  puVar7 = puVar10 + 2;
  iVar5 = 0;
  iVar9 = iVar4;
  iVar8 = iVar4;
  if (uVar2 != 0x77) {
switchD_00e85a12_caseD_e:
    return iVar8;
  }
  goto LAB_00e859f0;
}

