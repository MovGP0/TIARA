/* Ghidra address: 00408900 */
/* Ghidra symbol: FUN_00408900 */


void FUN_00408900(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  byte *pbVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  ulonglong local_38;
  ulonglong local_30;
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *param_2 - 0x1db90f8;
  lVar2 = param_1 + 0x10050 + (ulonglong)SUB164(auVar4 / ZEXT816(0x40),0) * 0x1000;
  FUN_004084d0(param_2,&local_30,&local_38);
  do {
    if (local_38 < local_30) {
      return;
    }
    if (((*(ulonglong *)(local_30 - 8) & 1) == 0) && (cVar6 = FUN_00408860(local_30), cVar6 == '\0')
       ) {
      *(undefined1 *)(param_1 + 0x1004f) = 0;
      iVar11 = 0;
      lVar7 = FUN_00408730(local_30);
      if (lVar7 == 0) {
        iVar12 = 0;
        if (*(int *)(local_30 + 8) < 0x100) {
          iVar8 = *(int *)(local_30 + 0xc);
          uVar3 = *(ushort *)(local_30 + 6);
          iVar12 = iVar11;
          if ((((uVar3 == 1) || (uVar3 == 2)) && (0 < iVar8)) &&
             (iVar8 < (int)(*(ushort *)(*param_2 + 2) - 0x18) / (int)(uint)uVar3)) {
            bVar5 = true;
            if (uVar3 == 1) {
              pbVar9 = (byte *)(local_30 + 0x10);
              if (0 < iVar8) {
                do {
                  if ((bVar5) && (0x1f < *pbVar9)) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  pbVar9 = pbVar9 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              if ((bVar5) && (*pbVar9 == 0)) {
                iVar12 = 1;
              }
            }
            else {
              puVar10 = (ushort *)(local_30 + 0x10);
              if (0 < iVar8) {
                do {
                  if ((bVar5) && (0x1f < *puVar10)) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  puVar10 = puVar10 + 1;
                  iVar8 = iVar8 + -1;
                } while (iVar8 != 0);
              }
              if ((bVar5) && (*puVar10 == 0)) {
                iVar12 = 2;
              }
            }
          }
        }
      }
      else {
        iVar12 = 3;
        do {
          if ((*(longlong *)(lVar2 + (longlong)iVar12 * 0x10) == lVar7) ||
             (*(longlong *)(lVar2 + (longlong)iVar12 * 0x10) == 0)) break;
          iVar12 = iVar12 + 1;
        } while (iVar12 < 0x100);
        if (iVar12 < 0x100) {
          *(longlong *)(lVar2 + (longlong)iVar12 * 0x10) = lVar7;
        }
        else {
          iVar12 = 0;
        }
      }
      piVar1 = (int *)(lVar2 + 8 + (longlong)iVar12 * 0x10);
      *piVar1 = *piVar1 + 1;
    }
    local_30 = local_30 + *(ushort *)(*param_2 + 2);
  } while( true );
}

