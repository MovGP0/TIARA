/* Ghidra address: 01068b40 */
/* Ghidra symbol: FUN_01068b40 */


void FUN_01068b40(longlong *param_1)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_38 [32];
  
  uVar2 = *(uint *)(param_1 + 0x2a);
  plVar8 = param_1 + 0x2a;
  lVar6 = *plVar8;
  *(int *)plVar8 = (int)*plVar8 + 1;
  if (SCARRY4((int)lVar6,1)) {
    FUN_00410ab0();
  }
  *(undefined1 *)((longlong)param_1 + 0x162) = 6;
  do {
    cVar3 = FUN_010689e0(auStack_38,(int)param_1[0x2a]);
    if (cVar3 == '\0') {
code_r0x0106925b:
      cVar3 = FUN_01068b00(auStack_38,(int)param_1[0x2a]);
      if (cVar3 != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x162) = 10;
      }
      return;
    }
    iVar11 = (int)param_1[0x2a];
    uVar5 = (ulonglong)*(ushort *)(param_1[0x24] + (longlong)iVar11 * 2);
    if (uVar5 < 0x4d) {
      if (uVar5 == 0x4c) {
LAB_01068ff4:
        uVar5 = (ulonglong)uVar2;
        iVar10 = iVar11 + -2;
        if (SBORROW4(iVar11,2)) {
          FUN_00410ab0();
        }
        uVar9 = uVar5 & 0xffffffff;
        if ((int)uVar5 <= iVar10) {
          iVar11 = (iVar10 - (int)uVar5) + 1;
          do {
            uVar1 = *(ushort *)(param_1[0x24] + (longlong)(int)uVar9 * 2);
            if (uVar1 < 0x100) {
              bVar12 = ((byte)(&DAT_010692e4)[(longlong)(ulonglong)uVar1 >> 3] >>
                        ((ulonglong)uVar1 & 7) & 1) != 0;
            }
            else {
              bVar12 = false;
            }
            if (bVar12) {
              *(undefined1 *)((longlong)param_1 + 0x162) = 10;
              return;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        if (*(char *)((longlong)param_1 + 0x162) == '\f') {
          lVar6 = param_1[0x24];
          iVar11 = (int)param_1[0x2a] + -1;
          if (SBORROW4((int)param_1[0x2a],1)) {
            lVar6 = FUN_00410ab0();
          }
          uVar1 = *(ushort *)(lVar6 + (longlong)iVar11 * 2);
          if (uVar1 < 0x100) {
            bVar12 = ((byte)(&DAT_010692c4)[(longlong)(ulonglong)uVar1 >> 3] >>
                      ((ulonglong)uVar1 & 7) & 1) != 0;
          }
          else {
            bVar12 = false;
          }
          if (bVar12) goto code_r0x0106925b;
        }
      }
      else if (uVar5 < 0x38) {
        if ((uVar5 == 0x2b) || (uVar5 == 0x2d)) {
          if (*(char *)((longlong)param_1 + 0x162) != '\f') {
            return;
          }
          lVar6 = param_1[0x24];
          iVar10 = iVar11 + -1;
          if (SBORROW4(iVar11,1)) {
            lVar6 = FUN_00410ab0();
          }
          uVar1 = *(ushort *)(lVar6 + (longlong)iVar10 * 2);
          if (uVar1 < 0x100) {
            bVar12 = ((byte)(&DAT_01069284)[(longlong)(ulonglong)uVar1 >> 3] >>
                      ((ulonglong)uVar1 & 7) & 1) != 0;
          }
          else {
            bVar12 = false;
          }
          if (!bVar12) {
            return;
          }
          puVar7 = auStack_38;
          if (SCARRY4(iVar11,1)) {
            puVar7 = (undefined1 *)FUN_00410ab0();
          }
          cVar3 = FUN_01068a80(puVar7);
          if (cVar3 == '\0') {
            plVar8 = param_1 + 0x2a;
            lVar6 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + 1;
            if (SCARRY4((int)lVar6,1)) {
              FUN_00410ab0();
            }
            *(undefined1 *)((longlong)param_1 + 0x162) = 10;
            return;
          }
        }
        else if (uVar5 == 0x2e) {
          lVar6 = param_1[0x24];
          iVar10 = iVar11 + 1;
          if (SCARRY4(iVar11,1)) {
            lVar6 = FUN_00410ab0();
          }
          if (*(short *)(lVar6 + (longlong)iVar10 * 2) == 0x2e) goto code_r0x0106925b;
          if (*(char *)((longlong)param_1 + 0x162) == '\r') {
            *(undefined1 *)((longlong)param_1 + 0x162) = 10;
            return;
          }
          *(undefined1 *)((longlong)param_1 + 0x162) = 0xc;
        }
        else if (uVar5 - 0x30 < 8) {
          iVar11 = uVar2 + 1;
          plVar8 = param_1;
          if (SCARRY4(uVar2,1)) {
            plVar8 = (longlong *)FUN_00410ab0();
          }
          if (((int)plVar8[0x2a] == iVar11) &&
             (*(short *)(param_1[0x24] + (longlong)(int)uVar2 * 2) == 0x30)) {
            *(undefined1 *)((longlong)param_1 + 0x162) = 0xe;
          }
        }
      }
      else if (uVar5 - 0x38 < 2) {
        if (((*(short *)(param_1[0x24] + (longlong)(int)uVar2 * 2) == 0x30) &&
            (*(char *)((longlong)param_1 + 0x162) != '\r')) &&
           (*(char *)((longlong)param_1 + 0x162) != '\f')) {
          *(undefined1 *)((longlong)param_1 + 0x162) = 10;
        }
      }
      else if (uVar5 - 0x41 < 4) {
LAB_01068e11:
        if (*(char *)((longlong)param_1 + 0x162) != '\r') goto code_r0x0106925b;
      }
      else if (uVar5 == 0x45) {
LAB_01068e27:
        if (*(char *)((longlong)param_1 + 0x162) != '\r') {
          iVar10 = iVar11 + -1;
          if (SBORROW4(iVar11,1)) {
            FUN_00410ab0();
          }
          uVar1 = *(ushort *)(param_1[0x24] + (longlong)iVar10 * 2);
          if (uVar1 < 0x100) {
            bVar12 = ((byte)(&DAT_010692a4)[(longlong)(ulonglong)uVar1 >> 3] >>
                      ((ulonglong)uVar1 & 7) & 1) != 0;
          }
          else {
            bVar12 = false;
          }
          if (!bVar12) goto code_r0x0106925b;
          if ((int)uVar2 <= iVar10) {
            iVar11 = (iVar10 - uVar2) + 1;
            uVar4 = uVar2;
            do {
              uVar1 = *(ushort *)(param_1[0x24] + (longlong)(int)uVar4 * 2);
              if (uVar1 < 0x100) {
                bVar12 = ((byte)(&DAT_01069284)[(longlong)(ulonglong)uVar1 >> 3] >>
                          ((ulonglong)uVar1 & 7) & 1) != 0;
              }
              else {
                bVar12 = false;
              }
              if (bVar12) {
                *(undefined1 *)((longlong)param_1 + 0x162) = 10;
                return;
              }
              uVar4 = uVar4 + 1;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          if (SCARRY4((int)param_1[0x2a],1)) {
            FUN_00410ab0(auStack_38,(int)param_1[0x2a] + 1);
          }
          cVar3 = FUN_01068a80();
          if (cVar3 == '\0') goto code_r0x0106925b;
          *(undefined1 *)((longlong)param_1 + 0x162) = 0xc;
        }
      }
      else if (uVar5 == 0x46) goto LAB_01068f0c;
    }
    else if (uVar5 < 0x67) {
      if (uVar5 == 0x66) {
LAB_01068f0c:
        if (*(char *)((longlong)param_1 + 0x162) != '\r') {
          uVar5 = (ulonglong)uVar2;
          iVar10 = iVar11 + -1;
          if (SBORROW4(iVar11,1)) {
            FUN_00410ab0();
          }
          uVar9 = uVar5 & 0xffffffff;
          if ((int)uVar5 <= iVar10) {
            iVar11 = (iVar10 - (int)uVar5) + 1;
            do {
              uVar1 = *(ushort *)(param_1[0x24] + (longlong)(int)uVar9 * 2);
              if (uVar1 < 0x100) {
                bVar12 = ((byte)(&DAT_010692c4)[(longlong)(ulonglong)uVar1 >> 3] >>
                          ((ulonglong)uVar1 & 7) & 1) != 0;
              }
              else {
                bVar12 = false;
              }
              if (bVar12) {
                *(undefined1 *)((longlong)param_1 + 0x162) = 10;
                return;
              }
              uVar9 = (ulonglong)((int)uVar9 + 1);
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          if (*(char *)((longlong)param_1 + 0x162) == '\f') {
            lVar6 = param_1[0x24];
            iVar11 = (int)param_1[0x2a] + -1;
            if (SBORROW4((int)param_1[0x2a],1)) {
              lVar6 = FUN_00410ab0();
            }
            uVar1 = *(ushort *)(lVar6 + (longlong)iVar11 * 2);
            if (uVar1 < 0x100) {
              bVar12 = ((byte)(&DAT_010692e4)[(longlong)(ulonglong)uVar1 >> 3] >>
                        ((ulonglong)uVar1 & 7) & 1) != 0;
            }
            else {
              bVar12 = false;
            }
            if (bVar12) goto code_r0x0106925b;
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0x162) = 0xc;
          }
        }
      }
      else if (uVar5 == 0x55) {
LAB_010690bf:
        if (*(char *)((longlong)param_1 + 0x162) == '\f') goto code_r0x0106925b;
        uVar5 = (ulonglong)uVar2;
        iVar10 = iVar11 + -1;
        if (SBORROW4(iVar11,1)) {
          FUN_00410ab0();
        }
        uVar9 = uVar5 & 0xffffffff;
        if ((int)uVar5 <= iVar10) {
          iVar11 = (iVar10 - (int)uVar5) + 1;
          do {
            uVar1 = *(ushort *)(param_1[0x24] + (longlong)(int)uVar9 * 2);
            if (uVar1 < 0x100) {
              bVar12 = ((byte)(&DAT_01069304)[(longlong)(ulonglong)uVar1 >> 3] >>
                        ((ulonglong)uVar1 & 7) & 1) != 0;
            }
            else {
              bVar12 = false;
            }
            if (bVar12) {
              *(undefined1 *)((longlong)param_1 + 0x162) = 10;
              return;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
      }
      else {
        if (uVar5 == 0x58) {
LAB_01069141:
          iVar11 = (int)param_1[0x2a];
          if (SCARRY4(uVar2,1)) {
            iVar11 = FUN_00410ab0();
          }
          if ((iVar11 == uVar2 + 1) &&
             (*(short *)(param_1[0x24] + (longlong)(int)uVar2 * 2) == 0x30)) {
            if (SCARRY4(iVar11,1)) {
              FUN_00410ab0(auStack_38,iVar11 + 1);
            }
            cVar3 = FUN_01068ac0();
            if (cVar3 != '\0') {
              *(undefined1 *)((longlong)param_1 + 0x162) = 0xd;
              goto LAB_0106922b;
            }
          }
          if (SCARRY4((int)param_1[0x2a],1)) {
            FUN_00410ab0(param_1);
          }
          cVar3 = (**(code **)(*param_1 + 400))();
          if (cVar3 == '\0') {
            uVar1 = *(ushort *)(param_1[0x24] + (longlong)(int)(uVar2 + 1) * 2);
            if (uVar1 < 0x100) {
              bVar12 = ((byte)(&DAT_01069324)[(longlong)(ulonglong)uVar1 >> 3] >>
                        ((ulonglong)uVar1 & 7) & 1) != 0;
            }
            else {
              bVar12 = false;
            }
            if (bVar12) {
              plVar8 = param_1 + 0x2a;
              lVar6 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + 1;
              if (SCARRY4((int)lVar6,1)) {
                FUN_00410ab0();
              }
              *(undefined1 *)((longlong)param_1 + 0x162) = 10;
            }
          }
          goto code_r0x0106925b;
        }
        if (uVar5 - 0x61 < 4) goto LAB_01068e11;
        if (uVar5 - 0x61 == 4) goto LAB_01068e27;
      }
    }
    else {
      if (uVar5 == 0x6c) goto LAB_01068ff4;
      if (uVar5 == 0x75) goto LAB_010690bf;
      if (uVar5 == 0x78) goto LAB_01069141;
    }
LAB_0106922b:
    plVar8 = param_1 + 0x2a;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + 1;
    if (SCARRY4((int)lVar6,1)) {
      FUN_00410ab0();
    }
  } while( true );
}

