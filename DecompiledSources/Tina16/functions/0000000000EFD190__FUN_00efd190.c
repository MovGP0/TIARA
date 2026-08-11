/* Ghidra address: 00efd190 */
/* Ghidra symbol: FUN_00efd190 */


ulonglong FUN_00efd190(char *param_1,int param_2,byte *param_3)

{
  longlong lVar1;
  ushort *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  byte *pbVar7;
  longlong lVar8;
  bool bVar9;
  byte local_61;
  byte local_60 [48];
  
  uVar5 = (ulonglong)*param_3;
  if (0x27 < uVar5) {
    uVar5 = 0x28;
  }
  local_61 = (byte)uVar5;
  pbVar7 = local_60;
  for (; param_3 = param_3 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar7 = *param_3;
    pbVar7 = pbVar7 + 1;
  }
  uVar5 = CONCAT62((int6)((ulonglong)param_3 >> 0x10),9);
  if (param_1 != (char *)0x0) {
    if ((byte)(*param_1 - 8U) < 8) {
      bVar9 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*param_1 - 8U & 0x1f) & 0x10U)
              != 0;
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      lVar1 = *(longlong *)(param_1 + 0xa8);
      iVar6 = param_2 + 1;
      if (iVar6 < 4) {
        do {
          lVar8 = (longlong)iVar6;
          iVar3 = FUN_00414f50(lVar1 + -0x30 + lVar8 * 0x40,&local_61,
                               (ulonglong)*(byte *)(lVar1 + -0x30 + lVar8 * 0x40) + 1);
          if ((iVar3 == 0) && (local_61 != 0)) {
            uVar5 = (ulonglong)*(ushort *)(lVar1 + -0x40 + lVar8 * 0x40);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 4);
      }
    }
    if ((byte)(*param_1 - 0x18U) < 0x48) {
      uVar4 = ((ulonglong)(byte)(*param_1 - 0x18U) & 0x7f) + 0x28;
      bVar9 = (*(byte *)(((longlong)uVar4 >> 3) + 0xefd7a0) >> (uVar4 & 7) & 1) != 0;
    }
    else {
      bVar9 = false;
    }
    if ((bVar9) && (param_1[0xa5] == '\x03')) {
      lVar1 = *(longlong *)(param_1 + 0xa8);
      iVar6 = param_2 + 1;
      if (iVar6 < 3) {
        do {
          lVar8 = (longlong)iVar6;
          iVar3 = FUN_00414f50(lVar1 + -0x30 + lVar8 * 0x40,&local_61,
                               (ulonglong)*(byte *)(lVar1 + -0x30 + lVar8 * 0x40) + 1);
          if ((iVar3 == 0) && (local_61 != 0)) {
            uVar5 = (ulonglong)*(ushort *)(lVar1 + -0x40 + lVar8 * 0x40);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 3);
      }
    }
    if ((byte)(*param_1 - 0x18U) < 0x48) {
      uVar4 = ((ulonglong)(byte)(*param_1 - 0x18U) & 0x7f) + 0x30;
      bVar9 = ((byte)(&DAT_00efd7a8)[(longlong)uVar4 >> 3] >> (uVar4 & 7) & 1) != 0;
    }
    else {
      bVar9 = false;
    }
    if ((bVar9) && (param_1[0xa5] == '\b')) {
      lVar1 = *(longlong *)(param_1 + 0xa8);
      iVar6 = param_2 + 1;
      if (iVar6 < 3) {
        do {
          lVar8 = (longlong)iVar6;
          iVar3 = FUN_00414f50(lVar1 + -0x30 + lVar8 * 0x40,&local_61,
                               (ulonglong)*(byte *)(lVar1 + -0x30 + lVar8 * 0x40) + 1);
          if ((iVar3 == 0) && (local_61 != 0)) {
            uVar5 = (ulonglong)*(ushort *)(lVar1 + -0x40 + lVar8 * 0x40);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 != 3);
      }
    }
    if ((byte)(*param_1 - 0x18U) < 0x48) {
      uVar4 = ((ulonglong)(byte)(*param_1 - 0x18U) & 0x7f) + 0x38;
      bVar9 = ((byte)(&DAT_00efd7b0)[(longlong)uVar4 >> 3] >> (uVar4 & 7) & 1) != 0;
    }
    else {
      bVar9 = false;
    }
    if ((bVar9) && (param_1[0xa5] == '\x02')) {
      lVar1 = *(longlong *)(param_1 + 0xa8);
      param_2 = param_2 + 1;
      if (param_2 < 3) {
        do {
          lVar8 = (longlong)param_2;
          iVar6 = FUN_00414f50(lVar1 + -0x30 + lVar8 * 0x40,&local_61,
                               (ulonglong)*(byte *)(lVar1 + -0x30 + lVar8 * 0x40) + 1);
          if ((iVar6 == 0) && (local_61 != 0)) {
            uVar5 = (ulonglong)*(ushort *)(lVar1 + -0x40 + lVar8 * 0x40);
          }
          param_2 = param_2 + 1;
        } while (param_2 != 3);
      }
    }
    for (pbVar7 = *(byte **)(param_1 + 0xb0); pbVar7 != (byte *)0x0;
        pbVar7 = *(byte **)(pbVar7 + 0xb0)) {
      uVar4 = (ulonglong)*pbVar7;
      if (uVar4 < 0x1e) {
        if (uVar4 < 0x11) {
          if (uVar4 - 9 < 3) {
LAB_00efd58e:
            puVar2 = *(ushort **)(pbVar7 + 0xa8);
            iVar6 = FUN_00414f50(&local_61,puVar2 + 8,(ulonglong)local_61 + 1);
            if ((iVar6 == 0) && (local_61 != 0)) {
              uVar5 = (ulonglong)*puVar2;
            }
          }
          else if (uVar4 - 9 == 3) {
            lVar1 = *(longlong *)(pbVar7 + 0xa8);
            iVar6 = 1;
            do {
              iVar3 = FUN_00414f50(&local_61,lVar1 + -0x30 + (longlong)iVar6 * 0x40,
                                   (ulonglong)local_61 + 1);
              if ((iVar3 == 0) && (local_61 != 0)) {
                uVar5 = (ulonglong)*(ushort *)(lVar1 + -0x40 + (longlong)iVar6 * 0x40);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 != 4);
          }
        }
        else {
          if (uVar4 - 0x11 < 4) goto LAB_00efd58e;
          if (uVar4 - 0x18 < 2) goto LAB_00efd627;
          if (uVar4 - 0x1a < 4) goto LAB_00efd69b;
        }
      }
      else if (uVar4 < 0x57) {
        if (uVar4 - 0x1e < 2) {
LAB_00efd70c:
          if (pbVar7[0xa5] == 2) {
            lVar1 = *(longlong *)(pbVar7 + 0xa8);
            iVar6 = 1;
            do {
              iVar3 = FUN_00414f50(&local_61,lVar1 + -0x30 + (longlong)iVar6 * 0x40,
                                   (ulonglong)local_61 + 1);
              if ((iVar3 == 0) && (local_61 != 0)) {
                uVar5 = (ulonglong)*(ushort *)(lVar1 + -0x40 + (longlong)iVar6 * 0x40);
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 != 3);
          }
        }
        else if (uVar4 - 0x25 < 2) goto LAB_00efd58e;
      }
      else if (uVar4 - 0x57 < 2) {
LAB_00efd627:
        if (pbVar7[0xa5] == 3) {
          lVar1 = *(longlong *)(pbVar7 + 0xa8);
          iVar6 = 1;
          do {
            iVar3 = FUN_00414f50(&local_61,lVar1 + -0x30 + (longlong)iVar6 * 0x40,
                                 (ulonglong)local_61 + 1);
            if ((iVar3 == 0) && (local_61 != 0)) {
              uVar5 = (ulonglong)*(ushort *)(lVar1 + -0x40 + (longlong)iVar6 * 0x40);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 != 3);
        }
      }
      else if (uVar4 - 0x59 < 4) {
LAB_00efd69b:
        if (pbVar7[0xa5] == 8) {
          lVar1 = *(longlong *)(pbVar7 + 0xa8);
          iVar6 = 1;
          do {
            iVar3 = FUN_00414f50(&local_61,lVar1 + -0x30 + (longlong)iVar6 * 0x40,
                                 (ulonglong)local_61 + 1);
            if ((iVar3 == 0) && (local_61 != 0)) {
              uVar5 = (ulonglong)*(ushort *)(lVar1 + -0x40 + (longlong)iVar6 * 0x40);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 != 3);
        }
      }
      else if (uVar4 - 0x5d < 2) goto LAB_00efd70c;
    }
  }
  return uVar5 & 0xffffffff;
}

