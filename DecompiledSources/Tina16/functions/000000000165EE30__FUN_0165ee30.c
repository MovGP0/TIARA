/* Ghidra address: 0165ee30 */
/* Ghidra symbol: FUN_0165ee30 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0165ee30(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  longlong alStack_70 [8];
  int local_2c;
  
  uVar9 = 0;
  local_2c = 0;
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x5d0) + 0x1e0);
  while (((1 < iVar8 &&
          (param_2 = (longlong)(iVar8 + -2) * 0xe,
          *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
                  (longlong)(iVar8 + -2) * 0x70) == 1)) &&
         (param_2 = (longlong)(iVar8 + -1) * 0xe,
         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
                 (longlong)(iVar8 + -1) * 0x70) == 2))) {
    param_2 = (longlong)(iVar8 + -1) * 0xe;
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + (longlong)(iVar8 + -1) * 0x70) = 0xf;
    iVar8 = iVar8 + -2;
  }
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x5d0) + 0x1e0) + -1;
  if (-1 < iVar8) {
    do {
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
                      (longlong)iVar8 * 0x70);
      if ((*piVar1 == -1) || (*(longlong *)(piVar1 + 2) == 0)) {
        piVar1[0x16] = 0;
        piVar1[0x17] = 0;
      }
      else {
        *(undefined8 *)(piVar1 + 0x16) = *(undefined8 *)(piVar1 + 2);
        *(undefined8 *)(piVar1 + 0x18) = **(undefined8 **)(piVar1 + 2);
        **(undefined8 **)(piVar1 + 2) = *(undefined8 *)(piVar1 + 2);
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != -1);
  }
  _DAT_01f7d760 = &DAT_01f7d760;
  _DAT_01f7d768 = &DAT_01f7d768;
  if (*(char *)(*(longlong *)(param_1 + 0x5d0) + 0x121) == '\0') {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x5d0) + 0x1e0);
    uVar10 = 0;
    if (-1 < iVar8 + -1) {
      do {
        piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
                        (longlong)(int)uVar10 * 0x70);
        if ((*piVar1 != -1) && (*(longlong *)(piVar1 + 2) != 0)) {
          if (*piVar1 == 2) {
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ae8);
            lVar6 = 0;
            if (lVar7 != 0) {
              lVar6 = *(longlong *)(lVar7 + -8);
            }
            if (lVar6 <= (int)uVar9) {
              FUN_00419260(*(longlong *)(param_1 + 0x5d0) + 0x13ae8,&DAT_0165bb70,1,
                           (longlong)(int)(uVar9 * 2 + 10000));
            }
            lVar7 = (longlong)(int)uVar9;
            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ae8) + lVar7 * 0x18) =
                 uVar10;
            *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ae8) + 4 + lVar7 * 0x18) =
                 uVar10;
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ae8) + 8 + lVar7 * 0x18) =
                 0xffffffff;
            *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ae8) + 0x10 + lVar7 * 0x18) = 0;
            **(longlong **)(piVar1 + 2) = (longlong)(int)~uVar9;
            uVar9 = uVar9 + 1;
          }
          else {
            if ((*piVar1 == 1) &&
               ((int)uVar10 < *(int *)(*(longlong *)(param_1 + 0x5d0) + 0x1e0) + -1)) {
              uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
                               (longlong)(int)(uVar10 + 1) * 0x70);
              if (uVar4 < 0x10) {
                bVar11 = ((int)CONCAT62((int6)(param_2 >> 0x10),1) << ((byte)uVar4 & 0x1f) & 0x8004U
                         ) != 0;
              }
              else {
                bVar11 = false;
              }
              if (bVar11) {
                **(undefined8 **)
                  (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + 8 +
                  (longlong)(int)(uVar10 + 1) * 0x70) = **(undefined8 **)(piVar1 + 2);
                lVar7 = (longlong)(int)(uVar10 + 1);
                if ((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + lVar7 * 0x70)
                     == 0xf) && (~**(ulonglong **)(piVar1 + 2) < 10000000)) {
                  *(undefined8 *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ae8) + 0x10 +
                   ~**(ulonglong **)(piVar1 + 2) * 0x18) =
                       *(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + 8 + lVar7 * 0x70);
                }
                *piVar1 = -1;
                *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + lVar7 * 0x70) = 0xffffffff
                ;
                goto LAB_0165f4ec;
              }
            }
            if (~**(ulonglong **)(piVar1 + 2) < 10000000) {
              *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ae8) + 4 +
                       ~**(ulonglong **)(piVar1 + 2) * 0x18) = uVar10;
            }
          }
LAB_0165f4ec:
          *(undefined8 *)(piVar1 + 2) = **(undefined8 **)(piVar1 + 2);
        }
        param_2 = (ulonglong)uVar10;
        FUN_0165eda0(auStack_98,param_2);
        uVar10 = uVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_00419260(*(longlong *)(param_1 + 0x5d0) + 0x13ad0,&DAT_0165baa8,1,
                 (longlong)(local_2c * 8 + DAT_0210f878));
    *(ulonglong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ad8) =
         (*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ad0) + (longlong)DAT_0210f878) -
         *(ulonglong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ad0) %
         (ulonglong)(longlong)DAT_0210f878;
  }
  else {
    iVar5 = 0;
    uVar9 = 0;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x5d0) + 0x1e0);
    if (-1 < iVar8 + -1) {
      do {
        piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
                        (longlong)(int)uVar9 * 0x70);
        if (*piVar1 != -1) {
          piVar1[8] = 0;
          piVar1[9] = 0;
          *(undefined1 *)(piVar1 + 0x1a) = 0;
          piVar1[0xe] = 0;
          iVar3 = *piVar1;
          if (iVar3 < 9) {
            if (iVar3 == 8) {
              *(longlong *)(piVar1 + 4) = alStack_70[iVar5 + -1];
              iVar5 = iVar5 + -2;
              *(longlong *)(piVar1 + 2) = alStack_70[iVar5];
              *piVar1 = 4;
            }
            else if (iVar3 == 1) {
              alStack_70[iVar5] = **(longlong **)(piVar1 + 2);
              iVar5 = iVar5 + 1;
              *piVar1 = -1;
            }
            else if (iVar3 == 2) {
              iVar5 = iVar5 + -1;
              **(longlong **)(piVar1 + 2) = alStack_70[iVar5];
              *piVar1 = -1;
            }
            else if (iVar3 - 3U < 4) {
              *(undefined8 *)(piVar1 + 4) = **(undefined8 **)(piVar1 + 2);
              iVar5 = iVar5 + -1;
              *(longlong *)(piVar1 + 2) = alStack_70[iVar5];
            }
            else {
              if (iVar3 != 7) goto LAB_0165f155;
              *(undefined8 *)(piVar1 + 2) = **(undefined8 **)(piVar1 + 2);
              iVar5 = iVar5 + -1;
              *(longlong *)(piVar1 + 4) = alStack_70[iVar5];
              *piVar1 = 4;
            }
          }
          else if (iVar3 == 9) {
            alStack_70[iVar5] = (longlong)&DAT_01f7d768;
            iVar5 = iVar5 + 1;
            *piVar1 = -1;
          }
          else if (iVar3 == 0xe) {
            alStack_70[iVar5] = (longlong)&DAT_01f7d760;
            iVar5 = iVar5 + 1;
            *piVar1 = -1;
          }
          else if (iVar3 == 0xf) {
            iVar5 = iVar5 + -1;
            **(longlong **)(piVar1 + 2) = alStack_70[iVar5];
            *(undefined8 *)(piVar1 + 8) = *(undefined8 *)(piVar1 + 2);
            *(longlong *)(piVar1 + 2) = alStack_70[iVar5];
          }
          else {
LAB_0165f155:
            *piVar1 = -1;
          }
          if ((*piVar1 != -1) && (*piVar1 != 0xf)) {
            alStack_70[iVar5] = (longlong)(int)~uVar9;
            iVar5 = iVar5 + 1;
            if (~*(ulonglong *)(piVar1 + 2) < 10000000) {
              piVar2 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + 0x38 +
                              ~*(ulonglong *)(piVar1 + 2) * 0x70);
              *piVar2 = *piVar2 + 1;
            }
            if (~*(ulonglong *)(piVar1 + 4) < 10000000) {
              piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) + 0x38 +
                              ~*(ulonglong *)(piVar1 + 4) * 0x70);
              *piVar1 = *piVar1 + 1;
            }
          }
        }
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (iVar5 != 0) {
      FUN_00413fb0();
    }
  }
  iVar8 = *(int *)(*(longlong *)(param_1 + 0x5d0) + 0x1e0);
  iVar5 = 0;
  if (-1 < iVar8 + -1) {
    do {
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x1d8) +
                      (longlong)iVar5 * 0x70);
      if (((*(char *)(*(longlong *)(param_1 + 0x5d0) + 0x121) == '\0') && (*piVar1 != -1)) &&
         (~*(ulonglong *)(piVar1 + 2) < 10000000)) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ae8) +
                ~*(ulonglong *)(piVar1 + 2) * 0x18;
        lVar6 = *(longlong *)(lVar7 + 0x10);
        if (lVar6 == 0) {
          *(longlong *)(piVar1 + 2) =
               *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x13ad8) +
               (longlong)(*(int *)(lVar7 + 8) * 8);
        }
        else {
          *(longlong *)(piVar1 + 2) = lVar6;
        }
      }
      if (*(undefined8 **)(piVar1 + 0x16) != (undefined8 *)0x0) {
        **(undefined8 **)(piVar1 + 0x16) = *(undefined8 *)(piVar1 + 0x18);
      }
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  _DAT_01f7d760 = (undefined *)0x0;
  _DAT_01f7d768 = (undefined *)0x3ff0000000000000;
  return;
}

