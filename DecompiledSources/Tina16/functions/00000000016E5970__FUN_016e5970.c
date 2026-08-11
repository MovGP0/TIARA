/* Ghidra address: 016e5970 */
/* Ghidra symbol: FUN_016e5970 */


void FUN_016e5970(longlong param_1,byte param_2,ulonglong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double *pdVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar4 = *(longlong *)(param_1 + 0x58);
  if ((byte)(param_2 - 8) < 8) {
    uVar7 = (int)CONCAT71((int7)(param_3 >> 8),1) << (param_2 - 8 & 0x1f);
    param_3 = (ulonglong)uVar7;
    bVar8 = (uVar7 & 0x11) != 0;
  }
  else {
    bVar8 = false;
  }
  if (!bVar8) {
    if (param_2 < 8) {
      bVar8 = ((int)CONCAT71((int7)(param_3 >> 8),1) << (param_2 & 0x1f) & 0xa2U) != 0;
    }
    else {
      bVar8 = false;
    }
    if ((bVar8) || (*(double *)(param_1 + 0xa0) <= 0.0)) {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x20) = 0x3ff0000000000000;
    }
    else {
      *(undefined8 *)(param_1 + 0x20) = 0;
      if ((*(byte *)(lVar4 + 0x88) & 0x40) == 0) {
        if ((*(byte *)(lVar4 + 0x88) & 0x80) != 0) {
          iVar6 = 2;
          dVar9 = (double)FUN_016ed780(*(undefined8 *)(param_1 + 0x58));
          while ((iVar6 < *(int *)(param_1 + 0x9c) &&
                 (*(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar6 * 3) * 8) <=
                  dVar9 - *(double *)(param_1 + 0xa0)))) {
            iVar6 = iVar6 + 1;
          }
          dVar1 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)((iVar6 + -2) * 3) * 8);
          dVar2 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)((iVar6 + -1) * 3) * 8);
          dVar3 = *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar6 * 3) * 8);
          if ((dVar2 - dVar1 != 0.0) && (dVar3 - dVar2 != 0.0)) {
            if (dVar2 - dVar1 == 0.0) {
              dVar10 = 0.0;
              dVar11 = 0.0;
            }
            else {
              dVar10 = (((dVar9 - *(double *)(param_1 + 0xa0)) - dVar2) *
                       ((dVar9 - *(double *)(param_1 + 0xa0)) - dVar3)) / (dVar1 - dVar2);
              dVar11 = (((dVar9 - *(double *)(param_1 + 0xa0)) - dVar1) *
                       ((dVar9 - *(double *)(param_1 + 0xa0)) - dVar3)) / (dVar2 - dVar1);
            }
            if (dVar3 - dVar2 == 0.0) {
              dVar11 = 0.0;
              dVar9 = 0.0;
            }
            else {
              dVar11 = dVar11 / (dVar2 - dVar3);
              dVar9 = (((dVar9 - *(double *)(param_1 + 0xa0)) - dVar1) *
                      ((dVar9 - *(double *)(param_1 + 0xa0)) - dVar2)) / (dVar2 - dVar3);
            }
            if (dVar3 - dVar1 == 0.0) {
              dVar10 = 0.0;
              dVar11 = 0.0;
            }
            else {
              dVar10 = dVar10 / (dVar1 - dVar3);
              dVar9 = dVar9 / (dVar1 - dVar3);
            }
            *(double *)(param_1 + 0x80) =
                 dVar10 * *(double *)
                           (*(longlong *)(param_1 + 0x90) + (longlong)((iVar6 + -2) * 3 + 1) * 8) +
                 dVar11 * *(double *)
                           (*(longlong *)(param_1 + 0x90) + (longlong)((iVar6 + -1) * 3 + 1) * 8) +
                 dVar9 * *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar6 * 3 + 1) * 8);
            *(double *)(param_1 + 0x88) =
                 dVar10 * *(double *)
                           (*(longlong *)(param_1 + 0x90) + (longlong)((iVar6 + -2) * 3 + 2) * 8) +
                 dVar11 * *(double *)
                           (*(longlong *)(param_1 + 0x90) + (longlong)((iVar6 + -1) * 3 + 2) * 8) +
                 dVar9 * *(double *)(*(longlong *)(param_1 + 0x90) + (longlong)(iVar6 * 3 + 2) * 8);
          }
        }
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x80);
      }
      else {
        if ((*(byte *)(lVar4 + 0x88) & 0x10) == 0) {
          *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x10);
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 8);
        }
        else {
          *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xb0);
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xa8);
        }
        pdVar5 = *(double **)(param_1 + 0x90);
        *pdVar5 = *(double *)(param_1 + 0xa0) * -2.0;
        pdVar5[3] = -*(double *)(param_1 + 0xa0);
        pdVar5[6] = 0.0;
        pdVar5[1] = *(double *)(param_1 + 0x80);
        pdVar5[4] = *(double *)(param_1 + 0x80);
        pdVar5[7] = *(double *)(param_1 + 0x80);
        pdVar5[2] = *(double *)(param_1 + 0x88);
        pdVar5[5] = *(double *)(param_1 + 0x88);
        pdVar5[8] = *(double *)(param_1 + 0x88);
        *(undefined4 *)(param_1 + 0x9c) = 2;
      }
    }
  }
  return;
}

