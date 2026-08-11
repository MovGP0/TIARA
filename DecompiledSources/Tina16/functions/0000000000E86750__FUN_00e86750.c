/* Ghidra address: 00e86750 */
/* Ghidra symbol: FUN_00e86750 */


undefined8
FUN_00e86750(ushort *param_1,ushort *param_2,int param_3,longlong param_4,longlong *param_5)

{
  ushort uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  longlong *local_50;
  ushort *local_48;
  
  uVar10 = (ulonglong)*param_1;
switchD_00e8684f_caseD_11:
  puVar5 = param_1 + (byte)(&DAT_01ee1510)[uVar10];
  uVar1 = param_1[(byte)(&DAT_01ee1510)[uVar10]];
  uVar10 = (ulonglong)uVar1;
  uVar3 = uVar1 - 0x76 & 0xffff;
  param_1 = puVar5;
  if (uVar3 < 0x1c) {
    if ((0xf800001UL >> ((ulonglong)uVar3 & 0x3f) & 1) != 0) goto switchD_00e8684f_caseD_11;
    if ((0x700UL >> ((ulonglong)uVar3 & 0x3f) & 1) != 0) {
      do {
        puVar6 = puVar5 + puVar5[1];
        uVar10 = (ulonglong)*puVar6;
        puVar5 = puVar5 + puVar5[1];
        param_1 = puVar5;
      } while (*puVar6 == 0x77);
      goto switchD_00e8684f_caseD_11;
    }
  }
  if ((ushort)(uVar1 - 4) < 2) goto switchD_00e8684f_caseD_11;
  if (param_2 <= puVar5) {
    return 1;
  }
  switch(uVar1 - 6) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1d:
  case 0x1e:
  case 0x23:
  case 0x25:
  case 0x2a:
  case 0x2b:
  case 0x30:
  case 0x32:
  case 0x37:
  case 0x38:
  case 0x3d:
  case 0x3f:
  case 0x44:
  case 0x45:
  case 0x4a:
  case 0x4c:
  case 0x51:
  case 0x52:
  case 0x57:
  case 0x59:
    goto switchD_00e8684f_caseD_0;
  default:
    goto switchD_00e8684f_caseD_11;
  case 0x1b:
  case 0x1c:
  case 0x1f:
  case 0x20:
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2d:
  case 0x31:
  case 0x33:
  case 0x35:
  case 0x36:
  case 0x39:
  case 0x3a:
  case 0x3e:
  case 0x40:
  case 0x42:
  case 0x43:
  case 0x46:
  case 0x47:
  case 0x4b:
  case 0x4d:
    if (param_3 == 0) goto switchD_00e8684f_caseD_11;
    uVar1 = puVar5[1];
    break;
  case 0x21:
  case 0x22:
  case 0x27:
  case 0x2e:
  case 0x2f:
  case 0x34:
  case 0x3b:
  case 0x3c:
  case 0x41:
  case 0x48:
  case 0x49:
  case 0x4e:
    if (param_3 == 0) goto switchD_00e8684f_caseD_11;
    uVar1 = puVar5[2];
    break;
  case 0x4f:
  case 0x50:
  case 0x53:
  case 0x54:
  case 0x58:
  case 0x5a:
    uVar1 = puVar5[1];
    goto LAB_00e869b6;
  case 0x55:
  case 0x56:
  case 0x5b:
    uVar1 = puVar5[2];
LAB_00e869b6:
    param_1 = puVar5 + 2;
    if (1 < (ushort)(uVar1 - 0xf)) {
      param_1 = puVar5;
    }
    goto switchD_00e8684f_caseD_11;
  case 0x68:
  case 0x69:
    puVar6 = puVar5 + DAT_01ee157e;
    goto LAB_00e869dd;
  case 0x6a:
    puVar6 = puVar5 + puVar5[1];
    puVar5 = puVar6;
LAB_00e869dd:
    uVar3 = *puVar6 - 0x62;
    if (0xb < (uVar3 & 0xffff)) {
      return 0;
    }
    if ((0x8c0U >> (uVar3 & 0x1f) & 1) == 0) {
      param_1 = puVar5;
      if ((0x533U >> (uVar3 & 0x1f) & 1) == 0) {
        return 0;
      }
    }
    else {
      param_1 = puVar5;
      if (puVar6[1] != 0) {
        return 0;
      }
    }
    goto switchD_00e8684f_caseD_11;
  case 0x6f:
    puVar7 = *(ushort **)(param_4 + 0x20);
    puVar6 = (ushort *)(*(longlong *)(param_4 + 0x28) + (ulonglong)puVar5[1] * 2);
    puVar8 = puVar6;
    if (puVar7 != (ushort *)0x0) {
      if (puVar7 < *(ushort **)(param_4 + 0x40)) {
        do {
          if ((uint)*puVar7 ==
              (uint)((ulonglong)((longlong)puVar5 + (2 - *(longlong *)(param_4 + 0x28))) >> 1)) {
            return 1;
          }
          puVar7 = puVar7 + 1;
        } while (puVar7 < *(ushort **)(param_4 + 0x40));
      }
      if (puVar6[1] == 0) {
        return 1;
      }
    }
    do {
      puVar7 = puVar8 + puVar8[1];
      puVar8 = puVar8 + puVar8[1];
    } while (*puVar7 == 0x77);
    uVar10 = 0x75;
    plVar2 = param_5;
    if ((puVar5 < puVar6) || (puVar8 < puVar5)) {
      for (; plVar2 != (longlong *)0x0; plVar2 = (longlong *)*plVar2) {
        if ((ushort *)plVar2[1] == puVar6) goto switchD_00e8684f_caseD_11;
      }
      local_50 = param_5;
      local_48 = puVar6;
      while (iVar4 = FUN_00e86750(puVar6,param_2,param_3,param_4,&local_50), iVar4 == 0) {
        puVar5 = puVar6 + puVar6[1];
        puVar6 = puVar6 + puVar6[1];
        if (*puVar5 != 0x77) {
          return 0;
        }
      }
    }
    goto switchD_00e8684f_caseD_11;
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
    return 1;
  case 0x77:
    do {
      puVar6 = puVar5 + puVar5[1];
      uVar10 = (ulonglong)*puVar6;
      param_1 = puVar5 + puVar5[1];
      puVar5 = puVar5 + puVar5[1];
    } while (*puVar6 == 0x77);
    goto switchD_00e8684f_caseD_11;
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x86:
    uVar9 = (ulonglong)puVar5[1];
    if (uVar9 == 0) {
      return 1;
    }
    if (uVar1 == 0x87) {
      uVar10 = (ulonglong)puVar5[uVar9];
      param_1 = puVar5 + uVar9;
      if (puVar5[uVar9] != 0x77) goto switchD_00e8684f_caseD_11;
    }
    bVar11 = false;
    do {
      if (!bVar11) {
        iVar4 = FUN_00e86750(puVar5,param_2,param_3,param_4,param_5);
        bVar11 = iVar4 != 0;
      }
      param_1 = puVar5 + puVar5[1];
      puVar6 = puVar5 + puVar5[1];
      uVar10 = (ulonglong)*puVar6;
      puVar5 = param_1;
    } while (*puVar6 == 0x77);
    if (!bVar11) {
      return 0;
    }
    goto switchD_00e8684f_caseD_11;
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
    do {
      puVar6 = puVar5 + puVar5[1];
      uVar10 = (ulonglong)*puVar6;
      param_1 = puVar5 + puVar5[1];
      puVar5 = puVar5 + puVar5[1];
    } while (*puVar6 == 0x77);
    goto switchD_00e8684f_caseD_11;
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x9b:
    puVar5 = puVar5 + (byte)(&DAT_01ee1510)[uVar10];
    do {
      param_1 = puVar5 + puVar5[1];
      puVar6 = puVar5 + puVar5[1];
      uVar10 = (ulonglong)*puVar6;
      puVar5 = param_1;
    } while (*puVar6 == 0x77);
    goto switchD_00e8684f_caseD_11;
  case 0x8f:
  case 0x91:
  case 0x93:
  case 0x95:
    param_1 = puVar5 + puVar5[1];
    goto switchD_00e8684f_caseD_11;
  }
  param_1 = puVar5 + 1;
  if ((uVar1 & 0xfc00) != 0xd800) {
    param_1 = puVar5;
  }
  goto switchD_00e8684f_caseD_11;
switchD_00e8684f_caseD_0:
  return 0;
}

