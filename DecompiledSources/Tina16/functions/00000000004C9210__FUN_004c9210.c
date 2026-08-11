/* Ghidra address: 004c9210 */
/* Ghidra symbol: FUN_004c9210 */


void FUN_004c9210(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  longlong local_40 [2];
  longlong *plVar10;
  
  FUN_004c9810(param_1);
  lVar14 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x40) = lVar14;
  plVar10 = local_40;
  local_40[0] = lVar14;
  uVar6 = FUN_004c8cb0(param_1,plVar10);
  uVar6 = uVar6 & 0xff;
  if (uVar6 < 4) {
    if (uVar6 == 1) {
      do {
        lVar14 = local_40[0];
        uVar7 = FUN_004c8cb0(param_1,local_40);
        if ((byte)uVar7 < 8) {
          bVar16 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) << ((byte)uVar7 & 0x1f) & 0xeU)
                   != 0;
        }
        else {
          bVar16 = false;
        }
      } while (bVar16);
      uVar4 = 1;
      goto LAB_004c96e6;
    }
    if (uVar6 != 3) {
LAB_004c96d3:
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x18) + lVar14);
      uVar4 = (ushort)bVar2;
      if (bVar2 != 0) {
        lVar14 = lVar14 + 1;
      }
      goto LAB_004c96e6;
    }
  }
  else {
    if (uVar6 - 4 < 2) {
      bVar16 = false;
      iVar11 = 0;
      lVar12 = lVar14;
LAB_004c92d7:
      while (cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + lVar12), cVar1 == '#') {
        lVar13 = lVar12 + 1;
        iVar5 = 0;
        if (*(char *)(*(longlong *)(param_1 + 0x18) + lVar13) == '$') {
          lVar12 = lVar12 + 2;
          while ((&DAT_01dc94c8)[*(byte *)(*(longlong *)(param_1 + 0x18) + lVar12)] != 0xff) {
            iVar5 = iVar5 * 0x10 +
                    (uint)(byte)(&DAT_01dc94c8)[*(byte *)(*(longlong *)(param_1 + 0x18) + lVar12)];
            lVar12 = lVar12 + 1;
          }
        }
        else {
          while( true ) {
            bVar2 = *(byte *)(*(longlong *)(param_1 + 0x18) + lVar13);
            bVar8 = bVar2 - 0x30;
            if (bVar8 < 0x10) {
              uVar9 = (int)CONCAT62((int6)(param_3 >> 0x10),1) << (bVar8 & 0x1f);
              param_3 = (ulonglong)uVar9;
              bVar15 = (uVar9 & 0x3ff) != 0;
            }
            else {
              bVar15 = false;
            }
            lVar12 = lVar13;
            if (!bVar15) break;
            iVar5 = iVar5 * 10 + (uint)bVar2 + -0x30;
            lVar13 = lVar13 + 1;
          }
        }
        if (0x7f < iVar5) {
          bVar16 = true;
        }
        iVar11 = iVar11 + 1;
      }
      lVar13 = lVar12;
      if (cVar1 == '\'') {
        while( true ) {
          lVar12 = lVar13 + 1;
          cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + lVar12);
          if (((cVar1 == '\0') || (cVar1 == '\n')) || (cVar1 == '\r')) break;
          if ((cVar1 == '\'') &&
             (lVar12 = lVar13 + 2, *(char *)(*(longlong *)(param_1 + 0x18) + lVar12) != '\''))
          goto LAB_004c92d7;
          iVar11 = iVar11 + 1;
          lVar13 = lVar12;
        }
        FUN_004c8dd0(param_1,PTR_PTR_02001bc0);
        goto LAB_004c92d7;
      }
      if (bVar16) {
        param_3 = 0;
        FUN_00419260(param_1 + 0x60,&DAT_004065c0,1,(longlong)iVar11);
      }
      iVar11 = 0;
      lVar12 = lVar14;
LAB_004c9423:
      while (cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + lVar14), cVar1 == '#') {
        lVar13 = lVar14 + 1;
        sVar3 = 0;
        if (*(char *)(*(longlong *)(param_1 + 0x18) + lVar13) == '$') {
          lVar14 = lVar14 + 2;
          while ((&DAT_01dc94c8)[*(byte *)(*(longlong *)(param_1 + 0x18) + lVar14)] != 0xff) {
            sVar3 = sVar3 * 0x10 +
                    (ushort)(byte)(&DAT_01dc94c8)[*(byte *)(*(longlong *)(param_1 + 0x18) + lVar14)]
            ;
            lVar14 = lVar14 + 1;
          }
        }
        else {
          while( true ) {
            bVar2 = *(byte *)(*(longlong *)(param_1 + 0x18) + lVar13);
            bVar8 = bVar2 - 0x30;
            if (bVar8 < 0x10) {
              uVar9 = (int)CONCAT62((int6)(param_3 >> 0x10),1) << (bVar8 & 0x1f);
              param_3 = (ulonglong)uVar9;
              bVar15 = (uVar9 & 0x3ff) != 0;
            }
            else {
              bVar15 = false;
            }
            lVar14 = lVar13;
            if (!bVar15) break;
            sVar3 = sVar3 * 10 + (ushort)bVar2 + -0x30;
            lVar13 = lVar13 + 1;
          }
        }
        if (bVar16) {
          *(short *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar11 * 2) = sVar3;
          iVar11 = iVar11 + 1;
        }
        else {
          *(char *)(*(longlong *)(param_1 + 0x18) + lVar12) = (char)sVar3;
          lVar12 = lVar12 + 1;
        }
      }
      lVar13 = lVar14;
      if (cVar1 == '\'') {
        while( true ) {
          lVar14 = lVar13 + 1;
          cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + lVar14);
          if (((cVar1 == '\0') || (cVar1 == '\n')) || (cVar1 == '\r')) break;
          if ((cVar1 == '\'') &&
             (lVar14 = lVar13 + 2, *(char *)(*(longlong *)(param_1 + 0x18) + lVar14) != '\''))
          goto LAB_004c9423;
          lVar13 = lVar14;
          if (bVar16) {
            *(ushort *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar11 * 2) =
                 (ushort)*(byte *)(*(longlong *)(param_1 + 0x18) + lVar14);
            iVar11 = iVar11 + 1;
          }
          else {
            *(undefined1 *)(*(longlong *)(param_1 + 0x18) + lVar12) =
                 *(undefined1 *)(*(longlong *)(param_1 + 0x18) + lVar14);
            lVar12 = lVar12 + 1;
          }
        }
        FUN_004c8dd0(param_1,PTR_PTR_02001bc0);
        goto LAB_004c9423;
      }
      *(longlong *)(param_1 + 0x48) = lVar12;
      if (bVar16) {
        uVar4 = 5;
      }
      else {
        uVar4 = 2;
      }
      goto LAB_004c96e6;
    }
    if (uVar6 == 6) {
      do {
        lVar14 = lVar14 + 1;
        bVar2 = *(char *)(*(longlong *)(param_1 + 0x18) + lVar14) - 0x30;
      } while (bVar2 < 0x40 && (1L << (bVar2 & 0x3f) & 0x7e0000007e03ffU) != 0);
      uVar4 = 3;
      goto LAB_004c96e6;
    }
    if (uVar6 != 7) goto LAB_004c96d3;
  }
  do {
    lVar14 = lVar14 + 1;
    bVar2 = *(char *)(*(longlong *)(param_1 + 0x18) + lVar14) - 0x30;
    if (bVar2 < 0x10) {
      uVar9 = (int)CONCAT62((int6)((ulonglong)plVar10 >> 0x10),1) << (bVar2 & 0x1f);
      plVar10 = (longlong *)(ulonglong)uVar9;
      bVar16 = (uVar9 & 0x3ff) != 0;
    }
    else {
      bVar16 = false;
    }
  } while (bVar16);
  uVar4 = 3;
  while (bVar2 = *(char *)(*(longlong *)(param_1 + 0x18) + lVar14) - 0x28,
        bVar2 < 0x40 && (1L << (bVar2 & 0x3f) & 0x200000002003ff68U) != 0) {
    lVar14 = lVar14 + 1;
    uVar4 = 4;
  }
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x18) + lVar14);
  bVar8 = bVar2 - 0x40;
  if (bVar8 < 0x40 && (1L << (bVar8 & 0x3f) & 0x8005800080058U) != 0) {
    uVar4 = 4;
    *(ushort *)(param_1 + 0x58) = (ushort)bVar2;
    lVar14 = lVar14 + 1;
  }
  else {
    *(undefined2 *)(param_1 + 0x58) = 0;
  }
LAB_004c96e6:
  *(longlong *)(param_1 + 0x30) = lVar14;
  *(ushort *)(param_1 + 0x56) = uVar4;
  return;
}

